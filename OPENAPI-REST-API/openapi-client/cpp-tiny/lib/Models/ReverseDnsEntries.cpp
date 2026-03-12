

#include "ReverseDnsEntries.h"

using namespace Tiny;

ReverseDnsEntries::ReverseDnsEntries()
{
	ips = null<AnyType>();
}

ReverseDnsEntries::ReverseDnsEntries(std::string jsonString)
{
	this->fromJson(jsonString);
}

ReverseDnsEntries::~ReverseDnsEntries()
{

}

void
ReverseDnsEntries::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *ipsKey = "ips";

    if(object.has_key(ipsKey))
    {
        bourne::json value = object[ipsKey];


    }


}

bourne::json
ReverseDnsEntries::toJson()
{
    bourne::json object = bourne::json::object();





    return object;

}

std::map<std::string, AnyType>
ReverseDnsEntries::getIps()
{
	return ips;
}

void
ReverseDnsEntries::setIps(std::map<std::string, AnyType> ips)
{
	this->ips = ips;
}



