#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "VpsServiceInfo.h"

using namespace std;
using namespace Tizen::ArtikCloud;

VpsServiceInfo::VpsServiceInfo()
{
	//__init();
}

VpsServiceInfo::~VpsServiceInfo()
{
	//__cleanup();
}

void
VpsServiceInfo::__init()
{
	//vps_id = std::string();
	//vps_custid = std::string();
	//vps_server = std::string();
	//vps_ip = std::string();
	//vps_ipv6 = null;
	//vps_vzid = std::string();
	//vps_currency = std::string();
	//vps_type = std::string();
	//vps_order_date = std::string();
	//vps_status = std::string();
	//vps_invoice = std::string();
	//vps_coupon = std::string();
	//vps_extra = std::string();
	//vps_hostname = std::string();
	//vps_server_status = std::string();
	//vps_comment = std::string();
	//vps_slices = std::string();
	//vps_vnc = std::string();
	//vps_vnc_port = std::string();
	//vps_rootpass = std::string();
	//vps_mac = std::string();
	//vps_os = std::string();
	//vps_version = std::string();
	//vps_location = std::string();
	//vps_platform = std::string();
	//vps_diskused = std::string();
	//vps_diskmax = std::string();
}

void
VpsServiceInfo::__cleanup()
{
	//if(vps_id != NULL) {
	//
	//delete vps_id;
	//vps_id = NULL;
	//}
	//if(vps_custid != NULL) {
	//
	//delete vps_custid;
	//vps_custid = NULL;
	//}
	//if(vps_server != NULL) {
	//
	//delete vps_server;
	//vps_server = NULL;
	//}
	//if(vps_ip != NULL) {
	//
	//delete vps_ip;
	//vps_ip = NULL;
	//}
	//if(vps_ipv6 != NULL) {
	//
	//delete vps_ipv6;
	//vps_ipv6 = NULL;
	//}
	//if(vps_vzid != NULL) {
	//
	//delete vps_vzid;
	//vps_vzid = NULL;
	//}
	//if(vps_currency != NULL) {
	//
	//delete vps_currency;
	//vps_currency = NULL;
	//}
	//if(vps_type != NULL) {
	//
	//delete vps_type;
	//vps_type = NULL;
	//}
	//if(vps_order_date != NULL) {
	//
	//delete vps_order_date;
	//vps_order_date = NULL;
	//}
	//if(vps_status != NULL) {
	//
	//delete vps_status;
	//vps_status = NULL;
	//}
	//if(vps_invoice != NULL) {
	//
	//delete vps_invoice;
	//vps_invoice = NULL;
	//}
	//if(vps_coupon != NULL) {
	//
	//delete vps_coupon;
	//vps_coupon = NULL;
	//}
	//if(vps_extra != NULL) {
	//
	//delete vps_extra;
	//vps_extra = NULL;
	//}
	//if(vps_hostname != NULL) {
	//
	//delete vps_hostname;
	//vps_hostname = NULL;
	//}
	//if(vps_server_status != NULL) {
	//
	//delete vps_server_status;
	//vps_server_status = NULL;
	//}
	//if(vps_comment != NULL) {
	//
	//delete vps_comment;
	//vps_comment = NULL;
	//}
	//if(vps_slices != NULL) {
	//
	//delete vps_slices;
	//vps_slices = NULL;
	//}
	//if(vps_vnc != NULL) {
	//
	//delete vps_vnc;
	//vps_vnc = NULL;
	//}
	//if(vps_vnc_port != NULL) {
	//
	//delete vps_vnc_port;
	//vps_vnc_port = NULL;
	//}
	//if(vps_rootpass != NULL) {
	//
	//delete vps_rootpass;
	//vps_rootpass = NULL;
	//}
	//if(vps_mac != NULL) {
	//
	//delete vps_mac;
	//vps_mac = NULL;
	//}
	//if(vps_os != NULL) {
	//
	//delete vps_os;
	//vps_os = NULL;
	//}
	//if(vps_version != NULL) {
	//
	//delete vps_version;
	//vps_version = NULL;
	//}
	//if(vps_location != NULL) {
	//
	//delete vps_location;
	//vps_location = NULL;
	//}
	//if(vps_platform != NULL) {
	//
	//delete vps_platform;
	//vps_platform = NULL;
	//}
	//if(vps_diskused != NULL) {
	//
	//delete vps_diskused;
	//vps_diskused = NULL;
	//}
	//if(vps_diskmax != NULL) {
	//
	//delete vps_diskmax;
	//vps_diskmax = NULL;
	//}
	//
}

