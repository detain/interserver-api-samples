

#include "Home_services_vps.h"

using namespace Tiny;

Home_services_vps::Home_services_vps()
{
	links = HomeServicesVpsLinks();
	count = int(0);
}

Home_services_vps::Home_services_vps(std::string jsonString)
{
	this->fromJson(jsonString);
}

Home_services_vps::~Home_services_vps()
{

}

void
Home_services_vps::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *linksKey = "links";

    if(object.has_key(linksKey))
    {
        bourne::json value = object[linksKey];




        HomeServicesVpsLinks* obj = &links;
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
Home_services_vps::toJson()
{
    bourne::json object = bourne::json::object();






	object["links"] = getLinks().toJson();





    object["count"] = getCount();



    return object;

}

HomeServicesVpsLinks
Home_services_vps::getLinks()
{
	return links;
}

void
Home_services_vps::setLinks(HomeServicesVpsLinks links)
{
	this->links = links;
}

int
Home_services_vps::getCount()
{
	return count;
}

void
Home_services_vps::setCount(int count)
{
	this->count = count;
}



