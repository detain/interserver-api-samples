#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "QuickserverServiceInfo.h"

using namespace std;
using namespace Tizen::ArtikCloud;

QuickserverServiceInfo::QuickserverServiceInfo()
{
	//__init();
}

QuickserverServiceInfo::~QuickserverServiceInfo()
{
	//__cleanup();
}

void
QuickserverServiceInfo::__init()
{
	//qs_id = std::string();
	//qs_custid = std::string();
	//qs_server = std::string();
	//qs_ip = std::string();
	//qs_ipv6 = null;
	//qs_vzid = std::string();
	//qs_currency = std::string();
	//qs_type = std::string();
	//qs_order_date = std::string();
	//qs_status = std::string();
	//qs_invoice = std::string();
	//qs_coupon = std::string();
	//qs_extra = std::string();
	//qs_hostname = std::string();
	//qs_server_status = std::string();
	//qs_comment = std::string();
	//qs_slices = std::string();
	//qs_vnc = std::string();
	//qs_vnc_port = null;
	//qs_rootpass = std::string();
	//qs_mac = std::string();
	//qs_os = std::string();
	//qs_version = std::string();
	//qs_location = std::string();
	//qs_platform = null;
}

void
QuickserverServiceInfo::__cleanup()
{
	//if(qs_id != NULL) {
	//
	//delete qs_id;
	//qs_id = NULL;
	//}
	//if(qs_custid != NULL) {
	//
	//delete qs_custid;
	//qs_custid = NULL;
	//}
	//if(qs_server != NULL) {
	//
	//delete qs_server;
	//qs_server = NULL;
	//}
	//if(qs_ip != NULL) {
	//
	//delete qs_ip;
	//qs_ip = NULL;
	//}
	//if(qs_ipv6 != NULL) {
	//
	//delete qs_ipv6;
	//qs_ipv6 = NULL;
	//}
	//if(qs_vzid != NULL) {
	//
	//delete qs_vzid;
	//qs_vzid = NULL;
	//}
	//if(qs_currency != NULL) {
	//
	//delete qs_currency;
	//qs_currency = NULL;
	//}
	//if(qs_type != NULL) {
	//
	//delete qs_type;
	//qs_type = NULL;
	//}
	//if(qs_order_date != NULL) {
	//
	//delete qs_order_date;
	//qs_order_date = NULL;
	//}
	//if(qs_status != NULL) {
	//
	//delete qs_status;
	//qs_status = NULL;
	//}
	//if(qs_invoice != NULL) {
	//
	//delete qs_invoice;
	//qs_invoice = NULL;
	//}
	//if(qs_coupon != NULL) {
	//
	//delete qs_coupon;
	//qs_coupon = NULL;
	//}
	//if(qs_extra != NULL) {
	//
	//delete qs_extra;
	//qs_extra = NULL;
	//}
	//if(qs_hostname != NULL) {
	//
	//delete qs_hostname;
	//qs_hostname = NULL;
	//}
	//if(qs_server_status != NULL) {
	//
	//delete qs_server_status;
	//qs_server_status = NULL;
	//}
	//if(qs_comment != NULL) {
	//
	//delete qs_comment;
	//qs_comment = NULL;
	//}
	//if(qs_slices != NULL) {
	//
	//delete qs_slices;
	//qs_slices = NULL;
	//}
	//if(qs_vnc != NULL) {
	//
	//delete qs_vnc;
	//qs_vnc = NULL;
	//}
	//if(qs_vnc_port != NULL) {
	//
	//delete qs_vnc_port;
	//qs_vnc_port = NULL;
	//}
	//if(qs_rootpass != NULL) {
	//
	//delete qs_rootpass;
	//qs_rootpass = NULL;
	//}
	//if(qs_mac != NULL) {
	//
	//delete qs_mac;
	//qs_mac = NULL;
	//}
	//if(qs_os != NULL) {
	//
	//delete qs_os;
	//qs_os = NULL;
	//}
	//if(qs_version != NULL) {
	//
	//delete qs_version;
	//qs_version = NULL;
	//}
	//if(qs_location != NULL) {
	//
	//delete qs_location;
	//qs_location = NULL;
	//}
	//if(qs_platform != NULL) {
	//
	//delete qs_platform;
	//qs_platform = NULL;
	//}
	//
}

