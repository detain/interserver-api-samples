

#include "WebsiteTableRow.h"

using namespace Tiny;

WebsiteTableRow::WebsiteTableRow()
{
	desc = std::string();
	value = std::string();
}

WebsiteTableRow::WebsiteTableRow(std::string jsonString)
{
	this->fromJson(jsonString);
}

WebsiteTableRow::~WebsiteTableRow()
{

}

void
WebsiteTableRow::fromJson(std::string jsonObj)
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
WebsiteTableRow::toJson()
{
    bourne::json object = bourne::json::object();





    object["desc"] = getDesc();






    object["value"] = getValue();



    return object;

}

std::string
WebsiteTableRow::getDesc()
{
	return desc;
}

void
WebsiteTableRow::setDesc(std::string desc)
{
	this->desc = desc;
}

std::string
WebsiteTableRow::getValue()
{
	return value;
}

void
WebsiteTableRow::setValue(std::string value)
{
	this->value = value;
}



