

#include "GetScrubIpDetails_200_response_serviceInfo.h"

using namespace Tiny;

GetScrubIpDetails_200_response_serviceInfo::GetScrubIpDetails_200_response_serviceInfo()
{
	scrub_ip_id = std::string();
	scrub_ip_type = std::string();
	scrub_ip_custid = std::string();
	scrub_ip_order_date = std::string();
	scrub_ip_ip = std::string();
	scrub_ip_service_id = std::string();
	scrub_ip_service_module = std::string();
	scrub_ip_status = std::string();
	scrub_ip_invoice = std::string();
	scrub_ip_currency = std::string();
	scrub_ip_coupon = std::string();
	scrub_ip_comment = std::string();
}

GetScrubIpDetails_200_response_serviceInfo::GetScrubIpDetails_200_response_serviceInfo(std::string jsonString)
{
	this->fromJson(jsonString);
}

GetScrubIpDetails_200_response_serviceInfo::~GetScrubIpDetails_200_response_serviceInfo()
{

}

void
GetScrubIpDetails_200_response_serviceInfo::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *scrub_ip_idKey = "scrub_ip_id";

    if(object.has_key(scrub_ip_idKey))
    {
        bourne::json value = object[scrub_ip_idKey];



        jsonToValue(&scrub_ip_id, value, "std::string");


    }

    const char *scrub_ip_typeKey = "scrub_ip_type";

    if(object.has_key(scrub_ip_typeKey))
    {
        bourne::json value = object[scrub_ip_typeKey];



        jsonToValue(&scrub_ip_type, value, "std::string");


    }

    const char *scrub_ip_custidKey = "scrub_ip_custid";

    if(object.has_key(scrub_ip_custidKey))
    {
        bourne::json value = object[scrub_ip_custidKey];



        jsonToValue(&scrub_ip_custid, value, "std::string");


    }

    const char *scrub_ip_order_dateKey = "scrub_ip_order_date";

    if(object.has_key(scrub_ip_order_dateKey))
    {
        bourne::json value = object[scrub_ip_order_dateKey];



        jsonToValue(&scrub_ip_order_date, value, "std::string");


    }

    const char *scrub_ip_ipKey = "scrub_ip_ip";

    if(object.has_key(scrub_ip_ipKey))
    {
        bourne::json value = object[scrub_ip_ipKey];



        jsonToValue(&scrub_ip_ip, value, "std::string");


    }

    const char *scrub_ip_service_idKey = "scrub_ip_service_id";

    if(object.has_key(scrub_ip_service_idKey))
    {
        bourne::json value = object[scrub_ip_service_idKey];



        jsonToValue(&scrub_ip_service_id, value, "std::string");


    }

    const char *scrub_ip_service_moduleKey = "scrub_ip_service_module";

    if(object.has_key(scrub_ip_service_moduleKey))
    {
        bourne::json value = object[scrub_ip_service_moduleKey];



        jsonToValue(&scrub_ip_service_module, value, "std::string");


    }

    const char *scrub_ip_statusKey = "scrub_ip_status";

    if(object.has_key(scrub_ip_statusKey))
    {
        bourne::json value = object[scrub_ip_statusKey];



        jsonToValue(&scrub_ip_status, value, "std::string");


    }

    const char *scrub_ip_invoiceKey = "scrub_ip_invoice";

    if(object.has_key(scrub_ip_invoiceKey))
    {
        bourne::json value = object[scrub_ip_invoiceKey];



        jsonToValue(&scrub_ip_invoice, value, "std::string");


    }

    const char *scrub_ip_currencyKey = "scrub_ip_currency";

    if(object.has_key(scrub_ip_currencyKey))
    {
        bourne::json value = object[scrub_ip_currencyKey];



        jsonToValue(&scrub_ip_currency, value, "std::string");


    }

    const char *scrub_ip_couponKey = "scrub_ip_coupon";

    if(object.has_key(scrub_ip_couponKey))
    {
        bourne::json value = object[scrub_ip_couponKey];



        jsonToValue(&scrub_ip_coupon, value, "std::string");


    }

    const char *scrub_ip_commentKey = "scrub_ip_comment";

    if(object.has_key(scrub_ip_commentKey))
    {
        bourne::json value = object[scrub_ip_commentKey];



        jsonToValue(&scrub_ip_comment, value, "std::string");


    }


}

