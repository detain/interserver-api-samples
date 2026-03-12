

#include "GetWebsiteBuyIp_200_response.h"

using namespace Tiny;

GetWebsiteBuyIp_200_response::GetWebsiteBuyIp_200_response()
{
	ips = null<std::string>();
}

GetWebsiteBuyIp_200_response::GetWebsiteBuyIp_200_response(std::string jsonString)
{
	this->fromJson(jsonString);
}

GetWebsiteBuyIp_200_response::~GetWebsiteBuyIp_200_response()
{

}

void
GetWebsiteBuyIp_200_response::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *ipsKey = "ips";

    if(object.has_key(ipsKey))
    {
        bourne::json value = object[ipsKey];


    }


}

bourne::json
GetWebsiteBuyIp_200_response::toJson()
{
    bourne::json object = bourne::json::object();





    return object;

}

std::map<std::string, std::string>
GetWebsiteBuyIp_200_response::getIps()
{
	return ips;
}

void
GetWebsiteBuyIp_200_response::setIps(std::map<std::string, std::string> ips)
{
	this->ips = ips;
}



