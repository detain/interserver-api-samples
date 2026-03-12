

#include "ServerOrder_os_li.h"

using namespace Tiny;

ServerOrder_os_li::ServerOrder_os_li()
{
	51 = ServerOrderOS();
}

ServerOrder_os_li::ServerOrder_os_li(std::string jsonString)
{
	this->fromJson(jsonString);
}

ServerOrder_os_li::~ServerOrder_os_li()
{

}

void
ServerOrder_os_li::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *51Key = "51";

    if(object.has_key(51Key))
    {
        bourne::json value = object[51Key];




        ServerOrderOS* obj = &51;
		obj->fromJson(value.dump());

    }


}

bourne::json
ServerOrder_os_li::toJson()
{
    bourne::json object = bourne::json::object();






	object["51"] = get51().toJson();


    return object;

}

ServerOrderOS
ServerOrder_os_li::get51()
{
	return 51;
}

void
ServerOrder_os_li::set51(ServerOrderOS 51)
{
	this->51 = 51;
}



