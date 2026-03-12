#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "ServersBuyNowResponse.h"

using namespace std;
using namespace Tizen::ArtikCloud;

ServersBuyNowResponse::ServersBuyNowResponse()
{
	//__init();
}

ServersBuyNowResponse::~ServersBuyNowResponse()
{
	//__cleanup();
}

void
ServersBuyNowResponse::__init()
{
	//success = bool(false);
	//text = std::string();
	//order_details = new ServersBuyNowResponse_order_details();
}

void
ServersBuyNowResponse::__cleanup()
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
	//if(order_details != NULL) {
	//
	//delete order_details;
	//order_details = NULL;
	//}
	//
}

void
ServersBuyNowResponse::fromJson(char* jsonStr)
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
	const gchar *order_detailsKey = "order_details";
	node = json_object_get_member(pJsonObject, order_detailsKey);
	if (node !=NULL) {
	

		if (isprimitive("ServersBuyNowResponse_order_details")) {
			jsonToValue(&order_details, node, "ServersBuyNowResponse_order_details", "ServersBuyNowResponse_order_details");
		} else {
			
			ServersBuyNowResponse_order_details* obj = static_cast<ServersBuyNowResponse_order_details*> (&order_details);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
}

ServersBuyNowResponse::ServersBuyNowResponse(char* json)
{
	this->fromJson(json);
}

char*
ServersBuyNowResponse::toJson()
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
	if (isprimitive("ServersBuyNowResponse_order_details")) {
		ServersBuyNowResponse_order_details obj = getOrderDetails();
		node = converttoJson(&obj, "ServersBuyNowResponse_order_details", "");
	}
	else {
		
		ServersBuyNowResponse_order_details obj = static_cast<ServersBuyNowResponse_order_details> (getOrderDetails());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *order_detailsKey = "order_details";
	json_object_set_member(pJsonObject, order_detailsKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

bool
ServersBuyNowResponse::getSuccess()
{
	return success;
}

void
ServersBuyNowResponse::setSuccess(bool  success)
{
	this->success = success;
}

std::string
ServersBuyNowResponse::getText()
{
	return text;
}

void
ServersBuyNowResponse::setText(std::string  text)
{
	this->text = text;
}

ServersBuyNowResponse_order_details
ServersBuyNowResponse::getOrderDetails()
{
	return order_details;
}

void
ServersBuyNowResponse::setOrderDetails(ServersBuyNowResponse_order_details  order_details)
{
	this->order_details = order_details;
}


