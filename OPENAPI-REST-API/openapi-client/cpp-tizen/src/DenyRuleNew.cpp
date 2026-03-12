#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "DenyRuleNew.h"

using namespace std;
using namespace Tizen::ArtikCloud;

DenyRuleNew::DenyRuleNew()
{
	//__init();
}

DenyRuleNew::~DenyRuleNew()
{
	//__cleanup();
}

void
DenyRuleNew::__init()
{
	//type = std::string();
	//data = std::string();
	//user = std::string();
}

void
DenyRuleNew::__cleanup()
{
	//if(type != NULL) {
	//
	//delete type;
	//type = NULL;
	//}
	//if(data != NULL) {
	//
	//delete data;
	//data = NULL;
	//}
	//if(user != NULL) {
	//
	//delete user;
	//user = NULL;
	//}
	//
}

void
DenyRuleNew::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *typeKey = "type";
	node = json_object_get_member(pJsonObject, typeKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&type, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *dataKey = "data";
	node = json_object_get_member(pJsonObject, dataKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&data, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *userKey = "user";
	node = json_object_get_member(pJsonObject, userKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&user, node, "std::string", "");
		} else {
			
		}
	}
}

DenyRuleNew::DenyRuleNew(char* json)
{
	this->fromJson(json);
}

char*
DenyRuleNew::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getType();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *typeKey = "type";
	json_object_set_member(pJsonObject, typeKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getData();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *dataKey = "data";
	json_object_set_member(pJsonObject, dataKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getUser();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *userKey = "user";
	json_object_set_member(pJsonObject, userKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
DenyRuleNew::getType()
{
	return type;
}

void
DenyRuleNew::setType(std::string  type)
{
	this->type = type;
}

std::string
DenyRuleNew::getData()
{
	return data;
}

void
DenyRuleNew::setData(std::string  data)
{
	this->data = data;
}

std::string
DenyRuleNew::getUser()
{
	return user;
}

void
DenyRuleNew::setUser(std::string  user)
{
	this->user = user;
}


