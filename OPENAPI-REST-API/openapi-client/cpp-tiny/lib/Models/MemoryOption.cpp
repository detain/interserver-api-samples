

#include "MemoryOption.h"

using namespace Tiny;

MemoryOption::MemoryOption()
{
	id = int(0);
	short_desc = std::string();
	monthly_price = float(0);
	monthly_price_display = std::string();
}

MemoryOption::MemoryOption(std::string jsonString)
{
	this->fromJson(jsonString);
}

MemoryOption::~MemoryOption()
{

}

void
MemoryOption::fromJson(std::string jsonObj)
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

    const char *monthly_price_displayKey = "monthly_price_display";

    if(object.has_key(monthly_price_displayKey))
    {
        bourne::json value = object[monthly_price_displayKey];



        jsonToValue(&monthly_price_display, value, "std::string");


    }


}

bourne::json
MemoryOption::toJson()
{
    bourne::json object = bourne::json::object();





    object["id"] = getId();






    object["short_desc"] = getShortDesc();






    object["monthly_price"] = getMonthlyPrice();






    object["monthly_price_display"] = getMonthlyPriceDisplay();



    return object;

}

int
MemoryOption::getId()
{
	return id;
}

void
MemoryOption::setId(int id)
{
	this->id = id;
}

std::string
MemoryOption::getShortDesc()
{
	return short_desc;
}

void
MemoryOption::setShortDesc(std::string short_desc)
{
	this->short_desc = short_desc;
}

long
MemoryOption::getMonthlyPrice()
{
	return monthly_price;
}

void
MemoryOption::setMonthlyPrice(long monthly_price)
{
	this->monthly_price = monthly_price;
}

std::string
MemoryOption::getMonthlyPriceDisplay()
{
	return monthly_price_display;
}

void
MemoryOption::setMonthlyPriceDisplay(std::string monthly_price_display)
{
	this->monthly_price_display = monthly_price_display;
}



