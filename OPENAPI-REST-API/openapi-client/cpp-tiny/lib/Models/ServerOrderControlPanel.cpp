

#include "ServerOrderControlPanel.h"

using namespace Tiny;

ServerOrderControlPanel::ServerOrderControlPanel()
{
	id = std::string();
	price = int(0);
	img = std::string();
	short_desc = std::string();
	long_desc = std::string();
	os_type = std::string();
	monthly_price = int(0);
	types = std::list<std::string>();
	price_display = std::string();
	monthly_price_display = std::string();
}

ServerOrderControlPanel::ServerOrderControlPanel(std::string jsonString)
{
	this->fromJson(jsonString);
}

ServerOrderControlPanel::~ServerOrderControlPanel()
{

}

void
ServerOrderControlPanel::fromJson(std::string jsonObj)
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

    const char *os_typeKey = "os_type";

    if(object.has_key(os_typeKey))
    {
        bourne::json value = object[os_typeKey];



        jsonToValue(&os_type, value, "std::string");


    }

    const char *monthly_priceKey = "monthly_price";

    if(object.has_key(monthly_priceKey))
    {
        bourne::json value = object[monthly_priceKey];



        jsonToValue(&monthly_price, value, "int");


    }

    const char *typesKey = "types";

    if(object.has_key(typesKey))
    {
        bourne::json value = object[typesKey];


        std::list<std::string> types_list;
        std::string element;
        for(auto& var : value.array_range())
        {

            jsonToValue(&element, var, "std::string");


            types_list.push_back(element);
        }
        types = types_list;


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
ServerOrderControlPanel::toJson()
{
    bourne::json object = bourne::json::object();





    object["id"] = getId();






    object["price"] = getPrice();






    object["img"] = getImg();






    object["short_desc"] = getShortDesc();






    object["long_desc"] = getLongDesc();






    object["os_type"] = getOsType();






    object["monthly_price"] = getMonthlyPrice();





    std::list<std::string> types_list = getTypes();
    bourne::json types_arr = bourne::json::array();

    for(auto& var : types_list)
    {
        types_arr.append(var);
    }
    object["types"] = types_arr;









    object["price_display"] = getPriceDisplay();






    object["monthly_price_display"] = getMonthlyPriceDisplay();



    return object;

}

std::string
ServerOrderControlPanel::getId()
{
	return id;
}

void
ServerOrderControlPanel::setId(std::string id)
{
	this->id = id;
}

int
ServerOrderControlPanel::getPrice()
{
	return price;
}

void
ServerOrderControlPanel::setPrice(int price)
{
	this->price = price;
}

std::string
ServerOrderControlPanel::getImg()
{
	return img;
}

void
ServerOrderControlPanel::setImg(std::string img)
{
	this->img = img;
}

std::string
ServerOrderControlPanel::getShortDesc()
{
	return short_desc;
}

void
ServerOrderControlPanel::setShortDesc(std::string short_desc)
{
	this->short_desc = short_desc;
}

std::string
ServerOrderControlPanel::getLongDesc()
{
	return long_desc;
}

void
ServerOrderControlPanel::setLongDesc(std::string long_desc)
{
	this->long_desc = long_desc;
}

std::string
ServerOrderControlPanel::getOsType()
{
	return os_type;
}

void
ServerOrderControlPanel::setOsType(std::string os_type)
{
	this->os_type = os_type;
}

int
ServerOrderControlPanel::getMonthlyPrice()
{
	return monthly_price;
}

void
ServerOrderControlPanel::setMonthlyPrice(int monthly_price)
{
	this->monthly_price = monthly_price;
}

std::list<std::string>
ServerOrderControlPanel::getTypes()
{
	return types;
}

void
ServerOrderControlPanel::setTypes(std::list<std::string> types)
{
	this->types = types;
}

std::string
ServerOrderControlPanel::getPriceDisplay()
{
	return price_display;
}

void
ServerOrderControlPanel::setPriceDisplay(std::string price_display)
{
	this->price_display = price_display;
}

std::string
ServerOrderControlPanel::getMonthlyPriceDisplay()
{
	return monthly_price_display;
}

void
ServerOrderControlPanel::setMonthlyPriceDisplay(std::string monthly_price_display)
{
	this->monthly_price_display = monthly_price_display;
}



