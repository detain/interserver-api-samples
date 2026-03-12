#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "QuickserverOrderDistroSelUbuntu.h"

using namespace std;
using namespace Tizen::ArtikCloud;

QuickserverOrderDistroSelUbuntu::QuickserverOrderDistroSelUbuntu()
{
	//__init();
}

QuickserverOrderDistroSelUbuntu::~QuickserverOrderDistroSelUbuntu()
{
	//__cleanup();
}

void
QuickserverOrderDistroSelUbuntu::__init()
{
	//ubuntu = std::string();
}

void
QuickserverOrderDistroSelUbuntu::__cleanup()
{
	//if(ubuntu != NULL) {
	//
	//delete ubuntu;
	//ubuntu = NULL;
	//}
	//
}

void
QuickserverOrderDistroSelUbuntu::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *ubuntuKey = "Ubuntu";
	node = json_object_get_member(pJsonObject, ubuntuKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&ubuntu, node, "std::string", "");
		} else {
			
		}
	}
}

QuickserverOrderDistroSelUbuntu::QuickserverOrderDistroSelUbuntu(char* json)
{
	this->fromJson(json);
}

char*
QuickserverOrderDistroSelUbuntu::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getUbuntu();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *ubuntuKey = "Ubuntu";
	json_object_set_member(pJsonObject, ubuntuKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
QuickserverOrderDistroSelUbuntu::getUbuntu()
{
	return ubuntu;
}

void
QuickserverOrderDistroSelUbuntu::setUbuntu(std::string  ubuntu)
{
	this->ubuntu = ubuntu;
}


