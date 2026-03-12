

#include "Server_locations.h"

using namespace Tiny;

Server_locations::Server_locations()
{
	1 = ServerLocation1();
}

Server_locations::Server_locations(std::string jsonString)
{
	this->fromJson(jsonString);
}

Server_locations::~Server_locations()
{

}

void
Server_locations::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *1Key = "1";

    if(object.has_key(1Key))
    {
        bourne::json value = object[1Key];




        ServerLocation1* obj = &1;
		obj->fromJson(value.dump());

    }


}

bourne::json
Server_locations::toJson()
{
    bourne::json object = bourne::json::object();






	object["1"] = get1().toJson();


    return object;

}

ServerLocation1
Server_locations::get1()
{
	return 1;
}

void
Server_locations::set1(ServerLocation1 1)
{
	this->1 = 1;
}



