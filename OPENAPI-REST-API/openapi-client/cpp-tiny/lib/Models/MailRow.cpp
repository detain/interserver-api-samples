

#include "MailRow.h"

using namespace Tiny;

MailRow::MailRow()
{
	mail_id = std::string();
	repeat_invoices_cost = std::string();
	mail_username = std::string();
	mail_status = std::string();
	services_name = std::string();
}

MailRow::MailRow(std::string jsonString)
{
	this->fromJson(jsonString);
}

MailRow::~MailRow()
{

}

void
MailRow::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *mail_idKey = "mail_id";

    if(object.has_key(mail_idKey))
    {
        bourne::json value = object[mail_idKey];



        jsonToValue(&mail_id, value, "std::string");


    }

    const char *repeat_invoices_costKey = "repeat_invoices_cost";

    if(object.has_key(repeat_invoices_costKey))
    {
        bourne::json value = object[repeat_invoices_costKey];



        jsonToValue(&repeat_invoices_cost, value, "std::string");


    }

    const char *mail_usernameKey = "mail_username";

    if(object.has_key(mail_usernameKey))
    {
        bourne::json value = object[mail_usernameKey];



        jsonToValue(&mail_username, value, "std::string");


    }

    const char *mail_statusKey = "mail_status";

    if(object.has_key(mail_statusKey))
    {
        bourne::json value = object[mail_statusKey];



        jsonToValue(&mail_status, value, "std::string");


    }

    const char *services_nameKey = "services_name";

    if(object.has_key(services_nameKey))
    {
        bourne::json value = object[services_nameKey];



        jsonToValue(&services_name, value, "std::string");


    }


}

bourne::json
MailRow::toJson()
{
    bourne::json object = bourne::json::object();





    object["mail_id"] = getMailId();






    object["repeat_invoices_cost"] = getRepeatInvoicesCost();






    object["mail_username"] = getMailUsername();






    object["mail_status"] = getMailStatus();






    object["services_name"] = getServicesName();



    return object;

}

std::string
MailRow::getMailId()
{
	return mail_id;
}

void
MailRow::setMailId(std::string mail_id)
{
	this->mail_id = mail_id;
}

std::string
MailRow::getRepeatInvoicesCost()
{
	return repeat_invoices_cost;
}

void
MailRow::setRepeatInvoicesCost(std::string repeat_invoices_cost)
{
	this->repeat_invoices_cost = repeat_invoices_cost;
}

std::string
MailRow::getMailUsername()
{
	return mail_username;
}

void
MailRow::setMailUsername(std::string mail_username)
{
	this->mail_username = mail_username;
}

std::string
MailRow::getMailStatus()
{
	return mail_status;
}

void
MailRow::setMailStatus(std::string mail_status)
{
	this->mail_status = mail_status;
}

std::string
MailRow::getServicesName()
{
	return services_name;
}

void
MailRow::setServicesName(std::string services_name)
{
	this->services_name = services_name;
}



