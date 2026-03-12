#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "DomainNameserverGetResponse_inner.h"

using namespace std;
using namespace Tizen::ArtikCloud;

DomainNameserverGetResponse_inner::DomainNameserverGetResponse_inner()
{
	//__init();
}

DomainNameserverGetResponse_inner::~DomainNameserverGetResponse_inner()
{
	//__cleanup();
}

void
DomainNameserverGetResponse_inner::__init()
{
	//name = std::string();
	//ipaddress = std::string();
	//can_delete = std::string();
}

void
DomainNameserverGetResponse_inner::__cleanup()
{
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
	//if(can_delete != NULL) {
	//
	//delete can_delete;
	//can_delete = NULL;
	//}
	//
}

void
DomainNameserverGetResponse_inner::fromJson(char* jsonStr)
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
	const gchar *ipaddressKey = "ipaddress";
	node = json_object_get_member(pJsonObject, ipaddressKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&ipaddress, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *can_deleteKey = "can_delete";
	node = json_object_get_member(pJsonObject, can_deleteKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&can_delete, node, "std::string", "");
		} else {
			
		}
	}
}

DomainNameserverGetResponse_inner::DomainNameserverGetResponse_inner(char* json)
{
	this->fromJson(json);
}

char*
DomainNameserverGetResponse_inner::toJson()
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
		std::string obj = getIpaddress();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *ipaddressKey = "ipaddress";
	json_object_set_member(pJsonObject, ipaddressKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getCanDelete();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *can_deleteKey = "can_delete";
	json_object_set_member(pJsonObject, can_deleteKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
DomainNameserverGetResponse_inner::getName()
{
	return name;
}

void
DomainNameserverGetResponse_inner::setName(std::string  name)
{
	this->name = name;
}

std::string
DomainNameserverGetResponse_inner::getIpaddress()
{
	return ipaddress;
}

void
DomainNameserverGetResponse_inner::setIpaddress(std::string  ipaddress)
{
	this->ipaddress = ipaddress;
}

std::string
DomainNameserverGetResponse_inner::getCanDelete()
{
	return can_delete;
}

void
DomainNameserverGetResponse_inner::setCanDelete(std::string  can_delete)
{
	this->can_delete = can_delete;
}


