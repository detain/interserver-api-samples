

#include "QuickserverOrderDistroSelUbuntu.h"

using namespace Tiny;

QuickserverOrderDistroSelUbuntu::QuickserverOrderDistroSelUbuntu()
{
	ubuntu = std::string();
}

QuickserverOrderDistroSelUbuntu::QuickserverOrderDistroSelUbuntu(std::string jsonString)
{
	this->fromJson(jsonString);
}

QuickserverOrderDistroSelUbuntu::~QuickserverOrderDistroSelUbuntu()
{

}

void
QuickserverOrderDistroSelUbuntu::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *ubuntuKey = "Ubuntu";

    if(object.has_key(ubuntuKey))
    {
        bourne::json value = object[ubuntuKey];



        jsonToValue(&ubuntu, value, "std::string");


    }


}

bourne::json
QuickserverOrderDistroSelUbuntu::toJson()
{
    bourne::json object = bourne::json::object();





    object["ubuntu"] = getUbuntu();



    return object;

}

std::string
QuickserverOrderDistroSelUbuntu::getUbuntu()
{
	return ubuntu;
}

void
QuickserverOrderDistroSelUbuntu::setUbuntu(std::string ubuntu)
{
	this->ubuntu = ubuntu;
}



