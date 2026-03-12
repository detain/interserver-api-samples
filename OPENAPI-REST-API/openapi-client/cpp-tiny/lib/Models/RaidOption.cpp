

#include "RaidOption.h"

using namespace Tiny;

RaidOption::RaidOption()
{
	id = int(0);
	short_desc = std::string();
	monthly_price = float(0);
}

RaidOption::RaidOption(std::string jsonString)
{
	this->fromJson(jsonString);
}

RaidOption::~RaidOption()
{

}

void
RaidOption::fromJson(std::string jsonObj)
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
RaidOption::toJson()
{
    bourne::json object = bourne::json::object();





    object["id"] = getId();






    object["short_desc"] = getShortDesc();






    object["monthly_price"] = getMonthlyPrice();



    return object;

}

int
RaidOption::getId()
{
	return id;
}

void
RaidOption::setId(int id)
{
	this->id = id;
}

std::string
RaidOption::getShortDesc()
{
	return short_desc;
}

void
RaidOption::setShortDesc(std::string short_desc)
{
	this->short_desc = short_desc;
}

long
RaidOption::getMonthlyPrice()
{
	return monthly_price;
}

void
RaidOption::setMonthlyPrice(long monthly_price)
{
	this->monthly_price = monthly_price;
}



