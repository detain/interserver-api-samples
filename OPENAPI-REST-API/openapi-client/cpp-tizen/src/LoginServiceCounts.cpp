#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "LoginServiceCounts.h"

using namespace std;
using namespace Tizen::ArtikCloud;

LoginServiceCounts::LoginServiceCounts()
{
	//__init();
}

LoginServiceCounts::~LoginServiceCounts()
{
	//__cleanup();
}

void
LoginServiceCounts::__init()
{
	//vps = int(0);
	//websites = int(0);
	//servers = int(0);
}

void
LoginServiceCounts::__cleanup()
{
	//if(vps != NULL) {
	//
	//delete vps;
	//vps = NULL;
	//}
	//if(websites != NULL) {
	//
	//delete websites;
	//websites = NULL;
	//}
	//if(servers != NULL) {
	//
	//delete servers;
	//servers = NULL;
	//}
	//
}

void
LoginServiceCounts::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *vpsKey = "vps";
	node = json_object_get_member(pJsonObject, vpsKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&vps, node, "int", "");
		} else {
			
		}
	}
	const gchar *websitesKey = "websites";
	node = json_object_get_member(pJsonObject, websitesKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&websites, node, "int", "");
		} else {
			
		}
	}
	const gchar *serversKey = "servers";
	node = json_object_get_member(pJsonObject, serversKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&servers, node, "int", "");
		} else {
			
		}
	}
}

LoginServiceCounts::LoginServiceCounts(char* json)
{
	this->fromJson(json);
}

char*
LoginServiceCounts::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("int")) {
		int obj = getVps();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *vpsKey = "vps";
	json_object_set_member(pJsonObject, vpsKey, node);
	if (isprimitive("int")) {
		int obj = getWebsites();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *websitesKey = "websites";
	json_object_set_member(pJsonObject, websitesKey, node);
	if (isprimitive("int")) {
		int obj = getServers();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *serversKey = "servers";
	json_object_set_member(pJsonObject, serversKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

int
LoginServiceCounts::getVps()
{
	return vps;
}

void
LoginServiceCounts::setVps(int  vps)
{
	this->vps = vps;
}

int
LoginServiceCounts::getWebsites()
{
	return websites;
}

void
LoginServiceCounts::setWebsites(int  websites)
{
	this->websites = websites;
}

int
LoginServiceCounts::getServers()
{
	return servers;
}

void
LoginServiceCounts::setServers(int  servers)
{
	this->servers = servers;
}


