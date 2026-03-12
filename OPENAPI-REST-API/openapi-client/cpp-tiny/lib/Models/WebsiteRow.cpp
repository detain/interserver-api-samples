

#include "WebsiteRow.h"

using namespace Tiny;

WebsiteRow::WebsiteRow()
{
	website_id = std::string();
	website_hostname = std::string();
	repeat_invoices_cost = std::string();
	website_status = std::string();
	services_name = std::string();
	website_comment = std::string();
}

WebsiteRow::WebsiteRow(std::string jsonString)
{
	this->fromJson(jsonString);
}

WebsiteRow::~WebsiteRow()
{

}

void
WebsiteRow::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *website_idKey = "website_id";

    if(object.has_key(website_idKey))
    {
        bourne::json value = object[website_idKey];



        jsonToValue(&website_id, value, "std::string");


    }

    const char *website_hostnameKey = "website_hostname";

    if(object.has_key(website_hostnameKey))
    {
        bourne::json value = object[website_hostnameKey];



        jsonToValue(&website_hostname, value, "std::string");


    }

    const char *repeat_invoices_costKey = "repeat_invoices_cost";

    if(object.has_key(repeat_invoices_costKey))
    {
        bourne::json value = object[repeat_invoices_costKey];



        jsonToValue(&repeat_invoices_cost, value, "std::string");


    }

    const char *website_statusKey = "website_status";

    if(object.has_key(website_statusKey))
    {
        bourne::json value = object[website_statusKey];



        jsonToValue(&website_status, value, "std::string");


    }

    const char *services_nameKey = "services_name";

    if(object.has_key(services_nameKey))
    {
        bourne::json value = object[services_nameKey];



        jsonToValue(&services_name, value, "std::string");


    }

    const char *website_commentKey = "website_comment";

    if(object.has_key(website_commentKey))
    {
        bourne::json value = object[website_commentKey];



        jsonToValue(&website_comment, value, "std::string");


    }


}

bourne::json
WebsiteRow::toJson()
{
    bourne::json object = bourne::json::object();





    object["website_id"] = getWebsiteId();






    object["website_hostname"] = getWebsiteHostname();






    object["repeat_invoices_cost"] = getRepeatInvoicesCost();






    object["website_status"] = getWebsiteStatus();






    object["services_name"] = getServicesName();






    object["website_comment"] = getWebsiteComment();



    return object;

}

std::string
WebsiteRow::getWebsiteId()
{
	return website_id;
}

void
WebsiteRow::setWebsiteId(std::string website_id)
{
	this->website_id = website_id;
}

std::string
WebsiteRow::getWebsiteHostname()
{
	return website_hostname;
}

void
WebsiteRow::setWebsiteHostname(std::string website_hostname)
{
	this->website_hostname = website_hostname;
}

std::string
WebsiteRow::getRepeatInvoicesCost()
{
	return repeat_invoices_cost;
}

void
WebsiteRow::setRepeatInvoicesCost(std::string repeat_invoices_cost)
{
	this->repeat_invoices_cost = repeat_invoices_cost;
}

std::string
WebsiteRow::getWebsiteStatus()
{
	return website_status;
}

void
WebsiteRow::setWebsiteStatus(std::string website_status)
{
	this->website_status = website_status;
}

std::string
WebsiteRow::getServicesName()
{
	return services_name;
}

void
WebsiteRow::setServicesName(std::string services_name)
{
	this->services_name = services_name;
}

std::string
WebsiteRow::getWebsiteComment()
{
	return website_comment;
}

void
WebsiteRow::setWebsiteComment(std::string website_comment)
{
	this->website_comment = website_comment;
}



