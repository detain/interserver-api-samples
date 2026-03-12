#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "WebsiteServiceInfo.h"

using namespace std;
using namespace Tizen::ArtikCloud;

WebsiteServiceInfo::WebsiteServiceInfo()
{
	//__init();
}

WebsiteServiceInfo::~WebsiteServiceInfo()
{
	//__cleanup();
}

void
WebsiteServiceInfo::__init()
{
	//website_id = std::string();
	//website_server = std::string();
	//website_type = std::string();
	//website_currency = std::string();
	//website_order_date = std::string();
	//website_custid = std::string();
	//website_ip = std::string();
	//website_status = std::string();
	//website_invoice = std::string();
	//website_coupon = std::string();
	//website_extra = std::string();
	//website_hostname = std::string();
	//website_comment = std::string();
	//website_username = std::string();
	//website_server_status = std::string();
}

void
WebsiteServiceInfo::__cleanup()
{
	//if(website_id != NULL) {
	//
	//delete website_id;
	//website_id = NULL;
	//}
	//if(website_server != NULL) {
	//
	//delete website_server;
	//website_server = NULL;
	//}
	//if(website_type != NULL) {
	//
	//delete website_type;
	//website_type = NULL;
	//}
	//if(website_currency != NULL) {
	//
	//delete website_currency;
	//website_currency = NULL;
	//}
	//if(website_order_date != NULL) {
	//
	//delete website_order_date;
	//website_order_date = NULL;
	//}
	//if(website_custid != NULL) {
	//
	//delete website_custid;
	//website_custid = NULL;
	//}
	//if(website_ip != NULL) {
	//
	//delete website_ip;
	//website_ip = NULL;
	//}
	//if(website_status != NULL) {
	//
	//delete website_status;
	//website_status = NULL;
	//}
	//if(website_invoice != NULL) {
	//
	//delete website_invoice;
	//website_invoice = NULL;
	//}
	//if(website_coupon != NULL) {
	//
	//delete website_coupon;
	//website_coupon = NULL;
	//}
	//if(website_extra != NULL) {
	//
	//delete website_extra;
	//website_extra = NULL;
	//}
	//if(website_hostname != NULL) {
	//
	//delete website_hostname;
	//website_hostname = NULL;
	//}
	//if(website_comment != NULL) {
	//
	//delete website_comment;
	//website_comment = NULL;
	//}
	//if(website_username != NULL) {
	//
	//delete website_username;
	//website_username = NULL;
	//}
	//if(website_server_status != NULL) {
	//
	//delete website_server_status;
	//website_server_status = NULL;
	//}
	//
}

