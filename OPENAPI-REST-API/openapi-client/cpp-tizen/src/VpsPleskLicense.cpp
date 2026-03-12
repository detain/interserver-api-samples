#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "VpsPleskLicense.h"

using namespace std;
using namespace Tizen::ArtikCloud;

VpsPleskLicense::VpsPleskLicense()
{
	//__init();
}

VpsPleskLicense::~VpsPleskLicense()
{
	//__cleanup();
}

void
VpsPleskLicense::__init()
{
	//id = int(0);
	//name = std::string();
	//sub_name = std::string();
	//cost = int(0);
}

void
VpsPleskLicense::__cleanup()
{
	//if(id != NULL) {
	//
	//delete id;
	//id = NULL;
	//}
	//if(name != NULL) {
	//
	//delete name;
	//name = NULL;
	//}
	//if(sub_name != NULL) {
	//
	//delete sub_name;
	//sub_name = NULL;
	//}
	//if(cost != NULL) {
	//
	//delete cost;
	//cost = NULL;
	//}
	//
}

void
VpsPleskLicense::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *idKey = "id";
	node = json_object_get_member(pJsonObject, idKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&id, node, "int", "");
		} else {
			
		}
	}
	const gchar *nameKey = "name";
	node = json_object_get_member(pJsonObject, nameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&name, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *sub_nameKey = "sub_name";
	node = json_object_get_member(pJsonObject, sub_nameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&sub_name, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *costKey = "cost";
	node = json_object_get_member(pJsonObject, costKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&cost, node, "int", "");
		} else {
			
		}
	}
}

VpsPleskLicense::VpsPleskLicense(char* json)
{
	this->fromJson(json);
}

char*
VpsPleskLicense::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("int")) {
		int obj = getId();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *idKey = "id";
	json_object_set_member(pJsonObject, idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *nameKey = "name";
	json_object_set_member(pJsonObject, nameKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getSubName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *sub_nameKey = "sub_name";
	json_object_set_member(pJsonObject, sub_nameKey, node);
	if (isprimitive("int")) {
		int obj = getCost();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *costKey = "cost";
	json_object_set_member(pJsonObject, costKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

int
VpsPleskLicense::getId()
{
	return id;
}

void
VpsPleskLicense::setId(int  id)
{
	this->id = id;
}

std::string
VpsPleskLicense::getName()
{
	return name;
}

void
VpsPleskLicense::setName(std::string  name)
{
	this->name = name;
}

std::string
VpsPleskLicense::getSubName()
{
	return sub_name;
}

void
VpsPleskLicense::setSubName(std::string  sub_name)
{
	this->sub_name = sub_name;
}

int
VpsPleskLicense::getCost()
{
	return cost;
}

void
VpsPleskLicense::setCost(int  cost)
{
	this->cost = cost;
}


