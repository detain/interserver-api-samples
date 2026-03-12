

#include "VpsSnapshot.h"

using namespace Tiny;

VpsSnapshot::VpsSnapshot()
{
	name = std::string();
	used = int(0);
	date = int(0);
}

VpsSnapshot::VpsSnapshot(std::string jsonString)
{
	this->fromJson(jsonString);
}

VpsSnapshot::~VpsSnapshot()
{

}

void
VpsSnapshot::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *nameKey = "name";

    if(object.has_key(nameKey))
    {
        bourne::json value = object[nameKey];



        jsonToValue(&name, value, "std::string");


    }

    const char *usedKey = "used";

    if(object.has_key(usedKey))
    {
        bourne::json value = object[usedKey];



        jsonToValue(&used, value, "int");


    }

    const char *dateKey = "date";

    if(object.has_key(dateKey))
    {
        bourne::json value = object[dateKey];



        jsonToValue(&date, value, "int");


    }


}

bourne::json
VpsSnapshot::toJson()
{
    bourne::json object = bourne::json::object();





    object["name"] = getName();






    object["used"] = getUsed();






    object["date"] = getDate();



    return object;

}

std::string
VpsSnapshot::getName()
{
	return name;
}

void
VpsSnapshot::setName(std::string name)
{
	this->name = name;
}

int
VpsSnapshot::getUsed()
{
	return used;
}

void
VpsSnapshot::setUsed(int used)
{
	this->used = used;
}

int
VpsSnapshot::getDate()
{
	return date;
}

void
VpsSnapshot::setDate(int date)
{
	this->date = date;
}



