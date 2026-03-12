

#include "HomeServicesDomainsLinks.h"

using namespace Tiny;

HomeServicesDomainsLinks::HomeServicesDomainsLinks()
{
	376114 = std::string();
	376503 = std::string();
	592337 = std::string();
}

HomeServicesDomainsLinks::HomeServicesDomainsLinks(std::string jsonString)
{
	this->fromJson(jsonString);
}

HomeServicesDomainsLinks::~HomeServicesDomainsLinks()
{

}

void
HomeServicesDomainsLinks::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *376114Key = "376114";

    if(object.has_key(376114Key))
    {
        bourne::json value = object[376114Key];



        jsonToValue(&376114, value, "std::string");


    }

    const char *376503Key = "376503";

    if(object.has_key(376503Key))
    {
        bourne::json value = object[376503Key];



        jsonToValue(&376503, value, "std::string");


    }

    const char *592337Key = "592337";

    if(object.has_key(592337Key))
    {
        bourne::json value = object[592337Key];



        jsonToValue(&592337, value, "std::string");


    }


}

bourne::json
HomeServicesDomainsLinks::toJson()
{
    bourne::json object = bourne::json::object();





    object["376114"] = get376114();






    object["376503"] = get376503();






    object["592337"] = get592337();



    return object;

}

std::string
HomeServicesDomainsLinks::get376114()
{
	return 376114;
}

void
HomeServicesDomainsLinks::set376114(std::string 376114)
{
	this->376114 = 376114;
}

std::string
HomeServicesDomainsLinks::get376503()
{
	return 376503;
}

void
HomeServicesDomainsLinks::set376503(std::string 376503)
{
	this->376503 = 376503;
}

std::string
HomeServicesDomainsLinks::get592337()
{
	return 592337;
}

void
HomeServicesDomainsLinks::set592337(std::string 592337)
{
	this->592337 = 592337;
}



