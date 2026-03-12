

#include "ServerOrder_memory_li_254.h"

using namespace Tiny;

ServerOrder_memory_li_254::ServerOrder_memory_li_254()
{
	65 = ServerOrderMemory();
}

ServerOrder_memory_li_254::ServerOrder_memory_li_254(std::string jsonString)
{
	this->fromJson(jsonString);
}

ServerOrder_memory_li_254::~ServerOrder_memory_li_254()
{

}

void
ServerOrder_memory_li_254::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *65Key = "65";

    if(object.has_key(65Key))
    {
        bourne::json value = object[65Key];




        ServerOrderMemory* obj = &65;
		obj->fromJson(value.dump());

    }


}

bourne::json
ServerOrder_memory_li_254::toJson()
{
    bourne::json object = bourne::json::object();






	object["65"] = get65().toJson();


    return object;

}

ServerOrderMemory
ServerOrder_memory_li_254::get65()
{
	return 65;
}

void
ServerOrder_memory_li_254::set65(ServerOrderMemory 65)
{
	this->65 = 65;
}



