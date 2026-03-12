

#include "Home_services_licenses.h"

using namespace Tiny;

Home_services_licenses::Home_services_licenses()
{
	links = HomeServicesLicensesLinks();
	count = int(0);
}

Home_services_licenses::Home_services_licenses(std::string jsonString)
{
	this->fromJson(jsonString);
}

Home_services_licenses::~Home_services_licenses()
{

}

void
Home_services_licenses::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *linksKey = "links";

    if(object.has_key(linksKey))
    {
        bourne::json value = object[linksKey];




        HomeServicesLicensesLinks* obj = &links;
		obj->fromJson(value.dump());

    }

    const char *countKey = "count";

    if(object.has_key(countKey))
    {
        bourne::json value = object[countKey];



        jsonToValue(&count, value, "int");


    }


}

bourne::json
Home_services_licenses::toJson()
{
    bourne::json object = bourne::json::object();






	object["links"] = getLinks().toJson();





    object["count"] = getCount();



    return object;

}

HomeServicesLicensesLinks
Home_services_licenses::getLinks()
{
	return links;
}

void
Home_services_licenses::setLinks(HomeServicesLicensesLinks links)
{
	this->links = links;
}

int
Home_services_licenses::getCount()
{
	return count;
}

void
Home_services_licenses::setCount(int count)
{
	this->count = count;
}



