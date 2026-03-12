#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "LicenseServiceInfo.h"

using namespace std;
using namespace Tizen::ArtikCloud;

LicenseServiceInfo::LicenseServiceInfo()
{
	//__init();
}

LicenseServiceInfo::~LicenseServiceInfo()
{
	//__cleanup();
}

void
LicenseServiceInfo::__init()
{
	//license_id = std::string();
	//license_type = std::string();
	//license_currency = std::string();
	//license_order_date = null;
	//license_custid = std::string();
	//license_ip = std::string();
	//license_status = std::string();
	//license_invoice = std::string();
	//license_coupon = std::string();
	//license_hostname = std::string();
	//license_key = std::string();
	//license_extra = std::string();
}

void
LicenseServiceInfo::__cleanup()
{
	//if(license_id != NULL) {
	//
	//delete license_id;
	//license_id = NULL;
	//}
	//if(license_type != NULL) {
	//
	//delete license_type;
	//license_type = NULL;
	//}
	//if(license_currency != NULL) {
	//
	//delete license_currency;
	//license_currency = NULL;
	//}
	//if(license_order_date != NULL) {
	//
	//delete license_order_date;
	//license_order_date = NULL;
	//}
	//if(license_custid != NULL) {
	//
	//delete license_custid;
	//license_custid = NULL;
	//}
	//if(license_ip != NULL) {
	//
	//delete license_ip;
	//license_ip = NULL;
	//}
	//if(license_status != NULL) {
	//
	//delete license_status;
	//license_status = NULL;
	//}
	//if(license_invoice != NULL) {
	//
	//delete license_invoice;
	//license_invoice = NULL;
	//}
	//if(license_coupon != NULL) {
	//
	//delete license_coupon;
	//license_coupon = NULL;
	//}
	//if(license_hostname != NULL) {
	//
	//delete license_hostname;
	//license_hostname = NULL;
	//}
	//if(license_key != NULL) {
	//
	//delete license_key;
	//license_key = NULL;
	//}
	//if(license_extra != NULL) {
	//
	//delete license_extra;
	//license_extra = NULL;
	//}
	//
}

