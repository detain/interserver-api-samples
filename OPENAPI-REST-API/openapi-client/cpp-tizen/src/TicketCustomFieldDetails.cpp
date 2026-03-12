#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "TicketCustomFieldDetails.h"

using namespace std;
using namespace Tizen::ArtikCloud;

TicketCustomFieldDetails::TicketCustomFieldDetails()
{
	//__init();
}

TicketCustomFieldDetails::~TicketCustomFieldDetails()
{
	//__cleanup();
}

void
TicketCustomFieldDetails::__init()
{
	//customerServerAccess = std::string();
	//ipAddress = std::string();
	//rootPassword = std::string();
	//sudoUser = std::string();
	//sudoPassword = int(0);
	//port = int(0);
}

void
TicketCustomFieldDetails::__cleanup()
{
	//if(customerServerAccess != NULL) {
	//
	//delete customerServerAccess;
	//customerServerAccess = NULL;
	//}
	//if(ipAddress != NULL) {
	//
	//delete ipAddress;
	//ipAddress = NULL;
	//}
	//if(rootPassword != NULL) {
	//
	//delete rootPassword;
	//rootPassword = NULL;
	//}
	//if(sudoUser != NULL) {
	//
	//delete sudoUser;
	//sudoUser = NULL;
	//}
	//if(sudoPassword != NULL) {
	//
	//delete sudoPassword;
	//sudoPassword = NULL;
	//}
	//if(port != NULL) {
	//
	//delete port;
	//port = NULL;
	//}
	//
}

void
TicketCustomFieldDetails::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *customerServerAccessKey = "Customer Server Access";
	node = json_object_get_member(pJsonObject, customerServerAccessKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&customerServerAccess, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *ipAddressKey = "Ip Address";
	node = json_object_get_member(pJsonObject, ipAddressKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&ipAddress, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *rootPasswordKey = "Root Password";
	node = json_object_get_member(pJsonObject, rootPasswordKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&rootPassword, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *sudoUserKey = "Sudo User";
	node = json_object_get_member(pJsonObject, sudoUserKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&sudoUser, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *sudoPasswordKey = "Sudo Password";
	node = json_object_get_member(pJsonObject, sudoPasswordKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&sudoPassword, node, "int", "");
		} else {
			
		}
	}
	const gchar *portKey = "Port";
	node = json_object_get_member(pJsonObject, portKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&port, node, "int", "");
		} else {
			
		}
	}
}

TicketCustomFieldDetails::TicketCustomFieldDetails(char* json)
{
	this->fromJson(json);
}

char*
TicketCustomFieldDetails::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getCustomerServerAccess();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *customerServerAccessKey = "Customer Server Access";
	json_object_set_member(pJsonObject, customerServerAccessKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getIpAddress();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *ipAddressKey = "Ip Address";
	json_object_set_member(pJsonObject, ipAddressKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getRootPassword();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *rootPasswordKey = "Root Password";
	json_object_set_member(pJsonObject, rootPasswordKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getSudoUser();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *sudoUserKey = "Sudo User";
	json_object_set_member(pJsonObject, sudoUserKey, node);
	if (isprimitive("int")) {
		int obj = getSudoPassword();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *sudoPasswordKey = "Sudo Password";
	json_object_set_member(pJsonObject, sudoPasswordKey, node);
	if (isprimitive("int")) {
		int obj = getPort();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *portKey = "Port";
	json_object_set_member(pJsonObject, portKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
TicketCustomFieldDetails::getCustomerServerAccess()
{
	return customerServerAccess;
}

void
TicketCustomFieldDetails::setCustomerServerAccess(std::string  customerServerAccess)
{
	this->customerServerAccess = customerServerAccess;
}

std::string
TicketCustomFieldDetails::getIpAddress()
{
	return ipAddress;
}

void
TicketCustomFieldDetails::setIpAddress(std::string  ipAddress)
{
	this->ipAddress = ipAddress;
}

std::string
TicketCustomFieldDetails::getRootPassword()
{
	return rootPassword;
}

void
TicketCustomFieldDetails::setRootPassword(std::string  rootPassword)
{
	this->rootPassword = rootPassword;
}

std::string
TicketCustomFieldDetails::getSudoUser()
{
	return sudoUser;
}

void
TicketCustomFieldDetails::setSudoUser(std::string  sudoUser)
{
	this->sudoUser = sudoUser;
}

int
TicketCustomFieldDetails::getSudoPassword()
{
	return sudoPassword;
}

void
TicketCustomFieldDetails::setSudoPassword(int  sudoPassword)
{
	this->sudoPassword = sudoPassword;
}

int
TicketCustomFieldDetails::getPort()
{
	return port;
}

void
TicketCustomFieldDetails::setPort(int  port)
{
	this->port = port;
}


