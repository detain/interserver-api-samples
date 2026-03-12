

#include "BuyItNowServerOrder_200_response_ips_inner.h"

using namespace Tiny;

BuyItNowServerOrder_200_response_ips_inner::BuyItNowServerOrder_200_response_ips_inner()
{
	id = std::string();
	short_desc = std::string();
	long_desc = std::string();
	monthly_price = std::string();
}

BuyItNowServerOrder_200_response_ips_inner::BuyItNowServerOrder_200_response_ips_inner(std::string jsonString)
{
	this->fromJson(jsonString);
}

BuyItNowServerOrder_200_response_ips_inner::~BuyItNowServerOrder_200_response_ips_inner()
{

}

void
BuyItNowServerOrder_200_response_ips_inner::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *idKey = "id";

    if(object.has_key(idKey))
    {
        bourne::json value = object[idKey];



        jsonToValue(&id, value, "std::string");


    }

    const char *short_descKey = "short_desc";

    if(object.has_key(short_descKey))
    {
        bourne::json value = object[short_descKey];



        jsonToValue(&short_desc, value, "std::string");


    }

    const char *long_descKey = "long_desc";

    if(object.has_key(long_descKey))
    {
        bourne::json value = object[long_descKey];



        jsonToValue(&long_desc, value, "std::string");


    }

    const char *monthly_priceKey = "monthly_price";

    if(object.has_key(monthly_priceKey))
    {
        bourne::json value = object[monthly_priceKey];



        jsonToValue(&monthly_price, value, "std::string");


    }


}

bourne::json
BuyItNowServerOrder_200_response_ips_inner::toJson()
{
    bourne::json object = bourne::json::object();





    object["id"] = getId();






    object["short_desc"] = getShortDesc();






    object["long_desc"] = getLongDesc();






    object["monthly_price"] = getMonthlyPrice();



    return object;

}

std::string
BuyItNowServerOrder_200_response_ips_inner::getId()
{
	return id;
}

void
BuyItNowServerOrder_200_response_ips_inner::setId(std::string id)
{
	this->id = id;
}

std::string
BuyItNowServerOrder_200_response_ips_inner::getShortDesc()
{
	return short_desc;
}

void
BuyItNowServerOrder_200_response_ips_inner::setShortDesc(std::string short_desc)
{
	this->short_desc = short_desc;
}

std::string
BuyItNowServerOrder_200_response_ips_inner::getLongDesc()
{
	return long_desc;
}

void
BuyItNowServerOrder_200_response_ips_inner::setLongDesc(std::string long_desc)
{
	this->long_desc = long_desc;
}

std::string
BuyItNowServerOrder_200_response_ips_inner::getMonthlyPrice()
{
	return monthly_price;
}

void
BuyItNowServerOrder_200_response_ips_inner::setMonthlyPrice(std::string monthly_price)
{
	this->monthly_price = monthly_price;
}



