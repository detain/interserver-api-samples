

#include "OperatingSystem.h"

using namespace Tiny;

OperatingSystem::OperatingSystem()
{
	id = int(0);
	short_desc = std::string();
	monthly_price = float(0);
}

OperatingSystem::OperatingSystem(std::string jsonString)
{
	this->fromJson(jsonString);
}

OperatingSystem::~OperatingSystem()
{

}

void
OperatingSystem::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *idKey = "id";

    if(object.has_key(idKey))
    {
        bourne::json value = object[idKey];



        jsonToValue(&id, value, "int");


    }

    const char *short_descKey = "short_desc";

    if(object.has_key(short_descKey))
    {
        bourne::json value = object[short_descKey];



        jsonToValue(&short_desc, value, "std::string");


    }

    const char *monthly_priceKey = "monthly_price";

    if(object.has_key(monthly_priceKey))
    {
        bourne::json value = object[monthly_priceKey];



        jsonToValue(&monthly_price, value, "long");


    }


}

bourne::json
OperatingSystem::toJson()
{
    bourne::json object = bourne::json::object();





    object["id"] = getId();






    object["short_desc"] = getShortDesc();






    object["monthly_price"] = getMonthlyPrice();



    return object;

}

int
OperatingSystem::getId()
{
	return id;
}

void
OperatingSystem::setId(int id)
{
	this->id = id;
}

std::string
OperatingSystem::getShortDesc()
{
	return short_desc;
}

void
OperatingSystem::setShortDesc(std::string short_desc)
{
	this->short_desc = short_desc;
}

long
OperatingSystem::getMonthlyPrice()
{
	return monthly_price;
}

void
OperatingSystem::setMonthlyPrice(long monthly_price)
{
	this->monthly_price = monthly_price;
}



