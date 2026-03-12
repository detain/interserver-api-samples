

#include "BackupIPInfoRow.h"

using namespace Tiny;

BackupIPInfoRow::BackupIPInfoRow()
{
	desc = std::string();
	value = std::string();
}

BackupIPInfoRow::BackupIPInfoRow(std::string jsonString)
{
	this->fromJson(jsonString);
}

BackupIPInfoRow::~BackupIPInfoRow()
{

}

void
BackupIPInfoRow::fromJson(std::string jsonObj)
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
BackupIPInfoRow::toJson()
{
    bourne::json object = bourne::json::object();





    object["desc"] = getDesc();






    object["value"] = getValue();



    return object;

}

std::string
BackupIPInfoRow::getDesc()
{
	return desc;
}

void
BackupIPInfoRow::setDesc(std::string desc)
{
	this->desc = desc;
}

std::string
BackupIPInfoRow::getValue()
{
	return value;
}

void
BackupIPInfoRow::setValue(std::string value)
{
	this->value = value;
}



