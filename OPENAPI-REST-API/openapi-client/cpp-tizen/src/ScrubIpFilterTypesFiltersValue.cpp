#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "ScrubIpFilterTypes_filters_value.h"

using namespace std;
using namespace Tizen::ArtikCloud;

ScrubIpFilterTypes_filters_value::ScrubIpFilterTypes_filters_value()
{
	//__init();
}

ScrubIpFilterTypes_filters_value::~ScrubIpFilterTypes_filters_value()
{
	//__cleanup();
}

void
ScrubIpFilterTypes_filters_value::__init()
{
	//name = std::string();
	//desc = std::string();
}

void
ScrubIpFilterTypes_filters_value::__cleanup()
{
	//if(name != NULL) {
	//
	//delete name;
	//name = NULL;
	//}
	//if(desc != NULL) {
	//
	//delete desc;
	//desc = NULL;
	//}
	//
}

void
ScrubIpFilterTypes_filters_value::fromJson(char* jsonStr)
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
	const gchar *descKey = "desc";
	node = json_object_get_member(pJsonObject, descKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&desc, node, "std::string", "");
		} else {
			
		}
	}
}

ScrubIpFilterTypes_filters_value::ScrubIpFilterTypes_filters_value(char* json)
{
	this->fromJson(json);
}

char*
ScrubIpFilterTypes_filters_value::toJson()
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
	if (isprimitive("std::string")) {
		std::string obj = getDesc();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *descKey = "desc";
	json_object_set_member(pJsonObject, descKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
ScrubIpFilterTypes_filters_value::getName()
{
	return name;
}

void
ScrubIpFilterTypes_filters_value::setName(std::string  name)
{
	this->name = name;
}

std::string
ScrubIpFilterTypes_filters_value::getDesc()
{
	return desc;
}

void
ScrubIpFilterTypes_filters_value::setDesc(std::string  desc)
{
	this->desc = desc;
}


