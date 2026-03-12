

#include "LicenseIpInfoRow.h"

using namespace Tiny;

LicenseIpInfoRow::LicenseIpInfoRow()
{
	desc = std::string();
	value = std::string();
}

LicenseIpInfoRow::LicenseIpInfoRow(std::string jsonString)
{
	this->fromJson(jsonString);
}

LicenseIpInfoRow::~LicenseIpInfoRow()
{

}

void
LicenseIpInfoRow::fromJson(std::string jsonObj)
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
LicenseIpInfoRow::toJson()
{
    bourne::json object = bourne::json::object();





    object["desc"] = getDesc();






    object["value"] = getValue();



    return object;

}

std::string
LicenseIpInfoRow::getDesc()
{
	return desc;
}

void
LicenseIpInfoRow::setDesc(std::string desc)
{
	this->desc = desc;
}

std::string
LicenseIpInfoRow::getValue()
{
	return value;
}

void
LicenseIpInfoRow::setValue(std::string value)
{
	this->value = value;
}



