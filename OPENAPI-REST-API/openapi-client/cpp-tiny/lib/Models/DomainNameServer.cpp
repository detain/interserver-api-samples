

#include "DomainNameServer.h"

using namespace Tiny;

DomainNameServer::DomainNameServer()
{
	sortorder = std::string();
	name = std::string();
	ipaddress = std::string();
}

DomainNameServer::DomainNameServer(std::string jsonString)
{
	this->fromJson(jsonString);
}

DomainNameServer::~DomainNameServer()
{

}

void
DomainNameServer::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *sortorderKey = "sortorder";

    if(object.has_key(sortorderKey))
    {
        bourne::json value = object[sortorderKey];



        jsonToValue(&sortorder, value, "std::string");


    }

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


}

bourne::json
DomainNameServer::toJson()
{
    bourne::json object = bourne::json::object();





    object["sortorder"] = getSortorder();






    object["name"] = getName();






    object["ipaddress"] = getIpaddress();



    return object;

}

std::string
DomainNameServer::getSortorder()
{
	return sortorder;
}

void
DomainNameServer::setSortorder(std::string sortorder)
{
	this->sortorder = sortorder;
}

std::string
DomainNameServer::getName()
{
	return name;
}

void
DomainNameServer::setName(std::string name)
{
	this->name = name;
}

std::string
DomainNameServer::getIpaddress()
{
	return ipaddress;
}

void
DomainNameServer::setIpaddress(std::string ipaddress)
{
	this->ipaddress = ipaddress;
}



