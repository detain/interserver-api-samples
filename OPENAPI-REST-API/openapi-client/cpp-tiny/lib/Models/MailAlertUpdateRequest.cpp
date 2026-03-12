

#include "MailAlertUpdateRequest.h"

using namespace Tiny;

MailAlertUpdateRequest::MailAlertUpdateRequest()
{
	alert_id = int(0);
	type = std::string();
	value = std::string();
	to = std::string();
	enabled = std::string();
}

MailAlertUpdateRequest::MailAlertUpdateRequest(std::string jsonString)
{
	this->fromJson(jsonString);
}

MailAlertUpdateRequest::~MailAlertUpdateRequest()
{

}

void
MailAlertUpdateRequest::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *alert_idKey = "alert_id";

    if(object.has_key(alert_idKey))
    {
        bourne::json value = object[alert_idKey];



        jsonToValue(&alert_id, value, "int");


    }

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
MailAlertUpdateRequest::toJson()
{
    bourne::json object = bourne::json::object();





    object["alert_id"] = getAlertId();






    object["type"] = getType();






    object["value"] = getValue();






    object["to"] = getTo();






    object["enabled"] = getEnabled();



    return object;

}

int
MailAlertUpdateRequest::getAlertId()
{
	return alert_id;
}

void
MailAlertUpdateRequest::setAlertId(int alert_id)
{
	this->alert_id = alert_id;
}

std::string
MailAlertUpdateRequest::getType()
{
	return type;
}

void
MailAlertUpdateRequest::setType(std::string type)
{
	this->type = type;
}

std::string
MailAlertUpdateRequest::getValue()
{
	return value;
}

void
MailAlertUpdateRequest::setValue(std::string value)
{
	this->value = value;
}

std::string
MailAlertUpdateRequest::getTo()
{
	return to;
}

void
MailAlertUpdateRequest::setTo(std::string to)
{
	this->to = to;
}

std::string
MailAlertUpdateRequest::getEnabled()
{
	return enabled;
}

void
MailAlertUpdateRequest::setEnabled(std::string enabled)
{
	this->enabled = enabled;
}



