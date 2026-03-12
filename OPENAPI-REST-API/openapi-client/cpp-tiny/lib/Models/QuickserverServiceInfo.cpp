

#include "QuickserverServiceInfo.h"

using namespace Tiny;

QuickserverServiceInfo::QuickserverServiceInfo()
{
	qs_id = std::string();
	qs_custid = std::string();
	qs_server = std::string();
	qs_ip = std::string();
	qs_ipv6 = null;
	qs_vzid = std::string();
	qs_currency = std::string();
	qs_type = std::string();
	qs_order_date = std::string();
	qs_status = std::string();
	qs_invoice = std::string();
	qs_coupon = std::string();
	qs_extra = std::string();
	qs_hostname = std::string();
	qs_server_status = std::string();
	qs_comment = std::string();
	qs_slices = std::string();
	qs_vnc = std::string();
	qs_vnc_port = null;
	qs_rootpass = std::string();
	qs_mac = std::string();
	qs_os = std::string();
	qs_version = std::string();
	qs_location = std::string();
	qs_platform = null;
}

QuickserverServiceInfo::QuickserverServiceInfo(std::string jsonString)
{
	this->fromJson(jsonString);
}

QuickserverServiceInfo::~QuickserverServiceInfo()
{

}

void
QuickserverServiceInfo::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *qs_idKey = "qs_id";

    if(object.has_key(qs_idKey))
    {
        bourne::json value = object[qs_idKey];



        jsonToValue(&qs_id, value, "std::string");


    }

    const char *qs_custidKey = "qs_custid";

    if(object.has_key(qs_custidKey))
    {
        bourne::json value = object[qs_custidKey];



        jsonToValue(&qs_custid, value, "std::string");


    }

    const char *qs_serverKey = "qs_server";

    if(object.has_key(qs_serverKey))
    {
        bourne::json value = object[qs_serverKey];



        jsonToValue(&qs_server, value, "std::string");


    }

    const char *qs_ipKey = "qs_ip";

    if(object.has_key(qs_ipKey))
    {
        bourne::json value = object[qs_ipKey];



        jsonToValue(&qs_ip, value, "std::string");


    }

    const char *qs_ipv6Key = "qs_ipv6";

    if(object.has_key(qs_ipv6Key))
    {
        bourne::json value = object[qs_ipv6Key];




        AnyType* obj = &qs_ipv6;
		obj->fromJson(value.dump());

    }

    const char *qs_vzidKey = "qs_vzid";

    if(object.has_key(qs_vzidKey))
    {
        bourne::json value = object[qs_vzidKey];



        jsonToValue(&qs_vzid, value, "std::string");


    }

    const char *qs_currencyKey = "qs_currency";

    if(object.has_key(qs_currencyKey))
    {
        bourne::json value = object[qs_currencyKey];



        jsonToValue(&qs_currency, value, "std::string");


    }

    const char *qs_typeKey = "qs_type";

    if(object.has_key(qs_typeKey))
    {
        bourne::json value = object[qs_typeKey];



        jsonToValue(&qs_type, value, "std::string");


    }

    const char *qs_order_dateKey = "qs_order_date";

    if(object.has_key(qs_order_dateKey))
    {
        bourne::json value = object[qs_order_dateKey];



        jsonToValue(&qs_order_date, value, "std::string");


    }

    const char *qs_statusKey = "qs_status";

    if(object.has_key(qs_statusKey))
    {
        bourne::json value = object[qs_statusKey];



        jsonToValue(&qs_status, value, "std::string");


    }

    const char *qs_invoiceKey = "qs_invoice";

    if(object.has_key(qs_invoiceKey))
    {
        bourne::json value = object[qs_invoiceKey];



        jsonToValue(&qs_invoice, value, "std::string");


    }

    const char *qs_couponKey = "qs_coupon";

    if(object.has_key(qs_couponKey))
    {
        bourne::json value = object[qs_couponKey];



        jsonToValue(&qs_coupon, value, "std::string");


    }

    const char *qs_extraKey = "qs_extra";

    if(object.has_key(qs_extraKey))
    {
        bourne::json value = object[qs_extraKey];



        jsonToValue(&qs_extra, value, "std::string");


    }

    const char *qs_hostnameKey = "qs_hostname";

    if(object.has_key(qs_hostnameKey))
    {
        bourne::json value = object[qs_hostnameKey];



        jsonToValue(&qs_hostname, value, "std::string");


    }

    const char *qs_server_statusKey = "qs_server_status";

    if(object.has_key(qs_server_statusKey))
    {
        bourne::json value = object[qs_server_statusKey];



        jsonToValue(&qs_server_status, value, "std::string");


    }

    const char *qs_commentKey = "qs_comment";

    if(object.has_key(qs_commentKey))
    {
        bourne::json value = object[qs_commentKey];



        jsonToValue(&qs_comment, value, "std::string");


    }

    const char *qs_slicesKey = "qs_slices";

    if(object.has_key(qs_slicesKey))
    {
        bourne::json value = object[qs_slicesKey];



        jsonToValue(&qs_slices, value, "std::string");


    }

    const char *qs_vncKey = "qs_vnc";

    if(object.has_key(qs_vncKey))
    {
        bourne::json value = object[qs_vncKey];



        jsonToValue(&qs_vnc, value, "std::string");


    }

    const char *qs_vnc_portKey = "qs_vnc_port";

    if(object.has_key(qs_vnc_portKey))
    {
        bourne::json value = object[qs_vnc_portKey];




        AnyType* obj = &qs_vnc_port;
		obj->fromJson(value.dump());

    }

    const char *qs_rootpassKey = "qs_rootpass";

    if(object.has_key(qs_rootpassKey))
    {
        bourne::json value = object[qs_rootpassKey];



        jsonToValue(&qs_rootpass, value, "std::string");


    }

    const char *qs_macKey = "qs_mac";

    if(object.has_key(qs_macKey))
    {
        bourne::json value = object[qs_macKey];



        jsonToValue(&qs_mac, value, "std::string");


    }

    const char *qs_osKey = "qs_os";

    if(object.has_key(qs_osKey))
    {
        bourne::json value = object[qs_osKey];



        jsonToValue(&qs_os, value, "std::string");


    }

    const char *qs_versionKey = "qs_version";

    if(object.has_key(qs_versionKey))
    {
        bourne::json value = object[qs_versionKey];



        jsonToValue(&qs_version, value, "std::string");


    }

    const char *qs_locationKey = "qs_location";

    if(object.has_key(qs_locationKey))
    {
        bourne::json value = object[qs_locationKey];



        jsonToValue(&qs_location, value, "std::string");


    }

    const char *qs_platformKey = "qs_platform";

    if(object.has_key(qs_platformKey))
    {
        bourne::json value = object[qs_platformKey];




        AnyType* obj = &qs_platform;
		obj->fromJson(value.dump());

    }


}

