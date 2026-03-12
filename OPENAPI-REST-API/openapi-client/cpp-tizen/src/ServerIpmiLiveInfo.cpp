#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "ServerIpmiLiveInfo.h"

using namespace std;
using namespace Tizen::ArtikCloud;

ServerIpmiLiveInfo::ServerIpmiLiveInfo()
{
	//__init();
}

ServerIpmiLiveInfo::~ServerIpmiLiveInfo()
{
	//__cleanup();
}

void
ServerIpmiLiveInfo::__init()
{
	//text = std::string();
	//public_ip = std::string();
	//allowed_ip = std::string();
	//client_username = std::string();
	//client_password = std::string();
}

void
ServerIpmiLiveInfo::__cleanup()
{
	//if(text != NULL) {
	//
	//delete text;
	//text = NULL;
	//}
	//if(public_ip != NULL) {
	//
	//delete public_ip;
	//public_ip = NULL;
	//}
	//if(allowed_ip != NULL) {
	//
	//delete allowed_ip;
	//allowed_ip = NULL;
	//}
	//if(client_username != NULL) {
	//
	//delete client_username;
	//client_username = NULL;
	//}
	//if(client_password != NULL) {
	//
	//delete client_password;
	//client_password = NULL;
	//}
	//
}

void
ServerIpmiLiveInfo::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *textKey = "text";
	node = json_object_get_member(pJsonObject, textKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&text, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *public_ipKey = "public_ip";
	node = json_object_get_member(pJsonObject, public_ipKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&public_ip, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *allowed_ipKey = "allowed_ip";
	node = json_object_get_member(pJsonObject, allowed_ipKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&allowed_ip, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *client_usernameKey = "client_username";
	node = json_object_get_member(pJsonObject, client_usernameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&client_username, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *client_passwordKey = "client_password";
	node = json_object_get_member(pJsonObject, client_passwordKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&client_password, node, "std::string", "");
		} else {
			
		}
	}
}

ServerIpmiLiveInfo::ServerIpmiLiveInfo(char* json)
{
	this->fromJson(json);
}

char*
ServerIpmiLiveInfo::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getText();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *textKey = "text";
	json_object_set_member(pJsonObject, textKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getPublicIp();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *public_ipKey = "public_ip";
	json_object_set_member(pJsonObject, public_ipKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getAllowedIp();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *allowed_ipKey = "allowed_ip";
	json_object_set_member(pJsonObject, allowed_ipKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getClientUsername();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *client_usernameKey = "client_username";
	json_object_set_member(pJsonObject, client_usernameKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getClientPassword();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *client_passwordKey = "client_password";
	json_object_set_member(pJsonObject, client_passwordKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
ServerIpmiLiveInfo::getText()
{
	return text;
}

void
ServerIpmiLiveInfo::setText(std::string  text)
{
	this->text = text;
}

std::string
ServerIpmiLiveInfo::getPublicIp()
{
	return public_ip;
}

void
ServerIpmiLiveInfo::setPublicIp(std::string  public_ip)
{
	this->public_ip = public_ip;
}

std::string
ServerIpmiLiveInfo::getAllowedIp()
{
	return allowed_ip;
}

void
ServerIpmiLiveInfo::setAllowedIp(std::string  allowed_ip)
{
	this->allowed_ip = allowed_ip;
}

std::string
ServerIpmiLiveInfo::getClientUsername()
{
	return client_username;
}

void
ServerIpmiLiveInfo::setClientUsername(std::string  client_username)
{
	this->client_username = client_username;
}

std::string
ServerIpmiLiveInfo::getClientPassword()
{
	return client_password;
}

void
ServerIpmiLiveInfo::setClientPassword(std::string  client_password)
{
	this->client_password = client_password;
}


