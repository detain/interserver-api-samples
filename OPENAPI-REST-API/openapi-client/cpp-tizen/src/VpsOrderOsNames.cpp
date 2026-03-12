#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "VpsOrder_osNames.h"

using namespace std;
using namespace Tizen::ArtikCloud;

VpsOrder_osNames::VpsOrder_osNames()
{
	//__init();
}

VpsOrder_osNames::~VpsOrder_osNames()
{
	//__cleanup();
}

void
VpsOrder_osNames::__init()
{
	//opensuse = std::string();
	//ubuntu = std::string();
}

void
VpsOrder_osNames::__cleanup()
{
	//if(opensuse != NULL) {
	//
	//delete opensuse;
	//opensuse = NULL;
	//}
	//if(ubuntu != NULL) {
	//
	//delete ubuntu;
	//ubuntu = NULL;
	//}
	//
}

void
VpsOrder_osNames::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *opensuseKey = "opensuse";
	node = json_object_get_member(pJsonObject, opensuseKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&opensuse, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *ubuntuKey = "ubuntu";
	node = json_object_get_member(pJsonObject, ubuntuKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&ubuntu, node, "std::string", "");
		} else {
			
		}
	}
}

VpsOrder_osNames::VpsOrder_osNames(char* json)
{
	this->fromJson(json);
}

char*
VpsOrder_osNames::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getOpensuse();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *opensuseKey = "opensuse";
	json_object_set_member(pJsonObject, opensuseKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getUbuntu();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *ubuntuKey = "ubuntu";
	json_object_set_member(pJsonObject, ubuntuKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
VpsOrder_osNames::getOpensuse()
{
	return opensuse;
}

void
VpsOrder_osNames::setOpensuse(std::string  opensuse)
{
	this->opensuse = opensuse;
}

std::string
VpsOrder_osNames::getUbuntu()
{
	return ubuntu;
}

void
VpsOrder_osNames::setUbuntu(std::string  ubuntu)
{
	this->ubuntu = ubuntu;
}


