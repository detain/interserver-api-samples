#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "ServersBuyNowError.h"

using namespace std;
using namespace Tizen::ArtikCloud;

ServersBuyNowError::ServersBuyNowError()
{
	//__init();
}

ServersBuyNowError::~ServersBuyNowError()
{
	//__cleanup();
}

void
ServersBuyNowError::__init()
{
	//success = bool(false);
	//text = std::string();
	//new std::list()std::list> errors;
}

void
ServersBuyNowError::__cleanup()
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
	//if(errors != NULL) {
	//errors.RemoveAll(true);
	//delete errors;
	//errors = NULL;
	//}
	//
}

void
ServersBuyNowError::fromJson(char* jsonStr)
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
	const gchar *errorsKey = "errors";
	node = json_object_get_member(pJsonObject, errorsKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<std::string> new_list;
			std::string inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("std::string")) {
					jsonToValue(&inst, temp_json, "std::string", "");
				} else {
					
				}
				new_list.push_back(inst);
			}
			errors = new_list;
		}
		
	}
}

ServersBuyNowError::ServersBuyNowError(char* json)
{
	this->fromJson(json);
}

char*
ServersBuyNowError::toJson()
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
		list<std::string> new_list = static_cast<list <std::string> > (getErrors());
		node = converttoJson(&new_list, "std::string", "array");
	} else {
		node = json_node_alloc();
		list<std::string> new_list = static_cast<list <std::string> > (getErrors());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
	}


	
	const gchar *errorsKey = "errors";
	json_object_set_member(pJsonObject, errorsKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

bool
ServersBuyNowError::getSuccess()
{
	return success;
}

void
ServersBuyNowError::setSuccess(bool  success)
{
	this->success = success;
}

std::string
ServersBuyNowError::getText()
{
	return text;
}

void
ServersBuyNowError::setText(std::string  text)
{
	this->text = text;
}

std::list<std::string>
ServersBuyNowError::getErrors()
{
	return errors;
}

void
ServersBuyNowError::setErrors(std::list <std::string> errors)
{
	this->errors = errors;
}


