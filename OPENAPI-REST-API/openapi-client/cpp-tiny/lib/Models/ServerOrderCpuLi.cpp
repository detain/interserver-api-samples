

#include "ServerOrder_cpu_li.h"

using namespace Tiny;

ServerOrder_cpu_li::ServerOrder_cpu_li()
{
	254 = ServerOrderCPU();
}

ServerOrder_cpu_li::ServerOrder_cpu_li(std::string jsonString)
{
	this->fromJson(jsonString);
}

ServerOrder_cpu_li::~ServerOrder_cpu_li()
{

}

void
ServerOrder_cpu_li::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *254Key = "254";

    if(object.has_key(254Key))
    {
        bourne::json value = object[254Key];




        ServerOrderCPU* obj = &254;
		obj->fromJson(value.dump());

    }


}

bourne::json
ServerOrder_cpu_li::toJson()
{
    bourne::json object = bourne::json::object();






	object["254"] = get254().toJson();


    return object;

}

ServerOrderCPU
ServerOrder_cpu_li::get254()
{
	return 254;
}

void
ServerOrder_cpu_li::set254(ServerOrderCPU 254)
{
	this->254 = 254;
}



