

#include "LicenseServiceInfo.h"

using namespace Tiny;

LicenseServiceInfo::LicenseServiceInfo()
{
	license_id = std::string();
	license_type = std::string();
	license_currency = std::string();
	license_order_date = std::string();
	license_custid = std::string();
	license_ip = std::string();
	license_status = std::string();
	license_invoice = std::string();
	license_coupon = std::string();
	license_hostname = std::string();
	license_key = std::string();
	license_extra = std::string();
}

LicenseServiceInfo::LicenseServiceInfo(std::string jsonString)
{
	this->fromJson(jsonString);
}

LicenseServiceInfo::~LicenseServiceInfo()
{

}

void
LicenseServiceInfo::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *license_idKey = "license_id";

    if(object.has_key(license_idKey))
    {
        bourne::json value = object[license_idKey];



        jsonToValue(&license_id, value, "std::string");


    }

    const char *license_typeKey = "license_type";

    if(object.has_key(license_typeKey))
    {
        bourne::json value = object[license_typeKey];



        jsonToValue(&license_type, value, "std::string");


    }

    const char *license_currencyKey = "license_currency";

    if(object.has_key(license_currencyKey))
    {
        bourne::json value = object[license_currencyKey];



        jsonToValue(&license_currency, value, "std::string");


    }

    const char *license_order_dateKey = "license_order_date";

    if(object.has_key(license_order_dateKey))
    {
        bourne::json value = object[license_order_dateKey];



        jsonToValue(&license_order_date, value, "std::string");


    }

    const char *license_custidKey = "license_custid";

    if(object.has_key(license_custidKey))
    {
        bourne::json value = object[license_custidKey];



        jsonToValue(&license_custid, value, "std::string");


    }

    const char *license_ipKey = "license_ip";

    if(object.has_key(license_ipKey))
    {
        bourne::json value = object[license_ipKey];



        jsonToValue(&license_ip, value, "std::string");


    }

    const char *license_statusKey = "license_status";

    if(object.has_key(license_statusKey))
    {
        bourne::json value = object[license_statusKey];



        jsonToValue(&license_status, value, "std::string");


    }

    const char *license_invoiceKey = "license_invoice";

    if(object.has_key(license_invoiceKey))
    {
        bourne::json value = object[license_invoiceKey];



        jsonToValue(&license_invoice, value, "std::string");


    }

    const char *license_couponKey = "license_coupon";

    if(object.has_key(license_couponKey))
    {
        bourne::json value = object[license_couponKey];



        jsonToValue(&license_coupon, value, "std::string");


    }

    const char *license_hostnameKey = "license_hostname";

    if(object.has_key(license_hostnameKey))
    {
        bourne::json value = object[license_hostnameKey];



        jsonToValue(&license_hostname, value, "std::string");


    }

    const char *license_keyKey = "license_key";

    if(object.has_key(license_keyKey))
    {
        bourne::json value = object[license_keyKey];



        jsonToValue(&license_key, value, "std::string");


    }

    const char *license_extraKey = "license_extra";

    if(object.has_key(license_extraKey))
    {
        bourne::json value = object[license_extraKey];



        jsonToValue(&license_extra, value, "std::string");


    }


}

bourne::json
LicenseServiceInfo::toJson()
{
    bourne::json object = bourne::json::object();





    object["license_id"] = getLicenseId();






    object["license_type"] = getLicenseType();






    object["license_currency"] = getLicenseCurrency();






    object["license_order_date"] = getLicenseOrderDate();






    object["license_custid"] = getLicenseCustid();






    object["license_ip"] = getLicenseIp();






    object["license_status"] = getLicenseStatus();






    object["license_invoice"] = getLicenseInvoice();






    object["license_coupon"] = getLicenseCoupon();






    object["license_hostname"] = getLicenseHostname();






    object["license_key"] = getLicenseKey();






    object["license_extra"] = getLicenseExtra();



    return object;

}

std::string
LicenseServiceInfo::getLicenseId()
{
	return license_id;
}

void
LicenseServiceInfo::setLicenseId(std::string license_id)
{
	this->license_id = license_id;
}

std::string
LicenseServiceInfo::getLicenseType()
{
	return license_type;
}

void
LicenseServiceInfo::setLicenseType(std::string license_type)
{
	this->license_type = license_type;
}

std::string
LicenseServiceInfo::getLicenseCurrency()
{
	return license_currency;
}

void
LicenseServiceInfo::setLicenseCurrency(std::string license_currency)
{
	this->license_currency = license_currency;
}

std::string
LicenseServiceInfo::getLicenseOrderDate()
{
	return license_order_date;
}

void
LicenseServiceInfo::setLicenseOrderDate(std::string license_order_date)
{
	this->license_order_date = license_order_date;
}

std::string
LicenseServiceInfo::getLicenseCustid()
{
	return license_custid;
}

void
LicenseServiceInfo::setLicenseCustid(std::string license_custid)
{
	this->license_custid = license_custid;
}

std::string
LicenseServiceInfo::getLicenseIp()
{
	return license_ip;
}

void
LicenseServiceInfo::setLicenseIp(std::string license_ip)
{
	this->license_ip = license_ip;
}

std::string
LicenseServiceInfo::getLicenseStatus()
{
	return license_status;
}

void
LicenseServiceInfo::setLicenseStatus(std::string license_status)
{
	this->license_status = license_status;
}

std::string
LicenseServiceInfo::getLicenseInvoice()
{
	return license_invoice;
}

void
LicenseServiceInfo::setLicenseInvoice(std::string license_invoice)
{
	this->license_invoice = license_invoice;
}

std::string
LicenseServiceInfo::getLicenseCoupon()
{
	return license_coupon;
}

void
LicenseServiceInfo::setLicenseCoupon(std::string license_coupon)
{
	this->license_coupon = license_coupon;
}

std::string
LicenseServiceInfo::getLicenseHostname()
{
	return license_hostname;
}

void
LicenseServiceInfo::setLicenseHostname(std::string license_hostname)
{
	this->license_hostname = license_hostname;
}

std::string
LicenseServiceInfo::getLicenseKey()
{
	return license_key;
}

void
LicenseServiceInfo::setLicenseKey(std::string license_key)
{
	this->license_key = license_key;
}

std::string
LicenseServiceInfo::getLicenseExtra()
{
	return license_extra;
}

void
LicenseServiceInfo::setLicenseExtra(std::string license_extra)
{
	this->license_extra = license_extra;
}



