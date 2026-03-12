

#include "WebsiteBackups.h"

using namespace Tiny;

WebsiteBackups::WebsiteBackups()
{
}

WebsiteBackups::WebsiteBackups(std::string jsonString)
{
	this->fromJson(jsonString);
}

WebsiteBackups::~WebsiteBackups()
{

}

void
WebsiteBackups::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);


}

bourne::json
WebsiteBackups::toJson()
{
    bourne::json object = bourne::json::object();


    return object;

}



