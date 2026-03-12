

#include "ScrubIpPlaceOrder.h"

using namespace Tiny;

ScrubIpPlaceOrder::ScrubIpPlaceOrder()
{
	service_type = int(0);
	ip = std::string();
}

ScrubIpPlaceOrder::ScrubIpPlaceOrder(std::string jsonString)
{
	this->fromJson(jsonString);
}

ScrubIpPlaceOrder::~ScrubIpPlaceOrder()
{

}

void
ScrubIpPlaceOrder::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *service_typeKey = "service_type";

    if(object.has_key(service_typeKey))
    {
        bourne::json value = object[service_typeKey];



        jsonToValue(&service_type, value, "int");


    }

    const char *ipKey = "ip";

    if(object.has_key(ipKey))
    {
        bourne::json value = object[ipKey];



        jsonToValue(&ip, value, "std::string");


    }


}

bourne::json
ScrubIpPlaceOrder::toJson()
{
    bourne::json object = bourne::json::object();





    object["service_type"] = getServiceType();






    object["ip"] = getIp();



    return object;

}

int
ScrubIpPlaceOrder::getServiceType()
{
	return service_type;
}

void
ScrubIpPlaceOrder::setServiceType(int service_type)
{
	this->service_type = service_type;
}

std::string
ScrubIpPlaceOrder::getIp()
{
	return ip;
}

void
ScrubIpPlaceOrder::setIp(std::string ip)
{
	this->ip = ip;
}



