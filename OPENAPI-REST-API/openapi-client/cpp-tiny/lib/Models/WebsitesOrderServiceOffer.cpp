

#include "WebsitesOrderServiceOffer.h"

using namespace Tiny;

WebsitesOrderServiceOffer::WebsitesOrderServiceOffer()
{
	service_offer_id = std::string();
	service_id = std::string();
	intro_cost = std::string();
	renewal_cost = std::string();
	intro_frequency = std::string();
	renewal_frequency = std::string();
	allow_coupon = std::string();
	service_module = std::string();
	created_at = std::string();
	updated_at = std::string();
	deleted_at = std::string();
}

WebsitesOrderServiceOffer::WebsitesOrderServiceOffer(std::string jsonString)
{
	this->fromJson(jsonString);
}

WebsitesOrderServiceOffer::~WebsitesOrderServiceOffer()
{

}

void
WebsitesOrderServiceOffer::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *service_offer_idKey = "service_offer_id";

    if(object.has_key(service_offer_idKey))
    {
        bourne::json value = object[service_offer_idKey];



        jsonToValue(&service_offer_id, value, "std::string");


    }

    const char *service_idKey = "service_id";

    if(object.has_key(service_idKey))
    {
        bourne::json value = object[service_idKey];



        jsonToValue(&service_id, value, "std::string");


    }

    const char *intro_costKey = "intro_cost";

    if(object.has_key(intro_costKey))
    {
        bourne::json value = object[intro_costKey];



        jsonToValue(&intro_cost, value, "std::string");


    }

    const char *renewal_costKey = "renewal_cost";

    if(object.has_key(renewal_costKey))
    {
        bourne::json value = object[renewal_costKey];



        jsonToValue(&renewal_cost, value, "std::string");


    }

    const char *intro_frequencyKey = "intro_frequency";

    if(object.has_key(intro_frequencyKey))
    {
        bourne::json value = object[intro_frequencyKey];



        jsonToValue(&intro_frequency, value, "std::string");


    }

    const char *renewal_frequencyKey = "renewal_frequency";

    if(object.has_key(renewal_frequencyKey))
    {
        bourne::json value = object[renewal_frequencyKey];



        jsonToValue(&renewal_frequency, value, "std::string");


    }

    const char *allow_couponKey = "allow_coupon";

    if(object.has_key(allow_couponKey))
    {
        bourne::json value = object[allow_couponKey];



        jsonToValue(&allow_coupon, value, "std::string");


    }

    const char *service_moduleKey = "service_module";

    if(object.has_key(service_moduleKey))
    {
        bourne::json value = object[service_moduleKey];



        jsonToValue(&service_module, value, "std::string");


    }

    const char *created_atKey = "created_at";

    if(object.has_key(created_atKey))
    {
        bourne::json value = object[created_atKey];



        jsonToValue(&created_at, value, "std::string");


    }

    const char *updated_atKey = "updated_at";

    if(object.has_key(updated_atKey))
    {
        bourne::json value = object[updated_atKey];



        jsonToValue(&updated_at, value, "std::string");


    }

    const char *deleted_atKey = "deleted_at";

    if(object.has_key(deleted_atKey))
    {
        bourne::json value = object[deleted_atKey];



        jsonToValue(&deleted_at, value, "std::string");


    }


}

bourne::json
WebsitesOrderServiceOffer::toJson()
{
    bourne::json object = bourne::json::object();





    object["service_offer_id"] = getServiceOfferId();






    object["service_id"] = getServiceId();






    object["intro_cost"] = getIntroCost();






    object["renewal_cost"] = getRenewalCost();






    object["intro_frequency"] = getIntroFrequency();






    object["renewal_frequency"] = getRenewalFrequency();






    object["allow_coupon"] = getAllowCoupon();






    object["service_module"] = getServiceModule();






    object["created_at"] = getCreatedAt();






    object["updated_at"] = getUpdatedAt();






    object["deleted_at"] = getDeletedAt();



    return object;

}

std::string
WebsitesOrderServiceOffer::getServiceOfferId()
{
	return service_offer_id;
}

void
WebsitesOrderServiceOffer::setServiceOfferId(std::string service_offer_id)
{
	this->service_offer_id = service_offer_id;
}

std::string
WebsitesOrderServiceOffer::getServiceId()
{
	return service_id;
}

void
WebsitesOrderServiceOffer::setServiceId(std::string service_id)
{
	this->service_id = service_id;
}

std::string
WebsitesOrderServiceOffer::getIntroCost()
{
	return intro_cost;
}

void
WebsitesOrderServiceOffer::setIntroCost(std::string intro_cost)
{
	this->intro_cost = intro_cost;
}

std::string
WebsitesOrderServiceOffer::getRenewalCost()
{
	return renewal_cost;
}

void
WebsitesOrderServiceOffer::setRenewalCost(std::string renewal_cost)
{
	this->renewal_cost = renewal_cost;
}

std::string
WebsitesOrderServiceOffer::getIntroFrequency()
{
	return intro_frequency;
}

void
WebsitesOrderServiceOffer::setIntroFrequency(std::string intro_frequency)
{
	this->intro_frequency = intro_frequency;
}

std::string
WebsitesOrderServiceOffer::getRenewalFrequency()
{
	return renewal_frequency;
}

void
WebsitesOrderServiceOffer::setRenewalFrequency(std::string renewal_frequency)
{
	this->renewal_frequency = renewal_frequency;
}

std::string
WebsitesOrderServiceOffer::getAllowCoupon()
{
	return allow_coupon;
}

void
WebsitesOrderServiceOffer::setAllowCoupon(std::string allow_coupon)
{
	this->allow_coupon = allow_coupon;
}

std::string
WebsitesOrderServiceOffer::getServiceModule()
{
	return service_module;
}

void
WebsitesOrderServiceOffer::setServiceModule(std::string service_module)
{
	this->service_module = service_module;
}

std::string
WebsitesOrderServiceOffer::getCreatedAt()
{
	return created_at;
}

void
WebsitesOrderServiceOffer::setCreatedAt(std::string created_at)
{
	this->created_at = created_at;
}

std::string
WebsitesOrderServiceOffer::getUpdatedAt()
{
	return updated_at;
}

void
WebsitesOrderServiceOffer::setUpdatedAt(std::string updated_at)
{
	this->updated_at = updated_at;
}

std::string
WebsitesOrderServiceOffer::getDeletedAt()
{
	return deleted_at;
}

void
WebsitesOrderServiceOffer::setDeletedAt(std::string deleted_at)
{
	this->deleted_at = deleted_at;
}



