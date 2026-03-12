#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "BillingVerifyCcRequest.h"

using namespace std;
using namespace Tizen::ArtikCloud;

BillingVerifyCcRequest::BillingVerifyCcRequest()
{
	//__init();
}

BillingVerifyCcRequest::~BillingVerifyCcRequest()
{
	//__cleanup();
}

void
BillingVerifyCcRequest::__init()
{
	//idx = int(0);
	//cc_ccv2 = std::string();
	//cc_amount1 = std::string();
	//cc_amount2 = std::string();
	//terms = bool(false);
}

void
BillingVerifyCcRequest::__cleanup()
{
	//if(idx != NULL) {
	//
	//delete idx;
	//idx = NULL;
	//}
	//if(cc_ccv2 != NULL) {
	//
	//delete cc_ccv2;
	//cc_ccv2 = NULL;
	//}
	//if(cc_amount1 != NULL) {
	//
	//delete cc_amount1;
	//cc_amount1 = NULL;
	//}
	//if(cc_amount2 != NULL) {
	//
	//delete cc_amount2;
	//cc_amount2 = NULL;
	//}
	//if(terms != NULL) {
	//
	//delete terms;
	//terms = NULL;
	//}
	//
}

void
BillingVerifyCcRequest::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *idxKey = "idx";
	node = json_object_get_member(pJsonObject, idxKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&idx, node, "int", "");
		} else {
			
		}
	}
	const gchar *cc_ccv2Key = "cc_ccv2";
	node = json_object_get_member(pJsonObject, cc_ccv2Key);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&cc_ccv2, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *cc_amount1Key = "cc_amount1";
	node = json_object_get_member(pJsonObject, cc_amount1Key);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&cc_amount1, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *cc_amount2Key = "cc_amount2";
	node = json_object_get_member(pJsonObject, cc_amount2Key);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&cc_amount2, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *termsKey = "terms";
	node = json_object_get_member(pJsonObject, termsKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&terms, node, "bool", "");
		} else {
			
		}
	}
}

BillingVerifyCcRequest::BillingVerifyCcRequest(char* json)
{
	this->fromJson(json);
}

char*
BillingVerifyCcRequest::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("int")) {
		int obj = getIdx();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *idxKey = "idx";
	json_object_set_member(pJsonObject, idxKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getCcCcv2();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *cc_ccv2Key = "cc_ccv2";
	json_object_set_member(pJsonObject, cc_ccv2Key, node);
	if (isprimitive("std::string")) {
		std::string obj = getCcAmount1();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *cc_amount1Key = "cc_amount1";
	json_object_set_member(pJsonObject, cc_amount1Key, node);
	if (isprimitive("std::string")) {
		std::string obj = getCcAmount2();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *cc_amount2Key = "cc_amount2";
	json_object_set_member(pJsonObject, cc_amount2Key, node);
	if (isprimitive("bool")) {
		bool obj = getTerms();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *termsKey = "terms";
	json_object_set_member(pJsonObject, termsKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

int
BillingVerifyCcRequest::getIdx()
{
	return idx;
}

void
BillingVerifyCcRequest::setIdx(int  idx)
{
	this->idx = idx;
}

std::string
BillingVerifyCcRequest::getCcCcv2()
{
	return cc_ccv2;
}

void
BillingVerifyCcRequest::setCcCcv2(std::string  cc_ccv2)
{
	this->cc_ccv2 = cc_ccv2;
}

std::string
BillingVerifyCcRequest::getCcAmount1()
{
	return cc_amount1;
}

void
BillingVerifyCcRequest::setCcAmount1(std::string  cc_amount1)
{
	this->cc_amount1 = cc_amount1;
}

std::string
BillingVerifyCcRequest::getCcAmount2()
{
	return cc_amount2;
}

void
BillingVerifyCcRequest::setCcAmount2(std::string  cc_amount2)
{
	this->cc_amount2 = cc_amount2;
}

bool
BillingVerifyCcRequest::getTerms()
{
	return terms;
}

void
BillingVerifyCcRequest::setTerms(bool  terms)
{
	this->terms = terms;
}


