#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "BackupIPInfo.h"

using namespace std;
using namespace Tizen::ArtikCloud;

BackupIPInfo::BackupIPInfo()
{
	//__init();
}

BackupIPInfo::~BackupIPInfo()
{
	//__cleanup();
}

void
BackupIPInfo::__init()
{
	//title = std::string();
	//new std::list()std::list> rows;
}

void
BackupIPInfo::__cleanup()
{
	//if(title != NULL) {
	//
	//delete title;
	//title = NULL;
	//}
	//if(rows != NULL) {
	//rows.RemoveAll(true);
	//delete rows;
	//rows = NULL;
	//}
	//
}

void
BackupIPInfo::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *titleKey = "title";
	node = json_object_get_member(pJsonObject, titleKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&title, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *rowsKey = "rows";
	node = json_object_get_member(pJsonObject, rowsKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<BackupIPInfoRow> new_list;
			BackupIPInfoRow inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("BackupIPInfoRow")) {
					jsonToValue(&inst, temp_json, "BackupIPInfoRow", "");
				} else {
					
					inst.fromJson(json_to_string(temp_json, false));
					
				}
				new_list.push_back(inst);
			}
			rows = new_list;
		}
		
	}
}

BackupIPInfo::BackupIPInfo(char* json)
{
	this->fromJson(json);
}

char*
BackupIPInfo::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getTitle();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *titleKey = "title";
	json_object_set_member(pJsonObject, titleKey, node);
	if (isprimitive("BackupIPInfoRow")) {
		list<BackupIPInfoRow> new_list = static_cast<list <BackupIPInfoRow> > (getRows());
		node = converttoJson(&new_list, "BackupIPInfoRow", "array");
	} else {
		node = json_node_alloc();
		list<BackupIPInfoRow> new_list = static_cast<list <BackupIPInfoRow> > (getRows());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<BackupIPInfoRow>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			BackupIPInfoRow obj = *it;
			JsonNode *node_temp = json_from_string(obj.toJson(), &mygerror);
			json_array_add_element(json_array, node_temp);
			g_clear_error(&mygerror);
		}
		json_node_init_array(node, json_array);
		json_array_unref(json_array);
		
	}


	
	const gchar *rowsKey = "rows";
	json_object_set_member(pJsonObject, rowsKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
BackupIPInfo::getTitle()
{
	return title;
}

void
BackupIPInfo::setTitle(std::string  title)
{
	this->title = title;
}

std::list<BackupIPInfoRow>
BackupIPInfo::getRows()
{
	return rows;
}

void
BackupIPInfo::setRows(std::list <BackupIPInfoRow> rows)
{
	this->rows = rows;
}


