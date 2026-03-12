#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "VpsCPData.h"

using namespace std;
using namespace Tizen::ArtikCloud;

VpsCPData::VpsCPData()
{
	//__init();
}

VpsCPData::~VpsCPData()
{
	//__cleanup();
}

void
VpsCPData::__init()
{
	//name = std::string();
	//cost = int(0);
}

void
VpsCPData::__cleanup()
{
	//if(name != NULL) {
	//
	//delete name;
	//name = NULL;
	//}
	//if(cost != NULL) {
	//
	//delete cost;
	//cost = NULL;
	//}
	//
}

void
VpsCPData::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *nameKey = "name";
	node = json_object_get_member(pJsonObject, nameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&name, node, "std::string", "");
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

VpsCPData::VpsCPData(char* json)
{
	this->fromJson(json);
}

char*
VpsCPData::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *nameKey = "name";
	json_object_set_member(pJsonObject, nameKey, node);
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

std::string
VpsCPData::getName()
{
	return name;
}

void
VpsCPData::setName(std::string  name)
{
	this->name = name;
}

int
VpsCPData::getCost()
{
	return cost;
}

void
VpsCPData::setCost(int  cost)
{
	this->cost = cost;
}


