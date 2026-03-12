

#include "WebsitesOrder_packges.h"

using namespace Tiny;

WebsitesOrder_packges::WebsitesOrder_packges()
{
	11440 = WebsitesOrderPackagesInfo();
}

WebsitesOrder_packges::WebsitesOrder_packges(std::string jsonString)
{
	this->fromJson(jsonString);
}

WebsitesOrder_packges::~WebsitesOrder_packges()
{

}

void
WebsitesOrder_packges::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *11440Key = "11440";

    if(object.has_key(11440Key))
    {
        bourne::json value = object[11440Key];




        WebsitesOrderPackagesInfo* obj = &11440;
		obj->fromJson(value.dump());

    }


}

bourne::json
WebsitesOrder_packges::toJson()
{
    bourne::json object = bourne::json::object();






	object["11440"] = get11440().toJson();


    return object;

}

WebsitesOrderPackagesInfo
WebsitesOrder_packges::get11440()
{
	return 11440;
}

void
WebsitesOrder_packges::set11440(WebsitesOrderPackagesInfo 11440)
{
	this->11440 = 11440;
}



