

#include "ServerOrder_bandwidth_li.h"

using namespace Tiny;

ServerOrder_bandwidth_li::ServerOrder_bandwidth_li()
{
	15 = ServerOrderBandwidth();
}

ServerOrder_bandwidth_li::ServerOrder_bandwidth_li(std::string jsonString)
{
	this->fromJson(jsonString);
}

ServerOrder_bandwidth_li::~ServerOrder_bandwidth_li()
{

}

void
ServerOrder_bandwidth_li::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *15Key = "15";

    if(object.has_key(15Key))
    {
        bourne::json value = object[15Key];




        ServerOrderBandwidth* obj = &15;
		obj->fromJson(value.dump());

    }


}

bourne::json
ServerOrder_bandwidth_li::toJson()
{
    bourne::json object = bourne::json::object();






	object["15"] = get15().toJson();


    return object;

}

ServerOrderBandwidth
ServerOrder_bandwidth_li::get15()
{
	return 15;
}

void
ServerOrder_bandwidth_li::set15(ServerOrderBandwidth 15)
{
	this->15 = 15;
}



