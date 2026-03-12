#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "VpsSnapshot.h"

using namespace std;
using namespace Tizen::ArtikCloud;

VpsSnapshot::VpsSnapshot()
{
	//__init();
}

VpsSnapshot::~VpsSnapshot()
{
	//__cleanup();
}

void
VpsSnapshot::__init()
{
	//name = std::string();
	//used = int(0);
	//date = int(0);
}

void
VpsSnapshot::__cleanup()
{
	//if(name != NULL) {
	//
	//delete name;
	//name = NULL;
	//}
	//if(used != NULL) {
	//
	//delete used;
	//used = NULL;
	//}
	//if(date != NULL) {
	//
	//delete date;
	//date = NULL;
	//}
	//
}

void
VpsSnapshot::fromJson(char* jsonStr)
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
	const gchar *usedKey = "used";
	node = json_object_get_member(pJsonObject, usedKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&used, node, "int", "");
		} else {
			
		}
	}
	const gchar *dateKey = "date";
	node = json_object_get_member(pJsonObject, dateKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&date, node, "int", "");
		} else {
			
		}
	}
}

VpsSnapshot::VpsSnapshot(char* json)
{
	this->fromJson(json);
}

char*
VpsSnapshot::toJson()
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
		int obj = getUsed();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *usedKey = "used";
	json_object_set_member(pJsonObject, usedKey, node);
	if (isprimitive("int")) {
		int obj = getDate();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *dateKey = "date";
	json_object_set_member(pJsonObject, dateKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
VpsSnapshot::getName()
{
	return name;
}

void
VpsSnapshot::setName(std::string  name)
{
	this->name = name;
}

int
VpsSnapshot::getUsed()
{
	return used;
}

void
VpsSnapshot::setUsed(int  used)
{
	this->used = used;
}

int
VpsSnapshot::getDate()
{
	return date;
}

void
VpsSnapshot::setDate(int  date)
{
	this->date = date;
}


