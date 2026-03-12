

#include "BillingAddCcRequest.h"

using namespace Tiny;

BillingAddCcRequest::BillingAddCcRequest()
{
	name = std::string();
	address = std::string();
	city = std::string();
	state = std::string();
	country = std::string();
	zip = std::string();
	cc = std::string();
	cc_exp = std::string();
	cc_ccv2 = std::string();
}

BillingAddCcRequest::BillingAddCcRequest(std::string jsonString)
{
	this->fromJson(jsonString);
}

BillingAddCcRequest::~BillingAddCcRequest()
{

}

void
BillingAddCcRequest::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *nameKey = "name";

    if(object.has_key(nameKey))
    {
        bourne::json value = object[nameKey];



        jsonToValue(&name, value, "std::string");


    }

    const char *addressKey = "address";

    if(object.has_key(addressKey))
    {
        bourne::json value = object[addressKey];



        jsonToValue(&address, value, "std::string");


    }

    const char *cityKey = "city";

    if(object.has_key(cityKey))
    {
        bourne::json value = object[cityKey];



        jsonToValue(&city, value, "std::string");


    }

    const char *stateKey = "state";

    if(object.has_key(stateKey))
    {
        bourne::json value = object[stateKey];



        jsonToValue(&state, value, "std::string");


    }

    const char *countryKey = "country";

    if(object.has_key(countryKey))
    {
        bourne::json value = object[countryKey];



        jsonToValue(&country, value, "std::string");


    }

    const char *zipKey = "zip";

    if(object.has_key(zipKey))
    {
        bourne::json value = object[zipKey];



        jsonToValue(&zip, value, "std::string");


    }

    const char *ccKey = "cc";

    if(object.has_key(ccKey))
    {
        bourne::json value = object[ccKey];



        jsonToValue(&cc, value, "std::string");


    }

    const char *cc_expKey = "cc_exp";

    if(object.has_key(cc_expKey))
    {
        bourne::json value = object[cc_expKey];



        jsonToValue(&cc_exp, value, "std::string");


    }

    const char *cc_ccv2Key = "cc_ccv2";

    if(object.has_key(cc_ccv2Key))
    {
        bourne::json value = object[cc_ccv2Key];



        jsonToValue(&cc_ccv2, value, "std::string");


    }


}

bourne::json
BillingAddCcRequest::toJson()
{
    bourne::json object = bourne::json::object();





    object["name"] = getName();






    object["address"] = getAddress();






    object["city"] = getCity();






    object["state"] = getState();






    object["country"] = getCountry();






    object["zip"] = getZip();






    object["cc"] = getCc();






    object["cc_exp"] = getCcExp();






    object["cc_ccv2"] = getCcCcv2();



    return object;

}

std::string
BillingAddCcRequest::getName()
{
	return name;
}

void
BillingAddCcRequest::setName(std::string name)
{
	this->name = name;
}

std::string
BillingAddCcRequest::getAddress()
{
	return address;
}

void
BillingAddCcRequest::setAddress(std::string address)
{
	this->address = address;
}

std::string
BillingAddCcRequest::getCity()
{
	return city;
}

void
BillingAddCcRequest::setCity(std::string city)
{
	this->city = city;
}

std::string
BillingAddCcRequest::getState()
{
	return state;
}

void
BillingAddCcRequest::setState(std::string state)
{
	this->state = state;
}

std::string
BillingAddCcRequest::getCountry()
{
	return country;
}

void
BillingAddCcRequest::setCountry(std::string country)
{
	this->country = country;
}

std::string
BillingAddCcRequest::getZip()
{
	return zip;
}

void
BillingAddCcRequest::setZip(std::string zip)
{
	this->zip = zip;
}

std::string
BillingAddCcRequest::getCc()
{
	return cc;
}

void
BillingAddCcRequest::setCc(std::string cc)
{
	this->cc = cc;
}

std::string
BillingAddCcRequest::getCcExp()
{
	return cc_exp;
}

void
BillingAddCcRequest::setCcExp(std::string cc_exp)
{
	this->cc_exp = cc_exp;
}

std::string
BillingAddCcRequest::getCcCcv2()
{
	return cc_ccv2;
}

void
BillingAddCcRequest::setCcCcv2(std::string cc_ccv2)
{
	this->cc_ccv2 = cc_ccv2;
}



