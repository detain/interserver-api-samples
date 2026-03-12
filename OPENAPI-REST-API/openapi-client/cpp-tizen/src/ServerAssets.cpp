#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "ServerAssets.h"

using namespace std;
using namespace Tizen::ArtikCloud;

ServerAssets::ServerAssets()
{
	//__init();
}

ServerAssets::~ServerAssets()
{
	//__cleanup();
}

void
ServerAssets::__init()
{
	//title = std::string();
	//size = int(0);
	//type = std::string();
	//new std::list()std::list> header;
	//new std::list()std::list> rows;
}

void
ServerAssets::__cleanup()
{
	//if(title != NULL) {
	//
	//delete title;
	//title = NULL;
	//}
	//if(size != NULL) {
	//
	//delete size;
	//size = NULL;
	//}
	//if(type != NULL) {
	//
	//delete type;
	//type = NULL;
	//}
	//if(header != NULL) {
	//header.RemoveAll(true);
	//delete header;
	//header = NULL;
	//}
	//if(rows != NULL) {
	//rows.RemoveAll(true);
	//delete rows;
	//rows = NULL;
	//}
	//
}

void
ServerAssets::fromJson(char* jsonStr)
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
	const gchar *sizeKey = "size";
	node = json_object_get_member(pJsonObject, sizeKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&size, node, "int", "");
		} else {
			
		}
	}
	const gchar *typeKey = "type";
	node = json_object_get_member(pJsonObject, typeKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&type, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *headerKey = "header";
	node = json_object_get_member(pJsonObject, headerKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<std::string> new_list;
			std::string inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("std::string")) {
					jsonToValue(&inst, temp_json, "std::string", "");
				} else {
					
				}
				new_list.push_back(inst);
			}
			header = new_list;
		}
		
	}
	const gchar *rowsKey = "rows";
	node = json_object_get_member(pJsonObject, rowsKey);
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
			rows = new_list;
		}
		
	}
}

ServerAssets::ServerAssets(char* json)
{
	this->fromJson(json);
}

char*
ServerAssets::toJson()
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
	if (isprimitive("int")) {
		int obj = getSize();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *sizeKey = "size";
	json_object_set_member(pJsonObject, sizeKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getType();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *typeKey = "type";
	json_object_set_member(pJsonObject, typeKey, node);
	if (isprimitive("std::string")) {
		list<std::string> new_list = static_cast<list <std::string> > (getHeader());
		node = converttoJson(&new_list, "std::string", "array");
	} else {
		node = json_node_alloc();
		list<std::string> new_list = static_cast<list <std::string> > (getHeader());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
	}


	
	const gchar *headerKey = "header";
	json_object_set_member(pJsonObject, headerKey, node);
	if (isprimitive("std::list")) {
		list<std::list> new_list = static_cast<list <std::list> > (getRows());
		node = converttoJson(&new_list, "std::list", "array");
	} else {
		node = json_node_alloc();
		list<std::list> new_list = static_cast<list <std::list> > (getRows());
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
ServerAssets::getTitle()
{
	return title;
}

void
ServerAssets::setTitle(std::string  title)
{
	this->title = title;
}

int
ServerAssets::getSize()
{
	return size;
}

void
ServerAssets::setSize(int  size)
{
	this->size = size;
}

std::string
ServerAssets::getType()
{
	return type;
}

void
ServerAssets::setType(std::string  type)
{
	this->type = type;
}

std::list<std::string>
ServerAssets::getHeader()
{
	return header;
}

void
ServerAssets::setHeader(std::list <std::string> header)
{
	this->header = header;
}

std::list<std::list>
ServerAssets::getRows()
{
	return rows;
}

void
ServerAssets::setRows(std::list <std::list> rows)
{
	this->rows = rows;
}


