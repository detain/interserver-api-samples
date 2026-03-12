

#include "HardDrive.h"

using namespace Tiny;

HardDrive::HardDrive()
{
	id = int(0);
	short_desc = std::string();
	size = std::string();
	drive_type = std::string();
	monthly_price = float(0);
	monthly_price_display = std::string();
}

HardDrive::HardDrive(std::string jsonString)
{
	this->fromJson(jsonString);
}

HardDrive::~HardDrive()
{

}

void
HardDrive::fromJson(std::string jsonObj)
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

    const char *sizeKey = "size";

    if(object.has_key(sizeKey))
    {
        bourne::json value = object[sizeKey];



        jsonToValue(&size, value, "std::string");


    }

    const char *drive_typeKey = "drive_type";

    if(object.has_key(drive_typeKey))
    {
        bourne::json value = object[drive_typeKey];



        jsonToValue(&drive_type, value, "std::string");


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
HardDrive::toJson()
{
    bourne::json object = bourne::json::object();





    object["id"] = getId();






    object["short_desc"] = getShortDesc();






    object["size"] = getSize();






    object["drive_type"] = getDriveType();






    object["monthly_price"] = getMonthlyPrice();






    object["monthly_price_display"] = getMonthlyPriceDisplay();



    return object;

}

int
HardDrive::getId()
{
	return id;
}

void
HardDrive::setId(int id)
{
	this->id = id;
}

std::string
HardDrive::getShortDesc()
{
	return short_desc;
}

void
HardDrive::setShortDesc(std::string short_desc)
{
	this->short_desc = short_desc;
}

std::string
HardDrive::getSize()
{
	return size;
}

void
HardDrive::setSize(std::string size)
{
	this->size = size;
}

std::string
HardDrive::getDriveType()
{
	return drive_type;
}

void
HardDrive::setDriveType(std::string drive_type)
{
	this->drive_type = drive_type;
}

long
HardDrive::getMonthlyPrice()
{
	return monthly_price;
}

void
HardDrive::setMonthlyPrice(long monthly_price)
{
	this->monthly_price = monthly_price;
}

std::string
HardDrive::getMonthlyPriceDisplay()
{
	return monthly_price_display;
}

void
HardDrive::setMonthlyPriceDisplay(std::string monthly_price_display)
{
	this->monthly_price_display = monthly_price_display;
}



