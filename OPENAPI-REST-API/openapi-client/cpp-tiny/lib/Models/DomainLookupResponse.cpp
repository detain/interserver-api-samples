

#include "DomainLookupResponse.h"

using namespace Tiny;

DomainLookupResponse::DomainLookupResponse()
{
	available = bool(false);
	premium = bool(false);
	website = bool(false);
	domain_service = bool(false);
	service = null;
	whois_privacy = bool(false);
	r_new = std::string();
	renewal = std::string();
	transfer = std::string();
	fields = null;
	currencies = null;
}

DomainLookupResponse::DomainLookupResponse(std::string jsonString)
{
	this->fromJson(jsonString);
}

DomainLookupResponse::~DomainLookupResponse()
{

}

void
DomainLookupResponse::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *availableKey = "available";

    if(object.has_key(availableKey))
    {
        bourne::json value = object[availableKey];



        jsonToValue(&available, value, "bool");


    }

    const char *premiumKey = "premium";

    if(object.has_key(premiumKey))
    {
        bourne::json value = object[premiumKey];



        jsonToValue(&premium, value, "bool");


    }

    const char *websiteKey = "website";

    if(object.has_key(websiteKey))
    {
        bourne::json value = object[websiteKey];



        jsonToValue(&website, value, "bool");


    }

    const char *domain_serviceKey = "domain_service";

    if(object.has_key(domain_serviceKey))
    {
        bourne::json value = object[domain_serviceKey];



        jsonToValue(&domain_service, value, "bool");


    }

    const char *serviceKey = "service";

    if(object.has_key(serviceKey))
    {
        bourne::json value = object[serviceKey];




        Object* obj = &service;
		obj->fromJson(value.dump());

    }

    const char *whois_privacyKey = "whois_privacy";

    if(object.has_key(whois_privacyKey))
    {
        bourne::json value = object[whois_privacyKey];



        jsonToValue(&whois_privacy, value, "bool");


    }

    const char *r_newKey = "new";

    if(object.has_key(r_newKey))
    {
        bourne::json value = object[r_newKey];



        jsonToValue(&r_new, value, "std::string");


    }

    const char *renewalKey = "renewal";

    if(object.has_key(renewalKey))
    {
        bourne::json value = object[renewalKey];



        jsonToValue(&renewal, value, "std::string");


    }

    const char *transferKey = "transfer";

    if(object.has_key(transferKey))
    {
        bourne::json value = object[transferKey];



        jsonToValue(&transfer, value, "std::string");


    }

    const char *fieldsKey = "fields";

    if(object.has_key(fieldsKey))
    {
        bourne::json value = object[fieldsKey];




        Object* obj = &fields;
		obj->fromJson(value.dump());

    }

    const char *currenciesKey = "currencies";

    if(object.has_key(currenciesKey))
    {
        bourne::json value = object[currenciesKey];




        Object* obj = &currencies;
		obj->fromJson(value.dump());

    }


}

bourne::json
DomainLookupResponse::toJson()
{
    bourne::json object = bourne::json::object();





    object["available"] = isAvailable();






    object["premium"] = isPremium();






    object["website"] = isWebsite();






    object["domain_service"] = isDomainService();







	object["service"] = getService().toJson();





    object["whois_privacy"] = isWhoisPrivacy();






    object["r_new"] = getRNew();






    object["renewal"] = getRenewal();






    object["transfer"] = getTransfer();







	object["fields"] = getFields().toJson();






	object["currencies"] = getCurrencies().toJson();


    return object;

}

bool
DomainLookupResponse::isAvailable()
{
	return available;
}

void
DomainLookupResponse::setAvailable(bool available)
{
	this->available = available;
}

bool
DomainLookupResponse::isPremium()
{
	return premium;
}

void
DomainLookupResponse::setPremium(bool premium)
{
	this->premium = premium;
}

bool
DomainLookupResponse::isWebsite()
{
	return website;
}

void
DomainLookupResponse::setWebsite(bool website)
{
	this->website = website;
}

bool
DomainLookupResponse::isDomainService()
{
	return domain_service;
}

void
DomainLookupResponse::setDomainService(bool domain_service)
{
	this->domain_service = domain_service;
}

Object
DomainLookupResponse::getService()
{
	return service;
}

void
DomainLookupResponse::setService(Object service)
{
	this->service = service;
}

bool
DomainLookupResponse::isWhoisPrivacy()
{
	return whois_privacy;
}

void
DomainLookupResponse::setWhoisPrivacy(bool whois_privacy)
{
	this->whois_privacy = whois_privacy;
}

std::string
DomainLookupResponse::getRNew()
{
	return r_new;
}

void
DomainLookupResponse::setRNew(std::string r_new)
{
	this->r_new = r_new;
}

std::string
DomainLookupResponse::getRenewal()
{
	return renewal;
}

void
DomainLookupResponse::setRenewal(std::string renewal)
{
	this->renewal = renewal;
}

std::string
DomainLookupResponse::getTransfer()
{
	return transfer;
}

void
DomainLookupResponse::setTransfer(std::string transfer)
{
	this->transfer = transfer;
}

Object
DomainLookupResponse::getFields()
{
	return fields;
}

void
DomainLookupResponse::setFields(Object fields)
{
	this->fields = fields;
}

Object
DomainLookupResponse::getCurrencies()
{
	return currencies;
}

void
DomainLookupResponse::setCurrencies(Object currencies)
{
	this->currencies = currencies;
}



