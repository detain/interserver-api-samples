

#include "BillingPrepayRequest.h"

using namespace Tiny;

BillingPrepayRequest::BillingPrepayRequest()
{
	module = std::string();
	amount = float(0);
	automatic_use = std::string();
}

BillingPrepayRequest::BillingPrepayRequest(std::string jsonString)
{
	this->fromJson(jsonString);
}

BillingPrepayRequest::~BillingPrepayRequest()
{

}

void
BillingPrepayRequest::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *moduleKey = "module";

    if(object.has_key(moduleKey))
    {
        bourne::json value = object[moduleKey];



        jsonToValue(&module, value, "std::string");


    }

    const char *amountKey = "amount";

    if(object.has_key(amountKey))
    {
        bourne::json value = object[amountKey];



        jsonToValue(&amount, value, "long");


    }

    const char *automatic_useKey = "automatic_use";

    if(object.has_key(automatic_useKey))
    {
        bourne::json value = object[automatic_useKey];



        jsonToValue(&automatic_use, value, "std::string");


    }


}

bourne::json
BillingPrepayRequest::toJson()
{
    bourne::json object = bourne::json::object();





    object["module"] = getModule();






    object["amount"] = getAmount();






    object["automatic_use"] = getAutomaticUse();



    return object;

}

std::string
BillingPrepayRequest::getModule()
{
	return module;
}

void
BillingPrepayRequest::setModule(std::string module)
{
	this->module = module;
}

long
BillingPrepayRequest::getAmount()
{
	return amount;
}

void
BillingPrepayRequest::setAmount(long amount)
{
	this->amount = amount;
}

std::string
BillingPrepayRequest::getAutomaticUse()
{
	return automatic_use;
}

void
BillingPrepayRequest::setAutomaticUse(std::string automatic_use)
{
	this->automatic_use = automatic_use;
}



