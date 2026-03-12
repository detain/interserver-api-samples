#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "ServiceType.h"

using namespace std;
using namespace Tizen::ArtikCloud;

ServiceType::ServiceType()
{
	//__init();
}

ServiceType::~ServiceType()
{
	//__cleanup();
}

void
ServiceType::__init()
{
	//st_id = int(0);
	//st_name = std::string();
	//st_category = int(0);
	//st_module = std::string();
}

void
ServiceType::__cleanup()
{
	//if(st_id != NULL) {
	//
	//delete st_id;
	//st_id = NULL;
	//}
	//if(st_name != NULL) {
	//
	//delete st_name;
	//st_name = NULL;
	//}
	//if(st_category != NULL) {
	//
	//delete st_category;
	//st_category = NULL;
	//}
	//if(st_module != NULL) {
	//
	//delete st_module;
	//st_module = NULL;
	//}
	//
}

void
ServiceType::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *st_idKey = "st_id";
	node = json_object_get_member(pJsonObject, st_idKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&st_id, node, "int", "");
		} else {
			
		}
	}
	const gchar *st_nameKey = "st_name";
	node = json_object_get_member(pJsonObject, st_nameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&st_name, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *st_categoryKey = "st_category";
	node = json_object_get_member(pJsonObject, st_categoryKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&st_category, node, "int", "");
		} else {
			
		}
	}
	const gchar *st_moduleKey = "st_module";
	node = json_object_get_member(pJsonObject, st_moduleKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&st_module, node, "std::string", "");
		} else {
			
		}
	}
}

ServiceType::ServiceType(char* json)
{
	this->fromJson(json);
}

char*
ServiceType::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("int")) {
		int obj = getStId();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *st_idKey = "st_id";
	json_object_set_member(pJsonObject, st_idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getStName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *st_nameKey = "st_name";
	json_object_set_member(pJsonObject, st_nameKey, node);
	if (isprimitive("int")) {
		int obj = getStCategory();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *st_categoryKey = "st_category";
	json_object_set_member(pJsonObject, st_categoryKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getStModule();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *st_moduleKey = "st_module";
	json_object_set_member(pJsonObject, st_moduleKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

int
ServiceType::getStId()
{
	return st_id;
}

void
ServiceType::setStId(int  st_id)
{
	this->st_id = st_id;
}

std::string
ServiceType::getStName()
{
	return st_name;
}

void
ServiceType::setStName(std::string  st_name)
{
	this->st_name = st_name;
}

int
ServiceType::getStCategory()
{
	return st_category;
}

void
ServiceType::setStCategory(int  st_category)
{
	this->st_category = st_category;
}

std::string
ServiceType::getStModule()
{
	return st_module;
}

void
ServiceType::setStModule(std::string  st_module)
{
	this->st_module = st_module;
}


