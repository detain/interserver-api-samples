

#include "AccountInfoDataCc.h"

using namespace Tiny;

AccountInfoDataCc::AccountInfoDataCc()
{
	cc = std::string();
	cc_exp = std::string();
	name = std::string();
	address = std::string();
	city = std::string();
	state = std::string();
	zip = std::string();
	country = std::string();
	maxmind_riskscore = std::string();
	maxmind = AccountInfoMaxMindResponse();
	verified = bool(false);
}

AccountInfoDataCc::AccountInfoDataCc(std::string jsonString)
{
	this->fromJson(jsonString);
}

AccountInfoDataCc::~AccountInfoDataCc()
{

}

void
AccountInfoDataCc::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

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

    const char *zipKey = "zip";

    if(object.has_key(zipKey))
    {
        bourne::json value = object[zipKey];



        jsonToValue(&zip, value, "std::string");


    }

    const char *countryKey = "country";

    if(object.has_key(countryKey))
    {
        bourne::json value = object[countryKey];



        jsonToValue(&country, value, "std::string");


    }

    const char *maxmind_riskscoreKey = "maxmind_riskscore";

    if(object.has_key(maxmind_riskscoreKey))
    {
        bourne::json value = object[maxmind_riskscoreKey];



        jsonToValue(&maxmind_riskscore, value, "std::string");


    }

    const char *maxmindKey = "maxmind";

    if(object.has_key(maxmindKey))
    {
        bourne::json value = object[maxmindKey];




        AccountInfoMaxMindResponse* obj = &maxmind;
		obj->fromJson(value.dump());

    }

    const char *verifiedKey = "verified";

    if(object.has_key(verifiedKey))
    {
        bourne::json value = object[verifiedKey];



        jsonToValue(&verified, value, "bool");


    }


}

bourne::json
AccountInfoDataCc::toJson()
{
    bourne::json object = bourne::json::object();





    object["cc"] = getCc();






    object["cc_exp"] = getCcExp();






    object["name"] = getName();






    object["address"] = getAddress();






    object["city"] = getCity();






    object["state"] = getState();






    object["zip"] = getZip();






    object["country"] = getCountry();






    object["maxmind_riskscore"] = getMaxmindRiskscore();







	object["maxmind"] = getMaxmind().toJson();





    object["verified"] = isVerified();



    return object;

}

std::string
AccountInfoDataCc::getCc()
{
	return cc;
}

void
AccountInfoDataCc::setCc(std::string cc)
{
	this->cc = cc;
}

std::string
AccountInfoDataCc::getCcExp()
{
	return cc_exp;
}

void
AccountInfoDataCc::setCcExp(std::string cc_exp)
{
	this->cc_exp = cc_exp;
}

std::string
AccountInfoDataCc::getName()
{
	return name;
}

void
AccountInfoDataCc::setName(std::string name)
{
	this->name = name;
}

std::string
AccountInfoDataCc::getAddress()
{
	return address;
}

void
AccountInfoDataCc::setAddress(std::string address)
{
	this->address = address;
}

std::string
AccountInfoDataCc::getCity()
{
	return city;
}

void
AccountInfoDataCc::setCity(std::string city)
{
	this->city = city;
}

std::string
AccountInfoDataCc::getState()
{
	return state;
}

void
AccountInfoDataCc::setState(std::string state)
{
	this->state = state;
}

std::string
AccountInfoDataCc::getZip()
{
	return zip;
}

void
AccountInfoDataCc::setZip(std::string zip)
{
	this->zip = zip;
}

std::string
AccountInfoDataCc::getCountry()
{
	return country;
}

void
AccountInfoDataCc::setCountry(std::string country)
{
	this->country = country;
}

std::string
AccountInfoDataCc::getMaxmindRiskscore()
{
	return maxmind_riskscore;
}

void
AccountInfoDataCc::setMaxmindRiskscore(std::string maxmind_riskscore)
{
	this->maxmind_riskscore = maxmind_riskscore;
}

AccountInfoMaxMindResponse
AccountInfoDataCc::getMaxmind()
{
	return maxmind;
}

void
AccountInfoDataCc::setMaxmind(AccountInfoMaxMindResponse maxmind)
{
	this->maxmind = maxmind;
}

bool
AccountInfoDataCc::isVerified()
{
	return verified;
}

void
AccountInfoDataCc::setVerified(bool verified)
{
	this->verified = verified;
}



