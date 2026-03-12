

#include "VpsOrder_osNames.h"

using namespace Tiny;

VpsOrder_osNames::VpsOrder_osNames()
{
	opensuse = std::string();
	ubuntu = std::string();
}

VpsOrder_osNames::VpsOrder_osNames(std::string jsonString)
{
	this->fromJson(jsonString);
}

VpsOrder_osNames::~VpsOrder_osNames()
{

}

void
VpsOrder_osNames::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *opensuseKey = "opensuse";

    if(object.has_key(opensuseKey))
    {
        bourne::json value = object[opensuseKey];



        jsonToValue(&opensuse, value, "std::string");


    }

    const char *ubuntuKey = "ubuntu";

    if(object.has_key(ubuntuKey))
    {
        bourne::json value = object[ubuntuKey];



        jsonToValue(&ubuntu, value, "std::string");


    }


}

bourne::json
VpsOrder_osNames::toJson()
{
    bourne::json object = bourne::json::object();





    object["opensuse"] = getOpensuse();






    object["ubuntu"] = getUbuntu();



    return object;

}

std::string
VpsOrder_osNames::getOpensuse()
{
	return opensuse;
}

void
VpsOrder_osNames::setOpensuse(std::string opensuse)
{
	this->opensuse = opensuse;
}

std::string
VpsOrder_osNames::getUbuntu()
{
	return ubuntu;
}

void
VpsOrder_osNames::setUbuntu(std::string ubuntu)
{
	this->ubuntu = ubuntu;
}



