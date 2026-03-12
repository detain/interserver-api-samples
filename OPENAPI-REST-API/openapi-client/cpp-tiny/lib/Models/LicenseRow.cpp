

#include "LicenseRow.h"

using namespace Tiny;

LicenseRow::LicenseRow()
{
	license_id = std::string();
	license_hostname = std::string();
	license_ip = std::string();
	services_name = std::string();
	cost = std::string();
	license_status = std::string();
	invoices_paid = std::string();
	invoices_date = std::string();
}

LicenseRow::LicenseRow(std::string jsonString)
{
	this->fromJson(jsonString);
}

LicenseRow::~LicenseRow()
{

}

void
LicenseRow::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *license_idKey = "license_id";

    if(object.has_key(license_idKey))
    {
        bourne::json value = object[license_idKey];



        jsonToValue(&license_id, value, "std::string");


    }

    const char *license_hostnameKey = "license_hostname";

    if(object.has_key(license_hostnameKey))
    {
        bourne::json value = object[license_hostnameKey];



        jsonToValue(&license_hostname, value, "std::string");


    }

    const char *license_ipKey = "license_ip";

    if(object.has_key(license_ipKey))
    {
        bourne::json value = object[license_ipKey];



        jsonToValue(&license_ip, value, "std::string");


    }

    const char *services_nameKey = "services_name";

    if(object.has_key(services_nameKey))
    {
        bourne::json value = object[services_nameKey];



        jsonToValue(&services_name, value, "std::string");


    }

    const char *costKey = "cost";

    if(object.has_key(costKey))
    {
        bourne::json value = object[costKey];



        jsonToValue(&cost, value, "std::string");


    }

    const char *license_statusKey = "license_status";

    if(object.has_key(license_statusKey))
    {
        bourne::json value = object[license_statusKey];



        jsonToValue(&license_status, value, "std::string");


    }

    const char *invoices_paidKey = "invoices_paid";

    if(object.has_key(invoices_paidKey))
    {
        bourne::json value = object[invoices_paidKey];



        jsonToValue(&invoices_paid, value, "std::string");


    }

    const char *invoices_dateKey = "invoices_date";

    if(object.has_key(invoices_dateKey))
    {
        bourne::json value = object[invoices_dateKey];



        jsonToValue(&invoices_date, value, "std::string");


    }


}

bourne::json
LicenseRow::toJson()
{
    bourne::json object = bourne::json::object();





    object["license_id"] = getLicenseId();






    object["license_hostname"] = getLicenseHostname();






    object["license_ip"] = getLicenseIp();






    object["services_name"] = getServicesName();






    object["cost"] = getCost();






    object["license_status"] = getLicenseStatus();






    object["invoices_paid"] = getInvoicesPaid();






    object["invoices_date"] = getInvoicesDate();



    return object;

}

std::string
LicenseRow::getLicenseId()
{
	return license_id;
}

void
LicenseRow::setLicenseId(std::string license_id)
{
	this->license_id = license_id;
}

std::string
LicenseRow::getLicenseHostname()
{
	return license_hostname;
}

void
LicenseRow::setLicenseHostname(std::string license_hostname)
{
	this->license_hostname = license_hostname;
}

std::string
LicenseRow::getLicenseIp()
{
	return license_ip;
}

void
LicenseRow::setLicenseIp(std::string license_ip)
{
	this->license_ip = license_ip;
}

std::string
LicenseRow::getServicesName()
{
	return services_name;
}

void
LicenseRow::setServicesName(std::string services_name)
{
	this->services_name = services_name;
}

std::string
LicenseRow::getCost()
{
	return cost;
}

void
LicenseRow::setCost(std::string cost)
{
	this->cost = cost;
}

std::string
LicenseRow::getLicenseStatus()
{
	return license_status;
}

void
LicenseRow::setLicenseStatus(std::string license_status)
{
	this->license_status = license_status;
}

std::string
LicenseRow::getInvoicesPaid()
{
	return invoices_paid;
}

void
LicenseRow::setInvoicesPaid(std::string invoices_paid)
{
	this->invoices_paid = invoices_paid;
}

std::string
LicenseRow::getInvoicesDate()
{
	return invoices_date;
}

void
LicenseRow::setInvoicesDate(std::string invoices_date)
{
	this->invoices_date = invoices_date;
}



