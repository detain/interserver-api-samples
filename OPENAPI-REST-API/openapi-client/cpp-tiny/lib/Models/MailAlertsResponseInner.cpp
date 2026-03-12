

#include "MailAlertsResponse_inner.h"

using namespace Tiny;

MailAlertsResponse_inner::MailAlertsResponse_inner()
{
	alert_id = int(0);
	alert_type = std::string();
	alert_value = std::string();
	alert_to = std::string();
	alert_enabled = std::string();
}

MailAlertsResponse_inner::MailAlertsResponse_inner(std::string jsonString)
{
	this->fromJson(jsonString);
}

MailAlertsResponse_inner::~MailAlertsResponse_inner()
{

}

void
MailAlertsResponse_inner::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *alert_idKey = "alert_id";

    if(object.has_key(alert_idKey))
    {
        bourne::json value = object[alert_idKey];



        jsonToValue(&alert_id, value, "int");


    }

    const char *alert_typeKey = "alert_type";

    if(object.has_key(alert_typeKey))
    {
        bourne::json value = object[alert_typeKey];



        jsonToValue(&alert_type, value, "std::string");


    }

    const char *alert_valueKey = "alert_value";

    if(object.has_key(alert_valueKey))
    {
        bourne::json value = object[alert_valueKey];



        jsonToValue(&alert_value, value, "std::string");


    }

    const char *alert_toKey = "alert_to";

    if(object.has_key(alert_toKey))
    {
        bourne::json value = object[alert_toKey];



        jsonToValue(&alert_to, value, "std::string");


    }

    const char *alert_enabledKey = "alert_enabled";

    if(object.has_key(alert_enabledKey))
    {
        bourne::json value = object[alert_enabledKey];



        jsonToValue(&alert_enabled, value, "std::string");


    }


}

bourne::json
MailAlertsResponse_inner::toJson()
{
    bourne::json object = bourne::json::object();





    object["alert_id"] = getAlertId();






    object["alert_type"] = getAlertType();






    object["alert_value"] = getAlertValue();






    object["alert_to"] = getAlertTo();






    object["alert_enabled"] = getAlertEnabled();



    return object;

}

int
MailAlertsResponse_inner::getAlertId()
{
	return alert_id;
}

void
MailAlertsResponse_inner::setAlertId(int alert_id)
{
	this->alert_id = alert_id;
}

std::string
MailAlertsResponse_inner::getAlertType()
{
	return alert_type;
}

void
MailAlertsResponse_inner::setAlertType(std::string alert_type)
{
	this->alert_type = alert_type;
}

std::string
MailAlertsResponse_inner::getAlertValue()
{
	return alert_value;
}

void
MailAlertsResponse_inner::setAlertValue(std::string alert_value)
{
	this->alert_value = alert_value;
}

std::string
MailAlertsResponse_inner::getAlertTo()
{
	return alert_to;
}

void
MailAlertsResponse_inner::setAlertTo(std::string alert_to)
{
	this->alert_to = alert_to;
}

std::string
MailAlertsResponse_inner::getAlertEnabled()
{
	return alert_enabled;
}

void
MailAlertsResponse_inner::setAlertEnabled(std::string alert_enabled)
{
	this->alert_enabled = alert_enabled;
}



