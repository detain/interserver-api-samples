

#include "VpsServiceInfo.h"

using namespace Tiny;

VpsServiceInfo::VpsServiceInfo()
{
	vps_id = std::string();
	vps_custid = std::string();
	vps_server = std::string();
	vps_ip = std::string();
	vps_ipv6 = null;
	vps_vzid = std::string();
	vps_currency = std::string();
	vps_type = std::string();
	vps_order_date = std::string();
	vps_status = std::string();
	vps_invoice = std::string();
	vps_coupon = std::string();
	vps_extra = std::string();
	vps_hostname = std::string();
	vps_server_status = std::string();
	vps_comment = std::string();
	vps_slices = std::string();
	vps_vnc = std::string();
	vps_vnc_port = std::string();
	vps_rootpass = std::string();
	vps_mac = std::string();
	vps_os = std::string();
	vps_version = std::string();
	vps_location = std::string();
	vps_platform = std::string();
	vps_diskused = std::string();
	vps_diskmax = std::string();
}

VpsServiceInfo::VpsServiceInfo(std::string jsonString)
{
	this->fromJson(jsonString);
}

VpsServiceInfo::~VpsServiceInfo()
{

}

void
VpsServiceInfo::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *vps_idKey = "vps_id";

    if(object.has_key(vps_idKey))
    {
        bourne::json value = object[vps_idKey];



        jsonToValue(&vps_id, value, "std::string");


    }

    const char *vps_custidKey = "vps_custid";

    if(object.has_key(vps_custidKey))
    {
        bourne::json value = object[vps_custidKey];



        jsonToValue(&vps_custid, value, "std::string");


    }

    const char *vps_serverKey = "vps_server";

    if(object.has_key(vps_serverKey))
    {
        bourne::json value = object[vps_serverKey];



        jsonToValue(&vps_server, value, "std::string");


    }

    const char *vps_ipKey = "vps_ip";

    if(object.has_key(vps_ipKey))
    {
        bourne::json value = object[vps_ipKey];



        jsonToValue(&vps_ip, value, "std::string");


    }

    const char *vps_ipv6Key = "vps_ipv6";

    if(object.has_key(vps_ipv6Key))
    {
        bourne::json value = object[vps_ipv6Key];




        AnyType* obj = &vps_ipv6;
		obj->fromJson(value.dump());

    }

    const char *vps_vzidKey = "vps_vzid";

    if(object.has_key(vps_vzidKey))
    {
        bourne::json value = object[vps_vzidKey];



        jsonToValue(&vps_vzid, value, "std::string");


    }

    const char *vps_currencyKey = "vps_currency";

    if(object.has_key(vps_currencyKey))
    {
        bourne::json value = object[vps_currencyKey];



        jsonToValue(&vps_currency, value, "std::string");


    }

    const char *vps_typeKey = "vps_type";

    if(object.has_key(vps_typeKey))
    {
        bourne::json value = object[vps_typeKey];



        jsonToValue(&vps_type, value, "std::string");


    }

    const char *vps_order_dateKey = "vps_order_date";

    if(object.has_key(vps_order_dateKey))
    {
        bourne::json value = object[vps_order_dateKey];



        jsonToValue(&vps_order_date, value, "std::string");


    }

    const char *vps_statusKey = "vps_status";

    if(object.has_key(vps_statusKey))
    {
        bourne::json value = object[vps_statusKey];



        jsonToValue(&vps_status, value, "std::string");


    }

    const char *vps_invoiceKey = "vps_invoice";

    if(object.has_key(vps_invoiceKey))
    {
        bourne::json value = object[vps_invoiceKey];



        jsonToValue(&vps_invoice, value, "std::string");


    }

    const char *vps_couponKey = "vps_coupon";

    if(object.has_key(vps_couponKey))
    {
        bourne::json value = object[vps_couponKey];



        jsonToValue(&vps_coupon, value, "std::string");


    }

    const char *vps_extraKey = "vps_extra";

    if(object.has_key(vps_extraKey))
    {
        bourne::json value = object[vps_extraKey];



        jsonToValue(&vps_extra, value, "std::string");


    }

    const char *vps_hostnameKey = "vps_hostname";

    if(object.has_key(vps_hostnameKey))
    {
        bourne::json value = object[vps_hostnameKey];



        jsonToValue(&vps_hostname, value, "std::string");


    }

    const char *vps_server_statusKey = "vps_server_status";

    if(object.has_key(vps_server_statusKey))
    {
        bourne::json value = object[vps_server_statusKey];



        jsonToValue(&vps_server_status, value, "std::string");


    }

    const char *vps_commentKey = "vps_comment";

    if(object.has_key(vps_commentKey))
    {
        bourne::json value = object[vps_commentKey];



        jsonToValue(&vps_comment, value, "std::string");


    }

    const char *vps_slicesKey = "vps_slices";

    if(object.has_key(vps_slicesKey))
    {
        bourne::json value = object[vps_slicesKey];



        jsonToValue(&vps_slices, value, "std::string");


    }

    const char *vps_vncKey = "vps_vnc";

    if(object.has_key(vps_vncKey))
    {
        bourne::json value = object[vps_vncKey];



        jsonToValue(&vps_vnc, value, "std::string");


    }

    const char *vps_vnc_portKey = "vps_vnc_port";

    if(object.has_key(vps_vnc_portKey))
    {
        bourne::json value = object[vps_vnc_portKey];



        jsonToValue(&vps_vnc_port, value, "std::string");


    }

    const char *vps_rootpassKey = "vps_rootpass";

    if(object.has_key(vps_rootpassKey))
    {
        bourne::json value = object[vps_rootpassKey];



        jsonToValue(&vps_rootpass, value, "std::string");


    }

    const char *vps_macKey = "vps_mac";

    if(object.has_key(vps_macKey))
    {
        bourne::json value = object[vps_macKey];



        jsonToValue(&vps_mac, value, "std::string");


    }

    const char *vps_osKey = "vps_os";

    if(object.has_key(vps_osKey))
    {
        bourne::json value = object[vps_osKey];



        jsonToValue(&vps_os, value, "std::string");


    }

    const char *vps_versionKey = "vps_version";

    if(object.has_key(vps_versionKey))
    {
        bourne::json value = object[vps_versionKey];



        jsonToValue(&vps_version, value, "std::string");


    }

    const char *vps_locationKey = "vps_location";

    if(object.has_key(vps_locationKey))
    {
        bourne::json value = object[vps_locationKey];



        jsonToValue(&vps_location, value, "std::string");


    }

    const char *vps_platformKey = "vps_platform";

    if(object.has_key(vps_platformKey))
    {
        bourne::json value = object[vps_platformKey];



        jsonToValue(&vps_platform, value, "std::string");


    }

    const char *vps_diskusedKey = "vps_diskused";

    if(object.has_key(vps_diskusedKey))
    {
        bourne::json value = object[vps_diskusedKey];



        jsonToValue(&vps_diskused, value, "std::string");


    }

    const char *vps_diskmaxKey = "vps_diskmax";

    if(object.has_key(vps_diskmaxKey))
    {
        bourne::json value = object[vps_diskmaxKey];



        jsonToValue(&vps_diskmax, value, "std::string");


    }


}

