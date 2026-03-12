#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "ServerRow.h"

using namespace std;
using namespace Tizen::ArtikCloud;

ServerRow::ServerRow()
{
	//__init();
}

ServerRow::~ServerRow()
{
	//__cleanup();
}

void
ServerRow::__init()
{
	//server_id = std::string();
	//account_lid = std::string();
	//server_hostname = std::string();
	//server_status = std::string();
}

void
ServerRow::__cleanup()
{
	//if(server_id != NULL) {
	//
	//delete server_id;
	//server_id = NULL;
	//}
	//if(account_lid != NULL) {
	//
	//delete account_lid;
	//account_lid = NULL;
	//}
	//if(server_hostname != NULL) {
	//
	//delete server_hostname;
	//server_hostname = NULL;
	//}
	//if(server_status != NULL) {
	//
	//delete server_status;
	//server_status = NULL;
	//}
	//
}

void
ServerRow::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *server_idKey = "server_id";
	node = json_object_get_member(pJsonObject, server_idKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&server_id, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *account_lidKey = "account_lid";
	node = json_object_get_member(pJsonObject, account_lidKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&account_lid, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *server_hostnameKey = "server_hostname";
	node = json_object_get_member(pJsonObject, server_hostnameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&server_hostname, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *server_statusKey = "server_status";
	node = json_object_get_member(pJsonObject, server_statusKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&server_status, node, "std::string", "");
		} else {
			
		}
	}
}

ServerRow::ServerRow(char* json)
{
	this->fromJson(json);
}

char*
ServerRow::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getServerId();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *server_idKey = "server_id";
	json_object_set_member(pJsonObject, server_idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getAccountLid();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *account_lidKey = "account_lid";
	json_object_set_member(pJsonObject, account_lidKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getServerHostname();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *server_hostnameKey = "server_hostname";
	json_object_set_member(pJsonObject, server_hostnameKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getServerStatus();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *server_statusKey = "server_status";
	json_object_set_member(pJsonObject, server_statusKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
ServerRow::getServerId()
{
	return server_id;
}

void
ServerRow::setServerId(std::string  server_id)
{
	this->server_id = server_id;
}

std::string
ServerRow::getAccountLid()
{
	return account_lid;
}

void
ServerRow::setAccountLid(std::string  account_lid)
{
	this->account_lid = account_lid;
}

std::string
ServerRow::getServerHostname()
{
	return server_hostname;
}

void
ServerRow::setServerHostname(std::string  server_hostname)
{
	this->server_hostname = server_hostname;
}

std::string
ServerRow::getServerStatus()
{
	return server_status;
}

void
ServerRow::setServerStatus(std::string  server_status)
{
	this->server_status = server_status;
}


