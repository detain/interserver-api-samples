#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "UpdateTicketResponseSchema.h"

using namespace std;
using namespace Tizen::ArtikCloud;

UpdateTicketResponseSchema::UpdateTicketResponseSchema()
{
	//__init();
}

UpdateTicketResponseSchema::~UpdateTicketResponseSchema()
{
	//__cleanup();
}

void
UpdateTicketResponseSchema::__init()
{
	//success = bool(false);
	//message = std::string();
}

void
UpdateTicketResponseSchema::__cleanup()
{
	//if(success != NULL) {
	//
	//delete success;
	//success = NULL;
	//}
	//if(message != NULL) {
	//
	//delete message;
	//message = NULL;
	//}
	//
}

void
UpdateTicketResponseSchema::fromJson(char* jsonStr)
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
	const gchar *messageKey = "message";
	node = json_object_get_member(pJsonObject, messageKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&message, node, "std::string", "");
		} else {
			
		}
	}
}

UpdateTicketResponseSchema::UpdateTicketResponseSchema(char* json)
{
	this->fromJson(json);
}

char*
UpdateTicketResponseSchema::toJson()
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

bool
UpdateTicketResponseSchema::getSuccess()
{
	return success;
}

void
UpdateTicketResponseSchema::setSuccess(bool  success)
{
	this->success = success;
}

std::string
UpdateTicketResponseSchema::getMessage()
{
	return message;
}

void
UpdateTicketResponseSchema::setMessage(std::string  message)
{
	this->message = message;
}


