

#include "GetOrderDetail_200_response_ips_inner.h"

using namespace Tiny;

GetOrderDetail_200_response_ips_inner::GetOrderDetail_200_response_ips_inner()
{
	service_id = float(0);
	service_module = std::string();
	service_hostname = std::string();
}

GetOrderDetail_200_response_ips_inner::GetOrderDetail_200_response_ips_inner(std::string jsonString)
{
	this->fromJson(jsonString);
}

GetOrderDetail_200_response_ips_inner::~GetOrderDetail_200_response_ips_inner()
{

}

void
GetOrderDetail_200_response_ips_inner::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *service_idKey = "service_id";

    if(object.has_key(service_idKey))
    {
        bourne::json value = object[service_idKey];



        jsonToValue(&service_id, value, "long");


    }

    const char *service_moduleKey = "service_module";

    if(object.has_key(service_moduleKey))
    {
        bourne::json value = object[service_moduleKey];



        jsonToValue(&service_module, value, "std::string");


    }

    const char *service_hostnameKey = "service_hostname";

    if(object.has_key(service_hostnameKey))
    {
        bourne::json value = object[service_hostnameKey];



        jsonToValue(&service_hostname, value, "std::string");


    }


}

bourne::json
GetOrderDetail_200_response_ips_inner::toJson()
{
    bourne::json object = bourne::json::object();





    object["service_id"] = getServiceId();






    object["service_module"] = getServiceModule();






    object["service_hostname"] = getServiceHostname();



    return object;

}

long
GetOrderDetail_200_response_ips_inner::getServiceId()
{
	return service_id;
}

void
GetOrderDetail_200_response_ips_inner::setServiceId(long service_id)
{
	this->service_id = service_id;
}

std::string
GetOrderDetail_200_response_ips_inner::getServiceModule()
{
	return service_module;
}

void
GetOrderDetail_200_response_ips_inner::setServiceModule(std::string service_module)
{
	this->service_module = service_module;
}

std::string
GetOrderDetail_200_response_ips_inner::getServiceHostname()
{
	return service_hostname;
}

void
GetOrderDetail_200_response_ips_inner::setServiceHostname(std::string service_hostname)
{
	this->service_hostname = service_hostname;
}



