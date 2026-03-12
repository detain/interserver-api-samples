#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "InitiatePayment_200_response.h"

using namespace std;
using namespace Tizen::ArtikCloud;

InitiatePayment_200_response::InitiatePayment_200_response()
{
	//__init();
}

InitiatePayment_200_response::~InitiatePayment_200_response()
{
	//__cleanup();
}

void
InitiatePayment_200_response::__init()
{
	//type = std::string();
	//redirect = std::string();
	//action = std::string();
	//method = std::string();
	//items = null;
	//text = std::string();
}

void
InitiatePayment_200_response::__cleanup()
{
	//if(type != NULL) {
	//
	//delete type;
	//type = NULL;
	//}
	//if(redirect != NULL) {
	//
	//delete redirect;
	//redirect = NULL;
	//}
	//if(action != NULL) {
	//
	//delete action;
	//action = NULL;
	//}
	//if(method != NULL) {
	//
	//delete method;
	//method = NULL;
	//}
	//if(items != NULL) {
	//
	//delete items;
	//items = NULL;
	//}
	//if(text != NULL) {
	//
	//delete text;
	//text = NULL;
	//}
	//
}

void
InitiatePayment_200_response::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *typeKey = "type";
	node = json_object_get_member(pJsonObject, typeKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&type, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *redirectKey = "redirect";
	node = json_object_get_member(pJsonObject, redirectKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&redirect, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *actionKey = "action";
	node = json_object_get_member(pJsonObject, actionKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&action, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *methodKey = "method";
	node = json_object_get_member(pJsonObject, methodKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&method, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *itemsKey = "items";
	node = json_object_get_member(pJsonObject, itemsKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&items, node, "std::string", "");
		} else {
			
			std::string* obj = static_cast<std::string*> (&items);
			obj->fromJson(json_to_string(node, false));
			
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
}

InitiatePayment_200_response::InitiatePayment_200_response(char* json)
{
	this->fromJson(json);
}

char*
InitiatePayment_200_response::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getType();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *typeKey = "type";
	json_object_set_member(pJsonObject, typeKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getRedirect();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *redirectKey = "redirect";
	json_object_set_member(pJsonObject, redirectKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getAction();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *actionKey = "action";
	json_object_set_member(pJsonObject, actionKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getMethod();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *methodKey = "method";
	json_object_set_member(pJsonObject, methodKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getItems();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
		std::string obj = static_cast<std::string> (getItems());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *itemsKey = "items";
	json_object_set_member(pJsonObject, itemsKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getText();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *textKey = "text";
	json_object_set_member(pJsonObject, textKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
InitiatePayment_200_response::getType()
{
	return type;
}

void
InitiatePayment_200_response::setType(std::string  type)
{
	this->type = type;
}

std::string
InitiatePayment_200_response::getRedirect()
{
	return redirect;
}

void
InitiatePayment_200_response::setRedirect(std::string  redirect)
{
	this->redirect = redirect;
}

std::string
InitiatePayment_200_response::getAction()
{
	return action;
}

void
InitiatePayment_200_response::setAction(std::string  action)
{
	this->action = action;
}

std::string
InitiatePayment_200_response::getMethod()
{
	return method;
}

void
InitiatePayment_200_response::setMethod(std::string  method)
{
	this->method = method;
}

std::string
InitiatePayment_200_response::getItems()
{
	return items;
}

void
InitiatePayment_200_response::setItems(std::string  items)
{
	this->items = items;
}

std::string
InitiatePayment_200_response::getText()
{
	return text;
}

void
InitiatePayment_200_response::setText(std::string  text)
{
	this->text = text;
}


