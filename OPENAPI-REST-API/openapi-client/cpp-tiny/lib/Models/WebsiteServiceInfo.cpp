

#include "WebsiteServiceInfo.h"

using namespace Tiny;

WebsiteServiceInfo::WebsiteServiceInfo()
{
	website_id = std::string();
	website_server = std::string();
	website_type = std::string();
	website_currency = std::string();
	website_order_date = std::string();
	website_custid = std::string();
	website_ip = std::string();
	website_status = std::string();
	website_invoice = std::string();
	website_coupon = std::string();
	website_extra = std::string();
	website_hostname = std::string();
	website_comment = std::string();
	website_username = std::string();
	website_server_status = std::string();
}

WebsiteServiceInfo::WebsiteServiceInfo(std::string jsonString)
{
	this->fromJson(jsonString);
}

WebsiteServiceInfo::~WebsiteServiceInfo()
{

}

void
WebsiteServiceInfo::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *website_idKey = "website_id";

    if(object.has_key(website_idKey))
    {
        bourne::json value = object[website_idKey];



        jsonToValue(&website_id, value, "std::string");


    }

    const char *website_serverKey = "website_server";

    if(object.has_key(website_serverKey))
    {
        bourne::json value = object[website_serverKey];



        jsonToValue(&website_server, value, "std::string");


    }

    const char *website_typeKey = "website_type";

    if(object.has_key(website_typeKey))
    {
        bourne::json value = object[website_typeKey];



        jsonToValue(&website_type, value, "std::string");


    }

    const char *website_currencyKey = "website_currency";

    if(object.has_key(website_currencyKey))
    {
        bourne::json value = object[website_currencyKey];



        jsonToValue(&website_currency, value, "std::string");


    }

    const char *website_order_dateKey = "website_order_date";

    if(object.has_key(website_order_dateKey))
    {
        bourne::json value = object[website_order_dateKey];



        jsonToValue(&website_order_date, value, "std::string");


    }

    const char *website_custidKey = "website_custid";

    if(object.has_key(website_custidKey))
    {
        bourne::json value = object[website_custidKey];



        jsonToValue(&website_custid, value, "std::string");


    }

    const char *website_ipKey = "website_ip";

    if(object.has_key(website_ipKey))
    {
        bourne::json value = object[website_ipKey];



        jsonToValue(&website_ip, value, "std::string");


    }

    const char *website_statusKey = "website_status";

    if(object.has_key(website_statusKey))
    {
        bourne::json value = object[website_statusKey];



        jsonToValue(&website_status, value, "std::string");


    }

    const char *website_invoiceKey = "website_invoice";

    if(object.has_key(website_invoiceKey))
    {
        bourne::json value = object[website_invoiceKey];



        jsonToValue(&website_invoice, value, "std::string");


    }

    const char *website_couponKey = "website_coupon";

    if(object.has_key(website_couponKey))
    {
        bourne::json value = object[website_couponKey];



        jsonToValue(&website_coupon, value, "std::string");


    }

    const char *website_extraKey = "website_extra";

    if(object.has_key(website_extraKey))
    {
        bourne::json value = object[website_extraKey];



        jsonToValue(&website_extra, value, "std::string");


    }

    const char *website_hostnameKey = "website_hostname";

    if(object.has_key(website_hostnameKey))
    {
        bourne::json value = object[website_hostnameKey];



        jsonToValue(&website_hostname, value, "std::string");


    }

    const char *website_commentKey = "website_comment";

    if(object.has_key(website_commentKey))
    {
        bourne::json value = object[website_commentKey];



        jsonToValue(&website_comment, value, "std::string");


    }

    const char *website_usernameKey = "website_username";

    if(object.has_key(website_usernameKey))
    {
        bourne::json value = object[website_usernameKey];



        jsonToValue(&website_username, value, "std::string");


    }

    const char *website_server_statusKey = "website_server_status";

    if(object.has_key(website_server_statusKey))
    {
        bourne::json value = object[website_server_statusKey];



        jsonToValue(&website_server_status, value, "std::string");


    }


}

