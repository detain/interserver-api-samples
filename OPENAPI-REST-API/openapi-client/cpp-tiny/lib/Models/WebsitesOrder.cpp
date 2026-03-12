

#include "WebsitesOrder.h"

using namespace Tiny;

WebsitesOrder::WebsitesOrder()
{
	step = std::string();
	website = std::string();
	period = int(0);
	serviceOfferId = int(0);
	packages = WebsitesOrderPackages();
	enableDomainRegistering = bool(false);
	jsonServices = WebsitesOrderJsonServices();
	jsonServiceOffers = WebsitesOrderJsonServiceOffers();
	serviceTypes = WebsitesOrder_serviceTypes();
	serviceOffers = WebsitesOrder_serviceOffers();
	packges = WebsitesOrder_packges();
}

WebsitesOrder::WebsitesOrder(std::string jsonString)
{
	this->fromJson(jsonString);
}

WebsitesOrder::~WebsitesOrder()
{

}

void
WebsitesOrder::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *stepKey = "step";

    if(object.has_key(stepKey))
    {
        bourne::json value = object[stepKey];



        jsonToValue(&step, value, "std::string");


    }

    const char *websiteKey = "website";

    if(object.has_key(websiteKey))
    {
        bourne::json value = object[websiteKey];



        jsonToValue(&website, value, "std::string");


    }

    const char *periodKey = "period";

    if(object.has_key(periodKey))
    {
        bourne::json value = object[periodKey];



        jsonToValue(&period, value, "int");


    }

    const char *serviceOfferIdKey = "serviceOfferId";

    if(object.has_key(serviceOfferIdKey))
    {
        bourne::json value = object[serviceOfferIdKey];



        jsonToValue(&serviceOfferId, value, "int");


    }

    const char *packagesKey = "packages";

    if(object.has_key(packagesKey))
    {
        bourne::json value = object[packagesKey];




        WebsitesOrderPackages* obj = &packages;
		obj->fromJson(value.dump());

    }

    const char *enableDomainRegisteringKey = "enableDomainRegistering";

    if(object.has_key(enableDomainRegisteringKey))
    {
        bourne::json value = object[enableDomainRegisteringKey];



        jsonToValue(&enableDomainRegistering, value, "bool");


    }

    const char *jsonServicesKey = "jsonServices";

    if(object.has_key(jsonServicesKey))
    {
        bourne::json value = object[jsonServicesKey];




        WebsitesOrderJsonServices* obj = &jsonServices;
		obj->fromJson(value.dump());

    }

    const char *jsonServiceOffersKey = "jsonServiceOffers";

    if(object.has_key(jsonServiceOffersKey))
    {
        bourne::json value = object[jsonServiceOffersKey];




        WebsitesOrderJsonServiceOffers* obj = &jsonServiceOffers;
		obj->fromJson(value.dump());

    }

    const char *serviceTypesKey = "serviceTypes";

    if(object.has_key(serviceTypesKey))
    {
        bourne::json value = object[serviceTypesKey];




        WebsitesOrder_serviceTypes* obj = &serviceTypes;
		obj->fromJson(value.dump());

    }

    const char *serviceOffersKey = "serviceOffers";

    if(object.has_key(serviceOffersKey))
    {
        bourne::json value = object[serviceOffersKey];




        WebsitesOrder_serviceOffers* obj = &serviceOffers;
		obj->fromJson(value.dump());

    }

    const char *packgesKey = "packges";

    if(object.has_key(packgesKey))
    {
        bourne::json value = object[packgesKey];




        WebsitesOrder_packges* obj = &packges;
		obj->fromJson(value.dump());

    }


}

bourne::json
WebsitesOrder::toJson()
{
    bourne::json object = bourne::json::object();





    object["step"] = getStep();






    object["website"] = getWebsite();






    object["period"] = getPeriod();






    object["serviceOfferId"] = getServiceOfferId();







	object["packages"] = getPackages().toJson();





    object["enableDomainRegistering"] = isEnableDomainRegistering();







	object["jsonServices"] = getJsonServices().toJson();






	object["jsonServiceOffers"] = getJsonServiceOffers().toJson();






	object["serviceTypes"] = getServiceTypes().toJson();






	object["serviceOffers"] = getServiceOffers().toJson();






	object["packges"] = getPackges().toJson();


    return object;

}

std::string
WebsitesOrder::getStep()
{
	return step;
}

void
WebsitesOrder::setStep(std::string step)
{
	this->step = step;
}

std::string
WebsitesOrder::getWebsite()
{
	return website;
}

void
WebsitesOrder::setWebsite(std::string website)
{
	this->website = website;
}

int
WebsitesOrder::getPeriod()
{
	return period;
}

void
WebsitesOrder::setPeriod(int period)
{
	this->period = period;
}

int
WebsitesOrder::getServiceOfferId()
{
	return serviceOfferId;
}

void
WebsitesOrder::setServiceOfferId(int serviceOfferId)
{
	this->serviceOfferId = serviceOfferId;
}

WebsitesOrderPackages
WebsitesOrder::getPackages()
{
	return packages;
}

void
WebsitesOrder::setPackages(WebsitesOrderPackages packages)
{
	this->packages = packages;
}

bool
WebsitesOrder::isEnableDomainRegistering()
{
	return enableDomainRegistering;
}

void
WebsitesOrder::setEnableDomainRegistering(bool enableDomainRegistering)
{
	this->enableDomainRegistering = enableDomainRegistering;
}

WebsitesOrderJsonServices
WebsitesOrder::getJsonServices()
{
	return jsonServices;
}

void
WebsitesOrder::setJsonServices(WebsitesOrderJsonServices jsonServices)
{
	this->jsonServices = jsonServices;
}

WebsitesOrderJsonServiceOffers
WebsitesOrder::getJsonServiceOffers()
{
	return jsonServiceOffers;
}

void
WebsitesOrder::setJsonServiceOffers(WebsitesOrderJsonServiceOffers jsonServiceOffers)
{
	this->jsonServiceOffers = jsonServiceOffers;
}

WebsitesOrder_serviceTypes
WebsitesOrder::getServiceTypes()
{
	return serviceTypes;
}

void
WebsitesOrder::setServiceTypes(WebsitesOrder_serviceTypes serviceTypes)
{
	this->serviceTypes = serviceTypes;
}

WebsitesOrder_serviceOffers
WebsitesOrder::getServiceOffers()
{
	return serviceOffers;
}

void
WebsitesOrder::setServiceOffers(WebsitesOrder_serviceOffers serviceOffers)
{
	this->serviceOffers = serviceOffers;
}

WebsitesOrder_packges
WebsitesOrder::getPackges()
{
	return packges;
}

void
WebsitesOrder::setPackges(WebsitesOrder_packges packges)
{
	this->packges = packges;
}



