

#include "PostWebsiteBuyIp_request.h"

using namespace Tiny;

PostWebsiteBuyIp_request::PostWebsiteBuyIp_request()
{
	ips = null<std::string>();
}

PostWebsiteBuyIp_request::PostWebsiteBuyIp_request(std::string jsonString)
{
	this->fromJson(jsonString);
}

PostWebsiteBuyIp_request::~PostWebsiteBuyIp_request()
{

}

void
PostWebsiteBuyIp_request::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *ipsKey = "ips";

    if(object.has_key(ipsKey))
    {
        bourne::json value = object[ipsKey];


    }


}

bourne::json
PostWebsiteBuyIp_request::toJson()
{
    bourne::json object = bourne::json::object();





    return object;

}

std::map<std::string, std::string>
PostWebsiteBuyIp_request::getIps()
{
	return ips;
}

void
PostWebsiteBuyIp_request::setIps(std::map<std::string, std::string> ips)
{
	this->ips = ips;
}



