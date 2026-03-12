

#include "ScrubIpFilterTypes_filters_value.h"

using namespace Tiny;

ScrubIpFilterTypes_filters_value::ScrubIpFilterTypes_filters_value()
{
	name = std::string();
	desc = std::string();
}

ScrubIpFilterTypes_filters_value::ScrubIpFilterTypes_filters_value(std::string jsonString)
{
	this->fromJson(jsonString);
}

ScrubIpFilterTypes_filters_value::~ScrubIpFilterTypes_filters_value()
{

}

void
ScrubIpFilterTypes_filters_value::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *nameKey = "name";

    if(object.has_key(nameKey))
    {
        bourne::json value = object[nameKey];



        jsonToValue(&name, value, "std::string");


    }

    const char *descKey = "desc";

    if(object.has_key(descKey))
    {
        bourne::json value = object[descKey];



        jsonToValue(&desc, value, "std::string");


    }


}

bourne::json
ScrubIpFilterTypes_filters_value::toJson()
{
    bourne::json object = bourne::json::object();





    object["name"] = getName();






    object["desc"] = getDesc();



    return object;

}

std::string
ScrubIpFilterTypes_filters_value::getName()
{
	return name;
}

void
ScrubIpFilterTypes_filters_value::setName(std::string name)
{
	this->name = name;
}

std::string
ScrubIpFilterTypes_filters_value::getDesc()
{
	return desc;
}

void
ScrubIpFilterTypes_filters_value::setDesc(std::string desc)
{
	this->desc = desc;
}



