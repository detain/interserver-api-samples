

#include "VpsPleskLicense.h"

using namespace Tiny;

VpsPleskLicense::VpsPleskLicense()
{
	id = int(0);
	name = std::string();
	sub_name = std::string();
	cost = int(0);
}

VpsPleskLicense::VpsPleskLicense(std::string jsonString)
{
	this->fromJson(jsonString);
}

VpsPleskLicense::~VpsPleskLicense()
{

}

void
VpsPleskLicense::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *idKey = "id";

    if(object.has_key(idKey))
    {
        bourne::json value = object[idKey];



        jsonToValue(&id, value, "int");


    }

    const char *nameKey = "name";

    if(object.has_key(nameKey))
    {
        bourne::json value = object[nameKey];



        jsonToValue(&name, value, "std::string");


    }

    const char *sub_nameKey = "sub_name";

    if(object.has_key(sub_nameKey))
    {
        bourne::json value = object[sub_nameKey];



        jsonToValue(&sub_name, value, "std::string");


    }

    const char *costKey = "cost";

    if(object.has_key(costKey))
    {
        bourne::json value = object[costKey];



        jsonToValue(&cost, value, "int");


    }


}

bourne::json
VpsPleskLicense::toJson()
{
    bourne::json object = bourne::json::object();





    object["id"] = getId();






    object["name"] = getName();






    object["sub_name"] = getSubName();






    object["cost"] = getCost();



    return object;

}

int
VpsPleskLicense::getId()
{
	return id;
}

void
VpsPleskLicense::setId(int id)
{
	this->id = id;
}

std::string
VpsPleskLicense::getName()
{
	return name;
}

void
VpsPleskLicense::setName(std::string name)
{
	this->name = name;
}

std::string
VpsPleskLicense::getSubName()
{
	return sub_name;
}

void
VpsPleskLicense::setSubName(std::string sub_name)
{
	this->sub_name = sub_name;
}

int
VpsPleskLicense::getCost()
{
	return cost;
}

void
VpsPleskLicense::setCost(int cost)
{
	this->cost = cost;
}



