#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "LoginErrorResponse.h"

using namespace std;
using namespace Tizen::ArtikCloud;

LoginErrorResponse::LoginErrorResponse()
{
	//__init();
}

LoginErrorResponse::~LoginErrorResponse()
{
	//__cleanup();
}

void
LoginErrorResponse::__init()
{
	//message = std::string();
	//field = std::string();
}

void
LoginErrorResponse::__cleanup()
{
	//if(message != NULL) {
	//
	//delete message;
	//message = NULL;
	//}
	//if(field != NULL) {
	//
	//delete field;
	//field = NULL;
	//}
	//
}

void
LoginErrorResponse::fromJson(char* jsonStr)
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
	const gchar *fieldKey = "field";
	node = json_object_get_member(pJsonObject, fieldKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&field, node, "std::string", "");
		} else {
			
		}
	}
}

LoginErrorResponse::LoginErrorResponse(char* json)
{
	this->fromJson(json);
}

char*
LoginErrorResponse::toJson()
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
	if (isprimitive("std::string")) {
		std::string obj = getField();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *fieldKey = "field";
	json_object_set_member(pJsonObject, fieldKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
LoginErrorResponse::getMessage()
{
	return message;
}

void
LoginErrorResponse::setMessage(std::string  message)
{
	this->message = message;
}

std::string
LoginErrorResponse::getField()
{
	return field;
}

void
LoginErrorResponse::setField(std::string  field)
{
	this->field = field;
}


