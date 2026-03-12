

#include "HomeServicesVpsLinks.h"

using namespace Tiny;

HomeServicesVpsLinks::HomeServicesVpsLinks()
{
	465503 = std::string();
	2500081 = std::string();
	2578866 = std::string();
}

HomeServicesVpsLinks::HomeServicesVpsLinks(std::string jsonString)
{
	this->fromJson(jsonString);
}

HomeServicesVpsLinks::~HomeServicesVpsLinks()
{

}

void
HomeServicesVpsLinks::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *465503Key = "465503";

    if(object.has_key(465503Key))
    {
        bourne::json value = object[465503Key];



        jsonToValue(&465503, value, "std::string");


    }

    const char *2500081Key = "2500081";

    if(object.has_key(2500081Key))
    {
        bourne::json value = object[2500081Key];



        jsonToValue(&2500081, value, "std::string");


    }

    const char *2578866Key = "2578866";

    if(object.has_key(2578866Key))
    {
        bourne::json value = object[2578866Key];



        jsonToValue(&2578866, value, "std::string");


    }


}

bourne::json
HomeServicesVpsLinks::toJson()
{
    bourne::json object = bourne::json::object();





    object["465503"] = get465503();






    object["2500081"] = get2500081();






    object["2578866"] = get2578866();



    return object;

}

std::string
HomeServicesVpsLinks::get465503()
{
	return 465503;
}

void
HomeServicesVpsLinks::set465503(std::string 465503)
{
	this->465503 = 465503;
}

std::string
HomeServicesVpsLinks::get2500081()
{
	return 2500081;
}

void
HomeServicesVpsLinks::set2500081(std::string 2500081)
{
	this->2500081 = 2500081;
}

std::string
HomeServicesVpsLinks::get2578866()
{
	return 2578866;
}

void
HomeServicesVpsLinks::set2578866(std::string 2578866)
{
	this->2578866 = 2578866;
}