void
QuickserverServiceInfo::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *qs_idKey = "qs_id";
	node = json_object_get_member(pJsonObject, qs_idKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&qs_id, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *qs_custidKey = "qs_custid";
	node = json_object_get_member(pJsonObject, qs_custidKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&qs_custid, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *qs_serverKey = "qs_server";
	node = json_object_get_member(pJsonObject, qs_serverKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&qs_server, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *qs_ipKey = "qs_ip";
	node = json_object_get_member(pJsonObject, qs_ipKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&qs_ip, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *qs_ipv6Key = "qs_ipv6";
	node = json_object_get_member(pJsonObject, qs_ipv6Key);
	if (node !=NULL) {
	

		if (isprimitive("AnyType")) {
			jsonToValue(&qs_ipv6, node, "AnyType", "");
		} else {
			
			AnyType* obj = static_cast<AnyType*> (&qs_ipv6);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *qs_vzidKey = "qs_vzid";
	node = json_object_get_member(pJsonObject, qs_vzidKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&qs_vzid, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *qs_currencyKey = "qs_currency";
	node = json_object_get_member(pJsonObject, qs_currencyKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&qs_currency, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *qs_typeKey = "qs_type";
	node = json_object_get_member(pJsonObject, qs_typeKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&qs_type, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *qs_order_dateKey = "qs_order_date";
	node = json_object_get_member(pJsonObject, qs_order_dateKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&qs_order_date, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *qs_statusKey = "qs_status";
	node = json_object_get_member(pJsonObject, qs_statusKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&qs_status, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *qs_invoiceKey = "qs_invoice";
	node = json_object_get_member(pJsonObject, qs_invoiceKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&qs_invoice, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *qs_couponKey = "qs_coupon";
	node = json_object_get_member(pJsonObject, qs_couponKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&qs_coupon, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *qs_extraKey = "qs_extra";
	node = json_object_get_member(pJsonObject, qs_extraKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&qs_extra, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *qs_hostnameKey = "qs_hostname";
	node = json_object_get_member(pJsonObject, qs_hostnameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&qs_hostname, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *qs_server_statusKey = "qs_server_status";
	node = json_object_get_member(pJsonObject, qs_server_statusKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&qs_server_status, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *qs_commentKey = "qs_comment";
	node = json_object_get_member(pJsonObject, qs_commentKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&qs_comment, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *qs_slicesKey = "qs_slices";
	node = json_object_get_member(pJsonObject, qs_slicesKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&qs_slices, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *qs_vncKey = "qs_vnc";
	node = json_object_get_member(pJsonObject, qs_vncKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&qs_vnc, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *qs_vnc_portKey = "qs_vnc_port";
	node = json_object_get_member(pJsonObject, qs_vnc_portKey);
	if (node !=NULL) {
	

		if (isprimitive("AnyType")) {
			jsonToValue(&qs_vnc_port, node, "AnyType", "");
		} else {
			
			AnyType* obj = static_cast<AnyType*> (&qs_vnc_port);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *qs_rootpassKey = "qs_rootpass";
	node = json_object_get_member(pJsonObject, qs_rootpassKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&qs_rootpass, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *qs_macKey = "qs_mac";
	node = json_object_get_member(pJsonObject, qs_macKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&qs_mac, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *qs_osKey = "qs_os";
	node = json_object_get_member(pJsonObject, qs_osKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&qs_os, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *qs_versionKey = "qs_version";
	node = json_object_get_member(pJsonObject, qs_versionKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&qs_version, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *qs_locationKey = "qs_location";
	node = json_object_get_member(pJsonObject, qs_locationKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&qs_location, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *qs_platformKey = "qs_platform";
	node = json_object_get_member(pJsonObject, qs_platformKey);
	if (node !=NULL) {
	

		if (isprimitive("AnyType")) {
			jsonToValue(&qs_platform, node, "AnyType", "");
		} else {
			
			AnyType* obj = static_cast<AnyType*> (&qs_platform);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
}

QuickserverServiceInfo::QuickserverServiceInfo(char* json)
{
	this->fromJson(json);
}

char*
QuickserverServiceInfo::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getQsId();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *qs_idKey = "qs_id";
	json_object_set_member(pJsonObject, qs_idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getQsCustid();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *qs_custidKey = "qs_custid";
	json_object_set_member(pJsonObject, qs_custidKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getQsServer();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *qs_serverKey = "qs_server";
	json_object_set_member(pJsonObject, qs_serverKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getQsIp();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *qs_ipKey = "qs_ip";
	json_object_set_member(pJsonObject, qs_ipKey, node);
	if (isprimitive("AnyType")) {
		AnyType obj = getQsIpv6();
		node = converttoJson(&obj, "AnyType", "");
	}
	else {
		
		AnyType obj = static_cast<AnyType> (getQsIpv6());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *qs_ipv6Key = "qs_ipv6";
	json_object_set_member(pJsonObject, qs_ipv6Key, node);
	if (isprimitive("std::string")) {
		std::string obj = getQsVzid();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *qs_vzidKey = "qs_vzid";
	json_object_set_member(pJsonObject, qs_vzidKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getQsCurrency();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *qs_currencyKey = "qs_currency";
	json_object_set_member(pJsonObject, qs_currencyKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getQsType();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *qs_typeKey = "qs_type";
	json_object_set_member(pJsonObject, qs_typeKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getQsOrderDate();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *qs_order_dateKey = "qs_order_date";
	json_object_set_member(pJsonObject, qs_order_dateKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getQsStatus();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *qs_statusKey = "qs_status";
	json_object_set_member(pJsonObject, qs_statusKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getQsInvoice();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *qs_invoiceKey = "qs_invoice";
	json_object_set_member(pJsonObject, qs_invoiceKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getQsCoupon();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *qs_couponKey = "qs_coupon";
	json_object_set_member(pJsonObject, qs_couponKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getQsExtra();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *qs_extraKey = "qs_extra";
	json_object_set_member(pJsonObject, qs_extraKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getQsHostname();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *qs_hostnameKey = "qs_hostname";
	json_object_set_member(pJsonObject, qs_hostnameKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getQsServerStatus();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *qs_server_statusKey = "qs_server_status";
	json_object_set_member(pJsonObject, qs_server_statusKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getQsComment();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *qs_commentKey = "qs_comment";
	json_object_set_member(pJsonObject, qs_commentKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getQsSlices();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *qs_slicesKey = "qs_slices";
	json_object_set_member(pJsonObject, qs_slicesKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getQsVnc();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *qs_vncKey = "qs_vnc";
	json_object_set_member(pJsonObject, qs_vncKey, node);
	if (isprimitive("AnyType")) {
		AnyType obj = getQsVncPort();
		node = converttoJson(&obj, "AnyType", "");
	}
	else {
		
		AnyType obj = static_cast<AnyType> (getQsVncPort());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *qs_vnc_portKey = "qs_vnc_port";
	json_object_set_member(pJsonObject, qs_vnc_portKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getQsRootpass();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *qs_rootpassKey = "qs_rootpass";
	json_object_set_member(pJsonObject, qs_rootpassKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getQsMac();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *qs_macKey = "qs_mac";
	json_object_set_member(pJsonObject, qs_macKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getQsOs();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *qs_osKey = "qs_os";
	json_object_set_member(pJsonObject, qs_osKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getQsVersion();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *qs_versionKey = "qs_version";
	json_object_set_member(pJsonObject, qs_versionKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getQsLocation();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *qs_locationKey = "qs_location";
	json_object_set_member(pJsonObject, qs_locationKey, node);
	if (isprimitive("AnyType")) {
		AnyType obj = getQsPlatform();
		node = converttoJson(&obj, "AnyType", "");
	}
	else {
		
		AnyType obj = static_cast<AnyType> (getQsPlatform());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *qs_platformKey = "qs_platform";
	json_object_set_member(pJsonObject, qs_platformKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
QuickserverServiceInfo::getQsId()
{
	return qs_id;
}

void
QuickserverServiceInfo::setQsId(std::string  qs_id)
{
	this->qs_id = qs_id;
}

std::string
QuickserverServiceInfo::getQsCustid()
{
	return qs_custid;
}

void
QuickserverServiceInfo::setQsCustid(std::string  qs_custid)
{
	this->qs_custid = qs_custid;
}

std::string
QuickserverServiceInfo::getQsServer()
{
	return qs_server;
}

void
QuickserverServiceInfo::setQsServer(std::string  qs_server)
{
	this->qs_server = qs_server;
}

std::string
QuickserverServiceInfo::getQsIp()
{
	return qs_ip;
}

void
QuickserverServiceInfo::setQsIp(std::string  qs_ip)
{
	this->qs_ip = qs_ip;
}

AnyType
QuickserverServiceInfo::getQsIpv6()
{
	return qs_ipv6;
}

void
QuickserverServiceInfo::setQsIpv6(AnyType  qs_ipv6)
{
	this->qs_ipv6 = qs_ipv6;
}

std::string
QuickserverServiceInfo::getQsVzid()
{
	return qs_vzid;
}

void
QuickserverServiceInfo::setQsVzid(std::string  qs_vzid)
{
	this->qs_vzid = qs_vzid;
}

std::string
QuickserverServiceInfo::getQsCurrency()
{
	return qs_currency;
}

void
QuickserverServiceInfo::setQsCurrency(std::string  qs_currency)
{
	this->qs_currency = qs_currency;
}

std::string
QuickserverServiceInfo::getQsType()
{
	return qs_type;
}

void
QuickserverServiceInfo::setQsType(std::string  qs_type)
{
	this->qs_type = qs_type;
}

std::string
QuickserverServiceInfo::getQsOrderDate()
{
	return qs_order_date;
}

void
QuickserverServiceInfo::setQsOrderDate(std::string  qs_order_date)
{
	this->qs_order_date = qs_order_date;
}

std::string
QuickserverServiceInfo::getQsStatus()
{
	return qs_status;
}

void
QuickserverServiceInfo::setQsStatus(std::string  qs_status)
{
	this->qs_status = qs_status;
}

std::string
QuickserverServiceInfo::getQsInvoice()
{
	return qs_invoice;
}

void
QuickserverServiceInfo::setQsInvoice(std::string  qs_invoice)
{
	this->qs_invoice = qs_invoice;
}

std::string
QuickserverServiceInfo::getQsCoupon()
{
	return qs_coupon;
}

void
QuickserverServiceInfo::setQsCoupon(std::string  qs_coupon)
{
	this->qs_coupon = qs_coupon;
}

std::string
QuickserverServiceInfo::getQsExtra()
{
	return qs_extra;
}

void
QuickserverServiceInfo::setQsExtra(std::string  qs_extra)
{
	this->qs_extra = qs_extra;
}

std::string
QuickserverServiceInfo::getQsHostname()
{
	return qs_hostname;
}

void
QuickserverServiceInfo::setQsHostname(std::string  qs_hostname)
{
	this->qs_hostname = qs_hostname;
}

std::string
QuickserverServiceInfo::getQsServerStatus()
{
	return qs_server_status;
}

void
QuickserverServiceInfo::setQsServerStatus(std::string  qs_server_status)
{
	this->qs_server_status = qs_server_status;
}

std::string
QuickserverServiceInfo::getQsComment()
{
	return qs_comment;
}

void
QuickserverServiceInfo::setQsComment(std::string  qs_comment)
{
	this->qs_comment = qs_comment;
}

std::string
QuickserverServiceInfo::getQsSlices()
{
	return qs_slices;
}

void
QuickserverServiceInfo::setQsSlices(std::string  qs_slices)
{
	this->qs_slices = qs_slices;
}

std::string
QuickserverServiceInfo::getQsVnc()
{
	return qs_vnc;
}

void
QuickserverServiceInfo::setQsVnc(std::string  qs_vnc)
{
	this->qs_vnc = qs_vnc;
}

AnyType
QuickserverServiceInfo::getQsVncPort()
{
	return qs_vnc_port;
}

void
QuickserverServiceInfo::setQsVncPort(AnyType  qs_vnc_port)
{
	this->qs_vnc_port = qs_vnc_port;
}

std::string
QuickserverServiceInfo::getQsRootpass()
{
	return qs_rootpass;
}

void
QuickserverServiceInfo::setQsRootpass(std::string  qs_rootpass)
{
	this->qs_rootpass = qs_rootpass;
}

std::string
QuickserverServiceInfo::getQsMac()
{
	return qs_mac;
}

void
QuickserverServiceInfo::setQsMac(std::string  qs_mac)
{
	this->qs_mac = qs_mac;
}

std::string
QuickserverServiceInfo::getQsOs()
{
	return qs_os;
}

void
QuickserverServiceInfo::setQsOs(std::string  qs_os)
{
	this->qs_os = qs_os;
}

std::string
QuickserverServiceInfo::getQsVersion()
{
	return qs_version;
}

void
QuickserverServiceInfo::setQsVersion(std::string  qs_version)
{
	this->qs_version = qs_version;
}

std::string
QuickserverServiceInfo::getQsLocation()
{
	return qs_location;
}

void
QuickserverServiceInfo::setQsLocation(std::string  qs_location)
{
	this->qs_location = qs_location;
}

AnyType
QuickserverServiceInfo::getQsPlatform()
{
	return qs_platform;
}

void
QuickserverServiceInfo::setQsPlatform(AnyType  qs_platform)
{
	this->qs_platform = qs_platform;
}


