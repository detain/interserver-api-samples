#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "Tickets_countArray.h"

using namespace std;
using namespace Tizen::ArtikCloud;

Tickets_countArray::Tickets_countArray()
{
	//__init();
}

Tickets_countArray::~Tickets_countArray()
{
	//__cleanup();
}

void
Tickets_countArray::__init()
{
	//open = int(0);
	//onHold = int(0);
	//closed = int(0);
}

void
Tickets_countArray::__cleanup()
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
	//if(closed != NULL) {
	//
	//delete closed;
	//closed = NULL;
	//}
	//
}

void
Tickets_countArray::fromJson(char* jsonStr)
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
	const gchar *closedKey = "Closed";
	node = json_object_get_member(pJsonObject, closedKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&closed, node, "int", "");
		} else {
			
		}
	}
}

Tickets_countArray::Tickets_countArray(char* json)
{
	this->fromJson(json);
}

char*
Tickets_countArray::toJson()
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
	if (isprimitive("int")) {
		int obj = getClosed();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *closedKey = "Closed";
	json_object_set_member(pJsonObject, closedKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

int
Tickets_countArray::getOpen()
{
	return open;
}

void
Tickets_countArray::setOpen(int  open)
{
	this->open = open;
}

int
Tickets_countArray::getOnHold()
{
	return onHold;
}

void
Tickets_countArray::setOnHold(int  onHold)
{
	this->onHold = onHold;
}

int
Tickets_countArray::getClosed()
{
	return closed;
}

void
Tickets_countArray::setClosed(int  closed)
{
	this->closed = closed;
}


