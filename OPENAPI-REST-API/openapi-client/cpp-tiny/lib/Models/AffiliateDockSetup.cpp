

#include "AffiliateDockSetup.h"

using namespace Tiny;

AffiliateDockSetup::AffiliateDockSetup()
{
	affiliate_dock_title = std::string();
	affiliate_dock_description = std::string();
	referrer_coupon = std::string();
}

AffiliateDockSetup::AffiliateDockSetup(std::string jsonString)
{
	this->fromJson(jsonString);
}

AffiliateDockSetup::~AffiliateDockSetup()
{

}

void
AffiliateDockSetup::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *affiliate_dock_titleKey = "affiliate_dock_title";

    if(object.has_key(affiliate_dock_titleKey))
    {
        bourne::json value = object[affiliate_dock_titleKey];



        jsonToValue(&affiliate_dock_title, value, "std::string");


    }

    const char *affiliate_dock_descriptionKey = "affiliate_dock_description";

    if(object.has_key(affiliate_dock_descriptionKey))
    {
        bourne::json value = object[affiliate_dock_descriptionKey];



        jsonToValue(&affiliate_dock_description, value, "std::string");


    }

    const char *referrer_couponKey = "referrer_coupon";

    if(object.has_key(referrer_couponKey))
    {
        bourne::json value = object[referrer_couponKey];



        jsonToValue(&referrer_coupon, value, "std::string");


    }


}

bourne::json
AffiliateDockSetup::toJson()
{
    bourne::json object = bourne::json::object();





    object["affiliate_dock_title"] = getAffiliateDockTitle();






    object["affiliate_dock_description"] = getAffiliateDockDescription();






    object["referrer_coupon"] = getReferrerCoupon();



    return object;

}

std::string
AffiliateDockSetup::getAffiliateDockTitle()
{
	return affiliate_dock_title;
}

void
AffiliateDockSetup::setAffiliateDockTitle(std::string affiliate_dock_title)
{
	this->affiliate_dock_title = affiliate_dock_title;
}

std::string
AffiliateDockSetup::getAffiliateDockDescription()
{
	return affiliate_dock_description;
}

void
AffiliateDockSetup::setAffiliateDockDescription(std::string affiliate_dock_description)
{
	this->affiliate_dock_description = affiliate_dock_description;
}

std::string
AffiliateDockSetup::getReferrerCoupon()
{
	return referrer_coupon;
}

void
AffiliateDockSetup::setReferrerCoupon(std::string referrer_coupon)
{
	this->referrer_coupon = referrer_coupon;
}



