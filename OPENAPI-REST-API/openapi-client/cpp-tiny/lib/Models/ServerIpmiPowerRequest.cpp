

#include "ServerIpmiPowerRequest.h"

using namespace Tiny;

ServerIpmiPowerRequest::ServerIpmiPowerRequest()
{
	action = std::string();
	asset = int(0);
}

ServerIpmiPowerRequest::ServerIpmiPowerRequest(std::string jsonString)
{
	this->fromJson(jsonString);
}

ServerIpmiPowerRequest::~ServerIpmiPowerRequest()
{

}

void
ServerIpmiPowerRequest::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *actionKey = "action";

    if(object.has_key(actionKey))
    {
        bourne::json value = object[actionKey];



        jsonToValue(&action, value, "std::string");


    }

    const char *assetKey = "asset";

    if(object.has_key(assetKey))
    {
        bourne::json value = object[assetKey];



        jsonToValue(&asset, value, "int");


    }


}

bourne::json
ServerIpmiPowerRequest::toJson()
{
    bourne::json object = bourne::json::object();





    object["action"] = getAction();






    object["asset"] = getAsset();



    return object;

}

std::string
ServerIpmiPowerRequest::getAction()
{
	return action;
}

void
ServerIpmiPowerRequest::setAction(std::string action)
{
	this->action = action;
}

int
ServerIpmiPowerRequest::getAsset()
{
	return asset;
}

void
ServerIpmiPowerRequest::setAsset(int asset)
{
	this->asset = asset;
}



