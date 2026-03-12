

#include "Home_services_backups.h"

using namespace Tiny;

Home_services_backups::Home_services_backups()
{
	links = std::list<std::string>();
	count = int(0);
}

Home_services_backups::Home_services_backups(std::string jsonString)
{
	this->fromJson(jsonString);
}

Home_services_backups::~Home_services_backups()
{

}

void
Home_services_backups::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *linksKey = "links";

    if(object.has_key(linksKey))
    {
        bourne::json value = object[linksKey];


        std::list<std::string> links_list;
        std::string element;
        for(auto& var : value.array_range())
        {

            jsonToValue(&element, var, "std::string");


            links_list.push_back(element);
        }
        links = links_list;


    }

    const char *countKey = "count";

    if(object.has_key(countKey))
    {
        bourne::json value = object[countKey];



        jsonToValue(&count, value, "int");


    }


}

bourne::json
Home_services_backups::toJson()
{
    bourne::json object = bourne::json::object();




    std::list<std::string> links_list = getLinks();
    bourne::json links_arr = bourne::json::array();

    for(auto& var : links_list)
    {
        links_arr.append(var);
    }
    object["links"] = links_arr;









    object["count"] = getCount();



    return object;

}

std::list<std::string>
Home_services_backups::getLinks()
{
	return links;
}

void
Home_services_backups::setLinks(std::list<std::string> links)
{
	this->links = links;
}

int
Home_services_backups::getCount()
{
	return count;
}

void
Home_services_backups::setCount(int count)
{
	this->count = count;
}