bourne::json
VpsServiceInfo::toJson()
{
    bourne::json object = bourne::json::object();





    object["vps_id"] = getVpsId();






    object["vps_custid"] = getVpsCustid();






    object["vps_server"] = getVpsServer();






    object["vps_ip"] = getVpsIp();







	object["vps_ipv6"] = getVpsIpv6().toJson();





    object["vps_vzid"] = getVpsVzid();






    object["vps_currency"] = getVpsCurrency();






    object["vps_type"] = getVpsType();






    object["vps_order_date"] = getVpsOrderDate();






    object["vps_status"] = getVpsStatus();






    object["vps_invoice"] = getVpsInvoice();






    object["vps_coupon"] = getVpsCoupon();






    object["vps_extra"] = getVpsExtra();






    object["vps_hostname"] = getVpsHostname();






    object["vps_server_status"] = getVpsServerStatus();






    object["vps_comment"] = getVpsComment();






    object["vps_slices"] = getVpsSlices();






    object["vps_vnc"] = getVpsVnc();






    object["vps_vnc_port"] = getVpsVncPort();






    object["vps_rootpass"] = getVpsRootpass();






    object["vps_mac"] = getVpsMac();






    object["vps_os"] = getVpsOs();






    object["vps_version"] = getVpsVersion();






    object["vps_location"] = getVpsLocation();






    object["vps_platform"] = getVpsPlatform();






    object["vps_diskused"] = getVpsDiskused();






    object["vps_diskmax"] = getVpsDiskmax();



    return object;

}

std::string
VpsServiceInfo::getVpsId()
{
	return vps_id;
}

void
VpsServiceInfo::setVpsId(std::string vps_id)
{
	this->vps_id = vps_id;
}

std::string
VpsServiceInfo::getVpsCustid()
{
	return vps_custid;
}

void
VpsServiceInfo::setVpsCustid(std::string vps_custid)
{
	this->vps_custid = vps_custid;
}

std::string
VpsServiceInfo::getVpsServer()
{
	return vps_server;
}

void
VpsServiceInfo::setVpsServer(std::string vps_server)
{
	this->vps_server = vps_server;
}

std::string
VpsServiceInfo::getVpsIp()
{
	return vps_ip;
}

void
VpsServiceInfo::setVpsIp(std::string vps_ip)
{
	this->vps_ip = vps_ip;
}

AnyType
VpsServiceInfo::getVpsIpv6()
{
	return vps_ipv6;
}

void
VpsServiceInfo::setVpsIpv6(AnyType vps_ipv6)
{
	this->vps_ipv6 = vps_ipv6;
}

