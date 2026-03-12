

#include "ServerOrder_memory_li.h"

using namespace Tiny;

ServerOrder_memory_li::ServerOrder_memory_li()
{
	254 = ServerOrder_memory_li_254();
}

ServerOrder_memory_li::ServerOrder_memory_li(std::string jsonString)
{
	this->fromJson(jsonString);
}

ServerOrder_memory_li::~ServerOrder_memory_li()
{

}

void
ServerOrder_memory_li::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *254Key = "254";

    if(object.has_key(254Key))
    {
        bourne::json value = object[254Key];




        ServerOrder_memory_li_254* obj = &254;
		obj->fromJson(value.dump());

    }


}

bourne::json
ServerOrder_memory_li::toJson()
{
    bourne::json object = bourne::json::object();






	object["254"] = get254().toJson();


    return object;

}

ServerOrder_memory_li_254
ServerOrder_memory_li::get254()
{
	return 254;
}

void
ServerOrder_memory_li::set254(ServerOrder_memory_li_254 254)
{
	this->254 = 254;
}



