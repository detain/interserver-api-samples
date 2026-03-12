#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "ServerLease.h"

using namespace std;
using namespace Tizen::ArtikCloud;

ServerLease::ServerLease()
{
	//__init();
}

ServerLease::~ServerLease()
{
	//__cleanup();
}

void
ServerLease::__init()
{
	//mac = std::string();
	//authenticated = bool(false);
	//group = std::string();
}

void
ServerLease::__cleanup()
{
	//if(mac != NULL) {
	//
	//delete mac;
	//mac = NULL;
	//}
	//if(authenticated != NULL) {
	//
	//delete authenticated;
	//authenticated = NULL;
	//}
	//if(group != NULL) {
	//
	//delete group;
	//group = NULL;
	//}
	//
}

void
ServerLease::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *macKey = "mac";
	node = json_object_get_member(pJsonObject, macKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&mac, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *authenticatedKey = "authenticated";
	node = json_object_get_member(pJsonObject, authenticatedKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&authenticated, node, "bool", "");
		} else {
			
		}
	}
	const gchar *groupKey = "group";
	node = json_object_get_member(pJsonObject, groupKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&group, node, "std::string", "");
		} else {
			
		}
	}
}

ServerLease::ServerLease(char* json)
{
	this->fromJson(json);
}

char*
ServerLease::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getMac();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *macKey = "mac";
	json_object_set_member(pJsonObject, macKey, node);
	if (isprimitive("bool")) {
		bool obj = getAuthenticated();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *authenticatedKey = "authenticated";
	json_object_set_member(pJsonObject, authenticatedKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getGroup();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *groupKey = "group";
	json_object_set_member(pJsonObject, groupKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
ServerLease::getMac()
{
	return mac;
}

void
ServerLease::setMac(std::string  mac)
{
	this->mac = mac;
}

bool
ServerLease::getAuthenticated()
{
	return authenticated;
}

void
ServerLease::setAuthenticated(bool  authenticated)
{
	this->authenticated = authenticated;
}

std::string
ServerLease::getGroup()
{
	return group;
}

void
ServerLease::setGroup(std::string  group)
{
	this->group = group;
}


