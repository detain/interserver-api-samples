

#include "WebsitesOrderJsonServiceOffersItem.h"

using namespace Tiny;

WebsitesOrderJsonServiceOffersItem::WebsitesOrderJsonServiceOffersItem()
{
	service_offer_id = std::string();
	service_id = std::string();
	intro_cost = int(0);
	renewal_cost = int(0);
	intro_frequency = std::string();
	renewal_frequency = std::string();
	allow_coupon = std::string();
	service_module = std::string();
	created_at = std::string();
	updated_at = std::string();
	deleted_at = std::string();
	currencySymbol = std::string();
}

WebsitesOrderJsonServiceOffersItem::WebsitesOrderJsonServiceOffersItem(std::string jsonString)
{
	this->fromJson(jsonString);
}

WebsitesOrderJsonServiceOffersItem::~WebsitesOrderJsonServiceOffersItem()
{

}

void
WebsitesOrderJsonServiceOffersItem::fromJson(std::string jsonObj)
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



        jsonToValue(&intro_cost, value, "int");


    }

    const char *renewal_costKey = "renewal_cost";

    if(object.has_key(renewal_costKey))
    {
        bourne::json value = object[renewal_costKey];



        jsonToValue(&renewal_cost, value, "int");


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

    const char *currencySymbolKey = "currencySymbol";

    if(object.has_key(currencySymbolKey))
    {
        bourne::json value = object[currencySymbolKey];



        jsonToValue(&currencySymbol, value, "std::string");


    }


}

bourne::json
WebsitesOrderJsonServiceOffersItem::toJson()
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






    object["currencySymbol"] = getCurrencySymbol();



    return object;

}

std::string
WebsitesOrderJsonServiceOffersItem::getServiceOfferId()
{
	return service_offer_id;
}

void
WebsitesOrderJsonServiceOffersItem::setServiceOfferId(std::string service_offer_id)
{
	this->service_offer_id = service_offer_id;
}

std::string
WebsitesOrderJsonServiceOffersItem::getServiceId()
{
	return service_id;
}

void
WebsitesOrderJsonServiceOffersItem::setServiceId(std::string service_id)
{
	this->service_id = service_id;
}

int
WebsitesOrderJsonServiceOffersItem::getIntroCost()
{
	return intro_cost;
}

void
WebsitesOrderJsonServiceOffersItem::setIntroCost(int intro_cost)
{
	this->intro_cost = intro_cost;
}

int
WebsitesOrderJsonServiceOffersItem::getRenewalCost()
{
	return renewal_cost;
}

void
WebsitesOrderJsonServiceOffersItem::setRenewalCost(int renewal_cost)
{
	this->renewal_cost = renewal_cost;
}

std::string
WebsitesOrderJsonServiceOffersItem::getIntroFrequency()
{
	return intro_frequency;
}

void
WebsitesOrderJsonServiceOffersItem::setIntroFrequency(std::string intro_frequency)
{
	this->intro_frequency = intro_frequency;
}

std::string
WebsitesOrderJsonServiceOffersItem::getRenewalFrequency()
{
	return renewal_frequency;
}

void
WebsitesOrderJsonServiceOffersItem::setRenewalFrequency(std::string renewal_frequency)
{
	this->renewal_frequency = renewal_frequency;
}

std::string
WebsitesOrderJsonServiceOffersItem::getAllowCoupon()
{
	return allow_coupon;
}

void
WebsitesOrderJsonServiceOffersItem::setAllowCoupon(std::string allow_coupon)
{
	this->allow_coupon = allow_coupon;
}

std::string
WebsitesOrderJsonServiceOffersItem::getServiceModule()
{
	return service_module;
}

void
WebsitesOrderJsonServiceOffersItem::setServiceModule(std::string service_module)
{
	this->service_module = service_module;
}

std::string
WebsitesOrderJsonServiceOffersItem::getCreatedAt()
{
	return created_at;
}

void
WebsitesOrderJsonServiceOffersItem::setCreatedAt(std::string created_at)
{
	this->created_at = created_at;
}

std::string
WebsitesOrderJsonServiceOffersItem::getUpdatedAt()
{
	return updated_at;
}

void
WebsitesOrderJsonServiceOffersItem::setUpdatedAt(std::string updated_at)
{
	this->updated_at = updated_at;
}

std::string
WebsitesOrderJsonServiceOffersItem::getDeletedAt()
{
	return deleted_at;
}

void
WebsitesOrderJsonServiceOffersItem::setDeletedAt(std::string deleted_at)
{
	this->deleted_at = deleted_at;
}

std::string
WebsitesOrderJsonServiceOffersItem::getCurrencySymbol()
{
	return currencySymbol;
}

void
WebsitesOrderJsonServiceOffersItem::setCurrencySymbol(std::string currencySymbol)
{
	this->currencySymbol = currencySymbol;
}



