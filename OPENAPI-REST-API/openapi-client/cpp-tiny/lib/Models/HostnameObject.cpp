

#include "HostnameObject.h"

using namespace Tiny;

HostnameObject::HostnameObject()
{
	hostname = std::string();
}

HostnameObject::HostnameObject(std::string jsonString)
{
	this->fromJson(jsonString);
}

HostnameObject::~HostnameObject()
{

}

void
HostnameObject::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *hostnameKey = "hostname";

    if(object.has_key(hostnameKey))
    {
        bourne::json value = object[hostnameKey];



        jsonToValue(&hostname, value, "std::string");


    }


}

bourne::json
HostnameObject::toJson()
{
    bourne::json object = bourne::json::object();





    object["hostname"] = getHostname();



    return object;

}

std::string
HostnameObject::getHostname()
{
	return hostname;
}

void
HostnameObject::setHostname(std::string hostname)
{
	this->hostname = hostname;
}



