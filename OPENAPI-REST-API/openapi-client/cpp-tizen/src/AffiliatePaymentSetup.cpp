#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "AffiliatePaymentSetup.h"

using namespace std;
using namespace Tizen::ArtikCloud;

AffiliatePaymentSetup::AffiliatePaymentSetup()
{
	//__init();
}

AffiliatePaymentSetup::~AffiliatePaymentSetup()
{
	//__cleanup();
}

void
AffiliatePaymentSetup::__init()
{
	//affiliate_paypal = std::string();
	//affiliate_payment_method = std::string();
}

void
AffiliatePaymentSetup::__cleanup()
{
	//if(affiliate_paypal != NULL) {
	//
	//delete affiliate_paypal;
	//affiliate_paypal = NULL;
	//}
	//if(affiliate_payment_method != NULL) {
	//
	//delete affiliate_payment_method;
	//affiliate_payment_method = NULL;
	//}
	//
}

void
AffiliatePaymentSetup::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *affiliate_paypalKey = "affiliate_paypal";
	node = json_object_get_member(pJsonObject, affiliate_paypalKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&affiliate_paypal, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *affiliate_payment_methodKey = "affiliate_payment_method";
	node = json_object_get_member(pJsonObject, affiliate_payment_methodKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&affiliate_payment_method, node, "std::string", "");
		} else {
			
		}
	}
}

AffiliatePaymentSetup::AffiliatePaymentSetup(char* json)
{
	this->fromJson(json);
}

char*
AffiliatePaymentSetup::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getAffiliatePaypal();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *affiliate_paypalKey = "affiliate_paypal";
	json_object_set_member(pJsonObject, affiliate_paypalKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getAffiliatePaymentMethod();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *affiliate_payment_methodKey = "affiliate_payment_method";
	json_object_set_member(pJsonObject, affiliate_payment_methodKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
AffiliatePaymentSetup::getAffiliatePaypal()
{
	return affiliate_paypal;
}

void
AffiliatePaymentSetup::setAffiliatePaypal(std::string  affiliate_paypal)
{
	this->affiliate_paypal = affiliate_paypal;
}

std::string
AffiliatePaymentSetup::getAffiliatePaymentMethod()
{
	return affiliate_payment_method;
}

void
AffiliatePaymentSetup::setAffiliatePaymentMethod(std::string  affiliate_payment_method)
{
	this->affiliate_payment_method = affiliate_payment_method;
}


