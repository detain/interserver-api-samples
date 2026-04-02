#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "AddServer_200_response.h"

using namespace std;
using namespace Tizen::ArtikCloud;

AddServer_200_response::AddServer_200_response()
{
	//__init();
}

AddServer_200_response::~AddServer_200_response()
{
	//__cleanup();
}

void
AddServer_200_response::__init()
{
	//text = std::string();
	//invoice = int(0);
	//order = int(0);
}

void
AddServer_200_response::__cleanup()
{
	//if(text != NULL) {
	//
	//delete text;
	//text = NULL;
	//}
	//if(invoice != NULL) {
	//
	//delete invoice;
	//invoice = NULL;
	//}
	//if(order != NULL) {
	//
	//delete order;
	//order = NULL;
	//}
	//
}

void
AddServer_200_response::fromJson(char* jsonStr)
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
	const gchar *invoiceKey = "invoice";
	node = json_object_get_member(pJsonObject, invoiceKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&invoice, node, "int", "");
		} else {
			
		}
	}
	const gchar *orderKey = "order";
	node = json_object_get_member(pJsonObject, orderKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&order, node, "int", "");
		} else {
			
		}
	}
}

AddServer_200_response::AddServer_200_response(char* json)
{
	this->fromJson(json);
}

char*
AddServer_200_response::toJson()
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
		int obj = getInvoice();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *invoiceKey = "invoice";
	json_object_set_member(pJsonObject, invoiceKey, node);
	if (isprimitive("int")) {
		int obj = getOrder();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *orderKey = "order";
	json_object_set_member(pJsonObject, orderKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
AddServer_200_response::getText()
{
	return text;
}

void
AddServer_200_response::setText(std::string  text)
{
	this->text = text;
}

int
AddServer_200_response::getInvoice()
{
	return invoice;
}

void
AddServer_200_response::setInvoice(int  invoice)
{
	this->invoice = invoice;
}

int
AddServer_200_response::getOrder()
{
	return order;
}

void
AddServer_200_response::setOrder(int  order)
{
	this->order = order;
}


