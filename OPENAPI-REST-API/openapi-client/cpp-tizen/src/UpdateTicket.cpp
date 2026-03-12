#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "UpdateTicket.h"

using namespace std;
using namespace Tizen::ArtikCloud;

UpdateTicket::UpdateTicket()
{
	//__init();
}

UpdateTicket::~UpdateTicket()
{
	//__cleanup();
}

void
UpdateTicket::__init()
{
	//ip = std::string();
	//ip_address = std::string();
	//customer_server_access = std::string();
	//root_password = std::string();
	//sudo_username = std::string();
	//sudo_password = std::string();
	//port = int(0);
}

void
UpdateTicket::__cleanup()
{
	//if(ip != NULL) {
	//
	//delete ip;
	//ip = NULL;
	//}
	//if(ip_address != NULL) {
	//
	//delete ip_address;
	//ip_address = NULL;
	//}
	//if(customer_server_access != NULL) {
	//
	//delete customer_server_access;
	//customer_server_access = NULL;
	//}
	//if(root_password != NULL) {
	//
	//delete root_password;
	//root_password = NULL;
	//}
	//if(sudo_username != NULL) {
	//
	//delete sudo_username;
	//sudo_username = NULL;
	//}
	//if(sudo_password != NULL) {
	//
	//delete sudo_password;
	//sudo_password = NULL;
	//}
	//if(port != NULL) {
	//
	//delete port;
	//port = NULL;
	//}
	//
}

void
UpdateTicket::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *ipKey = "ip";
	node = json_object_get_member(pJsonObject, ipKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&ip, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *ip_addressKey = "ip_address";
	node = json_object_get_member(pJsonObject, ip_addressKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&ip_address, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *customer_server_accessKey = "customer_server_access";
	node = json_object_get_member(pJsonObject, customer_server_accessKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&customer_server_access, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *root_passwordKey = "root_password";
	node = json_object_get_member(pJsonObject, root_passwordKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&root_password, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *sudo_usernameKey = "sudo_username";
	node = json_object_get_member(pJsonObject, sudo_usernameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&sudo_username, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *sudo_passwordKey = "sudo_password";
	node = json_object_get_member(pJsonObject, sudo_passwordKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&sudo_password, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *portKey = "port";
	node = json_object_get_member(pJsonObject, portKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&port, node, "int", "");
		} else {
			
		}
	}
}

UpdateTicket::UpdateTicket(char* json)
{
	this->fromJson(json);
}

char*
UpdateTicket::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getIp();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *ipKey = "ip";
	json_object_set_member(pJsonObject, ipKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getIpAddress();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *ip_addressKey = "ip_address";
	json_object_set_member(pJsonObject, ip_addressKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getCustomerServerAccess();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *customer_server_accessKey = "customer_server_access";
	json_object_set_member(pJsonObject, customer_server_accessKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getRootPassword();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *root_passwordKey = "root_password";
	json_object_set_member(pJsonObject, root_passwordKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getSudoUsername();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *sudo_usernameKey = "sudo_username";
	json_object_set_member(pJsonObject, sudo_usernameKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getSudoPassword();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *sudo_passwordKey = "sudo_password";
	json_object_set_member(pJsonObject, sudo_passwordKey, node);
	if (isprimitive("int")) {
		int obj = getPort();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *portKey = "port";
	json_object_set_member(pJsonObject, portKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
UpdateTicket::getIp()
{
	return ip;
}

void
UpdateTicket::setIp(std::string  ip)
{
	this->ip = ip;
}

std::string
UpdateTicket::getIpAddress()
{
	return ip_address;
}

void
UpdateTicket::setIpAddress(std::string  ip_address)
{
	this->ip_address = ip_address;
}

std::string
UpdateTicket::getCustomerServerAccess()
{
	return customer_server_access;
}

void
UpdateTicket::setCustomerServerAccess(std::string  customer_server_access)
{
	this->customer_server_access = customer_server_access;
}

std::string
UpdateTicket::getRootPassword()
{
	return root_password;
}

void
UpdateTicket::setRootPassword(std::string  root_password)
{
	this->root_password = root_password;
}

std::string
UpdateTicket::getSudoUsername()
{
	return sudo_username;
}

void
UpdateTicket::setSudoUsername(std::string  sudo_username)
{
	this->sudo_username = sudo_username;
}

std::string
UpdateTicket::getSudoPassword()
{
	return sudo_password;
}

void
UpdateTicket::setSudoPassword(std::string  sudo_password)
{
	this->sudo_password = sudo_password;
}

int
UpdateTicket::getPort()
{
	return port;
}

void
UpdateTicket::setPort(int  port)
{
	this->port = port;
}