bourne::json
GetScrubIpDetails_200_response_serviceInfo::toJson()
{
    bourne::json object = bourne::json::object();





    object["scrub_ip_id"] = getScrubIpId();






    object["scrub_ip_type"] = getScrubIpType();






    object["scrub_ip_custid"] = getScrubIpCustid();






    object["scrub_ip_order_date"] = getScrubIpOrderDate();






    object["scrub_ip_ip"] = getScrubIpIp();






    object["scrub_ip_service_id"] = getScrubIpServiceId();






    object["scrub_ip_service_module"] = getScrubIpServiceModule();






    object["scrub_ip_status"] = getScrubIpStatus();






    object["scrub_ip_invoice"] = getScrubIpInvoice();






    object["scrub_ip_currency"] = getScrubIpCurrency();






    object["scrub_ip_coupon"] = getScrubIpCoupon();






    object["scrub_ip_comment"] = getScrubIpComment();



    return object;

}

std::string
GetScrubIpDetails_200_response_serviceInfo::getScrubIpId()
{
	return scrub_ip_id;
}

void
GetScrubIpDetails_200_response_serviceInfo::setScrubIpId(std::string scrub_ip_id)
{
	this->scrub_ip_id = scrub_ip_id;
}

std::string
GetScrubIpDetails_200_response_serviceInfo::getScrubIpType()
{
	return scrub_ip_type;
}

void
GetScrubIpDetails_200_response_serviceInfo::setScrubIpType(std::string scrub_ip_type)
{
	this->scrub_ip_type = scrub_ip_type;
}

std::string
GetScrubIpDetails_200_response_serviceInfo::getScrubIpCustid()
{
	return scrub_ip_custid;
}

void
GetScrubIpDetails_200_response_serviceInfo::setScrubIpCustid(std::string scrub_ip_custid)
{
	this->scrub_ip_custid = scrub_ip_custid;
}

std::string
GetScrubIpDetails_200_response_serviceInfo::getScrubIpOrderDate()
{
	return scrub_ip_order_date;
}

void
GetScrubIpDetails_200_response_serviceInfo::setScrubIpOrderDate(std::string scrub_ip_order_date)
{
	this->scrub_ip_order_date = scrub_ip_order_date;
}

std::string
GetScrubIpDetails_200_response_serviceInfo::getScrubIpIp()
{
	return scrub_ip_ip;
}

void
GetScrubIpDetails_200_response_serviceInfo::setScrubIpIp(std::string scrub_ip_ip)
{
	this->scrub_ip_ip = scrub_ip_ip;
}

std::string
GetScrubIpDetails_200_response_serviceInfo::getScrubIpServiceId()
{
	return scrub_ip_service_id;
}

void
GetScrubIpDetails_200_response_serviceInfo::setScrubIpServiceId(std::string scrub_ip_service_id)
{
	this->scrub_ip_service_id = scrub_ip_service_id;
}

std::string
GetScrubIpDetails_200_response_serviceInfo::getScrubIpServiceModule()
{
	return scrub_ip_service_module;
}

void
GetScrubIpDetails_200_response_serviceInfo::setScrubIpServiceModule(std::string scrub_ip_service_module)
{
	this->scrub_ip_service_module = scrub_ip_service_module;
}

std::string
GetScrubIpDetails_200_response_serviceInfo::getScrubIpStatus()
{
	return scrub_ip_status;
}

void
GetScrubIpDetails_200_response_serviceInfo::setScrubIpStatus(std::string scrub_ip_status)
{
	this->scrub_ip_status = scrub_ip_status;
}

std::string
GetScrubIpDetails_200_response_serviceInfo::getScrubIpInvoice()
{
	return scrub_ip_invoice;
}

void
GetScrubIpDetails_200_response_serviceInfo::setScrubIpInvoice(std::string scrub_ip_invoice)
{
	this->scrub_ip_invoice = scrub_ip_invoice;
}

std::string
GetScrubIpDetails_200_response_serviceInfo::getScrubIpCurrency()
{
	return scrub_ip_currency;
}

void
GetScrubIpDetails_200_response_serviceInfo::setScrubIpCurrency(std::string scrub_ip_currency)
{
	this->scrub_ip_currency = scrub_ip_currency;
}

std::string
GetScrubIpDetails_200_response_serviceInfo::getScrubIpCoupon()
{
	return scrub_ip_coupon;
}

void
GetScrubIpDetails_200_response_serviceInfo::setScrubIpCoupon(std::string scrub_ip_coupon)
{
	this->scrub_ip_coupon = scrub_ip_coupon;
}

std::string
GetScrubIpDetails_200_response_serviceInfo::getScrubIpComment()
{
	return scrub_ip_comment;
}

void
GetScrubIpDetails_200_response_serviceInfo::setScrubIpComment(std::string scrub_ip_comment)
{
	this->scrub_ip_comment = scrub_ip_comment;
}