void
LicenseServiceInfo::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *license_idKey = "license_id";
	node = json_object_get_member(pJsonObject, license_idKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&license_id, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *license_typeKey = "license_type";
	node = json_object_get_member(pJsonObject, license_typeKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&license_type, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *license_currencyKey = "license_currency";
	node = json_object_get_member(pJsonObject, license_currencyKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&license_currency, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *license_order_dateKey = "license_order_date";
	node = json_object_get_member(pJsonObject, license_order_dateKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&license_order_date, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *license_custidKey = "license_custid";
	node = json_object_get_member(pJsonObject, license_custidKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&license_custid, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *license_ipKey = "license_ip";
	node = json_object_get_member(pJsonObject, license_ipKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&license_ip, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *license_statusKey = "license_status";
	node = json_object_get_member(pJsonObject, license_statusKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&license_status, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *license_invoiceKey = "license_invoice";
	node = json_object_get_member(pJsonObject, license_invoiceKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&license_invoice, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *license_couponKey = "license_coupon";
	node = json_object_get_member(pJsonObject, license_couponKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&license_coupon, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *license_hostnameKey = "license_hostname";
	node = json_object_get_member(pJsonObject, license_hostnameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&license_hostname, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *license_keyKey = "license_key";
	node = json_object_get_member(pJsonObject, license_keyKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&license_key, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *license_extraKey = "license_extra";
	node = json_object_get_member(pJsonObject, license_extraKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&license_extra, node, "std::string", "");
		} else {
			
		}
	}
}

LicenseServiceInfo::LicenseServiceInfo(char* json)
{
	this->fromJson(json);
}

char*
LicenseServiceInfo::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getLicenseId();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *license_idKey = "license_id";
	json_object_set_member(pJsonObject, license_idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getLicenseType();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *license_typeKey = "license_type";
	json_object_set_member(pJsonObject, license_typeKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getLicenseCurrency();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *license_currencyKey = "license_currency";
	json_object_set_member(pJsonObject, license_currencyKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getLicenseOrderDate();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *license_order_dateKey = "license_order_date";
	json_object_set_member(pJsonObject, license_order_dateKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getLicenseCustid();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *license_custidKey = "license_custid";
	json_object_set_member(pJsonObject, license_custidKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getLicenseIp();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *license_ipKey = "license_ip";
	json_object_set_member(pJsonObject, license_ipKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getLicenseStatus();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *license_statusKey = "license_status";
	json_object_set_member(pJsonObject, license_statusKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getLicenseInvoice();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *license_invoiceKey = "license_invoice";
	json_object_set_member(pJsonObject, license_invoiceKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getLicenseCoupon();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *license_couponKey = "license_coupon";
	json_object_set_member(pJsonObject, license_couponKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getLicenseHostname();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *license_hostnameKey = "license_hostname";
	json_object_set_member(pJsonObject, license_hostnameKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getLicenseKey();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *license_keyKey = "license_key";
	json_object_set_member(pJsonObject, license_keyKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getLicenseExtra();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *license_extraKey = "license_extra";
	json_object_set_member(pJsonObject, license_extraKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
LicenseServiceInfo::getLicenseId()
{
	return license_id;
}

void
LicenseServiceInfo::setLicenseId(std::string  license_id)
{
	this->license_id = license_id;
}

std::string
LicenseServiceInfo::getLicenseType()
{
	return license_type;
}

void
LicenseServiceInfo::setLicenseType(std::string  license_type)
{
	this->license_type = license_type;
}

std::string
LicenseServiceInfo::getLicenseCurrency()
{
	return license_currency;
}

void
LicenseServiceInfo::setLicenseCurrency(std::string  license_currency)
{
	this->license_currency = license_currency;
}

std::string
LicenseServiceInfo::getLicenseOrderDate()
{
	return license_order_date;
}

void
LicenseServiceInfo::setLicenseOrderDate(std::string  license_order_date)
{
	this->license_order_date = license_order_date;
}

std::string
LicenseServiceInfo::getLicenseCustid()
{
	return license_custid;
}

void
LicenseServiceInfo::setLicenseCustid(std::string  license_custid)
{
	this->license_custid = license_custid;
}

std::string
LicenseServiceInfo::getLicenseIp()
{
	return license_ip;
}

void
LicenseServiceInfo::setLicenseIp(std::string  license_ip)
{
	this->license_ip = license_ip;
}

std::string
LicenseServiceInfo::getLicenseStatus()
{
	return license_status;
}

void
LicenseServiceInfo::setLicenseStatus(std::string  license_status)
{
	this->license_status = license_status;
}

std::string
LicenseServiceInfo::getLicenseInvoice()
{
	return license_invoice;
}

void
LicenseServiceInfo::setLicenseInvoice(std::string  license_invoice)
{
	this->license_invoice = license_invoice;
}

std::string
LicenseServiceInfo::getLicenseCoupon()
{
	return license_coupon;
}

void
LicenseServiceInfo::setLicenseCoupon(std::string  license_coupon)
{
	this->license_coupon = license_coupon;
}

std::string
LicenseServiceInfo::getLicenseHostname()
{
	return license_hostname;
}

void
LicenseServiceInfo::setLicenseHostname(std::string  license_hostname)
{
	this->license_hostname = license_hostname;
}

std::string
LicenseServiceInfo::getLicenseKey()
{
	return license_key;
}

void
LicenseServiceInfo::setLicenseKey(std::string  license_key)
{
	this->license_key = license_key;
}

std::string
LicenseServiceInfo::getLicenseExtra()
{
	return license_extra;
}

void
LicenseServiceInfo::setLicenseExtra(std::string  license_extra)
{
	this->license_extra = license_extra;
}


