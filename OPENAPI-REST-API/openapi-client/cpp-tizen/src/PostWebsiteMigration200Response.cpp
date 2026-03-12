#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "PostWebsiteMigration_200_response.h"

using namespace std;
using namespace Tizen::ArtikCloud;

PostWebsiteMigration_200_response::PostWebsiteMigration_200_response()
{
	//__init();
}

PostWebsiteMigration_200_response::~PostWebsiteMigration_200_response()
{
	//__cleanup();
}

void
PostWebsiteMigration_200_response::__init()
{
	//text = std::string();
	//ticket = int(0);
}

void
PostWebsiteMigration_200_response::__cleanup()
{
	//if(text != NULL) {
	//
	//delete text;
	//text = NULL;
	//}
	//if(ticket != NULL) {
	//
	//delete ticket;
	//ticket = NULL;
	//}
	//
}

void
PostWebsiteMigration_200_response::fromJson(char* jsonStr)
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
	const gchar *ticketKey = "ticket";
	node = json_object_get_member(pJsonObject, ticketKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&ticket, node, "int", "");
		} else {
			
		}
	}
}

PostWebsiteMigration_200_response::PostWebsiteMigration_200_response(char* json)
{
	this->fromJson(json);
}

char*
PostWebsiteMigration_200_response::toJson()
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
	if (isprimitive("int")) {
		int obj = getTicket();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *ticketKey = "ticket";
	json_object_set_member(pJsonObject, ticketKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
PostWebsiteMigration_200_response::getText()
{
	return text;
}

void
PostWebsiteMigration_200_response::setText(std::string  text)
{
	this->text = text;
}

int
PostWebsiteMigration_200_response::getTicket()
{
	return ticket;
}

void
PostWebsiteMigration_200_response::setTicket(int  ticket)
{
	this->ticket = ticket;
}


