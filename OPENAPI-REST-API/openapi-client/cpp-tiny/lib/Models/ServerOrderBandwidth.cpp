

#include "ServerOrderBandwidth.h"

using namespace Tiny;

ServerOrderBandwidth::ServerOrderBandwidth()
{
	id = std::string();
	price = int(0);
	img = std::string();
	short_desc = std::string();
	long_desc = std::string();
	type = std::string();
	qty = std::string();
	active = std::string();
	monthly_price = int(0);
	price_display = std::string();
	monthly_price_display = std::string();
}

ServerOrderBandwidth::ServerOrderBandwidth(std::string jsonString)
{
	this->fromJson(jsonString);
}

ServerOrderBandwidth::~ServerOrderBandwidth()
{

}

void
ServerOrderBandwidth::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *idKey = "id";

    if(object.has_key(idKey))
    {
        bourne::json value = object[idKey];



        jsonToValue(&id, value, "std::string");


    }

    const char *priceKey = "price";

    if(object.has_key(priceKey))
    {
        bourne::json value = object[priceKey];



        jsonToValue(&price, value, "int");


    }

    const char *imgKey = "img";

    if(object.has_key(imgKey))
    {
        bourne::json value = object[imgKey];



        jsonToValue(&img, value, "std::string");


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

    const char *typeKey = "type";

    if(object.has_key(typeKey))
    {
        bourne::json value = object[typeKey];



        jsonToValue(&type, value, "std::string");


    }

    const char *qtyKey = "qty";

    if(object.has_key(qtyKey))
    {
        bourne::json value = object[qtyKey];



        jsonToValue(&qty, value, "std::string");


    }

    const char *activeKey = "active";

    if(object.has_key(activeKey))
    {
        bourne::json value = object[activeKey];



        jsonToValue(&active, value, "std::string");


    }

    const char *monthly_priceKey = "monthly_price";

    if(object.has_key(monthly_priceKey))
    {
        bourne::json value = object[monthly_priceKey];



        jsonToValue(&monthly_price, value, "int");


    }

    const char *price_displayKey = "price_display";

    if(object.has_key(price_displayKey))
    {
        bourne::json value = object[price_displayKey];



        jsonToValue(&price_display, value, "std::string");


    }

    const char *monthly_price_displayKey = "monthly_price_display";

    if(object.has_key(monthly_price_displayKey))
    {
        bourne::json value = object[monthly_price_displayKey];



        jsonToValue(&monthly_price_display, value, "std::string");


    }


}

bourne::json
ServerOrderBandwidth::toJson()
{
    bourne::json object = bourne::json::object();





    object["id"] = getId();






    object["price"] = getPrice();






    object["img"] = getImg();






    object["short_desc"] = getShortDesc();






    object["long_desc"] = getLongDesc();






    object["type"] = getType();






    object["qty"] = getQty();






    object["active"] = getActive();






    object["monthly_price"] = getMonthlyPrice();






    object["price_display"] = getPriceDisplay();






    object["monthly_price_display"] = getMonthlyPriceDisplay();



    return object;

}

std::string
ServerOrderBandwidth::getId()
{
	return id;
}

void
ServerOrderBandwidth::setId(std::string id)
{
	this->id = id;
}

int
ServerOrderBandwidth::getPrice()
{
	return price;
}

void
ServerOrderBandwidth::setPrice(int price)
{
	this->price = price;
}

std::string
ServerOrderBandwidth::getImg()
{
	return img;
}

void
ServerOrderBandwidth::setImg(std::string img)
{
	this->img = img;
}

std::string
ServerOrderBandwidth::getShortDesc()
{
	return short_desc;
}

void
ServerOrderBandwidth::setShortDesc(std::string short_desc)
{
	this->short_desc = short_desc;
}

std::string
ServerOrderBandwidth::getLongDesc()
{
	return long_desc;
}

void
ServerOrderBandwidth::setLongDesc(std::string long_desc)
{
	this->long_desc = long_desc;
}

std::string
ServerOrderBandwidth::getType()
{
	return type;
}

void
ServerOrderBandwidth::setType(std::string type)
{
	this->type = type;
}

std::string
ServerOrderBandwidth::getQty()
{
	return qty;
}

void
ServerOrderBandwidth::setQty(std::string qty)
{
	this->qty = qty;
}

std::string
ServerOrderBandwidth::getActive()
{
	return active;
}

void
ServerOrderBandwidth::setActive(std::string active)
{
	this->active = active;
}

int
ServerOrderBandwidth::getMonthlyPrice()
{
	return monthly_price;
}

void
ServerOrderBandwidth::setMonthlyPrice(int monthly_price)
{
	this->monthly_price = monthly_price;
}

std::string
ServerOrderBandwidth::getPriceDisplay()
{
	return price_display;
}

void
ServerOrderBandwidth::setPriceDisplay(std::string price_display)
{
	this->price_display = price_display;
}

std::string
ServerOrderBandwidth::getMonthlyPriceDisplay()
{
	return monthly_price_display;
}

void
ServerOrderBandwidth::setMonthlyPriceDisplay(std::string monthly_price_display)
{
	this->monthly_price_display = monthly_price_display;
}



