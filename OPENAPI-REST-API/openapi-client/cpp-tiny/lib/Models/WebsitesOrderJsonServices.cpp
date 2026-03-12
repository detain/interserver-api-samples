

#include "WebsitesOrderJsonServices.h"

using namespace Tiny;

WebsitesOrderJsonServices::WebsitesOrderJsonServices()
{
	11447 = std::string();
}

WebsitesOrderJsonServices::WebsitesOrderJsonServices(std::string jsonString)
{
	this->fromJson(jsonString);
}

WebsitesOrderJsonServices::~WebsitesOrderJsonServices()
{

}

void
WebsitesOrderJsonServices::fromJson(std::string jsonObj)
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
WebsitesOrderJsonServices::toJson()
{
    bourne::json object = bourne::json::object();





    object["11447"] = get11447();



    return object;

}

std::string
WebsitesOrderJsonServices::get11447()
{
	return 11447;
}

void
WebsitesOrderJsonServices::set11447(std::string 11447)
{
	this->11447 = 11447;
}



