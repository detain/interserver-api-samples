

#include "VpsRow.h"

using namespace Tiny;

VpsRow::VpsRow()
{
	vps_id = std::string();
	vps_name = std::string();
	repeat_invoices_cost = std::string();
	vps_hostname = std::string();
	vps_ip = std::string();
	vps_status = std::string();
	services_name = std::string();
	vps_comment = std::string();
}

VpsRow::VpsRow(std::string jsonString)
{
	this->fromJson(jsonString);
}

VpsRow::~VpsRow()
{

}

void
VpsRow::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *vps_idKey = "vps_id";

    if(object.has_key(vps_idKey))
    {
        bourne::json value = object[vps_idKey];



        jsonToValue(&vps_id, value, "std::string");


    }

    const char *vps_nameKey = "vps_name";

    if(object.has_key(vps_nameKey))
    {
        bourne::json value = object[vps_nameKey];



        jsonToValue(&vps_name, value, "std::string");


    }

    const char *repeat_invoices_costKey = "repeat_invoices_cost";

    if(object.has_key(repeat_invoices_costKey))
    {
        bourne::json value = object[repeat_invoices_costKey];



        jsonToValue(&repeat_invoices_cost, value, "std::string");


    }

    const char *vps_hostnameKey = "vps_hostname";

    if(object.has_key(vps_hostnameKey))
    {
        bourne::json value = object[vps_hostnameKey];



        jsonToValue(&vps_hostname, value, "std::string");


    }

    const char *vps_ipKey = "vps_ip";

    if(object.has_key(vps_ipKey))
    {
        bourne::json value = object[vps_ipKey];



        jsonToValue(&vps_ip, value, "std::string");


    }

    const char *vps_statusKey = "vps_status";

    if(object.has_key(vps_statusKey))
    {
        bourne::json value = object[vps_statusKey];



        jsonToValue(&vps_status, value, "std::string");


    }

    const char *services_nameKey = "services_name";

    if(object.has_key(services_nameKey))
    {
        bourne::json value = object[services_nameKey];



        jsonToValue(&services_name, value, "std::string");


    }

    const char *vps_commentKey = "vps_comment";

    if(object.has_key(vps_commentKey))
    {
        bourne::json value = object[vps_commentKey];



        jsonToValue(&vps_comment, value, "std::string");


    }


}

bourne::json
VpsRow::toJson()
{
    bourne::json object = bourne::json::object();





    object["vps_id"] = getVpsId();






    object["vps_name"] = getVpsName();






    object["repeat_invoices_cost"] = getRepeatInvoicesCost();






    object["vps_hostname"] = getVpsHostname();






    object["vps_ip"] = getVpsIp();






    object["vps_status"] = getVpsStatus();






    object["services_name"] = getServicesName();






    object["vps_comment"] = getVpsComment();



    return object;

}

std::string
VpsRow::getVpsId()
{
	return vps_id;
}

void
VpsRow::setVpsId(std::string vps_id)
{
	this->vps_id = vps_id;
}

std::string
VpsRow::getVpsName()
{
	return vps_name;
}

void
VpsRow::setVpsName(std::string vps_name)
{
	this->vps_name = vps_name;
}

std::string
VpsRow::getRepeatInvoicesCost()
{
	return repeat_invoices_cost;
}

void
VpsRow::setRepeatInvoicesCost(std::string repeat_invoices_cost)
{
	this->repeat_invoices_cost = repeat_invoices_cost;
}

std::string
VpsRow::getVpsHostname()
{
	return vps_hostname;
}

void
VpsRow::setVpsHostname(std::string vps_hostname)
{
	this->vps_hostname = vps_hostname;
}

std::string
VpsRow::getVpsIp()
{
	return vps_ip;
}

void
VpsRow::setVpsIp(std::string vps_ip)
{
	this->vps_ip = vps_ip;
}

std::string
VpsRow::getVpsStatus()
{
	return vps_status;
}

void
VpsRow::setVpsStatus(std::string vps_status)
{
	this->vps_status = vps_status;
}

std::string
VpsRow::getServicesName()
{
	return services_name;
}

void
VpsRow::setServicesName(std::string services_name)
{
	this->services_name = services_name;
}

std::string
VpsRow::getVpsComment()
{
	return vps_comment;
}

void
VpsRow::setVpsComment(std::string vps_comment)
{
	this->vps_comment = vps_comment;
}



