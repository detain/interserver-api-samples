

#include "QuickserverOrder_server_details.h"

using namespace Tiny;

QuickserverOrder_server_details::QuickserverOrder_server_details()
{
	381 = QuickserverOrderServerDetails381();
}

QuickserverOrder_server_details::QuickserverOrder_server_details(std::string jsonString)
{
	this->fromJson(jsonString);
}

QuickserverOrder_server_details::~QuickserverOrder_server_details()
{

}

void
QuickserverOrder_server_details::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *381Key = "381";

    if(object.has_key(381Key))
    {
        bourne::json value = object[381Key];




        QuickserverOrderServerDetails381* obj = &381;
		obj->fromJson(value.dump());

    }


}

bourne::json
QuickserverOrder_server_details::toJson()
{
    bourne::json object = bourne::json::object();






	object["381"] = get381().toJson();


    return object;

}

QuickserverOrderServerDetails381
QuickserverOrder_server_details::get381()
{
	return 381;
}

void
QuickserverOrder_server_details::set381(QuickserverOrderServerDetails381 381)
{
	this->381 = 381;
}



