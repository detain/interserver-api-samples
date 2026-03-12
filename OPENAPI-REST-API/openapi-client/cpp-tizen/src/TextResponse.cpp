#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "TextResponse.h"

using namespace std;
using namespace Tizen::ArtikCloud;

TextResponse::TextResponse()
{
	//__init();
}

TextResponse::~TextResponse()
{
	//__cleanup();
}

void
TextResponse::__init()
{
	//text = std::string();
	//message = std::string();
}

void
TextResponse::__cleanup()
{
	//if(text != NULL) {
	//
	//delete text;
	//text = NULL;
	//}
	//if(message != NULL) {
	//
	//delete message;
	//message = NULL;
	//}
	//
}

void
TextResponse::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *textKey = "text";
	node = json_object_get_member(pJsonObject, textKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&text, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *messageKey = "message";
	node = json_object_get_member(pJsonObject, messageKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&message, node, "std::string", "");
		} else {
			
		}
	}
}

TextResponse::TextResponse(char* json)
{
	this->fromJson(json);
}

char*
TextResponse::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getText();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *textKey = "text";
	json_object_set_member(pJsonObject, textKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getMessage();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *messageKey = "message";
	json_object_set_member(pJsonObject, messageKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
TextResponse::getText()
{
	return text;
}

void
TextResponse::setText(std::string  text)
{
	this->text = text;
}

std::string
TextResponse::getMessage()
{
	return message;
}

void
TextResponse::setMessage(std::string  message)
{
	this->message = message;
}