bourne::json
WebsiteServiceInfo::toJson()
{
    bourne::json object = bourne::json::object();





    object["website_id"] = getWebsiteId();






    object["website_server"] = getWebsiteServer();






    object["website_type"] = getWebsiteType();






    object["website_currency"] = getWebsiteCurrency();






    object["website_order_date"] = getWebsiteOrderDate();






    object["website_custid"] = getWebsiteCustid();






    object["website_ip"] = getWebsiteIp();






    object["website_status"] = getWebsiteStatus();






    object["website_invoice"] = getWebsiteInvoice();






    object["website_coupon"] = getWebsiteCoupon();






    object["website_extra"] = getWebsiteExtra();






    object["website_hostname"] = getWebsiteHostname();






    object["website_comment"] = getWebsiteComment();






    object["website_username"] = getWebsiteUsername();






    object["website_server_status"] = getWebsiteServerStatus();



    return object;

}

std::string
WebsiteServiceInfo::getWebsiteId()
{
	return website_id;
}

void
WebsiteServiceInfo::setWebsiteId(std::string website_id)
{
	this->website_id = website_id;
}

std::string
WebsiteServiceInfo::getWebsiteServer()
{
	return website_server;
}

void
WebsiteServiceInfo::setWebsiteServer(std::string website_server)
{
	this->website_server = website_server;
}

std::string
WebsiteServiceInfo::getWebsiteType()
{
	return website_type;
}

void
WebsiteServiceInfo::setWebsiteType(std::string website_type)
{
	this->website_type = website_type;
}

std::string
WebsiteServiceInfo::getWebsiteCurrency()
{
	return website_currency;
}

void
WebsiteServiceInfo::setWebsiteCurrency(std::string website_currency)
{
	this->website_currency = website_currency;
}

std::string
WebsiteServiceInfo::getWebsiteOrderDate()
{
	return website_order_date;
}

void
WebsiteServiceInfo::setWebsiteOrderDate(std::string website_order_date)
{
	this->website_order_date = website_order_date;
}

std::string
WebsiteServiceInfo::getWebsiteCustid()
{
	return website_custid;
}

void
WebsiteServiceInfo::setWebsiteCustid(std::string website_custid)
{
	this->website_custid = website_custid;
}

std::string
WebsiteServiceInfo::getWebsiteIp()
{
	return website_ip;
}

void
WebsiteServiceInfo::setWebsiteIp(std::string website_ip)
{
	this->website_ip = website_ip;
}

std::string
WebsiteServiceInfo::getWebsiteStatus()
{
	return website_status;
}

void
WebsiteServiceInfo::setWebsiteStatus(std::string website_status)
{
	this->website_status = website_status;
}

std::string
WebsiteServiceInfo::getWebsiteInvoice()
{
	return website_invoice;
}

void
WebsiteServiceInfo::setWebsiteInvoice(std::string website_invoice)
{
	this->website_invoice = website_invoice;
}

std::string
WebsiteServiceInfo::getWebsiteCoupon()
{
	return website_coupon;
}

void
WebsiteServiceInfo::setWebsiteCoupon(std::string website_coupon)
{
	this->website_coupon = website_coupon;
}

std::string
WebsiteServiceInfo::getWebsiteExtra()
{
	return website_extra;
}

void
WebsiteServiceInfo::setWebsiteExtra(std::string website_extra)
{
	this->website_extra = website_extra;
}

std::string
WebsiteServiceInfo::getWebsiteHostname()
{
	return website_hostname;
}

void
WebsiteServiceInfo::setWebsiteHostname(std::string website_hostname)
{
	this->website_hostname = website_hostname;
}

std::string
WebsiteServiceInfo::getWebsiteComment()
{
	return website_comment;
}

void
WebsiteServiceInfo::setWebsiteComment(std::string website_comment)
{
	this->website_comment = website_comment;
}

std::string
WebsiteServiceInfo::getWebsiteUsername()
{
	return website_username;
}

void
WebsiteServiceInfo::setWebsiteUsername(std::string website_username)
{
	this->website_username = website_username;
}

std::string
WebsiteServiceInfo::getWebsiteServerStatus()
{
	return website_server_status;
}

void
WebsiteServiceInfo::setWebsiteServerStatus(std::string website_server_status)
{
	this->website_server_status = website_server_status;
}



