#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "PlaceBuyNowServer_request.h"

using namespace std;
using namespace Tizen::ArtikCloud;

PlaceBuyNowServer_request::PlaceBuyNowServer_request()
{
	//__init();
}

PlaceBuyNowServer_request::~PlaceBuyNowServer_request()
{
	//__cleanup();
}

void
PlaceBuyNowServer_request::__init()
{
	//server_id = double(0);
	//server_hostname = std::string();
	//server_root_password = std::string();
}

void
PlaceBuyNowServer_request::__cleanup()
{
	//if(server_id != NULL) {
	//
	//delete server_id;
	//server_id = NULL;
	//}
	//if(server_hostname != NULL) {
	//
	//delete server_hostname;
	//server_hostname = NULL;
	//}
	//if(server_root_password != NULL) {
	//
	//delete server_root_password;
	//server_root_password = NULL;
	//}
	//
}

void
PlaceBuyNowServer_request::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *server_idKey = "server_id";
	node = json_object_get_member(pJsonObject, server_idKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&server_id, node, "long long", "");
		} else {
			
			long long* obj = static_cast<long long*> (&server_id);
			obj->fromJson(json_to_string(node, false));
			
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
	const gchar *server_root_passwordKey = "server_root_password";
	node = json_object_get_member(pJsonObject, server_root_passwordKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&server_root_password, node, "std::string", "");
		} else {
			
		}
	}
}

PlaceBuyNowServer_request::PlaceBuyNowServer_request(char* json)
{
	this->fromJson(json);
}

char*
PlaceBuyNowServer_request::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("long long")) {
		long long obj = getServerId();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
		long long obj = static_cast<long long> (getServerId());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *server_idKey = "server_id";
	json_object_set_member(pJsonObject, server_idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getServerHostname();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *server_hostnameKey = "server_hostname";
	json_object_set_member(pJsonObject, server_hostnameKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getServerRootPassword();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *server_root_passwordKey = "server_root_password";
	json_object_set_member(pJsonObject, server_root_passwordKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

long long
PlaceBuyNowServer_request::getServerId()
{
	return server_id;
}

void
PlaceBuyNowServer_request::setServerId(long long  server_id)
{
	this->server_id = server_id;
}

std::string
PlaceBuyNowServer_request::getServerHostname()
{
	return server_hostname;
}

void
PlaceBuyNowServer_request::setServerHostname(std::string  server_hostname)
{
	this->server_hostname = server_hostname;
}

std::string
PlaceBuyNowServer_request::getServerRootPassword()
{
	return server_root_password;
}

void
PlaceBuyNowServer_request::setServerRootPassword(std::string  server_root_password)
{
	this->server_root_password = server_root_password;
}