void
WebsiteServiceInfo::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *website_idKey = "website_id";
	node = json_object_get_member(pJsonObject, website_idKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&website_id, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *website_serverKey = "website_server";
	node = json_object_get_member(pJsonObject, website_serverKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&website_server, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *website_typeKey = "website_type";
	node = json_object_get_member(pJsonObject, website_typeKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&website_type, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *website_currencyKey = "website_currency";
	node = json_object_get_member(pJsonObject, website_currencyKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&website_currency, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *website_order_dateKey = "website_order_date";
	node = json_object_get_member(pJsonObject, website_order_dateKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&website_order_date, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *website_custidKey = "website_custid";
	node = json_object_get_member(pJsonObject, website_custidKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&website_custid, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *website_ipKey = "website_ip";
	node = json_object_get_member(pJsonObject, website_ipKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&website_ip, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *website_statusKey = "website_status";
	node = json_object_get_member(pJsonObject, website_statusKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&website_status, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *website_invoiceKey = "website_invoice";
	node = json_object_get_member(pJsonObject, website_invoiceKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&website_invoice, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *website_couponKey = "website_coupon";
	node = json_object_get_member(pJsonObject, website_couponKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&website_coupon, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *website_extraKey = "website_extra";
	node = json_object_get_member(pJsonObject, website_extraKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&website_extra, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *website_hostnameKey = "website_hostname";
	node = json_object_get_member(pJsonObject, website_hostnameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&website_hostname, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *website_commentKey = "website_comment";
	node = json_object_get_member(pJsonObject, website_commentKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&website_comment, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *website_usernameKey = "website_username";
	node = json_object_get_member(pJsonObject, website_usernameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&website_username, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *website_server_statusKey = "website_server_status";
	node = json_object_get_member(pJsonObject, website_server_statusKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&website_server_status, node, "std::string", "");
		} else {
			
		}
	}
}

WebsiteServiceInfo::WebsiteServiceInfo(char* json)
{
	this->fromJson(json);
}

char*
WebsiteServiceInfo::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getWebsiteId();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *website_idKey = "website_id";
	json_object_set_member(pJsonObject, website_idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getWebsiteServer();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *website_serverKey = "website_server";
	json_object_set_member(pJsonObject, website_serverKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getWebsiteType();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *website_typeKey = "website_type";
	json_object_set_member(pJsonObject, website_typeKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getWebsiteCurrency();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *website_currencyKey = "website_currency";
	json_object_set_member(pJsonObject, website_currencyKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getWebsiteOrderDate();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *website_order_dateKey = "website_order_date";
	json_object_set_member(pJsonObject, website_order_dateKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getWebsiteCustid();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *website_custidKey = "website_custid";
	json_object_set_member(pJsonObject, website_custidKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getWebsiteIp();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *website_ipKey = "website_ip";
	json_object_set_member(pJsonObject, website_ipKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getWebsiteStatus();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *website_statusKey = "website_status";
	json_object_set_member(pJsonObject, website_statusKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getWebsiteInvoice();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *website_invoiceKey = "website_invoice";
	json_object_set_member(pJsonObject, website_invoiceKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getWebsiteCoupon();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *website_couponKey = "website_coupon";
	json_object_set_member(pJsonObject, website_couponKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getWebsiteExtra();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *website_extraKey = "website_extra";
	json_object_set_member(pJsonObject, website_extraKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getWebsiteHostname();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *website_hostnameKey = "website_hostname";
	json_object_set_member(pJsonObject, website_hostnameKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getWebsiteComment();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *website_commentKey = "website_comment";
	json_object_set_member(pJsonObject, website_commentKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getWebsiteUsername();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *website_usernameKey = "website_username";
	json_object_set_member(pJsonObject, website_usernameKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getWebsiteServerStatus();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *website_server_statusKey = "website_server_status";
	json_object_set_member(pJsonObject, website_server_statusKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
WebsiteServiceInfo::getWebsiteId()
{
	return website_id;
}

void
WebsiteServiceInfo::setWebsiteId(std::string  website_id)
{
	this->website_id = website_id;
}

std::string
WebsiteServiceInfo::getWebsiteServer()
{
	return website_server;
}

void
WebsiteServiceInfo::setWebsiteServer(std::string  website_server)
{
	this->website_server = website_server;
}

std::string
WebsiteServiceInfo::getWebsiteType()
{
	return website_type;
}

void
WebsiteServiceInfo::setWebsiteType(std::string  website_type)
{
	this->website_type = website_type;
}

std::string
WebsiteServiceInfo::getWebsiteCurrency()
{
	return website_currency;
}

void
WebsiteServiceInfo::setWebsiteCurrency(std::string  website_currency)
{
	this->website_currency = website_currency;
}

std::string
WebsiteServiceInfo::getWebsiteOrderDate()
{
	return website_order_date;
}

void
WebsiteServiceInfo::setWebsiteOrderDate(std::string  website_order_date)
{
	this->website_order_date = website_order_date;
}

std::string
WebsiteServiceInfo::getWebsiteCustid()
{
	return website_custid;
}

void
WebsiteServiceInfo::setWebsiteCustid(std::string  website_custid)
{
	this->website_custid = website_custid;
}

std::string
WebsiteServiceInfo::getWebsiteIp()
{
	return website_ip;
}

void
WebsiteServiceInfo::setWebsiteIp(std::string  website_ip)
{
	this->website_ip = website_ip;
}

std::string
WebsiteServiceInfo::getWebsiteStatus()
{
	return website_status;
}

void
WebsiteServiceInfo::setWebsiteStatus(std::string  website_status)
{
	this->website_status = website_status;
}

std::string
WebsiteServiceInfo::getWebsiteInvoice()
{
	return website_invoice;
}

void
WebsiteServiceInfo::setWebsiteInvoice(std::string  website_invoice)
{
	this->website_invoice = website_invoice;
}

std::string
WebsiteServiceInfo::getWebsiteCoupon()
{
	return website_coupon;
}

void
WebsiteServiceInfo::setWebsiteCoupon(std::string  website_coupon)
{
	this->website_coupon = website_coupon;
}

std::string
WebsiteServiceInfo::getWebsiteExtra()
{
	return website_extra;
}

void
WebsiteServiceInfo::setWebsiteExtra(std::string  website_extra)
{
	this->website_extra = website_extra;
}

std::string
WebsiteServiceInfo::getWebsiteHostname()
{
	return website_hostname;
}

void
WebsiteServiceInfo::setWebsiteHostname(std::string  website_hostname)
{
	this->website_hostname = website_hostname;
}

std::string
WebsiteServiceInfo::getWebsiteComment()
{
	return website_comment;
}

void
WebsiteServiceInfo::setWebsiteComment(std::string  website_comment)
{
	this->website_comment = website_comment;
}

std::string
WebsiteServiceInfo::getWebsiteUsername()
{
	return website_username;
}

void
WebsiteServiceInfo::setWebsiteUsername(std::string  website_username)
{
	this->website_username = website_username;
}

std::string
WebsiteServiceInfo::getWebsiteServerStatus()
{
	return website_server_status;
}

void
WebsiteServiceInfo::setWebsiteServerStatus(std::string  website_server_status)
{
	this->website_server_status = website_server_status;
}


