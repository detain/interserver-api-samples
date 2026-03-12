

#include "QuickserverIpTableRow.h"

using namespace Tiny;

QuickserverIpTableRow::QuickserverIpTableRow()
{
	desc = std::string();
	value = std::string();
}

QuickserverIpTableRow::QuickserverIpTableRow(std::string jsonString)
{
	this->fromJson(jsonString);
}

QuickserverIpTableRow::~QuickserverIpTableRow()
{

}

void
QuickserverIpTableRow::fromJson(std::string jsonObj)
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
QuickserverIpTableRow::toJson()
{
    bourne::json object = bourne::json::object();





    object["desc"] = getDesc();






    object["value"] = getValue();



    return object;

}

std::string
QuickserverIpTableRow::getDesc()
{
	return desc;
}

void
QuickserverIpTableRow::setDesc(std::string desc)
{
	this->desc = desc;
}

std::string
QuickserverIpTableRow::getValue()
{
	return value;
}

void
QuickserverIpTableRow::setValue(std::string value)
{
	this->value = value;
}



