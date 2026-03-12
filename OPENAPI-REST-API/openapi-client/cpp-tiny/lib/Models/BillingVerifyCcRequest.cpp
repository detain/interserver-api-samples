

#include "BillingVerifyCcRequest.h"

using namespace Tiny;

BillingVerifyCcRequest::BillingVerifyCcRequest()
{
	idx = int(0);
	cc_ccv2 = std::string();
	cc_amount1 = std::string();
	cc_amount2 = std::string();
	terms = bool(false);
}

BillingVerifyCcRequest::BillingVerifyCcRequest(std::string jsonString)
{
	this->fromJson(jsonString);
}

BillingVerifyCcRequest::~BillingVerifyCcRequest()
{

}

void
BillingVerifyCcRequest::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *idxKey = "idx";

    if(object.has_key(idxKey))
    {
        bourne::json value = object[idxKey];



        jsonToValue(&idx, value, "int");


    }

    const char *cc_ccv2Key = "cc_ccv2";

    if(object.has_key(cc_ccv2Key))
    {
        bourne::json value = object[cc_ccv2Key];



        jsonToValue(&cc_ccv2, value, "std::string");


    }

    const char *cc_amount1Key = "cc_amount1";

    if(object.has_key(cc_amount1Key))
    {
        bourne::json value = object[cc_amount1Key];



        jsonToValue(&cc_amount1, value, "std::string");


    }

    const char *cc_amount2Key = "cc_amount2";

    if(object.has_key(cc_amount2Key))
    {
        bourne::json value = object[cc_amount2Key];



        jsonToValue(&cc_amount2, value, "std::string");


    }

    const char *termsKey = "terms";

    if(object.has_key(termsKey))
    {
        bourne::json value = object[termsKey];



        jsonToValue(&terms, value, "bool");


    }


}

bourne::json
BillingVerifyCcRequest::toJson()
{
    bourne::json object = bourne::json::object();





    object["idx"] = getIdx();






    object["cc_ccv2"] = getCcCcv2();






    object["cc_amount1"] = getCcAmount1();






    object["cc_amount2"] = getCcAmount2();






    object["terms"] = isTerms();



    return object;

}

int
BillingVerifyCcRequest::getIdx()
{
	return idx;
}

void
BillingVerifyCcRequest::setIdx(int idx)
{
	this->idx = idx;
}

std::string
BillingVerifyCcRequest::getCcCcv2()
{
	return cc_ccv2;
}

void
BillingVerifyCcRequest::setCcCcv2(std::string cc_ccv2)
{
	this->cc_ccv2 = cc_ccv2;
}

std::string
BillingVerifyCcRequest::getCcAmount1()
{
	return cc_amount1;
}

void
BillingVerifyCcRequest::setCcAmount1(std::string cc_amount1)
{
	this->cc_amount1 = cc_amount1;
}

std::string
BillingVerifyCcRequest::getCcAmount2()
{
	return cc_amount2;
}

void
BillingVerifyCcRequest::setCcAmount2(std::string cc_amount2)
{
	this->cc_amount2 = cc_amount2;
}

bool
BillingVerifyCcRequest::isTerms()
{
	return terms;
}

void
BillingVerifyCcRequest::setTerms(bool terms)
{
	this->terms = terms;
}



