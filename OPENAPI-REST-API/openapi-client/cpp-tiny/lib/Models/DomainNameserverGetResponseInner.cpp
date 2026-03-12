

#include "DomainNameserverGetResponse_inner.h"

using namespace Tiny;

DomainNameserverGetResponse_inner::DomainNameserverGetResponse_inner()
{
	name = std::string();
	ipaddress = std::string();
	can_delete = std::string();
}

DomainNameserverGetResponse_inner::DomainNameserverGetResponse_inner(std::string jsonString)
{
	this->fromJson(jsonString);
}

DomainNameserverGetResponse_inner::~DomainNameserverGetResponse_inner()
{

}

void
DomainNameserverGetResponse_inner::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *nameKey = "name";

    if(object.has_key(nameKey))
    {
        bourne::json value = object[nameKey];



        jsonToValue(&name, value, "std::string");


    }

    const char *ipaddressKey = "ipaddress";

    if(object.has_key(ipaddressKey))
    {
        bourne::json value = object[ipaddressKey];



        jsonToValue(&ipaddress, value, "std::string");


    }

    const char *can_deleteKey = "can_delete";

    if(object.has_key(can_deleteKey))
    {
        bourne::json value = object[can_deleteKey];



        jsonToValue(&can_delete, value, "std::string");


    }


}

bourne::json
DomainNameserverGetResponse_inner::toJson()
{
    bourne::json object = bourne::json::object();





    object["name"] = getName();






    object["ipaddress"] = getIpaddress();






    object["can_delete"] = getCanDelete();



    return object;

}

std::string
DomainNameserverGetResponse_inner::getName()
{
	return name;
}

void
DomainNameserverGetResponse_inner::setName(std::string name)
{
	this->name = name;
}

std::string
DomainNameserverGetResponse_inner::getIpaddress()
{
	return ipaddress;
}

void
DomainNameserverGetResponse_inner::setIpaddress(std::string ipaddress)
{
	this->ipaddress = ipaddress;
}

std::string
DomainNameserverGetResponse_inner::getCanDelete()
{
	return can_delete;
}

void
DomainNameserverGetResponse_inner::setCanDelete(std::string can_delete)
{
	this->can_delete = can_delete;
}



