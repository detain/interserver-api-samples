

#include "ServerOrderOS.h"

using namespace Tiny;

ServerOrderOS::ServerOrderOS()
{
	id = std::string();
	price = int(0);
	img = std::string();
	short_desc = std::string();
	long_desc = std::string();
	monthly_price = int(0);
	active = std::string();
	price_display = std::string();
	monthly_price_display = std::string();
}

ServerOrderOS::ServerOrderOS(std::string jsonString)
{
	this->fromJson(jsonString);
}

ServerOrderOS::~ServerOrderOS()
{

}

void
ServerOrderOS::fromJson(std::string jsonObj)
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

    const char *monthly_priceKey = "monthly_price";

    if(object.has_key(monthly_priceKey))
    {
        bourne::json value = object[monthly_priceKey];



        jsonToValue(&monthly_price, value, "int");


    }

    const char *activeKey = "active";

    if(object.has_key(activeKey))
    {
        bourne::json value = object[activeKey];



        jsonToValue(&active, value, "std::string");


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
ServerOrderOS::toJson()
{
    bourne::json object = bourne::json::object();





    object["id"] = getId();






    object["price"] = getPrice();






    object["img"] = getImg();






    object["short_desc"] = getShortDesc();






    object["long_desc"] = getLongDesc();






    object["monthly_price"] = getMonthlyPrice();






    object["active"] = getActive();






    object["price_display"] = getPriceDisplay();






    object["monthly_price_display"] = getMonthlyPriceDisplay();



    return object;

}

std::string
ServerOrderOS::getId()
{
	return id;
}

void
ServerOrderOS::setId(std::string id)
{
	this->id = id;
}

int
ServerOrderOS::getPrice()
{
	return price;
}

void
ServerOrderOS::setPrice(int price)
{
	this->price = price;
}

std::string
ServerOrderOS::getImg()
{
	return img;
}

void
ServerOrderOS::setImg(std::string img)
{
	this->img = img;
}

std::string
ServerOrderOS::getShortDesc()
{
	return short_desc;
}

void
ServerOrderOS::setShortDesc(std::string short_desc)
{
	this->short_desc = short_desc;
}

std::string
ServerOrderOS::getLongDesc()
{
	return long_desc;
}

void
ServerOrderOS::setLongDesc(std::string long_desc)
{
	this->long_desc = long_desc;
}

int
ServerOrderOS::getMonthlyPrice()
{
	return monthly_price;
}

void
ServerOrderOS::setMonthlyPrice(int monthly_price)
{
	this->monthly_price = monthly_price;
}

std::string
ServerOrderOS::getActive()
{
	return active;
}

void
ServerOrderOS::setActive(std::string active)
{
	this->active = active;
}

std::string
ServerOrderOS::getPriceDisplay()
{
	return price_display;
}

void
ServerOrderOS::setPriceDisplay(std::string price_display)
{
	this->price_display = price_display;
}

std::string
ServerOrderOS::getMonthlyPriceDisplay()
{
	return monthly_price_display;
}

void
ServerOrderOS::setMonthlyPriceDisplay(std::string monthly_price_display)
{
	this->monthly_price_display = monthly_price_display;
}