bourne::json
QuickserverServiceInfo::toJson()
{
    bourne::json object = bourne::json::object();





    object["qs_id"] = getQsId();






    object["qs_custid"] = getQsCustid();






    object["qs_server"] = getQsServer();






    object["qs_ip"] = getQsIp();







	object["qs_ipv6"] = getQsIpv6().toJson();





    object["qs_vzid"] = getQsVzid();






    object["qs_currency"] = getQsCurrency();






    object["qs_type"] = getQsType();






    object["qs_order_date"] = getQsOrderDate();






    object["qs_status"] = getQsStatus();






    object["qs_invoice"] = getQsInvoice();






    object["qs_coupon"] = getQsCoupon();






    object["qs_extra"] = getQsExtra();






    object["qs_hostname"] = getQsHostname();






    object["qs_server_status"] = getQsServerStatus();






    object["qs_comment"] = getQsComment();






    object["qs_slices"] = getQsSlices();






    object["qs_vnc"] = getQsVnc();







	object["qs_vnc_port"] = getQsVncPort().toJson();





    object["qs_rootpass"] = getQsRootpass();






    object["qs_mac"] = getQsMac();






    object["qs_os"] = getQsOs();






    object["qs_version"] = getQsVersion();






    object["qs_location"] = getQsLocation();







	object["qs_platform"] = getQsPlatform().toJson();


    return object;

}

std::string
QuickserverServiceInfo::getQsId()
{
	return qs_id;
}

void
QuickserverServiceInfo::setQsId(std::string qs_id)
{
	this->qs_id = qs_id;
}

std::string
QuickserverServiceInfo::getQsCustid()
{
	return qs_custid;
}

void
QuickserverServiceInfo::setQsCustid(std::string qs_custid)
{
	this->qs_custid = qs_custid;
}

std::string
QuickserverServiceInfo::getQsServer()
{
	return qs_server;
}

void
QuickserverServiceInfo::setQsServer(std::string qs_server)
{
	this->qs_server = qs_server;
}

std::string
QuickserverServiceInfo::getQsIp()
{
	return qs_ip;
}

void
QuickserverServiceInfo::setQsIp(std::string qs_ip)
{
	this->qs_ip = qs_ip;
}

AnyType
QuickserverServiceInfo::getQsIpv6()
{
	return qs_ipv6;
}

