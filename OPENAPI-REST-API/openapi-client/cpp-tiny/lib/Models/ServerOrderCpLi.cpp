

#include "ServerOrder_cp_li.h"

using namespace Tiny;

ServerOrder_cp_li::ServerOrder_cp_li()
{
	9 = ServerOrderControlPanel();
}

ServerOrder_cp_li::ServerOrder_cp_li(std::string jsonString)
{
	this->fromJson(jsonString);
}

ServerOrder_cp_li::~ServerOrder_cp_li()
{

}

void
ServerOrder_cp_li::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *9Key = "9";

    if(object.has_key(9Key))
    {
        bourne::json value = object[9Key];




        ServerOrderControlPanel* obj = &9;
		obj->fromJson(value.dump());

    }


}

bourne::json
ServerOrder_cp_li::toJson()
{
    bourne::json object = bourne::json::object();






	object["9"] = get9().toJson();


    return object;

}

ServerOrderControlPanel
ServerOrder_cp_li::get9()
{
	return 9;
}

void
ServerOrder_cp_li::set9(ServerOrderControlPanel 9)
{
	this->9 = 9;
}



