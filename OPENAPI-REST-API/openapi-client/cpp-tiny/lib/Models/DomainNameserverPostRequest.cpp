

#include "DomainNameserverPostRequest.h"

using namespace Tiny;

DomainNameserverPostRequest::DomainNameserverPostRequest()
{
	name = std::string();
	ipAddress = std::string();
}

DomainNameserverPostRequest::DomainNameserverPostRequest(std::string jsonString)
{
	this->fromJson(jsonString);
}

DomainNameserverPostRequest::~DomainNameserverPostRequest()
{

}

void
DomainNameserverPostRequest::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *nameKey = "name";

    if(object.has_key(nameKey))
    {
        bourne::json value = object[nameKey];



        jsonToValue(&name, value, "std::string");


    }

    const char *ipAddressKey = "ipAddress";

    if(object.has_key(ipAddressKey))
    {
        bourne::json value = object[ipAddressKey];



        jsonToValue(&ipAddress, value, "std::string");


    }


}

bourne::json
DomainNameserverPostRequest::toJson()
{
    bourne::json object = bourne::json::object();





    object["name"] = getName();






    object["ipAddress"] = getIpAddress();



    return object;

}

std::string
DomainNameserverPostRequest::getName()
{
	return name;
}

void
DomainNameserverPostRequest::setName(std::string name)
{
	this->name = name;
}

std::string
DomainNameserverPostRequest::getIpAddress()
{
	return ipAddress;
}

void
DomainNameserverPostRequest::setIpAddress(std::string ipAddress)
{
	this->ipAddress = ipAddress;
}



