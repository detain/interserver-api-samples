

#include "VpsIPInfoRow.h"

using namespace Tiny;

VpsIPInfoRow::VpsIPInfoRow()
{
	desc = std::string();
	value = std::string();
}

VpsIPInfoRow::VpsIPInfoRow(std::string jsonString)
{
	this->fromJson(jsonString);
}

VpsIPInfoRow::~VpsIPInfoRow()
{

}

void
VpsIPInfoRow::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *descKey = "desc";

    if(object.has_key(descKey))
    {
        bourne::json value = object[descKey];



        jsonToValue(&desc, value, "std::string");


    }

    const char *valueKey = "value";

    if(object.has_key(valueKey))
    {
        bourne::json value = object[valueKey];



        jsonToValue(&value, value, "std::string");


    }


}

bourne::json
VpsIPInfoRow::toJson()
{
    bourne::json object = bourne::json::object();





    object["desc"] = getDesc();






    object["value"] = getValue();



    return object;

}

std::string
VpsIPInfoRow::getDesc()
{
	return desc;
}

void
VpsIPInfoRow::setDesc(std::string desc)
{
	this->desc = desc;
}

std::string
VpsIPInfoRow::getValue()
{
	return value;
}

void
VpsIPInfoRow::setValue(std::string value)
{
	this->value = value;
}



