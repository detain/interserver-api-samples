

#include "Home_services_domains.h"

using namespace Tiny;

Home_services_domains::Home_services_domains()
{
	links = HomeServicesDomainsLinks();
	count = int(0);
}

Home_services_domains::Home_services_domains(std::string jsonString)
{
	this->fromJson(jsonString);
}

Home_services_domains::~Home_services_domains()
{

}

void
Home_services_domains::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *linksKey = "links";

    if(object.has_key(linksKey))
    {
        bourne::json value = object[linksKey];




        HomeServicesDomainsLinks* obj = &links;
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
Home_services_domains::toJson()
{
    bourne::json object = bourne::json::object();






	object["links"] = getLinks().toJson();





    object["count"] = getCount();



    return object;

}

HomeServicesDomainsLinks
Home_services_domains::getLinks()
{
	return links;
}

void
Home_services_domains::setLinks(HomeServicesDomainsLinks links)
{
	this->links = links;
}

int
Home_services_domains::getCount()
{
	return count;
}

void
Home_services_domains::setCount(int count)
{
	this->count = count;
}



