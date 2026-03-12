#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "BillingAddCcRequest.h"

using namespace std;
using namespace Tizen::ArtikCloud;

BillingAddCcRequest::BillingAddCcRequest()
{
	//__init();
}

BillingAddCcRequest::~BillingAddCcRequest()
{
	//__cleanup();
}

void
BillingAddCcRequest::__init()
{
	//name = std::string();
	//address = std::string();
	//city = std::string();
	//state = std::string();
	//country = std::string();
	//zip = std::string();
	//cc = std::string();
	//cc_exp = std::string();
	//cc_ccv2 = std::string();
}

void
BillingAddCcRequest::__cleanup()
{
	//if(name != NULL) {
	//
	//delete name;
	//name = NULL;
	//}
	//if(address != NULL) {
	//
	//delete address;
	//address = NULL;
	//}
	//if(city != NULL) {
	//
	//delete city;
	//city = NULL;
	//}
	//if(state != NULL) {
	//
	//delete state;
	//state = NULL;
	//}
	//if(country != NULL) {
	//
	//delete country;
	//country = NULL;
	//}
	//if(zip != NULL) {
	//
	//delete zip;
	//zip = NULL;
	//}
	//if(cc != NULL) {
	//
	//delete cc;
	//cc = NULL;
	//}
	//if(cc_exp != NULL) {
	//
	//delete cc_exp;
	//cc_exp = NULL;
	//}
	//if(cc_ccv2 != NULL) {
	//
	//delete cc_ccv2;
	//cc_ccv2 = NULL;
	//}
	//
}

void
BillingAddCcRequest::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *nameKey = "name";
	node = json_object_get_member(pJsonObject, nameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&name, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *addressKey = "address";
	node = json_object_get_member(pJsonObject, addressKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&address, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *cityKey = "city";
	node = json_object_get_member(pJsonObject, cityKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&city, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *stateKey = "state";
	node = json_object_get_member(pJsonObject, stateKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&state, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *countryKey = "country";
	node = json_object_get_member(pJsonObject, countryKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&country, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *zipKey = "zip";
	node = json_object_get_member(pJsonObject, zipKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&zip, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *ccKey = "cc";
	node = json_object_get_member(pJsonObject, ccKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&cc, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *cc_expKey = "cc_exp";
	node = json_object_get_member(pJsonObject, cc_expKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&cc_exp, node, "std::string", "");
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
}

BillingAddCcRequest::BillingAddCcRequest(char* json)
{
	this->fromJson(json);
}

char*
BillingAddCcRequest::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *nameKey = "name";
	json_object_set_member(pJsonObject, nameKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getAddress();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *addressKey = "address";
	json_object_set_member(pJsonObject, addressKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getCity();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *cityKey = "city";
	json_object_set_member(pJsonObject, cityKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getState();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *stateKey = "state";
	json_object_set_member(pJsonObject, stateKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getCountry();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *countryKey = "country";
	json_object_set_member(pJsonObject, countryKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getZip();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *zipKey = "zip";
	json_object_set_member(pJsonObject, zipKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getCc();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *ccKey = "cc";
	json_object_set_member(pJsonObject, ccKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getCcExp();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *cc_expKey = "cc_exp";
	json_object_set_member(pJsonObject, cc_expKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getCcCcv2();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *cc_ccv2Key = "cc_ccv2";
	json_object_set_member(pJsonObject, cc_ccv2Key, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
BillingAddCcRequest::getName()
{
	return name;
}

void
BillingAddCcRequest::setName(std::string  name)
{
	this->name = name;
}

std::string
BillingAddCcRequest::getAddress()
{
	return address;
}

void
BillingAddCcRequest::setAddress(std::string  address)
{
	this->address = address;
}

std::string
BillingAddCcRequest::getCity()
{
	return city;
}

void
BillingAddCcRequest::setCity(std::string  city)
{
	this->city = city;
}

std::string
BillingAddCcRequest::getState()
{
	return state;
}

void
BillingAddCcRequest::setState(std::string  state)
{
	this->state = state;
}

std::string
BillingAddCcRequest::getCountry()
{
	return country;
}

void
BillingAddCcRequest::setCountry(std::string  country)
{
	this->country = country;
}

std::string
BillingAddCcRequest::getZip()
{
	return zip;
}

void
BillingAddCcRequest::setZip(std::string  zip)
{
	this->zip = zip;
}

std::string
BillingAddCcRequest::getCc()
{
	return cc;
}

void
BillingAddCcRequest::setCc(std::string  cc)
{
	this->cc = cc;
}

std::string
BillingAddCcRequest::getCcExp()
{
	return cc_exp;
}

void
BillingAddCcRequest::setCcExp(std::string  cc_exp)
{
	this->cc_exp = cc_exp;
}

std::string
BillingAddCcRequest::getCcCcv2()
{
	return cc_ccv2;
}

void
BillingAddCcRequest::setCcCcv2(std::string  cc_ccv2)
{
	this->cc_ccv2 = cc_ccv2;
}


