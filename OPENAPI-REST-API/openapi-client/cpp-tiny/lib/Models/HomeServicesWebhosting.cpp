

#include "Home_services_webhosting.h"

using namespace Tiny;

Home_services_webhosting::Home_services_webhosting()
{
	links = HomeServicesWebhostingLinks();
	count = int(0);
}

Home_services_webhosting::Home_services_webhosting(std::string jsonString)
{
	this->fromJson(jsonString);
}

Home_services_webhosting::~Home_services_webhosting()
{

}

void
Home_services_webhosting::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *linksKey = "links";

    if(object.has_key(linksKey))
    {
        bourne::json value = object[linksKey];




        HomeServicesWebhostingLinks* obj = &links;
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
Home_services_webhosting::toJson()
{
    bourne::json object = bourne::json::object();






	object["links"] = getLinks().toJson();





    object["count"] = getCount();



    return object;

}

HomeServicesWebhostingLinks
Home_services_webhosting::getLinks()
{
	return links;
}

void
Home_services_webhosting::setLinks(HomeServicesWebhostingLinks links)
{
	this->links = links;
}

int
Home_services_webhosting::getCount()
{
	return count;
}

void
Home_services_webhosting::setCount(int count)
{
	this->count = count;
}



