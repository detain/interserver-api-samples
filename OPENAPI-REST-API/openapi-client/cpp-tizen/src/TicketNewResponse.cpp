#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "TicketNewResponse.h"

using namespace std;
using namespace Tizen::ArtikCloud;

TicketNewResponse::TicketNewResponse()
{
	//__init();
}

TicketNewResponse::~TicketNewResponse()
{
	//__cleanup();
}

void
TicketNewResponse::__init()
{
	//text = std::string();
	//success = bool(false);
	//ticket_id = int(0);
}

void
TicketNewResponse::__cleanup()
{
	//if(text != NULL) {
	//
	//delete text;
	//text = NULL;
	//}
	//if(success != NULL) {
	//
	//delete success;
	//success = NULL;
	//}
	//if(ticket_id != NULL) {
	//
	//delete ticket_id;
	//ticket_id = NULL;
	//}
	//
}

void
TicketNewResponse::fromJson(char* jsonStr)
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
	const gchar *successKey = "success";
	node = json_object_get_member(pJsonObject, successKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&success, node, "bool", "");
		} else {
			
		}
	}
	const gchar *ticket_idKey = "ticket_id";
	node = json_object_get_member(pJsonObject, ticket_idKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&ticket_id, node, "int", "");
		} else {
			
		}
	}
}

TicketNewResponse::TicketNewResponse(char* json)
{
	this->fromJson(json);
}

char*
TicketNewResponse::toJson()
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
	if (isprimitive("bool")) {
		bool obj = getSuccess();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *successKey = "success";
	json_object_set_member(pJsonObject, successKey, node);
	if (isprimitive("int")) {
		int obj = getTicketId();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *ticket_idKey = "ticket_id";
	json_object_set_member(pJsonObject, ticket_idKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
TicketNewResponse::getText()
{
	return text;
}

void
TicketNewResponse::setText(std::string  text)
{
	this->text = text;
}

bool
TicketNewResponse::getSuccess()
{
	return success;
}

void
TicketNewResponse::setSuccess(bool  success)
{
	this->success = success;
}

int
TicketNewResponse::getTicketId()
{
	return ticket_id;
}

void
TicketNewResponse::setTicketId(int  ticket_id)
{
	this->ticket_id = ticket_id;
}


