#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "PostWebsiteBuyIp_200_response.h"

using namespace std;
using namespace Tizen::ArtikCloud;

PostWebsiteBuyIp_200_response::PostWebsiteBuyIp_200_response()
{
	//__init();
}

PostWebsiteBuyIp_200_response::~PostWebsiteBuyIp_200_response()
{
	//__cleanup();
}

void
PostWebsiteBuyIp_200_response::__init()
{
	//message = std::string();
	//success = bool(false);
}

void
PostWebsiteBuyIp_200_response::__cleanup()
{
	//if(message != NULL) {
	//
	//delete message;
	//message = NULL;
	//}
	//if(success != NULL) {
	//
	//delete success;
	//success = NULL;
	//}
	//
}

void
PostWebsiteBuyIp_200_response::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *messageKey = "message";
	node = json_object_get_member(pJsonObject, messageKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&message, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *successKey = "success";
	node = json_object_get_member(pJsonObject, successKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&success, node, "bool", "");
		} else {
			
		}
	}
}

PostWebsiteBuyIp_200_response::PostWebsiteBuyIp_200_response(char* json)
{
	this->fromJson(json);
}

char*
PostWebsiteBuyIp_200_response::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getMessage();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *messageKey = "message";
	json_object_set_member(pJsonObject, messageKey, node);
	if (isprimitive("bool")) {
		bool obj = getSuccess();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *successKey = "success";
	json_object_set_member(pJsonObject, successKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
PostWebsiteBuyIp_200_response::getMessage()
{
	return message;
}

void
PostWebsiteBuyIp_200_response::setMessage(std::string  message)
{
	this->message = message;
}

bool
PostWebsiteBuyIp_200_response::getSuccess()
{
	return success;
}

void
PostWebsiteBuyIp_200_response::setSuccess(bool  success)
{
	this->success = success;
}


