#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "DomainLookupResponse.h"

using namespace std;
using namespace Tizen::ArtikCloud;

DomainLookupResponse::DomainLookupResponse()
{
	//__init();
}

DomainLookupResponse::~DomainLookupResponse()
{
	//__cleanup();
}

void
DomainLookupResponse::__init()
{
	//available = bool(false);
	//premium = bool(false);
	//website = bool(false);
	//domain_service = bool(false);
	//service = null;
	//whois_privacy = bool(false);
	//r_new = std::string();
	//renewal = std::string();
	//transfer = std::string();
	//fields = null;
	//currencies = null;
}

void
DomainLookupResponse::__cleanup()
{
	//if(available != NULL) {
	//
	//delete available;
	//available = NULL;
	//}
	//if(premium != NULL) {
	//
	//delete premium;
	//premium = NULL;
	//}
	//if(website != NULL) {
	//
	//delete website;
	//website = NULL;
	//}
	//if(domain_service != NULL) {
	//
	//delete domain_service;
	//domain_service = NULL;
	//}
	//if(service != NULL) {
	//
	//delete service;
	//service = NULL;
	//}
	//if(whois_privacy != NULL) {
	//
	//delete whois_privacy;
	//whois_privacy = NULL;
	//}
	//if(r_new != NULL) {
	//
	//delete r_new;
	//r_new = NULL;
	//}
	//if(renewal != NULL) {
	//
	//delete renewal;
	//renewal = NULL;
	//}
	//if(transfer != NULL) {
	//
	//delete transfer;
	//transfer = NULL;
	//}
	//if(fields != NULL) {
	//
	//delete fields;
	//fields = NULL;
	//}
	//if(currencies != NULL) {
	//
	//delete currencies;
	//currencies = NULL;
	//}
	//
}

void
DomainLookupResponse::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *availableKey = "available";
	node = json_object_get_member(pJsonObject, availableKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&available, node, "bool", "");
		} else {
			
		}
	}
	const gchar *premiumKey = "premium";
	node = json_object_get_member(pJsonObject, premiumKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&premium, node, "bool", "");
		} else {
			
		}
	}
	const gchar *websiteKey = "website";
	node = json_object_get_member(pJsonObject, websiteKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&website, node, "bool", "");
		} else {
			
		}
	}
	const gchar *domain_serviceKey = "domain_service";
	node = json_object_get_member(pJsonObject, domain_serviceKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&domain_service, node, "bool", "");
		} else {
			
		}
	}
	const gchar *serviceKey = "service";
	node = json_object_get_member(pJsonObject, serviceKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&service, node, "std::string", "");
		} else {
			
			std::string* obj = static_cast<std::string*> (&service);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *whois_privacyKey = "whois_privacy";
	node = json_object_get_member(pJsonObject, whois_privacyKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&whois_privacy, node, "bool", "");
		} else {
			
		}
	}
	const gchar *r_newKey = "new";
	node = json_object_get_member(pJsonObject, r_newKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&r_new, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *renewalKey = "renewal";
	node = json_object_get_member(pJsonObject, renewalKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&renewal, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *transferKey = "transfer";
	node = json_object_get_member(pJsonObject, transferKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&transfer, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *fieldsKey = "fields";
	node = json_object_get_member(pJsonObject, fieldsKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&fields, node, "std::string", "");
		} else {
			
			std::string* obj = static_cast<std::string*> (&fields);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *currenciesKey = "currencies";
	node = json_object_get_member(pJsonObject, currenciesKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&currencies, node, "std::string", "");
		} else {
			
			std::string* obj = static_cast<std::string*> (&currencies);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
}

DomainLookupResponse::DomainLookupResponse(char* json)
{
	this->fromJson(json);
}

char*
DomainLookupResponse::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("bool")) {
		bool obj = getAvailable();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *availableKey = "available";
	json_object_set_member(pJsonObject, availableKey, node);
	if (isprimitive("bool")) {
		bool obj = getPremium();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *premiumKey = "premium";
	json_object_set_member(pJsonObject, premiumKey, node);
	if (isprimitive("bool")) {
		bool obj = getWebsite();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *websiteKey = "website";
	json_object_set_member(pJsonObject, websiteKey, node);
	if (isprimitive("bool")) {
		bool obj = getDomainService();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *domain_serviceKey = "domain_service";
	json_object_set_member(pJsonObject, domain_serviceKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getService();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
		std::string obj = static_cast<std::string> (getService());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *serviceKey = "service";
	json_object_set_member(pJsonObject, serviceKey, node);
	if (isprimitive("bool")) {
		bool obj = getWhoisPrivacy();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *whois_privacyKey = "whois_privacy";
	json_object_set_member(pJsonObject, whois_privacyKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getRNew();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *r_newKey = "new";
	json_object_set_member(pJsonObject, r_newKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getRenewal();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *renewalKey = "renewal";
	json_object_set_member(pJsonObject, renewalKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getTransfer();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *transferKey = "transfer";
	json_object_set_member(pJsonObject, transferKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getFields();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
		std::string obj = static_cast<std::string> (getFields());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *fieldsKey = "fields";
	json_object_set_member(pJsonObject, fieldsKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getCurrencies();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
		std::string obj = static_cast<std::string> (getCurrencies());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *currenciesKey = "currencies";
	json_object_set_member(pJsonObject, currenciesKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

bool
DomainLookupResponse::getAvailable()
{
	return available;
}

void
DomainLookupResponse::setAvailable(bool  available)
{
	this->available = available;
}

bool
DomainLookupResponse::getPremium()
{
	return premium;
}

void
DomainLookupResponse::setPremium(bool  premium)
{
	this->premium = premium;
}

bool
DomainLookupResponse::getWebsite()
{
	return website;
}

void
DomainLookupResponse::setWebsite(bool  website)
{
	this->website = website;
}

bool
DomainLookupResponse::getDomainService()
{
	return domain_service;
}

void
DomainLookupResponse::setDomainService(bool  domain_service)
{
	this->domain_service = domain_service;
}

std::string
DomainLookupResponse::getService()
{
	return service;
}

void
DomainLookupResponse::setService(std::string  service)
{
	this->service = service;
}

bool
DomainLookupResponse::getWhoisPrivacy()
{
	return whois_privacy;
}

void
DomainLookupResponse::setWhoisPrivacy(bool  whois_privacy)
{
	this->whois_privacy = whois_privacy;
}

std::string
DomainLookupResponse::getRNew()
{
	return r_new;
}

void
DomainLookupResponse::setRNew(std::string  r_new)
{
	this->r_new = r_new;
}

std::string
DomainLookupResponse::getRenewal()
{
	return renewal;
}

void
DomainLookupResponse::setRenewal(std::string  renewal)
{
	this->renewal = renewal;
}

std::string
DomainLookupResponse::getTransfer()
{
	return transfer;
}

void
DomainLookupResponse::setTransfer(std::string  transfer)
{
	this->transfer = transfer;
}

std::string
DomainLookupResponse::getFields()
{
	return fields;
}

void
DomainLookupResponse::setFields(std::string  fields)
{
	this->fields = fields;
}

std::string
DomainLookupResponse::getCurrencies()
{
	return currencies;
}

void
DomainLookupResponse::setCurrencies(std::string  currencies)
{
	this->currencies = currencies;
}


