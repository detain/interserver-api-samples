

#include "WebsitesOrder_serviceTypes.h"

using namespace Tiny;

WebsitesOrder_serviceTypes::WebsitesOrder_serviceTypes()
{
	11447 = WebsitesOrderServiceTypes();
}

WebsitesOrder_serviceTypes::WebsitesOrder_serviceTypes(std::string jsonString)
{
	this->fromJson(jsonString);
}

WebsitesOrder_serviceTypes::~WebsitesOrder_serviceTypes()
{

}

void
WebsitesOrder_serviceTypes::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *11447Key = "11447";

    if(object.has_key(11447Key))
    {
        bourne::json value = object[11447Key];




        WebsitesOrderServiceTypes* obj = &11447;
		obj->fromJson(value.dump());

    }


}

bourne::json
WebsitesOrder_serviceTypes::toJson()
{
    bourne::json object = bourne::json::object();






	object["11447"] = get11447().toJson();


    return object;

}

WebsitesOrderServiceTypes
WebsitesOrder_serviceTypes::get11447()
{
	return 11447;
}

void
WebsitesOrder_serviceTypes::set11447(WebsitesOrderServiceTypes 11447)
{
	this->11447 = 11447;
}



