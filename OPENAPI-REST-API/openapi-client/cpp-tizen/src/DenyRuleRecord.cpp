#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "DenyRuleRecord.h"

using namespace std;
using namespace Tizen::ArtikCloud;

DenyRuleRecord::DenyRuleRecord()
{
	//__init();
}

DenyRuleRecord::~DenyRuleRecord()
{
	//__cleanup();
}

void
DenyRuleRecord::__init()
{
	//type = std::string();
	//data = std::string();
	//id = int(0);
	//created = std::string();
	//user = std::string();
}

void
DenyRuleRecord::__cleanup()
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
	//if(id != NULL) {
	//
	//delete id;
	//id = NULL;
	//}
	//if(created != NULL) {
	//
	//delete created;
	//created = NULL;
	//}
	//if(user != NULL) {
	//
	//delete user;
	//user = NULL;
	//}
	//
}

void
DenyRuleRecord::fromJson(char* jsonStr)
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
	const gchar *idKey = "id";
	node = json_object_get_member(pJsonObject, idKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&id, node, "int", "");
		} else {
			
		}
	}
	const gchar *createdKey = "created";
	node = json_object_get_member(pJsonObject, createdKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&created, node, "std::string", "");
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

DenyRuleRecord::DenyRuleRecord(char* json)
{
	this->fromJson(json);
}

char*
DenyRuleRecord::toJson()
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
	if (isprimitive("int")) {
		int obj = getId();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *idKey = "id";
	json_object_set_member(pJsonObject, idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getCreated();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *createdKey = "created";
	json_object_set_member(pJsonObject, createdKey, node);
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
DenyRuleRecord::getType()
{
	return type;
}

void
DenyRuleRecord::setType(std::string  type)
{
	this->type = type;
}

std::string
DenyRuleRecord::getData()
{
	return data;
}

void
DenyRuleRecord::setData(std::string  data)
{
	this->data = data;
}

int
DenyRuleRecord::getId()
{
	return id;
}

void
DenyRuleRecord::setId(int  id)
{
	this->id = id;
}

std::string
DenyRuleRecord::getCreated()
{
	return created;
}

void
DenyRuleRecord::setCreated(std::string  created)
{
	this->created = created;
}

std::string
DenyRuleRecord::getUser()
{
	return user;
}

void
DenyRuleRecord::setUser(std::string  user)
{
	this->user = user;
}


