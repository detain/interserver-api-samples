

#include "VpsDALicense.h"

using namespace Tiny;

VpsDALicense::VpsDALicense()
{
	name = std::string();
	sub_name = std::string();
	cost = int(0);
	img_disabled = std::string();
	img_active = std::string();
}

VpsDALicense::VpsDALicense(std::string jsonString)
{
	this->fromJson(jsonString);
}

VpsDALicense::~VpsDALicense()
{

}

void
VpsDALicense::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *nameKey = "name";

    if(object.has_key(nameKey))
    {
        bourne::json value = object[nameKey];



        jsonToValue(&name, value, "std::string");


    }

    const char *sub_nameKey = "sub_name";

    if(object.has_key(sub_nameKey))
    {
        bourne::json value = object[sub_nameKey];



        jsonToValue(&sub_name, value, "std::string");


    }

    const char *costKey = "cost";

    if(object.has_key(costKey))
    {
        bourne::json value = object[costKey];



        jsonToValue(&cost, value, "int");


    }

    const char *img_disabledKey = "img_disabled";

    if(object.has_key(img_disabledKey))
    {
        bourne::json value = object[img_disabledKey];



        jsonToValue(&img_disabled, value, "std::string");


    }

    const char *img_activeKey = "img_active";

    if(object.has_key(img_activeKey))
    {
        bourne::json value = object[img_activeKey];



        jsonToValue(&img_active, value, "std::string");


    }


}

bourne::json
VpsDALicense::toJson()
{
    bourne::json object = bourne::json::object();





    object["name"] = getName();






    object["sub_name"] = getSubName();






    object["cost"] = getCost();






    object["img_disabled"] = getImgDisabled();






    object["img_active"] = getImgActive();



    return object;

}

std::string
VpsDALicense::getName()
{
	return name;
}

void
VpsDALicense::setName(std::string name)
{
	this->name = name;
}

std::string
VpsDALicense::getSubName()
{
	return sub_name;
}

void
VpsDALicense::setSubName(std::string sub_name)
{
	this->sub_name = sub_name;
}

int
VpsDALicense::getCost()
{
	return cost;
}

void
VpsDALicense::setCost(int cost)
{
	this->cost = cost;
}

std::string
VpsDALicense::getImgDisabled()
{
	return img_disabled;
}

void
VpsDALicense::setImgDisabled(std::string img_disabled)
{
	this->img_disabled = img_disabled;
}

std::string
VpsDALicense::getImgActive()
{
	return img_active;
}

void
VpsDALicense::setImgActive(std::string img_active)
{
	this->img_active = img_active;
}



