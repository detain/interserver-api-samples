

#include "ServerIpmiLiveRequest.h"

using namespace Tiny;

ServerIpmiLiveRequest::ServerIpmiLiveRequest()
{
	ip = std::string();
	asset = int(0);
}

ServerIpmiLiveRequest::ServerIpmiLiveRequest(std::string jsonString)
{
	this->fromJson(jsonString);
}

ServerIpmiLiveRequest::~ServerIpmiLiveRequest()
{

}

void
ServerIpmiLiveRequest::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *ipKey = "ip";

    if(object.has_key(ipKey))
    {
        bourne::json value = object[ipKey];



        jsonToValue(&ip, value, "std::string");


    }

    const char *assetKey = "asset";

    if(object.has_key(assetKey))
    {
        bourne::json value = object[assetKey];



        jsonToValue(&asset, value, "int");


    }


}

bourne::json
ServerIpmiLiveRequest::toJson()
{
    bourne::json object = bourne::json::object();





    object["ip"] = getIp();






    object["asset"] = getAsset();



    return object;

}

std::string
ServerIpmiLiveRequest::getIp()
{
	return ip;
}

void
ServerIpmiLiveRequest::setIp(std::string ip)
{
	this->ip = ip;
}

int
ServerIpmiLiveRequest::getAsset()
{
	return asset;
}

void
ServerIpmiLiveRequest::setAsset(int asset)
{
	this->asset = asset;
}



