#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "CreateGeoRule_400_response.h"

using namespace std;
using namespace Tizen::ArtikCloud;

CreateGeoRule_400_response::CreateGeoRule_400_response()
{
	//__init();
}

CreateGeoRule_400_response::~CreateGeoRule_400_response()
{
	//__cleanup();
}

void
CreateGeoRule_400_response::__init()
{
	//success = bool(false);
	//text = std::string();
	//new std::list()std::list> errors;
}

void
CreateGeoRule_400_response::__cleanup()
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
CreateGeoRule_400_response::fromJson(char* jsonStr)
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

CreateGeoRule_400_response::CreateGeoRule_400_response(char* json)
{
	this->fromJson(json);
}

char*
CreateGeoRule_400_response::toJson()
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
CreateGeoRule_400_response::getSuccess()
{
	return success;
}

void
CreateGeoRule_400_response::setSuccess(bool  success)
{
	this->success = success;
}

std::string
CreateGeoRule_400_response::getText()
{
	return text;
}

void
CreateGeoRule_400_response::setText(std::string  text)
{
	this->text = text;
}

std::list<std::string>
CreateGeoRule_400_response::getErrors()
{
	return errors;
}

void
CreateGeoRule_400_response::setErrors(std::list <std::string> errors)
{
	this->errors = errors;
}


