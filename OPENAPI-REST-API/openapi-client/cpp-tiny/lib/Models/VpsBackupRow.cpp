

#include "VpsBackupRow.h"

using namespace Tiny;

VpsBackupRow::VpsBackupRow()
{
	type = std::string();
	service = int(0);
	name = std::string();
	size = int(0);
	date = int(0);
}

VpsBackupRow::VpsBackupRow(std::string jsonString)
{
	this->fromJson(jsonString);
}

VpsBackupRow::~VpsBackupRow()
{

}

void
VpsBackupRow::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *typeKey = "type";

    if(object.has_key(typeKey))
    {
        bourne::json value = object[typeKey];



        jsonToValue(&type, value, "std::string");


    }

    const char *serviceKey = "service";

    if(object.has_key(serviceKey))
    {
        bourne::json value = object[serviceKey];



        jsonToValue(&service, value, "int");


    }

    const char *nameKey = "name";

    if(object.has_key(nameKey))
    {
        bourne::json value = object[nameKey];



        jsonToValue(&name, value, "std::string");


    }

    const char *sizeKey = "size";

    if(object.has_key(sizeKey))
    {
        bourne::json value = object[sizeKey];



        jsonToValue(&size, value, "int");


    }

    const char *dateKey = "date";

    if(object.has_key(dateKey))
    {
        bourne::json value = object[dateKey];



        jsonToValue(&date, value, "int");


    }


}

bourne::json
VpsBackupRow::toJson()
{
    bourne::json object = bourne::json::object();





    object["type"] = getType();






    object["service"] = getService();






    object["name"] = getName();






    object["size"] = getSize();






    object["date"] = getDate();



    return object;

}

std::string
VpsBackupRow::getType()
{
	return type;
}

void
VpsBackupRow::setType(std::string type)
{
	this->type = type;
}

int
VpsBackupRow::getService()
{
	return service;
}

void
VpsBackupRow::setService(int service)
{
	this->service = service;
}

std::string
VpsBackupRow::getName()
{
	return name;
}

void
VpsBackupRow::setName(std::string name)
{
	this->name = name;
}

int
VpsBackupRow::getSize()
{
	return size;
}

void
VpsBackupRow::setSize(int size)
{
	this->size = size;
}

int
VpsBackupRow::getDate()
{
	return date;
}

void
VpsBackupRow::setDate(int date)
{
	this->date = date;
}



