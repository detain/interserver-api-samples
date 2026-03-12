

#include "BackupServiceInfo.h"

using namespace Tiny;

BackupServiceInfo::BackupServiceInfo()
{
	backup_id = std::string();
	backup_server = std::string();
	backup_username = std::string();
	backup_type = std::string();
	backup_currency = std::string();
	backup_order_date = std::string();
	backup_custid = std::string();
	backup_quota = std::string();
	backup_ip = std::string();
	backup_status = std::string();
	backup_invoice = std::string();
	backup_coupon = std::string();
	backup_extra = std::string();
	backup_server_status = std::string();
	backup_comment = std::string();
}

BackupServiceInfo::BackupServiceInfo(std::string jsonString)
{
	this->fromJson(jsonString);
}

BackupServiceInfo::~BackupServiceInfo()
{

}

void
BackupServiceInfo::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *backup_idKey = "backup_id";

    if(object.has_key(backup_idKey))
    {
        bourne::json value = object[backup_idKey];



        jsonToValue(&backup_id, value, "std::string");


    }

    const char *backup_serverKey = "backup_server";

    if(object.has_key(backup_serverKey))
    {
        bourne::json value = object[backup_serverKey];



        jsonToValue(&backup_server, value, "std::string");


    }

    const char *backup_usernameKey = "backup_username";

    if(object.has_key(backup_usernameKey))
    {
        bourne::json value = object[backup_usernameKey];



        jsonToValue(&backup_username, value, "std::string");


    }

    const char *backup_typeKey = "backup_type";

    if(object.has_key(backup_typeKey))
    {
        bourne::json value = object[backup_typeKey];



        jsonToValue(&backup_type, value, "std::string");


    }

    const char *backup_currencyKey = "backup_currency";

    if(object.has_key(backup_currencyKey))
    {
        bourne::json value = object[backup_currencyKey];



        jsonToValue(&backup_currency, value, "std::string");


    }

    const char *backup_order_dateKey = "backup_order_date";

    if(object.has_key(backup_order_dateKey))
    {
        bourne::json value = object[backup_order_dateKey];



        jsonToValue(&backup_order_date, value, "std::string");


    }

    const char *backup_custidKey = "backup_custid";

    if(object.has_key(backup_custidKey))
    {
        bourne::json value = object[backup_custidKey];



        jsonToValue(&backup_custid, value, "std::string");


    }

    const char *backup_quotaKey = "backup_quota";

    if(object.has_key(backup_quotaKey))
    {
        bourne::json value = object[backup_quotaKey];



        jsonToValue(&backup_quota, value, "std::string");


    }

    const char *backup_ipKey = "backup_ip";

    if(object.has_key(backup_ipKey))
    {
        bourne::json value = object[backup_ipKey];



        jsonToValue(&backup_ip, value, "std::string");


    }

    const char *backup_statusKey = "backup_status";

    if(object.has_key(backup_statusKey))
    {
        bourne::json value = object[backup_statusKey];



        jsonToValue(&backup_status, value, "std::string");


    }

    const char *backup_invoiceKey = "backup_invoice";

    if(object.has_key(backup_invoiceKey))
    {
        bourne::json value = object[backup_invoiceKey];



        jsonToValue(&backup_invoice, value, "std::string");


    }

    const char *backup_couponKey = "backup_coupon";

    if(object.has_key(backup_couponKey))
    {
        bourne::json value = object[backup_couponKey];



        jsonToValue(&backup_coupon, value, "std::string");


    }

    const char *backup_extraKey = "backup_extra";

    if(object.has_key(backup_extraKey))
    {
        bourne::json value = object[backup_extraKey];



        jsonToValue(&backup_extra, value, "std::string");


    }

    const char *backup_server_statusKey = "backup_server_status";

    if(object.has_key(backup_server_statusKey))
    {
        bourne::json value = object[backup_server_statusKey];



        jsonToValue(&backup_server_status, value, "std::string");


    }

    const char *backup_commentKey = "backup_comment";

    if(object.has_key(backup_commentKey))
    {
        bourne::json value = object[backup_commentKey];



        jsonToValue(&backup_comment, value, "std::string");


    }


}

