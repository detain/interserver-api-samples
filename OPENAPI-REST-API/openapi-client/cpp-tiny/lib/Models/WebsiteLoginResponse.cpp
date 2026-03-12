

#include "WebsiteLoginResponse.h"

using namespace Tiny;

WebsiteLoginResponse::WebsiteLoginResponse()
{
	type = std::string();
	location = std::string();
}

WebsiteLoginResponse::WebsiteLoginResponse(std::string jsonString)
{
	this->fromJson(jsonString);
}

WebsiteLoginResponse::~WebsiteLoginResponse()
{

}

void
WebsiteLoginResponse::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *typeKey = "type";

    if(object.has_key(typeKey))
    {
        bourne::json value = object[typeKey];



        jsonToValue(&type, value, "std::string");


    }

    const char *locationKey = "location";

    if(object.has_key(locationKey))
    {
        bourne::json value = object[locationKey];



        jsonToValue(&location, value, "std::string");


    }


}

bourne::json
WebsiteLoginResponse::toJson()
{
    bourne::json object = bourne::json::object();





    object["type"] = getType();






    object["location"] = getLocation();



    return object;

}

std::string
WebsiteLoginResponse::getType()
{
	return type;
}

void
WebsiteLoginResponse::setType(std::string type)
{
	this->type = type;
}

std::string
WebsiteLoginResponse::getLocation()
{
	return location;
}

void
WebsiteLoginResponse::setLocation(std::string location)
{
	this->location = location;
}



