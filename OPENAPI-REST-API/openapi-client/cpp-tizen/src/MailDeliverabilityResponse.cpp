#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "MailDeliverabilityResponse.h"

using namespace std;
using namespace Tizen::ArtikCloud;

MailDeliverabilityResponse::MailDeliverabilityResponse()
{
	//__init();
}

MailDeliverabilityResponse::~MailDeliverabilityResponse()
{
	//__cleanup();
}

void
MailDeliverabilityResponse::__init()
{
	//stat = null;
	//percent = double(0);
	//new std::list()std::list> table_data;
}

void
MailDeliverabilityResponse::__cleanup()
{
	//if(stat != NULL) {
	//
	//delete stat;
	//stat = NULL;
	//}
	//if(percent != NULL) {
	//
	//delete percent;
	//percent = NULL;
	//}
	//if(table_data != NULL) {
	//table_data.RemoveAll(true);
	//delete table_data;
	//table_data = NULL;
	//}
	//
}

void
MailDeliverabilityResponse::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *statKey = "stat";
	node = json_object_get_member(pJsonObject, statKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&stat, node, "std::string", "");
		} else {
			
			std::string* obj = static_cast<std::string*> (&stat);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *percentKey = "percent";
	node = json_object_get_member(pJsonObject, percentKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&percent, node, "long long", "");
		} else {
			
			long long* obj = static_cast<long long*> (&percent);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *table_dataKey = "table_data";
	node = json_object_get_member(pJsonObject, table_dataKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<std::list> new_list;
			std::list inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("std::list")) {
					jsonToValue(&inst, temp_json, "std::list", "");
				} else {
					
					inst.fromJson(json_to_string(temp_json, false));
					
				}
				new_list.push_back(inst);
			}
			table_data = new_list;
		}
		
	}
}

MailDeliverabilityResponse::MailDeliverabilityResponse(char* json)
{
	this->fromJson(json);
}

char*
MailDeliverabilityResponse::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getStat();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
		std::string obj = static_cast<std::string> (getStat());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *statKey = "stat";
	json_object_set_member(pJsonObject, statKey, node);
	if (isprimitive("long long")) {
		long long obj = getPercent();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
		long long obj = static_cast<long long> (getPercent());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *percentKey = "percent";
	json_object_set_member(pJsonObject, percentKey, node);
	if (isprimitive("std::list")) {
		list<std::list> new_list = static_cast<list <std::list> > (getTableData());
		node = converttoJson(&new_list, "std::list", "array");
	} else {
		node = json_node_alloc();
		list<std::list> new_list = static_cast<list <std::list> > (getTableData());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<std::list>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			std::list obj = *it;
			JsonNode *node_temp = json_from_string(obj.toJson(), &mygerror);
			json_array_add_element(json_array, node_temp);
			g_clear_error(&mygerror);
		}
		json_node_init_array(node, json_array);
		json_array_unref(json_array);
		
	}


	
	const gchar *table_dataKey = "table_data";
	json_object_set_member(pJsonObject, table_dataKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
MailDeliverabilityResponse::getStat()
{
	return stat;
}

void
MailDeliverabilityResponse::setStat(std::string  stat)
{
	this->stat = stat;
}

long long
MailDeliverabilityResponse::getPercent()
{
	return percent;
}

void
MailDeliverabilityResponse::setPercent(long long  percent)
{
	this->percent = percent;
}

std::list<std::list>
MailDeliverabilityResponse::getTableData()
{
	return table_data;
}

void
MailDeliverabilityResponse::setTableData(std::list <std::list> table_data)
{
	this->table_data = table_data;
}


