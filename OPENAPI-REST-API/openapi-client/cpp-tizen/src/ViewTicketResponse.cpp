#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "ViewTicketResponse.h"

using namespace std;
using namespace Tizen::ArtikCloud;

ViewTicketResponse::ViewTicketResponse()
{
	//__init();
}

ViewTicketResponse::~ViewTicketResponse()
{
	//__cleanup();
}

void
ViewTicketResponse::__init()
{
	//success = bool(false);
	//ticket = new TicketDetails();
	//ticket_custom_fields = new TicketCustomFieldDetails();
	//ticket_posts = new TicketPostDetails();
}

void
ViewTicketResponse::__cleanup()
{
	//if(success != NULL) {
	//
	//delete success;
	//success = NULL;
	//}
	//if(ticket != NULL) {
	//
	//delete ticket;
	//ticket = NULL;
	//}
	//if(ticket_custom_fields != NULL) {
	//
	//delete ticket_custom_fields;
	//ticket_custom_fields = NULL;
	//}
	//if(ticket_posts != NULL) {
	//
	//delete ticket_posts;
	//ticket_posts = NULL;
	//}
	//
}

void
ViewTicketResponse::fromJson(char* jsonStr)
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
	const gchar *ticketKey = "ticket";
	node = json_object_get_member(pJsonObject, ticketKey);
	if (node !=NULL) {
	

		if (isprimitive("TicketDetails")) {
			jsonToValue(&ticket, node, "TicketDetails", "TicketDetails");
		} else {
			
			TicketDetails* obj = static_cast<TicketDetails*> (&ticket);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *ticket_custom_fieldsKey = "ticket_custom_fields";
	node = json_object_get_member(pJsonObject, ticket_custom_fieldsKey);
	if (node !=NULL) {
	

		if (isprimitive("TicketCustomFieldDetails")) {
			jsonToValue(&ticket_custom_fields, node, "TicketCustomFieldDetails", "TicketCustomFieldDetails");
		} else {
			
			TicketCustomFieldDetails* obj = static_cast<TicketCustomFieldDetails*> (&ticket_custom_fields);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *ticket_postsKey = "ticket_posts";
	node = json_object_get_member(pJsonObject, ticket_postsKey);
	if (node !=NULL) {
	

		if (isprimitive("TicketPostDetails")) {
			jsonToValue(&ticket_posts, node, "TicketPostDetails", "TicketPostDetails");
		} else {
			
			TicketPostDetails* obj = static_cast<TicketPostDetails*> (&ticket_posts);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
}

ViewTicketResponse::ViewTicketResponse(char* json)
{
	this->fromJson(json);
}

char*
ViewTicketResponse::toJson()
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
	if (isprimitive("TicketDetails")) {
		TicketDetails obj = getTicket();
		node = converttoJson(&obj, "TicketDetails", "");
	}
	else {
		
		TicketDetails obj = static_cast<TicketDetails> (getTicket());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *ticketKey = "ticket";
	json_object_set_member(pJsonObject, ticketKey, node);
	if (isprimitive("TicketCustomFieldDetails")) {
		TicketCustomFieldDetails obj = getTicketCustomFields();
		node = converttoJson(&obj, "TicketCustomFieldDetails", "");
	}
	else {
		
		TicketCustomFieldDetails obj = static_cast<TicketCustomFieldDetails> (getTicketCustomFields());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *ticket_custom_fieldsKey = "ticket_custom_fields";
	json_object_set_member(pJsonObject, ticket_custom_fieldsKey, node);
	if (isprimitive("TicketPostDetails")) {
		TicketPostDetails obj = getTicketPosts();
		node = converttoJson(&obj, "TicketPostDetails", "");
	}
	else {
		
		TicketPostDetails obj = static_cast<TicketPostDetails> (getTicketPosts());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *ticket_postsKey = "ticket_posts";
	json_object_set_member(pJsonObject, ticket_postsKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

bool
ViewTicketResponse::getSuccess()
{
	return success;
}

void
ViewTicketResponse::setSuccess(bool  success)
{
	this->success = success;
}

TicketDetails
ViewTicketResponse::getTicket()
{
	return ticket;
}

void
ViewTicketResponse::setTicket(TicketDetails  ticket)
{
	this->ticket = ticket;
}

TicketCustomFieldDetails
ViewTicketResponse::getTicketCustomFields()
{
	return ticket_custom_fields;
}

void
ViewTicketResponse::setTicketCustomFields(TicketCustomFieldDetails  ticket_custom_fields)
{
	this->ticket_custom_fields = ticket_custom_fields;
}

TicketPostDetails
ViewTicketResponse::getTicketPosts()
{
	return ticket_posts;
}

void
ViewTicketResponse::setTicketPosts(TicketPostDetails  ticket_posts)
{
	this->ticket_posts = ticket_posts;
}


