

#include "MailTutorialsTableRow.h"

using namespace Tiny;

MailTutorialsTableRow::MailTutorialsTableRow()
{
	desc = std::string();
	value = std::string();
}

MailTutorialsTableRow::MailTutorialsTableRow(std::string jsonString)
{
	this->fromJson(jsonString);
}

MailTutorialsTableRow::~MailTutorialsTableRow()
{

}

void
MailTutorialsTableRow::fromJson(std::string jsonObj)
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
MailTutorialsTableRow::toJson()
{
    bourne::json object = bourne::json::object();





    object["desc"] = getDesc();






    object["value"] = getValue();



    return object;

}

std::string
MailTutorialsTableRow::getDesc()
{
	return desc;
}

void
MailTutorialsTableRow::setDesc(std::string desc)
{
	this->desc = desc;
}

std::string
MailTutorialsTableRow::getValue()
{
	return value;
}

void
MailTutorialsTableRow::setValue(std::string value)
{
	this->value = value;
}



