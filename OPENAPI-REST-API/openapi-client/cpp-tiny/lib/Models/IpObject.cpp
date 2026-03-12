

#include "IpObject.h"

using namespace Tiny;

IpObject::IpObject()
{
	ip = std::string();
}

IpObject::IpObject(std::string jsonString)
{
	this->fromJson(jsonString);
}

IpObject::~IpObject()
{

}

void
IpObject::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *ipKey = "ip";

    if(object.has_key(ipKey))
    {
        bourne::json value = object[ipKey];



        jsonToValue(&ip, value, "std::string");


    }


}

bourne::json
IpObject::toJson()
{
    bourne::json object = bourne::json::object();





    object["ip"] = getIp();



    return object;

}

std::string
IpObject::getIp()
{
	return ip;
}

void
IpObject::setIp(std::string ip)
{
	this->ip = ip;
}



