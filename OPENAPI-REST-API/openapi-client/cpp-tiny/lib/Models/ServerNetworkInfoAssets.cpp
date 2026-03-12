

#include "ServerNetworkInfo_assets.h"

using namespace Tiny;

ServerNetworkInfo_assets::ServerNetworkInfo_assets()
{
	3497 = ServerAsset();
}

ServerNetworkInfo_assets::ServerNetworkInfo_assets(std::string jsonString)
{
	this->fromJson(jsonString);
}

ServerNetworkInfo_assets::~ServerNetworkInfo_assets()
{

}

void
ServerNetworkInfo_assets::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *3497Key = "3497";

    if(object.has_key(3497Key))
    {
        bourne::json value = object[3497Key];




        ServerAsset* obj = &3497;
		obj->fromJson(value.dump());

    }


}

bourne::json
ServerNetworkInfo_assets::toJson()
{
    bourne::json object = bourne::json::object();






	object["3497"] = get3497().toJson();


    return object;

}

ServerAsset
ServerNetworkInfo_assets::get3497()
{
	return 3497;
}

void
ServerNetworkInfo_assets::set3497(ServerAsset 3497)
{
	this->3497 = 3497;
}



