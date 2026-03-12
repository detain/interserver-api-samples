

#include "MailExtraInfoTableRow.h"

using namespace Tiny;

MailExtraInfoTableRow::MailExtraInfoTableRow()
{
	desc = std::string();
	value = std::string();
}

MailExtraInfoTableRow::MailExtraInfoTableRow(std::string jsonString)
{
	this->fromJson(jsonString);
}

MailExtraInfoTableRow::~MailExtraInfoTableRow()
{

}

void
MailExtraInfoTableRow::fromJson(std::string jsonObj)
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
MailExtraInfoTableRow::toJson()
{
    bourne::json object = bourne::json::object();





    object["desc"] = getDesc();






    object["value"] = getValue();



    return object;

}

std::string
MailExtraInfoTableRow::getDesc()
{
	return desc;
}

void
MailExtraInfoTableRow::setDesc(std::string desc)
{
	this->desc = desc;
}

std::string
MailExtraInfoTableRow::getValue()
{
	return value;
}

void
MailExtraInfoTableRow::setValue(std::string value)
{
	this->value = value;
}



