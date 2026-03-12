

#include "QuickserverAddonsRow.h"

using namespace Tiny;

QuickserverAddonsRow::QuickserverAddonsRow()
{
	desc = std::string();
	value = std::string();
}

QuickserverAddonsRow::QuickserverAddonsRow(std::string jsonString)
{
	this->fromJson(jsonString);
}

QuickserverAddonsRow::~QuickserverAddonsRow()
{

}

void
QuickserverAddonsRow::fromJson(std::string jsonObj)
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
QuickserverAddonsRow::toJson()
{
    bourne::json object = bourne::json::object();





    object["desc"] = getDesc();






    object["value"] = getValue();



    return object;

}

std::string
QuickserverAddonsRow::getDesc()
{
	return desc;
}

void
QuickserverAddonsRow::setDesc(std::string desc)
{
	this->desc = desc;
}

std::string
QuickserverAddonsRow::getValue()
{
	return value;
}

void
QuickserverAddonsRow::setValue(std::string value)
{
	this->value = value;
}



