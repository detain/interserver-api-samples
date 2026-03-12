

#include "AffiliatePaymentSetup.h"

using namespace Tiny;

AffiliatePaymentSetup::AffiliatePaymentSetup()
{
	affiliate_paypal = std::string();
	affiliate_payment_method = std::string();
}

AffiliatePaymentSetup::AffiliatePaymentSetup(std::string jsonString)
{
	this->fromJson(jsonString);
}

AffiliatePaymentSetup::~AffiliatePaymentSetup()
{

}

void
AffiliatePaymentSetup::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *affiliate_paypalKey = "affiliate_paypal";

    if(object.has_key(affiliate_paypalKey))
    {
        bourne::json value = object[affiliate_paypalKey];



        jsonToValue(&affiliate_paypal, value, "std::string");


    }

    const char *affiliate_payment_methodKey = "affiliate_payment_method";

    if(object.has_key(affiliate_payment_methodKey))
    {
        bourne::json value = object[affiliate_payment_methodKey];



        jsonToValue(&affiliate_payment_method, value, "std::string");


    }


}

bourne::json
AffiliatePaymentSetup::toJson()
{
    bourne::json object = bourne::json::object();





    object["affiliate_paypal"] = getAffiliatePaypal();






    object["affiliate_payment_method"] = getAffiliatePaymentMethod();



    return object;

}

std::string
AffiliatePaymentSetup::getAffiliatePaypal()
{
	return affiliate_paypal;
}

void
AffiliatePaymentSetup::setAffiliatePaypal(std::string affiliate_paypal)
{
	this->affiliate_paypal = affiliate_paypal;
}

std::string
AffiliatePaymentSetup::getAffiliatePaymentMethod()
{
	return affiliate_payment_method;
}

void
AffiliatePaymentSetup::setAffiliatePaymentMethod(std::string affiliate_payment_method)
{
	this->affiliate_payment_method = affiliate_payment_method;
}



