

#include "ServerOrderMemory.h"

using namespace Tiny;

ServerOrderMemory::ServerOrderMemory()
{
	id = std::string();
	price = std::string();
	img = std::string();
	short_desc = std::string();
	long_desc = std::string();
	manu = std::string();
	size = std::string();
	type = std::string();
	hidden = std::string();
	monthly_price = int(0);
	drive_type = std::string();
	monthly_price_display = std::string();
}

ServerOrderMemory::ServerOrderMemory(std::string jsonString)
{
	this->fromJson(jsonString);
}

ServerOrderMemory::~ServerOrderMemory()
{

}

void
ServerOrderMemory::fromJson(std::string jsonObj)
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



        jsonToValue(&price, value, "std::string");


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

    const char *manuKey = "manu";

    if(object.has_key(manuKey))
    {
        bourne::json value = object[manuKey];



        jsonToValue(&manu, value, "std::string");


    }

    const char *sizeKey = "size";

    if(object.has_key(sizeKey))
    {
        bourne::json value = object[sizeKey];



        jsonToValue(&size, value, "std::string");


    }

    const char *typeKey = "type";

    if(object.has_key(typeKey))
    {
        bourne::json value = object[typeKey];



        jsonToValue(&type, value, "std::string");


    }

    const char *hiddenKey = "hidden";

    if(object.has_key(hiddenKey))
    {
        bourne::json value = object[hiddenKey];



        jsonToValue(&hidden, value, "std::string");


    }

    const char *monthly_priceKey = "monthly_price";

    if(object.has_key(monthly_priceKey))
    {
        bourne::json value = object[monthly_priceKey];



        jsonToValue(&monthly_price, value, "int");


    }

    const char *drive_typeKey = "drive_type";

    if(object.has_key(drive_typeKey))
    {
        bourne::json value = object[drive_typeKey];



        jsonToValue(&drive_type, value, "std::string");


    }

    const char *monthly_price_displayKey = "monthly_price_display";

    if(object.has_key(monthly_price_displayKey))
    {
        bourne::json value = object[monthly_price_displayKey];



        jsonToValue(&monthly_price_display, value, "std::string");


    }


}

bourne::json
ServerOrderMemory::toJson()
{
    bourne::json object = bourne::json::object();





    object["id"] = getId();






    object["price"] = getPrice();






    object["img"] = getImg();






    object["short_desc"] = getShortDesc();






    object["long_desc"] = getLongDesc();






    object["manu"] = getManu();






    object["size"] = getSize();






    object["type"] = getType();






    object["hidden"] = getHidden();






    object["monthly_price"] = getMonthlyPrice();






    object["drive_type"] = getDriveType();






    object["monthly_price_display"] = getMonthlyPriceDisplay();



    return object;

}

std::string
ServerOrderMemory::getId()
{
	return id;
}

void
ServerOrderMemory::setId(std::string id)
{
	this->id = id;
}

std::string
ServerOrderMemory::getPrice()
{
	return price;
}

void
ServerOrderMemory::setPrice(std::string price)
{
	this->price = price;
}

std::string
ServerOrderMemory::getImg()
{
	return img;
}

void
ServerOrderMemory::setImg(std::string img)
{
	this->img = img;
}

std::string
ServerOrderMemory::getShortDesc()
{
	return short_desc;
}

void
ServerOrderMemory::setShortDesc(std::string short_desc)
{
	this->short_desc = short_desc;
}

std::string
ServerOrderMemory::getLongDesc()
{
	return long_desc;
}

void
ServerOrderMemory::setLongDesc(std::string long_desc)
{
	this->long_desc = long_desc;
}

std::string
ServerOrderMemory::getManu()
{
	return manu;
}

void
ServerOrderMemory::setManu(std::string manu)
{
	this->manu = manu;
}

std::string
ServerOrderMemory::getSize()
{
	return size;
}

void
ServerOrderMemory::setSize(std::string size)
{
	this->size = size;
}

std::string
ServerOrderMemory::getType()
{
	return type;
}

void
ServerOrderMemory::setType(std::string type)
{
	this->type = type;
}

std::string
ServerOrderMemory::getHidden()
{
	return hidden;
}

void
ServerOrderMemory::setHidden(std::string hidden)
{
	this->hidden = hidden;
}

int
ServerOrderMemory::getMonthlyPrice()
{
	return monthly_price;
}

void
ServerOrderMemory::setMonthlyPrice(int monthly_price)
{
	this->monthly_price = monthly_price;
}

std::string
ServerOrderMemory::getDriveType()
{
	return drive_type;
}

void
ServerOrderMemory::setDriveType(std::string drive_type)
{
	this->drive_type = drive_type;
}

std::string
ServerOrderMemory::getMonthlyPriceDisplay()
{
	return monthly_price_display;
}

void
ServerOrderMemory::setMonthlyPriceDisplay(std::string monthly_price_display)
{
	this->monthly_price_display = monthly_price_display;
}



