#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "ServerIpmiLiveRequest.h"

using namespace std;
using namespace Tizen::ArtikCloud;

ServerIpmiLiveRequest::ServerIpmiLiveRequest()
{
	//__init();
}

ServerIpmiLiveRequest::~ServerIpmiLiveRequest()
{
	//__cleanup();
}

void
ServerIpmiLiveRequest::__init()
{
	//ip = std::string();
	//asset = int(0);
}

void
ServerIpmiLiveRequest::__cleanup()
{
	//if(ip != NULL) {
	//
	//delete ip;
	//ip = NULL;
	//}
	//if(asset != NULL) {
	//
	//delete asset;
	//asset = NULL;
	//}
	//
}

void
ServerIpmiLiveRequest::fromJson(char* jsonStr)
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
	const gchar *assetKey = "asset";
	node = json_object_get_member(pJsonObject, assetKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&asset, node, "int", "");
		} else {
			
		}
	}
}

ServerIpmiLiveRequest::ServerIpmiLiveRequest(char* json)
{
	this->fromJson(json);
}

char*
ServerIpmiLiveRequest::toJson()
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
	if (isprimitive("int")) {
		int obj = getAsset();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *assetKey = "asset";
	json_object_set_member(pJsonObject, assetKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
ServerIpmiLiveRequest::getIp()
{
	return ip;
}

void
ServerIpmiLiveRequest::setIp(std::string  ip)
{
	this->ip = ip;
}

int
ServerIpmiLiveRequest::getAsset()
{
	return asset;
}

void
ServerIpmiLiveRequest::setAsset(int  asset)
{
	this->asset = asset;
}


