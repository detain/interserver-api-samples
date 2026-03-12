

#include "DomainServiceInfo.h"

using namespace Tiny;

DomainServiceInfo::DomainServiceInfo()
{
	domain_id = std::string();
	domain_hostname = std::string();
	domain_username = std::string();
	domain_password = std::string();
	domain_type = std::string();
	domain_currency = std::string();
	domain_expire_date = std::string();
	domain_order_date = std::string();
	domain_custid = std::string();
	domain_status = std::string();
	domain_invoice = std::string();
	domain_coupon = std::string();
}

DomainServiceInfo::DomainServiceInfo(std::string jsonString)
{
	this->fromJson(jsonString);
}

DomainServiceInfo::~DomainServiceInfo()
{

}

void
DomainServiceInfo::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *domain_idKey = "domain_id";

    if(object.has_key(domain_idKey))
    {
        bourne::json value = object[domain_idKey];



        jsonToValue(&domain_id, value, "std::string");


    }

    const char *domain_hostnameKey = "domain_hostname";

    if(object.has_key(domain_hostnameKey))
    {
        bourne::json value = object[domain_hostnameKey];



        jsonToValue(&domain_hostname, value, "std::string");


    }

    const char *domain_usernameKey = "domain_username";

    if(object.has_key(domain_usernameKey))
    {
        bourne::json value = object[domain_usernameKey];



        jsonToValue(&domain_username, value, "std::string");


    }

    const char *domain_passwordKey = "domain_password";

    if(object.has_key(domain_passwordKey))
    {
        bourne::json value = object[domain_passwordKey];



        jsonToValue(&domain_password, value, "std::string");


    }

    const char *domain_typeKey = "domain_type";

    if(object.has_key(domain_typeKey))
    {
        bourne::json value = object[domain_typeKey];



        jsonToValue(&domain_type, value, "std::string");


    }

    const char *domain_currencyKey = "domain_currency";

    if(object.has_key(domain_currencyKey))
    {
        bourne::json value = object[domain_currencyKey];



        jsonToValue(&domain_currency, value, "std::string");


    }

    const char *domain_expire_dateKey = "domain_expire_date";

    if(object.has_key(domain_expire_dateKey))
    {
        bourne::json value = object[domain_expire_dateKey];



        jsonToValue(&domain_expire_date, value, "std::string");


    }

    const char *domain_order_dateKey = "domain_order_date";

    if(object.has_key(domain_order_dateKey))
    {
        bourne::json value = object[domain_order_dateKey];



        jsonToValue(&domain_order_date, value, "std::string");


    }

    const char *domain_custidKey = "domain_custid";

    if(object.has_key(domain_custidKey))
    {
        bourne::json value = object[domain_custidKey];



        jsonToValue(&domain_custid, value, "std::string");


    }

    const char *domain_statusKey = "domain_status";

    if(object.has_key(domain_statusKey))
    {
        bourne::json value = object[domain_statusKey];



        jsonToValue(&domain_status, value, "std::string");


    }

    const char *domain_invoiceKey = "domain_invoice";

    if(object.has_key(domain_invoiceKey))
    {
        bourne::json value = object[domain_invoiceKey];



        jsonToValue(&domain_invoice, value, "std::string");


    }

    const char *domain_couponKey = "domain_coupon";

    if(object.has_key(domain_couponKey))
    {
        bourne::json value = object[domain_couponKey];



        jsonToValue(&domain_coupon, value, "std::string");


    }


}

bourne::json
DomainServiceInfo::toJson()
{
    bourne::json object = bourne::json::object();





    object["domain_id"] = getDomainId();






    object["domain_hostname"] = getDomainHostname();






    object["domain_username"] = getDomainUsername();






    object["domain_password"] = getDomainPassword();






    object["domain_type"] = getDomainType();






    object["domain_currency"] = getDomainCurrency();






    object["domain_expire_date"] = getDomainExpireDate();






    object["domain_order_date"] = getDomainOrderDate();






    object["domain_custid"] = getDomainCustid();






    object["domain_status"] = getDomainStatus();






    object["domain_invoice"] = getDomainInvoice();






    object["domain_coupon"] = getDomainCoupon();



    return object;

}

std::string
DomainServiceInfo::getDomainId()
{
	return domain_id;
}

void
DomainServiceInfo::setDomainId(std::string domain_id)
{
	this->domain_id = domain_id;
}

std::string
DomainServiceInfo::getDomainHostname()
{
	return domain_hostname;
}

void
DomainServiceInfo::setDomainHostname(std::string domain_hostname)
{
	this->domain_hostname = domain_hostname;
}

std::string
DomainServiceInfo::getDomainUsername()
{
	return domain_username;
}

void
DomainServiceInfo::setDomainUsername(std::string domain_username)
{
	this->domain_username = domain_username;
}

std::string
DomainServiceInfo::getDomainPassword()
{
	return domain_password;
}

void
DomainServiceInfo::setDomainPassword(std::string domain_password)
{
	this->domain_password = domain_password;
}

std::string
DomainServiceInfo::getDomainType()
{
	return domain_type;
}

void
DomainServiceInfo::setDomainType(std::string domain_type)
{
	this->domain_type = domain_type;
}

std::string
DomainServiceInfo::getDomainCurrency()
{
	return domain_currency;
}

void
DomainServiceInfo::setDomainCurrency(std::string domain_currency)
{
	this->domain_currency = domain_currency;
}

std::string
DomainServiceInfo::getDomainExpireDate()
{
	return domain_expire_date;
}

void
DomainServiceInfo::setDomainExpireDate(std::string domain_expire_date)
{
	this->domain_expire_date = domain_expire_date;
}

std::string
DomainServiceInfo::getDomainOrderDate()
{
	return domain_order_date;
}

void
DomainServiceInfo::setDomainOrderDate(std::string domain_order_date)
{
	this->domain_order_date = domain_order_date;
}

std::string
DomainServiceInfo::getDomainCustid()
{
	return domain_custid;
}

void
DomainServiceInfo::setDomainCustid(std::string domain_custid)
{
	this->domain_custid = domain_custid;
}

std::string
DomainServiceInfo::getDomainStatus()
{
	return domain_status;
}

void
DomainServiceInfo::setDomainStatus(std::string domain_status)
{
	this->domain_status = domain_status;
}

std::string
DomainServiceInfo::getDomainInvoice()
{
	return domain_invoice;
}

void
DomainServiceInfo::setDomainInvoice(std::string domain_invoice)
{
	this->domain_invoice = domain_invoice;
}

std::string
DomainServiceInfo::getDomainCoupon()
{
	return domain_coupon;
}

void
DomainServiceInfo::setDomainCoupon(std::string domain_coupon)
{
	this->domain_coupon = domain_coupon;
}



