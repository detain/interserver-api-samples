

#include "ServerNetworkInfo_switchports.h"

using namespace Tiny;

ServerNetworkInfo_switchports::ServerNetworkInfo_switchports()
{
	10414 = ServerSwitchport();
}

ServerNetworkInfo_switchports::ServerNetworkInfo_switchports(std::string jsonString)
{
	this->fromJson(jsonString);
}

ServerNetworkInfo_switchports::~ServerNetworkInfo_switchports()
{

}

void
ServerNetworkInfo_switchports::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *10414Key = "10414";

    if(object.has_key(10414Key))
    {
        bourne::json value = object[10414Key];




        ServerSwitchport* obj = &10414;
		obj->fromJson(value.dump());

    }


}

bourne::json
ServerNetworkInfo_switchports::toJson()
{
    bourne::json object = bourne::json::object();






	object["10414"] = get10414().toJson();


    return object;

}

ServerSwitchport
ServerNetworkInfo_switchports::get10414()
{
	return 10414;
}

void
ServerNetworkInfo_switchports::set10414(ServerSwitchport 10414)
{
	this->10414 = 10414;
}



