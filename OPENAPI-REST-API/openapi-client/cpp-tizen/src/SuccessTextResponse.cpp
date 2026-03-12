#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "SuccessTextResponse.h"

using namespace std;
using namespace Tizen::ArtikCloud;

SuccessTextResponse::SuccessTextResponse()
{
	//__init();
}

SuccessTextResponse::~SuccessTextResponse()
{
	//__cleanup();
}

void
SuccessTextResponse::__init()
{
	//success = bool(false);
	//text = std::string();
	//action = std::string();
}

void
SuccessTextResponse::__cleanup()
{
	//if(success != NULL) {
	//
	//delete success;
	//success = NULL;
	//}
	//if(text != NULL) {
	//
	//delete text;
	//text = NULL;
	//}
	//if(action != NULL) {
	//
	//delete action;
	//action = NULL;
	//}
	//
}

void
SuccessTextResponse::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *successKey = "success";
	node = json_object_get_member(pJsonObject, successKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&success, node, "bool", "");
		} else {
			
		}
	}
	const gchar *textKey = "text";
	node = json_object_get_member(pJsonObject, textKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&text, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *actionKey = "action";
	node = json_object_get_member(pJsonObject, actionKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&action, node, "std::string", "");
		} else {
			
		}
	}
}

SuccessTextResponse::SuccessTextResponse(char* json)
{
	this->fromJson(json);
}

char*
SuccessTextResponse::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("bool")) {
		bool obj = getSuccess();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *successKey = "success";
	json_object_set_member(pJsonObject, successKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getText();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *textKey = "text";
	json_object_set_member(pJsonObject, textKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getAction();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *actionKey = "action";
	json_object_set_member(pJsonObject, actionKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

bool
SuccessTextResponse::getSuccess()
{
	return success;
}

void
SuccessTextResponse::setSuccess(bool  success)
{
	this->success = success;
}

std::string
SuccessTextResponse::getText()
{
	return text;
}

void
SuccessTextResponse::setText(std::string  text)
{
	this->text = text;
}

std::string
SuccessTextResponse::getAction()
{
	return action;
}

void
SuccessTextResponse::setAction(std::string  action)
{
	this->action = action;
}


