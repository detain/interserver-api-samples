#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "DomainNameserverPostRequest.h"

using namespace std;
using namespace Tizen::ArtikCloud;

DomainNameserverPostRequest::DomainNameserverPostRequest()
{
	//__init();
}

DomainNameserverPostRequest::~DomainNameserverPostRequest()
{
	//__cleanup();
}

void
DomainNameserverPostRequest::__init()
{
	//name = std::string();
	//ipAddress = std::string();
}

void
DomainNameserverPostRequest::__cleanup()
{
	//if(name != NULL) {
	//
	//delete name;
	//name = NULL;
	//}
	//if(ipAddress != NULL) {
	//
	//delete ipAddress;
	//ipAddress = NULL;
	//}
	//
}

void
DomainNameserverPostRequest::fromJson(char* jsonStr)
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
	const gchar *ipAddressKey = "ipAddress";
	node = json_object_get_member(pJsonObject, ipAddressKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&ipAddress, node, "std::string", "");
		} else {
			
		}
	}
}

DomainNameserverPostRequest::DomainNameserverPostRequest(char* json)
{
	this->fromJson(json);
}

char*
DomainNameserverPostRequest::toJson()
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
		std::string obj = getIpAddress();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *ipAddressKey = "ipAddress";
	json_object_set_member(pJsonObject, ipAddressKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
DomainNameserverPostRequest::getName()
{
	return name;
}

void
DomainNameserverPostRequest::setName(std::string  name)
{
	this->name = name;
}

std::string
DomainNameserverPostRequest::getIpAddress()
{
	return ipAddress;
}

void
DomainNameserverPostRequest::setIpAddress(std::string  ipAddress)
{
	this->ipAddress = ipAddress;
}


