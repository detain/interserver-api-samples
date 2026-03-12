

#include "ServerOrder_ips_li.h"

using namespace Tiny;

ServerOrder_ips_li::ServerOrder_ips_li()
{
	9 = ServerOrderIP();
}

ServerOrder_ips_li::ServerOrder_ips_li(std::string jsonString)
{
	this->fromJson(jsonString);
}

ServerOrder_ips_li::~ServerOrder_ips_li()
{

}

void
ServerOrder_ips_li::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *9Key = "9";

    if(object.has_key(9Key))
    {
        bourne::json value = object[9Key];




        ServerOrderIP* obj = &9;
		obj->fromJson(value.dump());

    }


}

bourne::json
ServerOrder_ips_li::toJson()
{
    bourne::json object = bourne::json::object();






	object["9"] = get9().toJson();


    return object;

}

ServerOrderIP
ServerOrder_ips_li::get9()
{
	return 9;
}

void
ServerOrder_ips_li::set9(ServerOrderIP 9)
{
	this->9 = 9;
}



