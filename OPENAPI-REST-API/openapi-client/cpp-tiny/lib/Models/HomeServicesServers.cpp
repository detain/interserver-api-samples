

#include "Home_services_servers.h"

using namespace Tiny;

Home_services_servers::Home_services_servers()
{
	links = HomeServicesServersLinks();
	count = int(0);
}

Home_services_servers::Home_services_servers(std::string jsonString)
{
	this->fromJson(jsonString);
}

Home_services_servers::~Home_services_servers()
{

}

void
Home_services_servers::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *linksKey = "links";

    if(object.has_key(linksKey))
    {
        bourne::json value = object[linksKey];




        HomeServicesServersLinks* obj = &links;
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
Home_services_servers::toJson()
{
    bourne::json object = bourne::json::object();






	object["links"] = getLinks().toJson();





    object["count"] = getCount();



    return object;

}

HomeServicesServersLinks
Home_services_servers::getLinks()
{
	return links;
}

void
Home_services_servers::setLinks(HomeServicesServersLinks links)
{
	this->links = links;
}

int
Home_services_servers::getCount()
{
	return count;
}

void
Home_services_servers::setCount(int count)
{
	this->count = count;
}