bourne::json
BackupServiceInfo::toJson()
{
    bourne::json object = bourne::json::object();





    object["backup_id"] = getBackupId();






    object["backup_server"] = getBackupServer();






    object["backup_username"] = getBackupUsername();






    object["backup_type"] = getBackupType();






    object["backup_currency"] = getBackupCurrency();






    object["backup_order_date"] = getBackupOrderDate();






    object["backup_custid"] = getBackupCustid();






    object["backup_quota"] = getBackupQuota();






    object["backup_ip"] = getBackupIp();






    object["backup_status"] = getBackupStatus();






    object["backup_invoice"] = getBackupInvoice();






    object["backup_coupon"] = getBackupCoupon();






    object["backup_extra"] = getBackupExtra();






    object["backup_server_status"] = getBackupServerStatus();






    object["backup_comment"] = getBackupComment();



    return object;

}

std::string
BackupServiceInfo::getBackupId()
{
	return backup_id;
}

void
BackupServiceInfo::setBackupId(std::string backup_id)
{
	this->backup_id = backup_id;
}

std::string
BackupServiceInfo::getBackupServer()
{
	return backup_server;
}

void
BackupServiceInfo::setBackupServer(std::string backup_server)
{
	this->backup_server = backup_server;
}

std::string
BackupServiceInfo::getBackupUsername()
{
	return backup_username;
}

void
BackupServiceInfo::setBackupUsername(std::string backup_username)
{
	this->backup_username = backup_username;
}

std::string
BackupServiceInfo::getBackupType()
{
	return backup_type;
}

void
BackupServiceInfo::setBackupType(std::string backup_type)
{
	this->backup_type = backup_type;
}

std::string
BackupServiceInfo::getBackupCurrency()
{
	return backup_currency;
}

void
BackupServiceInfo::setBackupCurrency(std::string backup_currency)
{
	this->backup_currency = backup_currency;
}

std::string
BackupServiceInfo::getBackupOrderDate()
{
	return backup_order_date;
}

void
BackupServiceInfo::setBackupOrderDate(std::string backup_order_date)
{
	this->backup_order_date = backup_order_date;
}

std::string
BackupServiceInfo::getBackupCustid()
{
	return backup_custid;
}

void
BackupServiceInfo::setBackupCustid(std::string backup_custid)
{
	this->backup_custid = backup_custid;
}

std::string
BackupServiceInfo::getBackupQuota()
{
	return backup_quota;
}

void
BackupServiceInfo::setBackupQuota(std::string backup_quota)
{
	this->backup_quota = backup_quota;
}

std::string
BackupServiceInfo::getBackupIp()
{
	return backup_ip;
}

void
BackupServiceInfo::setBackupIp(std::string backup_ip)
{
	this->backup_ip = backup_ip;
}

std::string
BackupServiceInfo::getBackupStatus()
{
	return backup_status;
}

void
BackupServiceInfo::setBackupStatus(std::string backup_status)
{
	this->backup_status = backup_status;
}

std::string
BackupServiceInfo::getBackupInvoice()
{
	return backup_invoice;
}

void
BackupServiceInfo::setBackupInvoice(std::string backup_invoice)
{
	this->backup_invoice = backup_invoice;
}

std::string
BackupServiceInfo::getBackupCoupon()
{
	return backup_coupon;
}

void
BackupServiceInfo::setBackupCoupon(std::string backup_coupon)
{
	this->backup_coupon = backup_coupon;
}

std::string
BackupServiceInfo::getBackupExtra()
{
	return backup_extra;
}

void
BackupServiceInfo::setBackupExtra(std::string backup_extra)
{
	this->backup_extra = backup_extra;
}

std::string
BackupServiceInfo::getBackupServerStatus()
{
	return backup_server_status;
}

void
BackupServiceInfo::setBackupServerStatus(std::string backup_server_status)
{
	this->backup_server_status = backup_server_status;
}

std::string
BackupServiceInfo::getBackupComment()
{
	return backup_comment;
}

void
BackupServiceInfo::setBackupComment(std::string backup_comment)
{
	this->backup_comment = backup_comment;
}