void
QuickserverServiceInfo::setQsIpv6(AnyType qs_ipv6)
{
	this->qs_ipv6 = qs_ipv6;
}

std::string
QuickserverServiceInfo::getQsVzid()
{
	return qs_vzid;
}

void
QuickserverServiceInfo::setQsVzid(std::string qs_vzid)
{
	this->qs_vzid = qs_vzid;
}

std::string
QuickserverServiceInfo::getQsCurrency()
{
	return qs_currency;
}

void
QuickserverServiceInfo::setQsCurrency(std::string qs_currency)
{
	this->qs_currency = qs_currency;
}

std::string
QuickserverServiceInfo::getQsType()
{
	return qs_type;
}

void
QuickserverServiceInfo::setQsType(std::string qs_type)
{
	this->qs_type = qs_type;
}

std::string
QuickserverServiceInfo::getQsOrderDate()
{
	return qs_order_date;
}

void
QuickserverServiceInfo::setQsOrderDate(std::string qs_order_date)
{
	this->qs_order_date = qs_order_date;
}

std::string
QuickserverServiceInfo::getQsStatus()
{
	return qs_status;
}

void
QuickserverServiceInfo::setQsStatus(std::string qs_status)
{
	this->qs_status = qs_status;
}

std::string
QuickserverServiceInfo::getQsInvoice()
{
	return qs_invoice;
}

void
QuickserverServiceInfo::setQsInvoice(std::string qs_invoice)
{
	this->qs_invoice = qs_invoice;
}

std::string
QuickserverServiceInfo::getQsCoupon()
{
	return qs_coupon;
}

void
QuickserverServiceInfo::setQsCoupon(std::string qs_coupon)
{
	this->qs_coupon = qs_coupon;
}

std::string
QuickserverServiceInfo::getQsExtra()
{
	return qs_extra;
}

void
QuickserverServiceInfo::setQsExtra(std::string qs_extra)
{
	this->qs_extra = qs_extra;
}

std::string
QuickserverServiceInfo::getQsHostname()
{
	return qs_hostname;
}

void
QuickserverServiceInfo::setQsHostname(std::string qs_hostname)
{
	this->qs_hostname = qs_hostname;
}

std::string
QuickserverServiceInfo::getQsServerStatus()
{
	return qs_server_status;
}

void
QuickserverServiceInfo::setQsServerStatus(std::string qs_server_status)
{
	this->qs_server_status = qs_server_status;
}

std::string
QuickserverServiceInfo::getQsComment()
{
	return qs_comment;
}

void
QuickserverServiceInfo::setQsComment(std::string qs_comment)
{
	this->qs_comment = qs_comment;
}

std::string
QuickserverServiceInfo::getQsSlices()
{
	return qs_slices;
}

void
QuickserverServiceInfo::setQsSlices(std::string qs_slices)
{
	this->qs_slices = qs_slices;
}

std::string
QuickserverServiceInfo::getQsVnc()
{
	return qs_vnc;
}

void
QuickserverServiceInfo::setQsVnc(std::string qs_vnc)
{
	this->qs_vnc = qs_vnc;
}

AnyType
QuickserverServiceInfo::getQsVncPort()
{
	return qs_vnc_port;
}

void
QuickserverServiceInfo::setQsVncPort(AnyType qs_vnc_port)
{
	this->qs_vnc_port = qs_vnc_port;
}

std::string
QuickserverServiceInfo::getQsRootpass()
{
	return qs_rootpass;
}

void
QuickserverServiceInfo::setQsRootpass(std::string qs_rootpass)
{
	this->qs_rootpass = qs_rootpass;
}

std::string
QuickserverServiceInfo::getQsMac()
{
	return qs_mac;
}

void
QuickserverServiceInfo::setQsMac(std::string qs_mac)
{
	this->qs_mac = qs_mac;
}

std::string
QuickserverServiceInfo::getQsOs()
{
	return qs_os;
}

void
QuickserverServiceInfo::setQsOs(std::string qs_os)
{
	this->qs_os = qs_os;
}

std::string
QuickserverServiceInfo::getQsVersion()
{
	return qs_version;
}

void
QuickserverServiceInfo::setQsVersion(std::string qs_version)
{
	this->qs_version = qs_version;
}

std::string
QuickserverServiceInfo::getQsLocation()
{
	return qs_location;
}

void
QuickserverServiceInfo::setQsLocation(std::string qs_location)
{
	this->qs_location = qs_location;
}

AnyType
QuickserverServiceInfo::getQsPlatform()
{
	return qs_platform;
}

void
QuickserverServiceInfo::setQsPlatform(AnyType qs_platform)
{
	this->qs_platform = qs_platform;
}



