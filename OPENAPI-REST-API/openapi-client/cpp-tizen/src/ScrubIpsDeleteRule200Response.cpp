#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "ScrubIpsDeleteRule_200_response.h"

using namespace std;
using namespace Tizen::ArtikCloud;

ScrubIpsDeleteRule_200_response::ScrubIpsDeleteRule_200_response()
{
	//__init();
}

ScrubIpsDeleteRule_200_response::~ScrubIpsDeleteRule_200_response()
{
	//__cleanup();
}

void
ScrubIpsDeleteRule_200_response::__init()
{
	//success = bool(false);
	//text = std::string();
}

void
ScrubIpsDeleteRule_200_response::__cleanup()
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
	//
}

void
ScrubIpsDeleteRule_200_response::fromJson(char* jsonStr)
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
}

ScrubIpsDeleteRule_200_response::ScrubIpsDeleteRule_200_response(char* json)
{
	this->fromJson(json);
}

char*
ScrubIpsDeleteRule_200_response::toJson()
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
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

bool
ScrubIpsDeleteRule_200_response::getSuccess()
{
	return success;
}

void
ScrubIpsDeleteRule_200_response::setSuccess(bool  success)
{
	this->success = success;
}

std::string
ScrubIpsDeleteRule_200_response::getText()
{
	return text;
}

void
ScrubIpsDeleteRule_200_response::setText(std::string  text)
{
	this->text = text;
}


