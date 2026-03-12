

#include "ServerLocation1.h"

using namespace Tiny;

ServerLocation1::ServerLocation1()
{
	location_id = int(0);
	location_name = std::string();
	location_lat = std::string();
	location_long = std::string();
	location_description = std::string();
	location_ipmi_group = int(0);
}

ServerLocation1::ServerLocation1(std::string jsonString)
{
	this->fromJson(jsonString);
}

ServerLocation1::~ServerLocation1()
{

}

void
ServerLocation1::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *location_idKey = "location_id";

    if(object.has_key(location_idKey))
    {
        bourne::json value = object[location_idKey];



        jsonToValue(&location_id, value, "int");


    }

    const char *location_nameKey = "location_name";

    if(object.has_key(location_nameKey))
    {
        bourne::json value = object[location_nameKey];



        jsonToValue(&location_name, value, "std::string");


    }

    const char *location_latKey = "location_lat";

    if(object.has_key(location_latKey))
    {
        bourne::json value = object[location_latKey];



        jsonToValue(&location_lat, value, "std::string");


    }

    const char *location_longKey = "location_long";

    if(object.has_key(location_longKey))
    {
        bourne::json value = object[location_longKey];



        jsonToValue(&location_long, value, "std::string");


    }

    const char *location_descriptionKey = "location_description";

    if(object.has_key(location_descriptionKey))
    {
        bourne::json value = object[location_descriptionKey];



        jsonToValue(&location_description, value, "std::string");


    }

    const char *location_ipmi_groupKey = "location_ipmi_group";

    if(object.has_key(location_ipmi_groupKey))
    {
        bourne::json value = object[location_ipmi_groupKey];



        jsonToValue(&location_ipmi_group, value, "int");


    }


}

bourne::json
ServerLocation1::toJson()
{
    bourne::json object = bourne::json::object();





    object["location_id"] = getLocationId();






    object["location_name"] = getLocationName();






    object["location_lat"] = getLocationLat();






    object["location_long"] = getLocationLong();






    object["location_description"] = getLocationDescription();






    object["location_ipmi_group"] = getLocationIpmiGroup();



    return object;

}

int
ServerLocation1::getLocationId()
{
	return location_id;
}

void
ServerLocation1::setLocationId(int location_id)
{
	this->location_id = location_id;
}

std::string
ServerLocation1::getLocationName()
{
	return location_name;
}

void
ServerLocation1::setLocationName(std::string location_name)
{
	this->location_name = location_name;
}

std::string
ServerLocation1::getLocationLat()
{
	return location_lat;
}

void
ServerLocation1::setLocationLat(std::string location_lat)
{
	this->location_lat = location_lat;
}

std::string
ServerLocation1::getLocationLong()
{
	return location_long;
}

void
ServerLocation1::setLocationLong(std::string location_long)
{
	this->location_long = location_long;
}

std::string
ServerLocation1::getLocationDescription()
{
	return location_description;
}

void
ServerLocation1::setLocationDescription(std::string location_description)
{
	this->location_description = location_description;
}

int
ServerLocation1::getLocationIpmiGroup()
{
	return location_ipmi_group;
}

void
ServerLocation1::setLocationIpmiGroup(int location_ipmi_group)
{
	this->location_ipmi_group = location_ipmi_group;
}



