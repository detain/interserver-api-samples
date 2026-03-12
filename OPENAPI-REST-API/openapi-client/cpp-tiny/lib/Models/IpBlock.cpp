

#include "IpBlock.h"

using namespace Tiny;

IpBlock::IpBlock()
{
	id = int(0);
	short_desc = std::string();
	qty = std::string();
	monthly_price = float(0);
}

IpBlock::IpBlock(std::string jsonString)
{
	this->fromJson(jsonString);
}

IpBlock::~IpBlock()
{

}

void
IpBlock::fromJson(std::string jsonObj)
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

    const char *qtyKey = "qty";

    if(object.has_key(qtyKey))
    {
        bourne::json value = object[qtyKey];



        jsonToValue(&qty, value, "std::string");


    }

    const char *monthly_priceKey = "monthly_price";

    if(object.has_key(monthly_priceKey))
    {
        bourne::json value = object[monthly_priceKey];



        jsonToValue(&monthly_price, value, "long");


    }


}

bourne::json
IpBlock::toJson()
{
    bourne::json object = bourne::json::object();





    object["id"] = getId();






    object["short_desc"] = getShortDesc();






    object["qty"] = getQty();






    object["monthly_price"] = getMonthlyPrice();



    return object;

}

int
IpBlock::getId()
{
	return id;
}

void
IpBlock::setId(int id)
{
	this->id = id;
}

std::string
IpBlock::getShortDesc()
{
	return short_desc;
}

void
IpBlock::setShortDesc(std::string short_desc)
{
	this->short_desc = short_desc;
}

std::string
IpBlock::getQty()
{
	return qty;
}

void
IpBlock::setQty(std::string qty)
{
	this->qty = qty;
}

long
IpBlock::getMonthlyPrice()
{
	return monthly_price;
}

void
IpBlock::setMonthlyPrice(long monthly_price)
{
	this->monthly_price = monthly_price;
}



