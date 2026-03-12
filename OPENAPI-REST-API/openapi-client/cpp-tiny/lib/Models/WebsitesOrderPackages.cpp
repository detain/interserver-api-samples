

#include "WebsitesOrderPackages.h"

using namespace Tiny;

WebsitesOrderPackages::WebsitesOrderPackages()
{
	11447 = std::string();
}

WebsitesOrderPackages::WebsitesOrderPackages(std::string jsonString)
{
	this->fromJson(jsonString);
}

WebsitesOrderPackages::~WebsitesOrderPackages()
{

}

void
WebsitesOrderPackages::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *11447Key = "11447";

    if(object.has_key(11447Key))
    {
        bourne::json value = object[11447Key];



        jsonToValue(&11447, value, "std::string");


    }


}

bourne::json
WebsitesOrderPackages::toJson()
{
    bourne::json object = bourne::json::object();





    object["11447"] = get11447();



    return object;

}

std::string
WebsitesOrderPackages::get11447()
{
	return 11447;
}

void
WebsitesOrderPackages::set11447(std::string 11447)
{
	this->11447 = 11447;
}