void
VpsServiceInfo::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *vps_idKey = "vps_id";
	node = json_object_get_member(pJsonObject, vps_idKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&vps_id, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *vps_custidKey = "vps_custid";
	node = json_object_get_member(pJsonObject, vps_custidKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&vps_custid, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *vps_serverKey = "vps_server";
	node = json_object_get_member(pJsonObject, vps_serverKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&vps_server, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *vps_ipKey = "vps_ip";
	node = json_object_get_member(pJsonObject, vps_ipKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&vps_ip, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *vps_ipv6Key = "vps_ipv6";
	node = json_object_get_member(pJsonObject, vps_ipv6Key);
	if (node !=NULL) {
	

		if (isprimitive("AnyType")) {
			jsonToValue(&vps_ipv6, node, "AnyType", "");
		} else {
			
			AnyType* obj = static_cast<AnyType*> (&vps_ipv6);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *vps_vzidKey = "vps_vzid";
	node = json_object_get_member(pJsonObject, vps_vzidKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&vps_vzid, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *vps_currencyKey = "vps_currency";
	node = json_object_get_member(pJsonObject, vps_currencyKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&vps_currency, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *vps_typeKey = "vps_type";
	node = json_object_get_member(pJsonObject, vps_typeKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&vps_type, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *vps_order_dateKey = "vps_order_date";
	node = json_object_get_member(pJsonObject, vps_order_dateKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&vps_order_date, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *vps_statusKey = "vps_status";
	node = json_object_get_member(pJsonObject, vps_statusKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&vps_status, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *vps_invoiceKey = "vps_invoice";
	node = json_object_get_member(pJsonObject, vps_invoiceKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&vps_invoice, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *vps_couponKey = "vps_coupon";
	node = json_object_get_member(pJsonObject, vps_couponKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&vps_coupon, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *vps_extraKey = "vps_extra";
	node = json_object_get_member(pJsonObject, vps_extraKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&vps_extra, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *vps_hostnameKey = "vps_hostname";
	node = json_object_get_member(pJsonObject, vps_hostnameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&vps_hostname, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *vps_server_statusKey = "vps_server_status";
	node = json_object_get_member(pJsonObject, vps_server_statusKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&vps_server_status, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *vps_commentKey = "vps_comment";
	node = json_object_get_member(pJsonObject, vps_commentKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&vps_comment, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *vps_slicesKey = "vps_slices";
	node = json_object_get_member(pJsonObject, vps_slicesKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&vps_slices, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *vps_vncKey = "vps_vnc";
	node = json_object_get_member(pJsonObject, vps_vncKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&vps_vnc, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *vps_vnc_portKey = "vps_vnc_port";
	node = json_object_get_member(pJsonObject, vps_vnc_portKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&vps_vnc_port, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *vps_rootpassKey = "vps_rootpass";
	node = json_object_get_member(pJsonObject, vps_rootpassKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&vps_rootpass, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *vps_macKey = "vps_mac";
	node = json_object_get_member(pJsonObject, vps_macKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&vps_mac, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *vps_osKey = "vps_os";
	node = json_object_get_member(pJsonObject, vps_osKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&vps_os, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *vps_versionKey = "vps_version";
	node = json_object_get_member(pJsonObject, vps_versionKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&vps_version, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *vps_locationKey = "vps_location";
	node = json_object_get_member(pJsonObject, vps_locationKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&vps_location, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *vps_platformKey = "vps_platform";
	node = json_object_get_member(pJsonObject, vps_platformKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&vps_platform, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *vps_diskusedKey = "vps_diskused";
	node = json_object_get_member(pJsonObject, vps_diskusedKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&vps_diskused, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *vps_diskmaxKey = "vps_diskmax";
	node = json_object_get_member(pJsonObject, vps_diskmaxKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&vps_diskmax, node, "std::string", "");
		} else {
			
		}
	}
}

VpsServiceInfo::VpsServiceInfo(char* json)
{
	this->fromJson(json);
}

char*
VpsServiceInfo::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getVpsId();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *vps_idKey = "vps_id";
	json_object_set_member(pJsonObject, vps_idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getVpsCustid();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *vps_custidKey = "vps_custid";
	json_object_set_member(pJsonObject, vps_custidKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getVpsServer();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *vps_serverKey = "vps_server";
	json_object_set_member(pJsonObject, vps_serverKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getVpsIp();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *vps_ipKey = "vps_ip";
	json_object_set_member(pJsonObject, vps_ipKey, node);
	if (isprimitive("AnyType")) {
		AnyType obj = getVpsIpv6();
		node = converttoJson(&obj, "AnyType", "");
	}
	else {
		
		AnyType obj = static_cast<AnyType> (getVpsIpv6());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *vps_ipv6Key = "vps_ipv6";
	json_object_set_member(pJsonObject, vps_ipv6Key, node);
	if (isprimitive("std::string")) {
		std::string obj = getVpsVzid();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *vps_vzidKey = "vps_vzid";
	json_object_set_member(pJsonObject, vps_vzidKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getVpsCurrency();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *vps_currencyKey = "vps_currency";
	json_object_set_member(pJsonObject, vps_currencyKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getVpsType();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *vps_typeKey = "vps_type";
	json_object_set_member(pJsonObject, vps_typeKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getVpsOrderDate();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *vps_order_dateKey = "vps_order_date";
	json_object_set_member(pJsonObject, vps_order_dateKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getVpsStatus();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *vps_statusKey = "vps_status";
	json_object_set_member(pJsonObject, vps_statusKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getVpsInvoice();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *vps_invoiceKey = "vps_invoice";
	json_object_set_member(pJsonObject, vps_invoiceKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getVpsCoupon();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *vps_couponKey = "vps_coupon";
	json_object_set_member(pJsonObject, vps_couponKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getVpsExtra();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *vps_extraKey = "vps_extra";
	json_object_set_member(pJsonObject, vps_extraKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getVpsHostname();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *vps_hostnameKey = "vps_hostname";
	json_object_set_member(pJsonObject, vps_hostnameKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getVpsServerStatus();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *vps_server_statusKey = "vps_server_status";
	json_object_set_member(pJsonObject, vps_server_statusKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getVpsComment();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *vps_commentKey = "vps_comment";
	json_object_set_member(pJsonObject, vps_commentKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getVpsSlices();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *vps_slicesKey = "vps_slices";
	json_object_set_member(pJsonObject, vps_slicesKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getVpsVnc();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *vps_vncKey = "vps_vnc";
	json_object_set_member(pJsonObject, vps_vncKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getVpsVncPort();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *vps_vnc_portKey = "vps_vnc_port";
	json_object_set_member(pJsonObject, vps_vnc_portKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getVpsRootpass();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *vps_rootpassKey = "vps_rootpass";
	json_object_set_member(pJsonObject, vps_rootpassKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getVpsMac();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *vps_macKey = "vps_mac";
	json_object_set_member(pJsonObject, vps_macKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getVpsOs();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *vps_osKey = "vps_os";
	json_object_set_member(pJsonObject, vps_osKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getVpsVersion();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *vps_versionKey = "vps_version";
	json_object_set_member(pJsonObject, vps_versionKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getVpsLocation();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *vps_locationKey = "vps_location";
	json_object_set_member(pJsonObject, vps_locationKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getVpsPlatform();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *vps_platformKey = "vps_platform";
	json_object_set_member(pJsonObject, vps_platformKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getVpsDiskused();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *vps_diskusedKey = "vps_diskused";
	json_object_set_member(pJsonObject, vps_diskusedKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getVpsDiskmax();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *vps_diskmaxKey = "vps_diskmax";
	json_object_set_member(pJsonObject, vps_diskmaxKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
VpsServiceInfo::getVpsId()
{
	return vps_id;
}

void
VpsServiceInfo::setVpsId(std::string  vps_id)
{
	this->vps_id = vps_id;
}

std::string
VpsServiceInfo::getVpsCustid()
{
	return vps_custid;
}

void
VpsServiceInfo::setVpsCustid(std::string  vps_custid)
{
	this->vps_custid = vps_custid;
}

std::string
VpsServiceInfo::getVpsServer()
{
	return vps_server;
}

void
VpsServiceInfo::setVpsServer(std::string  vps_server)
{
	this->vps_server = vps_server;
}

std::string
VpsServiceInfo::getVpsIp()
{
	return vps_ip;
}

void
VpsServiceInfo::setVpsIp(std::string  vps_ip)
{
	this->vps_ip = vps_ip;
}

AnyType
VpsServiceInfo::getVpsIpv6()
{
	return vps_ipv6;
}

void
VpsServiceInfo::setVpsIpv6(AnyType  vps_ipv6)
{
	this->vps_ipv6 = vps_ipv6;
}

std::string
VpsServiceInfo::getVpsVzid()
{
	return vps_vzid;
}

void
VpsServiceInfo::setVpsVzid(std::string  vps_vzid)
{
	this->vps_vzid = vps_vzid;
}

std::string
VpsServiceInfo::getVpsCurrency()
{
	return vps_currency;
}

void
VpsServiceInfo::setVpsCurrency(std::string  vps_currency)
{
	this->vps_currency = vps_currency;
}

std::string
VpsServiceInfo::getVpsType()
{
	return vps_type;
}

void
VpsServiceInfo::setVpsType(std::string  vps_type)
{
	this->vps_type = vps_type;
}

std::string
VpsServiceInfo::getVpsOrderDate()
{
	return vps_order_date;
}

void
VpsServiceInfo::setVpsOrderDate(std::string  vps_order_date)
{
	this->vps_order_date = vps_order_date;
}

std::string
VpsServiceInfo::getVpsStatus()
{
	return vps_status;
}

void
VpsServiceInfo::setVpsStatus(std::string  vps_status)
{
	this->vps_status = vps_status;
}

std::string
VpsServiceInfo::getVpsInvoice()
{
	return vps_invoice;
}

void
VpsServiceInfo::setVpsInvoice(std::string  vps_invoice)
{
	this->vps_invoice = vps_invoice;
}

std::string
VpsServiceInfo::getVpsCoupon()
{
	return vps_coupon;
}

void
VpsServiceInfo::setVpsCoupon(std::string  vps_coupon)
{
	this->vps_coupon = vps_coupon;
}

std::string
VpsServiceInfo::getVpsExtra()
{
	return vps_extra;
}

void
VpsServiceInfo::setVpsExtra(std::string  vps_extra)
{
	this->vps_extra = vps_extra;
}

std::string
VpsServiceInfo::getVpsHostname()
{
	return vps_hostname;
}

void
VpsServiceInfo::setVpsHostname(std::string  vps_hostname)
{
	this->vps_hostname = vps_hostname;
}

std::string
VpsServiceInfo::getVpsServerStatus()
{
	return vps_server_status;
}

void
VpsServiceInfo::setVpsServerStatus(std::string  vps_server_status)
{
	this->vps_server_status = vps_server_status;
}

std::string
VpsServiceInfo::getVpsComment()
{
	return vps_comment;
}

void
VpsServiceInfo::setVpsComment(std::string  vps_comment)
{
	this->vps_comment = vps_comment;
}

std::string
VpsServiceInfo::getVpsSlices()
{
	return vps_slices;
}

void
VpsServiceInfo::setVpsSlices(std::string  vps_slices)
{
	this->vps_slices = vps_slices;
}

std::string
VpsServiceInfo::getVpsVnc()
{
	return vps_vnc;
}

void
VpsServiceInfo::setVpsVnc(std::string  vps_vnc)
{
	this->vps_vnc = vps_vnc;
}

std::string
VpsServiceInfo::getVpsVncPort()
{
	return vps_vnc_port;
}

void
VpsServiceInfo::setVpsVncPort(std::string  vps_vnc_port)
{
	this->vps_vnc_port = vps_vnc_port;
}

std::string
VpsServiceInfo::getVpsRootpass()
{
	return vps_rootpass;
}

void
VpsServiceInfo::setVpsRootpass(std::string  vps_rootpass)
{
	this->vps_rootpass = vps_rootpass;
}

std::string
VpsServiceInfo::getVpsMac()
{
	return vps_mac;
}

void
VpsServiceInfo::setVpsMac(std::string  vps_mac)
{
	this->vps_mac = vps_mac;
}

std::string
VpsServiceInfo::getVpsOs()
{
	return vps_os;
}

void
VpsServiceInfo::setVpsOs(std::string  vps_os)
{
	this->vps_os = vps_os;
}

std::string
VpsServiceInfo::getVpsVersion()
{
	return vps_version;
}

void
VpsServiceInfo::setVpsVersion(std::string  vps_version)
{
	this->vps_version = vps_version;
}

std::string
VpsServiceInfo::getVpsLocation()
{
	return vps_location;
}

void
VpsServiceInfo::setVpsLocation(std::string  vps_location)
{
	this->vps_location = vps_location;
}

std::string
VpsServiceInfo::getVpsPlatform()
{
	return vps_platform;
}

void
VpsServiceInfo::setVpsPlatform(std::string  vps_platform)
{
	this->vps_platform = vps_platform;
}

std::string
VpsServiceInfo::getVpsDiskused()
{
	return vps_diskused;
}

void
VpsServiceInfo::setVpsDiskused(std::string  vps_diskused)
{
	this->vps_diskused = vps_diskused;
}

std::string
VpsServiceInfo::getVpsDiskmax()
{
	return vps_diskmax;
}

void
VpsServiceInfo::setVpsDiskmax(std::string  vps_diskmax)
{
	this->vps_diskmax = vps_diskmax;
}


