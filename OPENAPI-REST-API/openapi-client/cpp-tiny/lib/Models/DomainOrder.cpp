

#include "DomainOrder.h"

using namespace Tiny;

DomainOrder::DomainOrder()
{
	whoisPrivacyCost = std::string();
	services = DomainOrder_services();
	tldServices = null;
}

DomainOrder::DomainOrder(std::string jsonString)
{
	this->fromJson(jsonString);
}

DomainOrder::~DomainOrder()
{

}

void
DomainOrder::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *whoisPrivacyCostKey = "whoisPrivacyCost";

    if(object.has_key(whoisPrivacyCostKey))
    {
        bourne::json value = object[whoisPrivacyCostKey];



        jsonToValue(&whoisPrivacyCost, value, "std::string");


    }

    const char *servicesKey = "services";

    if(object.has_key(servicesKey))
    {
        bourne::json value = object[servicesKey];




        DomainOrder_services* obj = &services;
		obj->fromJson(value.dump());

    }

    const char *tldServicesKey = "tldServices";

    if(object.has_key(tldServicesKey))
    {
        bourne::json value = object[tldServicesKey];




        Object* obj = &tldServices;
		obj->fromJson(value.dump());

    }


}

bourne::json
DomainOrder::toJson()
{
    bourne::json object = bourne::json::object();





    object["whoisPrivacyCost"] = getWhoisPrivacyCost();







	object["services"] = getServices().toJson();






	object["tldServices"] = getTldServices().toJson();


    return object;

}

std::string
DomainOrder::getWhoisPrivacyCost()
{
	return whoisPrivacyCost;
}

void
DomainOrder::setWhoisPrivacyCost(std::string whoisPrivacyCost)
{
	this->whoisPrivacyCost = whoisPrivacyCost;
}

DomainOrder_services
DomainOrder::getServices()
{
	return services;
}

void
DomainOrder::setServices(DomainOrder_services services)
{
	this->services = services;
}

Object
DomainOrder::getTldServices()
{
	return tldServices;
}

void
DomainOrder::setTldServices(Object tldServices)
{
	this->tldServices = tldServices;
}



