#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "BillingPaymentMethodRequest.h"

using namespace std;
using namespace Tizen::ArtikCloud;

BillingPaymentMethodRequest::BillingPaymentMethodRequest()
{
	//__init();
}

BillingPaymentMethodRequest::~BillingPaymentMethodRequest()
{
	//__cleanup();
}

void
BillingPaymentMethodRequest::__init()
{
	//payment_method = std::string();
	//cc_auto = std::string();
}

void
BillingPaymentMethodRequest::__cleanup()
{
	//if(payment_method != NULL) {
	//
	//delete payment_method;
	//payment_method = NULL;
	//}
	//if(cc_auto != NULL) {
	//
	//delete cc_auto;
	//cc_auto = NULL;
	//}
	//
}

void
BillingPaymentMethodRequest::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *payment_methodKey = "payment_method";
	node = json_object_get_member(pJsonObject, payment_methodKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&payment_method, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *cc_autoKey = "cc_auto";
	node = json_object_get_member(pJsonObject, cc_autoKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&cc_auto, node, "std::string", "");
		} else {
			
		}
	}
}

BillingPaymentMethodRequest::BillingPaymentMethodRequest(char* json)
{
	this->fromJson(json);
}

char*
BillingPaymentMethodRequest::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getPaymentMethod();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *payment_methodKey = "payment_method";
	json_object_set_member(pJsonObject, payment_methodKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getCcAuto();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *cc_autoKey = "cc_auto";
	json_object_set_member(pJsonObject, cc_autoKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
BillingPaymentMethodRequest::getPaymentMethod()
{
	return payment_method;
}

void
BillingPaymentMethodRequest::setPaymentMethod(std::string  payment_method)
{
	this->payment_method = payment_method;
}

std::string
BillingPaymentMethodRequest::getCcAuto()
{
	return cc_auto;
}

void
BillingPaymentMethodRequest::setCcAuto(std::string  cc_auto)
{
	this->cc_auto = cc_auto;
}


