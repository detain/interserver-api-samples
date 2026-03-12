#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "ServerIpmiPowerRequest.h"

using namespace std;
using namespace Tizen::ArtikCloud;

ServerIpmiPowerRequest::ServerIpmiPowerRequest()
{
	//__init();
}

ServerIpmiPowerRequest::~ServerIpmiPowerRequest()
{
	//__cleanup();
}

void
ServerIpmiPowerRequest::__init()
{
	//action = std::string();
	//asset = int(0);
}

void
ServerIpmiPowerRequest::__cleanup()
{
	//if(action != NULL) {
	//
	//delete action;
	//action = NULL;
	//}
	//if(asset != NULL) {
	//
	//delete asset;
	//asset = NULL;
	//}
	//
}

void
ServerIpmiPowerRequest::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *actionKey = "action";
	node = json_object_get_member(pJsonObject, actionKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&action, node, "std::string", "");
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

ServerIpmiPowerRequest::ServerIpmiPowerRequest(char* json)
{
	this->fromJson(json);
}

char*
ServerIpmiPowerRequest::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getAction();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *actionKey = "action";
	json_object_set_member(pJsonObject, actionKey, node);
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
ServerIpmiPowerRequest::getAction()
{
	return action;
}

void
ServerIpmiPowerRequest::setAction(std::string  action)
{
	this->action = action;
}

int
ServerIpmiPowerRequest::getAsset()
{
	return asset;
}

void
ServerIpmiPowerRequest::setAsset(int  asset)
{
	this->asset = asset;
}


