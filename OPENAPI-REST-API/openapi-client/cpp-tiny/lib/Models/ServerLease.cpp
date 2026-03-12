

#include "ServerLease.h"

using namespace Tiny;

ServerLease::ServerLease()
{
	mac = std::string();
	authenticated = bool(false);
	group = std::string();
}

ServerLease::ServerLease(std::string jsonString)
{
	this->fromJson(jsonString);
}

ServerLease::~ServerLease()
{

}

void
ServerLease::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *macKey = "mac";

    if(object.has_key(macKey))
    {
        bourne::json value = object[macKey];



        jsonToValue(&mac, value, "std::string");


    }

    const char *authenticatedKey = "authenticated";

    if(object.has_key(authenticatedKey))
    {
        bourne::json value = object[authenticatedKey];



        jsonToValue(&authenticated, value, "bool");


    }

    const char *groupKey = "group";

    if(object.has_key(groupKey))
    {
        bourne::json value = object[groupKey];



        jsonToValue(&group, value, "std::string");


    }


}

bourne::json
ServerLease::toJson()
{
    bourne::json object = bourne::json::object();





    object["mac"] = getMac();






    object["authenticated"] = isAuthenticated();






    object["group"] = getGroup();



    return object;

}

std::string
ServerLease::getMac()
{
	return mac;
}

void
ServerLease::setMac(std::string mac)
{
	this->mac = mac;
}

bool
ServerLease::isAuthenticated()
{
	return authenticated;
}

void
ServerLease::setAuthenticated(bool authenticated)
{
	this->authenticated = authenticated;
}

std::string
ServerLease::getGroup()
{
	return group;
}

void
ServerLease::setGroup(std::string group)
{
	this->group = group;
}



