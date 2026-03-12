

#include "HomeServicesWebhostingLinks.h"

using namespace Tiny;

HomeServicesWebhostingLinks::HomeServicesWebhostingLinks()
{
	376359 = std::string();
	376473 = std::string();
	386218 = std::string();
}

HomeServicesWebhostingLinks::HomeServicesWebhostingLinks(std::string jsonString)
{
	this->fromJson(jsonString);
}

HomeServicesWebhostingLinks::~HomeServicesWebhostingLinks()
{

}

void
HomeServicesWebhostingLinks::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *376359Key = "376359";

    if(object.has_key(376359Key))
    {
        bourne::json value = object[376359Key];



        jsonToValue(&376359, value, "std::string");


    }

    const char *376473Key = "376473";

    if(object.has_key(376473Key))
    {
        bourne::json value = object[376473Key];



        jsonToValue(&376473, value, "std::string");


    }

    const char *386218Key = "386218";

    if(object.has_key(386218Key))
    {
        bourne::json value = object[386218Key];



        jsonToValue(&386218, value, "std::string");


    }


}

bourne::json
HomeServicesWebhostingLinks::toJson()
{
    bourne::json object = bourne::json::object();





    object["376359"] = get376359();






    object["376473"] = get376473();






    object["386218"] = get386218();



    return object;

}

std::string
HomeServicesWebhostingLinks::get376359()
{
	return 376359;
}

void
HomeServicesWebhostingLinks::set376359(std::string 376359)
{
	this->376359 = 376359;
}

std::string
HomeServicesWebhostingLinks::get376473()
{
	return 376473;
}

void
HomeServicesWebhostingLinks::set376473(std::string 376473)
{
	this->376473 = 376473;
}

std::string
HomeServicesWebhostingLinks::get386218()
{
	return 386218;
}

void
HomeServicesWebhostingLinks::set386218(std::string 386218)
{
	this->386218 = 386218;
}



