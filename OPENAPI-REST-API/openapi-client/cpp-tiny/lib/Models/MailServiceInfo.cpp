

#include "MailServiceInfo.h"

using namespace Tiny;

MailServiceInfo::MailServiceInfo()
{
	mail_id = std::string();
	mail_type = std::string();
	mail_currency = std::string();
	mail_order_date = std::string();
	mail_custid = std::string();
	mail_quota = std::string();
	mail_status = std::string();
	mail_invoice = std::string();
	mail_username = std::string();
	mail_ip = std::string();
	mail_coupon = std::string();
	mail_extra = std::string();
	mail_server_status = std::string();
	mail_comment = std::string();
}

MailServiceInfo::MailServiceInfo(std::string jsonString)
{
	this->fromJson(jsonString);
}

MailServiceInfo::~MailServiceInfo()
{

}

void
MailServiceInfo::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *mail_idKey = "mail_id";

    if(object.has_key(mail_idKey))
    {
        bourne::json value = object[mail_idKey];



        jsonToValue(&mail_id, value, "std::string");


    }

    const char *mail_typeKey = "mail_type";

    if(object.has_key(mail_typeKey))
    {
        bourne::json value = object[mail_typeKey];



        jsonToValue(&mail_type, value, "std::string");


    }

    const char *mail_currencyKey = "mail_currency";

    if(object.has_key(mail_currencyKey))
    {
        bourne::json value = object[mail_currencyKey];



        jsonToValue(&mail_currency, value, "std::string");


    }

    const char *mail_order_dateKey = "mail_order_date";

    if(object.has_key(mail_order_dateKey))
    {
        bourne::json value = object[mail_order_dateKey];



        jsonToValue(&mail_order_date, value, "std::string");


    }

    const char *mail_custidKey = "mail_custid";

    if(object.has_key(mail_custidKey))
    {
        bourne::json value = object[mail_custidKey];



        jsonToValue(&mail_custid, value, "std::string");


    }

    const char *mail_quotaKey = "mail_quota";

    if(object.has_key(mail_quotaKey))
    {
        bourne::json value = object[mail_quotaKey];



        jsonToValue(&mail_quota, value, "std::string");


    }

    const char *mail_statusKey = "mail_status";

    if(object.has_key(mail_statusKey))
    {
        bourne::json value = object[mail_statusKey];



        jsonToValue(&mail_status, value, "std::string");


    }

    const char *mail_invoiceKey = "mail_invoice";

    if(object.has_key(mail_invoiceKey))
    {
        bourne::json value = object[mail_invoiceKey];



        jsonToValue(&mail_invoice, value, "std::string");


    }

    const char *mail_usernameKey = "mail_username";

    if(object.has_key(mail_usernameKey))
    {
        bourne::json value = object[mail_usernameKey];



        jsonToValue(&mail_username, value, "std::string");


    }

    const char *mail_ipKey = "mail_ip";

    if(object.has_key(mail_ipKey))
    {
        bourne::json value = object[mail_ipKey];



        jsonToValue(&mail_ip, value, "std::string");


    }

    const char *mail_couponKey = "mail_coupon";

    if(object.has_key(mail_couponKey))
    {
        bourne::json value = object[mail_couponKey];



        jsonToValue(&mail_coupon, value, "std::string");


    }

    const char *mail_extraKey = "mail_extra";

    if(object.has_key(mail_extraKey))
    {
        bourne::json value = object[mail_extraKey];



        jsonToValue(&mail_extra, value, "std::string");


    }

    const char *mail_server_statusKey = "mail_server_status";

    if(object.has_key(mail_server_statusKey))
    {
        bourne::json value = object[mail_server_statusKey];



        jsonToValue(&mail_server_status, value, "std::string");


    }

    const char *mail_commentKey = "mail_comment";

    if(object.has_key(mail_commentKey))
    {
        bourne::json value = object[mail_commentKey];



        jsonToValue(&mail_comment, value, "std::string");


    }


}

bourne::json
MailServiceInfo::toJson()
{
    bourne::json object = bourne::json::object();





    object["mail_id"] = getMailId();






    object["mail_type"] = getMailType();






    object["mail_currency"] = getMailCurrency();






    object["mail_order_date"] = getMailOrderDate();






    object["mail_custid"] = getMailCustid();






    object["mail_quota"] = getMailQuota();






    object["mail_status"] = getMailStatus();






    object["mail_invoice"] = getMailInvoice();






    object["mail_username"] = getMailUsername();






    object["mail_ip"] = getMailIp();






    object["mail_coupon"] = getMailCoupon();






    object["mail_extra"] = getMailExtra();






    object["mail_server_status"] = getMailServerStatus();






    object["mail_comment"] = getMailComment();



    return object;

}

std::string
MailServiceInfo::getMailId()
{
	return mail_id;
}

void
MailServiceInfo::setMailId(std::string mail_id)
{
	this->mail_id = mail_id;
}

std::string
MailServiceInfo::getMailType()
{
	return mail_type;
}

void
MailServiceInfo::setMailType(std::string mail_type)
{
	this->mail_type = mail_type;
}

std::string
MailServiceInfo::getMailCurrency()
{
	return mail_currency;
}

void
MailServiceInfo::setMailCurrency(std::string mail_currency)
{
	this->mail_currency = mail_currency;
}

std::string
MailServiceInfo::getMailOrderDate()
{
	return mail_order_date;
}

void
MailServiceInfo::setMailOrderDate(std::string mail_order_date)
{
	this->mail_order_date = mail_order_date;
}

std::string
MailServiceInfo::getMailCustid()
{
	return mail_custid;
}

void
MailServiceInfo::setMailCustid(std::string mail_custid)
{
	this->mail_custid = mail_custid;
}

std::string
MailServiceInfo::getMailQuota()
{
	return mail_quota;
}

void
MailServiceInfo::setMailQuota(std::string mail_quota)
{
	this->mail_quota = mail_quota;
}

std::string
MailServiceInfo::getMailStatus()
{
	return mail_status;
}

void
MailServiceInfo::setMailStatus(std::string mail_status)
{
	this->mail_status = mail_status;
}

std::string
MailServiceInfo::getMailInvoice()
{
	return mail_invoice;
}

void
MailServiceInfo::setMailInvoice(std::string mail_invoice)
{
	this->mail_invoice = mail_invoice;
}

std::string
MailServiceInfo::getMailUsername()
{
	return mail_username;
}

void
MailServiceInfo::setMailUsername(std::string mail_username)
{
	this->mail_username = mail_username;
}

std::string
MailServiceInfo::getMailIp()
{
	return mail_ip;
}

void
MailServiceInfo::setMailIp(std::string mail_ip)
{
	this->mail_ip = mail_ip;
}

std::string
MailServiceInfo::getMailCoupon()
{
	return mail_coupon;
}

void
MailServiceInfo::setMailCoupon(std::string mail_coupon)
{
	this->mail_coupon = mail_coupon;
}

std::string
MailServiceInfo::getMailExtra()
{
	return mail_extra;
}

void
MailServiceInfo::setMailExtra(std::string mail_extra)
{
	this->mail_extra = mail_extra;
}

std::string
MailServiceInfo::getMailServerStatus()
{
	return mail_server_status;
}

void
MailServiceInfo::setMailServerStatus(std::string mail_server_status)
{
	this->mail_server_status = mail_server_status;
}

std::string
MailServiceInfo::getMailComment()
{
	return mail_comment;
}

void
MailServiceInfo::setMailComment(std::string mail_comment)
{
	this->mail_comment = mail_comment;
}



