

#include "AccountInfoData_extra.h"

using namespace Tiny;

AccountInfoData_extra::AccountInfoData_extra()
{
	private_whois = std::string();
}

AccountInfoData_extra::AccountInfoData_extra(std::string jsonString)
{
	this->fromJson(jsonString);
}

AccountInfoData_extra::~AccountInfoData_extra()
{

}

void
AccountInfoData_extra::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *private_whoisKey = "private_whois";

    if(object.has_key(private_whoisKey))
    {
        bourne::json value = object[private_whoisKey];



        jsonToValue(&private_whois, value, "std::string");


    }


}

bourne::json
AccountInfoData_extra::toJson()
{
    bourne::json object = bourne::json::object();





    object["private_whois"] = getPrivateWhois();



    return object;

}

std::string
AccountInfoData_extra::getPrivateWhois()
{
	return private_whois;
}

void
AccountInfoData_extra::setPrivateWhois(std::string private_whois)
{
	this->private_whois = private_whois;
}



