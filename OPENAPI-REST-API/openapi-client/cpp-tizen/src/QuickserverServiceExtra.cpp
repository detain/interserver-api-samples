#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "Quickserver_serviceExtra.h"

using namespace std;
using namespace Tizen::ArtikCloud;

Quickserver_serviceExtra::Quickserver_serviceExtra()
{
	//__init();
}

Quickserver_serviceExtra::~Quickserver_serviceExtra()
{
	//__cleanup();
}

void
Quickserver_serviceExtra::__init()
{
	//platform = std::string();
}

void
Quickserver_serviceExtra::__cleanup()
{
	//if(platform != NULL) {
	//
	//delete platform;
	//platform = NULL;
	//}
	//
}

void
Quickserver_serviceExtra::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *platformKey = "platform";
	node = json_object_get_member(pJsonObject, platformKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&platform, node, "std::string", "");
		} else {
			
		}
	}
}

Quickserver_serviceExtra::Quickserver_serviceExtra(char* json)
{
	this->fromJson(json);
}

char*
Quickserver_serviceExtra::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getPlatform();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *platformKey = "platform";
	json_object_set_member(pJsonObject, platformKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
Quickserver_serviceExtra::getPlatform()
{
	return platform;
}

void
Quickserver_serviceExtra::setPlatform(std::string  platform)
{
	this->platform = platform;
}


