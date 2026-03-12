#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "BillingPrepayRequest.h"

using namespace std;
using namespace Tizen::ArtikCloud;

BillingPrepayRequest::BillingPrepayRequest()
{
	//__init();
}

BillingPrepayRequest::~BillingPrepayRequest()
{
	//__cleanup();
}

void
BillingPrepayRequest::__init()
{
	//r_module = std::string();
	//amount = double(0);
	//automatic_use = std::string();
}

void
BillingPrepayRequest::__cleanup()
{
	//if(r_module != NULL) {
	//
	//delete r_module;
	//r_module = NULL;
	//}
	//if(amount != NULL) {
	//
	//delete amount;
	//amount = NULL;
	//}
	//if(automatic_use != NULL) {
	//
	//delete automatic_use;
	//automatic_use = NULL;
	//}
	//
}

void
BillingPrepayRequest::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *r_moduleKey = "module";
	node = json_object_get_member(pJsonObject, r_moduleKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&r_module, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *amountKey = "amount";
	node = json_object_get_member(pJsonObject, amountKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&amount, node, "long long", "");
		} else {
			
			long long* obj = static_cast<long long*> (&amount);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *automatic_useKey = "automatic_use";
	node = json_object_get_member(pJsonObject, automatic_useKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&automatic_use, node, "std::string", "");
		} else {
			
		}
	}
}

BillingPrepayRequest::BillingPrepayRequest(char* json)
{
	this->fromJson(json);
}

char*
BillingPrepayRequest::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getRModule();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *r_moduleKey = "module";
	json_object_set_member(pJsonObject, r_moduleKey, node);
	if (isprimitive("long long")) {
		long long obj = getAmount();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
		long long obj = static_cast<long long> (getAmount());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *amountKey = "amount";
	json_object_set_member(pJsonObject, amountKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getAutomaticUse();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *automatic_useKey = "automatic_use";
	json_object_set_member(pJsonObject, automatic_useKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
BillingPrepayRequest::getRModule()
{
	return r_module;
}

void
BillingPrepayRequest::setRModule(std::string  r_module)
{
	this->r_module = r_module;
}

long long
BillingPrepayRequest::getAmount()
{
	return amount;
}

void
BillingPrepayRequest::setAmount(long long  amount)
{
	this->amount = amount;
}

std::string
BillingPrepayRequest::getAutomaticUse()
{
	return automatic_use;
}

void
BillingPrepayRequest::setAutomaticUse(std::string  automatic_use)
{
	this->automatic_use = automatic_use;
}


