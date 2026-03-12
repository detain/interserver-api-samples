#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "DomainNameServer.h"

using namespace std;
using namespace Tizen::ArtikCloud;

DomainNameServer::DomainNameServer()
{
	//__init();
}

DomainNameServer::~DomainNameServer()
{
	//__cleanup();
}

void
DomainNameServer::__init()
{
	//sortorder = std::string();
	//name = std::string();
	//ipaddress = std::string();
}

void
DomainNameServer::__cleanup()
{
	//if(sortorder != NULL) {
	//
	//delete sortorder;
	//sortorder = NULL;
	//}
	//if(name != NULL) {
	//
	//delete name;
	//name = NULL;
	//}
	//if(ipaddress != NULL) {
	//
	//delete ipaddress;
	//ipaddress = NULL;
	//}
	//
}

void
DomainNameServer::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *sortorderKey = "sortorder";
	node = json_object_get_member(pJsonObject, sortorderKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&sortorder, node, "std::string", "");
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
	const gchar *ipaddressKey = "ipaddress";
	node = json_object_get_member(pJsonObject, ipaddressKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&ipaddress, node, "std::string", "");
		} else {
			
		}
	}
}

DomainNameServer::DomainNameServer(char* json)
{
	this->fromJson(json);
}

char*
DomainNameServer::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getSortorder();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *sortorderKey = "sortorder";
	json_object_set_member(pJsonObject, sortorderKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *nameKey = "name";
	json_object_set_member(pJsonObject, nameKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getIpaddress();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *ipaddressKey = "ipaddress";
	json_object_set_member(pJsonObject, ipaddressKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
DomainNameServer::getSortorder()
{
	return sortorder;
}

void
DomainNameServer::setSortorder(std::string  sortorder)
{
	this->sortorder = sortorder;
}

std::string
DomainNameServer::getName()
{
	return name;
}

void
DomainNameServer::setName(std::string  name)
{
	this->name = name;
}

std::string
DomainNameServer::getIpaddress()
{
	return ipaddress;
}

void
DomainNameServer::setIpaddress(std::string  ipaddress)
{
	this->ipaddress = ipaddress;
}


