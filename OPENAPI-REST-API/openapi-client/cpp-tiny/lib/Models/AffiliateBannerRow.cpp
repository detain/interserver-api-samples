

#include "AffiliateBannerRow.h"

using namespace Tiny;

AffiliateBannerRow::AffiliateBannerRow()
{
	image = std::string();
	width = std::string();
	height = std::string();
}

AffiliateBannerRow::AffiliateBannerRow(std::string jsonString)
{
	this->fromJson(jsonString);
}

AffiliateBannerRow::~AffiliateBannerRow()
{

}

void
AffiliateBannerRow::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *imageKey = "image";

    if(object.has_key(imageKey))
    {
        bourne::json value = object[imageKey];



        jsonToValue(&image, value, "std::string");


    }

    const char *widthKey = "width";

    if(object.has_key(widthKey))
    {
        bourne::json value = object[widthKey];



        jsonToValue(&width, value, "std::string");


    }

    const char *heightKey = "height";

    if(object.has_key(heightKey))
    {
        bourne::json value = object[heightKey];



        jsonToValue(&height, value, "std::string");


    }


}

bourne::json
AffiliateBannerRow::toJson()
{
    bourne::json object = bourne::json::object();





    object["image"] = getImage();






    object["width"] = getWidth();






    object["height"] = getHeight();



    return object;

}

std::string
AffiliateBannerRow::getImage()
{
	return image;
}

void
AffiliateBannerRow::setImage(std::string image)
{
	this->image = image;
}

std::string
AffiliateBannerRow::getWidth()
{
	return width;
}

void
AffiliateBannerRow::setWidth(std::string width)
{
	this->width = width;
}

std::string
AffiliateBannerRow::getHeight()
{
	return height;
}

void
AffiliateBannerRow::setHeight(std::string height)
{
	this->height = height;
}



