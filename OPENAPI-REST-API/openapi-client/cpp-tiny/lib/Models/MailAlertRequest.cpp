

#include "MailAlertRequest.h"

using namespace Tiny;

MailAlertRequest::MailAlertRequest()
{
	type = std::string();
	value = std::string();
	to = std::string();
	enabled = std::string();
}

MailAlertRequest::MailAlertRequest(std::string jsonString)
{
	this->fromJson(jsonString);
}

MailAlertRequest::~MailAlertRequest()
{

}

void
MailAlertRequest::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *typeKey = "type";

    if(object.has_key(typeKey))
    {
        bourne::json value = object[typeKey];



        jsonToValue(&type, value, "std::string");


    }

    const char *valueKey = "value";

    if(object.has_key(valueKey))
    {
        bourne::json value = object[valueKey];



        jsonToValue(&value, value, "std::string");


    }

    const char *toKey = "to";

    if(object.has_key(toKey))
    {
        bourne::json value = object[toKey];



        jsonToValue(&to, value, "std::string");


    }

    const char *enabledKey = "enabled";

    if(object.has_key(enabledKey))
    {
        bourne::json value = object[enabledKey];



        jsonToValue(&enabled, value, "std::string");


    }


}

bourne::json
MailAlertRequest::toJson()
{
    bourne::json object = bourne::json::object();





    object["type"] = getType();






    object["value"] = getValue();






    object["to"] = getTo();






    object["enabled"] = getEnabled();



    return object;

}

std::string
MailAlertRequest::getType()
{
	return type;
}

void
MailAlertRequest::setType(std::string type)
{
	this->type = type;
}

std::string
MailAlertRequest::getValue()
{
	return value;
}

void
MailAlertRequest::setValue(std::string value)
{
	this->value = value;
}

std::string
MailAlertRequest::getTo()
{
	return to;
}

void
MailAlertRequest::setTo(std::string to)
{
	this->to = to;
}

std::string
MailAlertRequest::getEnabled()
{
	return enabled;
}

void
MailAlertRequest::setEnabled(std::string enabled)
{
	this->enabled = enabled;
}



