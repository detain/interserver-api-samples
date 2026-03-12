#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "Home_ticketStatus.h"

using namespace std;
using namespace Tizen::ArtikCloud;

Home_ticketStatus::Home_ticketStatus()
{
	//__init();
}

Home_ticketStatus::~Home_ticketStatus()
{
	//__cleanup();
}

void
Home_ticketStatus::__init()
{
	//open = int(0);
	//onHold = int(0);
}

void
Home_ticketStatus::__cleanup()
{
	//if(open != NULL) {
	//
	//delete open;
	//open = NULL;
	//}
	//if(onHold != NULL) {
	//
	//delete onHold;
	//onHold = NULL;
	//}
	//
}

void
Home_ticketStatus::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *openKey = "Open";
	node = json_object_get_member(pJsonObject, openKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&open, node, "int", "");
		} else {
			
		}
	}
	const gchar *onHoldKey = "On Hold";
	node = json_object_get_member(pJsonObject, onHoldKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&onHold, node, "int", "");
		} else {
			
		}
	}
}

Home_ticketStatus::Home_ticketStatus(char* json)
{
	this->fromJson(json);
}

char*
Home_ticketStatus::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("int")) {
		int obj = getOpen();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *openKey = "Open";
	json_object_set_member(pJsonObject, openKey, node);
	if (isprimitive("int")) {
		int obj = getOnHold();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *onHoldKey = "On Hold";
	json_object_set_member(pJsonObject, onHoldKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

int
Home_ticketStatus::getOpen()
{
	return open;
}

void
Home_ticketStatus::setOpen(int  open)
{
	this->open = open;
}

int
Home_ticketStatus::getOnHold()
{
	return onHold;
}

void
Home_ticketStatus::setOnHold(int  onHold)
{
	this->onHold = onHold;
}


