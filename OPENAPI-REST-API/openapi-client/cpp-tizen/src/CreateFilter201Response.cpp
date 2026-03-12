#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "CreateFilter_201_response.h"

using namespace std;
using namespace Tizen::ArtikCloud;

CreateFilter_201_response::CreateFilter_201_response()
{
	//__init();
}

CreateFilter_201_response::~CreateFilter_201_response()
{
	//__cleanup();
}

void
CreateFilter_201_response::__init()
{
	//success = bool(false);
	//text = std::string();
}

void
CreateFilter_201_response::__cleanup()
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
CreateFilter_201_response::fromJson(char* jsonStr)
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

CreateFilter_201_response::CreateFilter_201_response(char* json)
{
	this->fromJson(json);
}

char*
CreateFilter_201_response::toJson()
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
CreateFilter_201_response::getSuccess()
{
	return success;
}

void
CreateFilter_201_response::setSuccess(bool  success)
{
	this->success = success;
}

std::string
CreateFilter_201_response::getText()
{
	return text;
}

void
CreateFilter_201_response::setText(std::string  text)
{
	this->text = text;
}


