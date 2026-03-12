

#include "VpsCPData.h"

using namespace Tiny;

VpsCPData::VpsCPData()
{
	name = std::string();
	cost = int(0);
}

VpsCPData::VpsCPData(std::string jsonString)
{
	this->fromJson(jsonString);
}

VpsCPData::~VpsCPData()
{

}

void
VpsCPData::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *nameKey = "name";

    if(object.has_key(nameKey))
    {
        bourne::json value = object[nameKey];



        jsonToValue(&name, value, "std::string");


    }

    const char *costKey = "cost";

    if(object.has_key(costKey))
    {
        bourne::json value = object[costKey];



        jsonToValue(&cost, value, "int");


    }


}

bourne::json
VpsCPData::toJson()
{
    bourne::json object = bourne::json::object();





    object["name"] = getName();






    object["cost"] = getCost();



    return object;

}

std::string
VpsCPData::getName()
{
	return name;
}

void
VpsCPData::setName(std::string name)
{
	this->name = name;
}

int
VpsCPData::getCost()
{
	return cost;
}

void
VpsCPData::setCost(int cost)
{
	this->cost = cost;
}