std::string
VpsServiceInfo::getVpsVzid()
{
	return vps_vzid;
}

void
VpsServiceInfo::setVpsVzid(std::string vps_vzid)
{
	this->vps_vzid = vps_vzid;
}

std::string
VpsServiceInfo::getVpsCurrency()
{
	return vps_currency;
}

void
VpsServiceInfo::setVpsCurrency(std::string vps_currency)
{
	this->vps_currency = vps_currency;
}

std::string
VpsServiceInfo::getVpsType()
{
	return vps_type;
}

void
VpsServiceInfo::setVpsType(std::string vps_type)
{
	this->vps_type = vps_type;
}

std::string
VpsServiceInfo::getVpsOrderDate()
{
	return vps_order_date;
}

void
VpsServiceInfo::setVpsOrderDate(std::string vps_order_date)
{
	this->vps_order_date = vps_order_date;
}

std::string
VpsServiceInfo::getVpsStatus()
{
	return vps_status;
}

void
VpsServiceInfo::setVpsStatus(std::string vps_status)
{
	this->vps_status = vps_status;
}

std::string
VpsServiceInfo::getVpsInvoice()
{
	return vps_invoice;
}

void
VpsServiceInfo::setVpsInvoice(std::string vps_invoice)
{
	this->vps_invoice = vps_invoice;
}

std::string
VpsServiceInfo::getVpsCoupon()
{
	return vps_coupon;
}

void
VpsServiceInfo::setVpsCoupon(std::string vps_coupon)
{
	this->vps_coupon = vps_coupon;
}

std::string
VpsServiceInfo::getVpsExtra()
{
	return vps_extra;
}

void
VpsServiceInfo::setVpsExtra(std::string vps_extra)
{
	this->vps_extra = vps_extra;
}

std::string
VpsServiceInfo::getVpsHostname()
{
	return vps_hostname;
}

void
VpsServiceInfo::setVpsHostname(std::string vps_hostname)
{
	this->vps_hostname = vps_hostname;
}

std::string
VpsServiceInfo::getVpsServerStatus()
{
	return vps_server_status;
}

void
VpsServiceInfo::setVpsServerStatus(std::string vps_server_status)
{
	this->vps_server_status = vps_server_status;
}

std::string
VpsServiceInfo::getVpsComment()
{
	return vps_comment;
}

void
VpsServiceInfo::setVpsComment(std::string vps_comment)
{
	this->vps_comment = vps_comment;
}

std::string
VpsServiceInfo::getVpsSlices()
{
	return vps_slices;
}

void
VpsServiceInfo::setVpsSlices(std::string vps_slices)
{
	this->vps_slices = vps_slices;
}

std::string
VpsServiceInfo::getVpsVnc()
{
	return vps_vnc;
}

void
VpsServiceInfo::setVpsVnc(std::string vps_vnc)
{
	this->vps_vnc = vps_vnc;
}

std::string
VpsServiceInfo::getVpsVncPort()
{
	return vps_vnc_port;
}

void
VpsServiceInfo::setVpsVncPort(std::string vps_vnc_port)
{
	this->vps_vnc_port = vps_vnc_port;
}

std::string
VpsServiceInfo::getVpsRootpass()
{
	return vps_rootpass;
}

void
VpsServiceInfo::setVpsRootpass(std::string vps_rootpass)
{
	this->vps_rootpass = vps_rootpass;
}

std::string
VpsServiceInfo::getVpsMac()
{
	return vps_mac;
}

void
VpsServiceInfo::setVpsMac(std::string vps_mac)
{
	this->vps_mac = vps_mac;
}

std::string
VpsServiceInfo::getVpsOs()
{
	return vps_os;
}

void
VpsServiceInfo::setVpsOs(std::string vps_os)
{
	this->vps_os = vps_os;
}

std::string
VpsServiceInfo::getVpsVersion()
{
	return vps_version;
}

void
VpsServiceInfo::setVpsVersion(std::string vps_version)
{
	this->vps_version = vps_version;
}

std::string
VpsServiceInfo::getVpsLocation()
{
	return vps_location;
}

void
VpsServiceInfo::setVpsLocation(std::string vps_location)
{
	this->vps_location = vps_location;
}

std::string
VpsServiceInfo::getVpsPlatform()
{
	return vps_platform;
}

void
VpsServiceInfo::setVpsPlatform(std::string vps_platform)
{
	this->vps_platform = vps_platform;
}

std::string
VpsServiceInfo::getVpsDiskused()
{
	return vps_diskused;
}

void
VpsServiceInfo::setVpsDiskused(std::string vps_diskused)
{
	this->vps_diskused = vps_diskused;
}

std::string
VpsServiceInfo::getVpsDiskmax()
{
	return vps_diskmax;
}

void
VpsServiceInfo::setVpsDiskmax(std::string vps_diskmax)
{
	this->vps_diskmax = vps_diskmax;
}



