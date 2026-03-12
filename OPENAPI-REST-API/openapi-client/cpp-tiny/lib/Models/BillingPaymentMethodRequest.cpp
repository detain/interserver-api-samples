

#include "BillingPaymentMethodRequest.h"

using namespace Tiny;

BillingPaymentMethodRequest::BillingPaymentMethodRequest()
{
	payment_method = std::string();
	cc_auto = std::string();
}

BillingPaymentMethodRequest::BillingPaymentMethodRequest(std::string jsonString)
{
	this->fromJson(jsonString);
}

BillingPaymentMethodRequest::~BillingPaymentMethodRequest()
{

}

void
BillingPaymentMethodRequest::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *payment_methodKey = "payment_method";

    if(object.has_key(payment_methodKey))
    {
        bourne::json value = object[payment_methodKey];



        jsonToValue(&payment_method, value, "std::string");


    }

    const char *cc_autoKey = "cc_auto";

    if(object.has_key(cc_autoKey))
    {
        bourne::json value = object[cc_autoKey];



        jsonToValue(&cc_auto, value, "std::string");


    }


}

bourne::json
BillingPaymentMethodRequest::toJson()
{
    bourne::json object = bourne::json::object();





    object["payment_method"] = getPaymentMethod();






    object["cc_auto"] = getCcAuto();



    return object;

}

std::string
BillingPaymentMethodRequest::getPaymentMethod()
{
	return payment_method;
}

void
BillingPaymentMethodRequest::setPaymentMethod(std::string payment_method)
{
	this->payment_method = payment_method;
}

std::string
BillingPaymentMethodRequest::getCcAuto()
{
	return cc_auto;
}

void
BillingPaymentMethodRequest::setCcAuto(std::string cc_auto)
{
	this->cc_auto = cc_auto;
}



