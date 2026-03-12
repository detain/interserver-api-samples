#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "HostnameObject.h"

using namespace std;
using namespace Tizen::ArtikCloud;

HostnameObject::HostnameObject()
{
	//__init();
}

HostnameObject::~HostnameObject()
{
	//__cleanup();
}

void
HostnameObject::__init()
{
	//hostname = std::string();
}

void
HostnameObject::__cleanup()
{
	//if(hostname != NULL) {
	//
	//delete hostname;
	//hostname = NULL;
	//}
	//
}

void
HostnameObject::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *hostnameKey = "hostname";
	node = json_object_get_member(pJsonObject, hostnameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&hostname, node, "std::string", "");
		} else {
			
		}
	}
}

HostnameObject::HostnameObject(char* json)
{
	this->fromJson(json);
}

char*
HostnameObject::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getHostname();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *hostnameKey = "hostname";
	json_object_set_member(pJsonObject, hostnameKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
HostnameObject::getHostname()
{
	return hostname;
}

void
HostnameObject::setHostname(std::string  hostname)
{
	this->hostname = hostname;
}


