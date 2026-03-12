

#include "ScrubIpsRowSchema.h"

using namespace Tiny;

ScrubIpsRowSchema::ScrubIpsRowSchema()
{
	scrub_ip_id = int(0);
	repeat_invoices_cost = float(0);
	scrub_ip_ip = std::string();
	scrub_ip_status = std::string();
	services_name = std::string();
}

ScrubIpsRowSchema::ScrubIpsRowSchema(std::string jsonString)
{
	this->fromJson(jsonString);
}

ScrubIpsRowSchema::~ScrubIpsRowSchema()
{

}

void
ScrubIpsRowSchema::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *scrub_ip_idKey = "scrub_ip_id";

    if(object.has_key(scrub_ip_idKey))
    {
        bourne::json value = object[scrub_ip_idKey];



        jsonToValue(&scrub_ip_id, value, "int");


    }

    const char *repeat_invoices_costKey = "repeat_invoices_cost";

    if(object.has_key(repeat_invoices_costKey))
    {
        bourne::json value = object[repeat_invoices_costKey];



        jsonToValue(&repeat_invoices_cost, value, "long");


    }

    const char *scrub_ip_ipKey = "scrub_ip_ip";

    if(object.has_key(scrub_ip_ipKey))
    {
        bourne::json value = object[scrub_ip_ipKey];



        jsonToValue(&scrub_ip_ip, value, "std::string");


    }

    const char *scrub_ip_statusKey = "scrub_ip_status";

    if(object.has_key(scrub_ip_statusKey))
    {
        bourne::json value = object[scrub_ip_statusKey];



        jsonToValue(&scrub_ip_status, value, "std::string");


    }

    const char *services_nameKey = "services_name";

    if(object.has_key(services_nameKey))
    {
        bourne::json value = object[services_nameKey];



        jsonToValue(&services_name, value, "std::string");


    }


}

bourne::json
ScrubIpsRowSchema::toJson()
{
    bourne::json object = bourne::json::object();





    object["scrub_ip_id"] = getScrubIpId();






    object["repeat_invoices_cost"] = getRepeatInvoicesCost();






    object["scrub_ip_ip"] = getScrubIpIp();






    object["scrub_ip_status"] = getScrubIpStatus();






    object["services_name"] = getServicesName();



    return object;

}

int
ScrubIpsRowSchema::getScrubIpId()
{
	return scrub_ip_id;
}

void
ScrubIpsRowSchema::setScrubIpId(int scrub_ip_id)
{
	this->scrub_ip_id = scrub_ip_id;
}

long
ScrubIpsRowSchema::getRepeatInvoicesCost()
{
	return repeat_invoices_cost;
}

void
ScrubIpsRowSchema::setRepeatInvoicesCost(long repeat_invoices_cost)
{
	this->repeat_invoices_cost = repeat_invoices_cost;
}

std::string
ScrubIpsRowSchema::getScrubIpIp()
{
	return scrub_ip_ip;
}

void
ScrubIpsRowSchema::setScrubIpIp(std::string scrub_ip_ip)
{
	this->scrub_ip_ip = scrub_ip_ip;
}

std::string
ScrubIpsRowSchema::getScrubIpStatus()
{
	return scrub_ip_status;
}

void
ScrubIpsRowSchema::setScrubIpStatus(std::string scrub_ip_status)
{
	this->scrub_ip_status = scrub_ip_status;
}

std::string
ScrubIpsRowSchema::getServicesName()
{
	return services_name;
}

void
ScrubIpsRowSchema::setServicesName(std::string services_name)
{
	this->services_name = services_name;
}



