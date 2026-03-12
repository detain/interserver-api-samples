#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "GetScrubIpDetails_200_response_serviceInfo.h"

using namespace std;
using namespace Tizen::ArtikCloud;

GetScrubIpDetails_200_response_serviceInfo::GetScrubIpDetails_200_response_serviceInfo()
{
	//__init();
}

GetScrubIpDetails_200_response_serviceInfo::~GetScrubIpDetails_200_response_serviceInfo()
{
	//__cleanup();
}

void
GetScrubIpDetails_200_response_serviceInfo::__init()
{
	//scrub_ip_id = std::string();
	//scrub_ip_type = std::string();
	//scrub_ip_custid = std::string();
	//scrub_ip_order_date = std::string();
	//scrub_ip_ip = std::string();
	//scrub_ip_service_id = std::string();
	//scrub_ip_service_module = std::string();
	//scrub_ip_status = std::string();
	//scrub_ip_invoice = std::string();
	//scrub_ip_currency = std::string();
	//scrub_ip_coupon = std::string();
	//scrub_ip_comment = std::string();
}

void
GetScrubIpDetails_200_response_serviceInfo::__cleanup()
{
	//if(scrub_ip_id != NULL) {
	//
	//delete scrub_ip_id;
	//scrub_ip_id = NULL;
	//}
	//if(scrub_ip_type != NULL) {
	//
	//delete scrub_ip_type;
	//scrub_ip_type = NULL;
	//}
	//if(scrub_ip_custid != NULL) {
	//
	//delete scrub_ip_custid;
	//scrub_ip_custid = NULL;
	//}
	//if(scrub_ip_order_date != NULL) {
	//
	//delete scrub_ip_order_date;
	//scrub_ip_order_date = NULL;
	//}
	//if(scrub_ip_ip != NULL) {
	//
	//delete scrub_ip_ip;
	//scrub_ip_ip = NULL;
	//}
	//if(scrub_ip_service_id != NULL) {
	//
	//delete scrub_ip_service_id;
	//scrub_ip_service_id = NULL;
	//}
	//if(scrub_ip_service_module != NULL) {
	//
	//delete scrub_ip_service_module;
	//scrub_ip_service_module = NULL;
	//}
	//if(scrub_ip_status != NULL) {
	//
	//delete scrub_ip_status;
	//scrub_ip_status = NULL;
	//}
	//if(scrub_ip_invoice != NULL) {
	//
	//delete scrub_ip_invoice;
	//scrub_ip_invoice = NULL;
	//}
	//if(scrub_ip_currency != NULL) {
	//
	//delete scrub_ip_currency;
	//scrub_ip_currency = NULL;
	//}
	//if(scrub_ip_coupon != NULL) {
	//
	//delete scrub_ip_coupon;
	//scrub_ip_coupon = NULL;
	//}
	//if(scrub_ip_comment != NULL) {
	//
	//delete scrub_ip_comment;
	//scrub_ip_comment = NULL;
	//}
	//
}

void
GetScrubIpDetails_200_response_serviceInfo::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *scrub_ip_idKey = "scrub_ip_id";
	node = json_object_get_member(pJsonObject, scrub_ip_idKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&scrub_ip_id, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *scrub_ip_typeKey = "scrub_ip_type";
	node = json_object_get_member(pJsonObject, scrub_ip_typeKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&scrub_ip_type, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *scrub_ip_custidKey = "scrub_ip_custid";
	node = json_object_get_member(pJsonObject, scrub_ip_custidKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&scrub_ip_custid, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *scrub_ip_order_dateKey = "scrub_ip_order_date";
	node = json_object_get_member(pJsonObject, scrub_ip_order_dateKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&scrub_ip_order_date, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *scrub_ip_ipKey = "scrub_ip_ip";
	node = json_object_get_member(pJsonObject, scrub_ip_ipKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&scrub_ip_ip, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *scrub_ip_service_idKey = "scrub_ip_service_id";
	node = json_object_get_member(pJsonObject, scrub_ip_service_idKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&scrub_ip_service_id, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *scrub_ip_service_moduleKey = "scrub_ip_service_module";
	node = json_object_get_member(pJsonObject, scrub_ip_service_moduleKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&scrub_ip_service_module, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *scrub_ip_statusKey = "scrub_ip_status";
	node = json_object_get_member(pJsonObject, scrub_ip_statusKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&scrub_ip_status, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *scrub_ip_invoiceKey = "scrub_ip_invoice";
	node = json_object_get_member(pJsonObject, scrub_ip_invoiceKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&scrub_ip_invoice, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *scrub_ip_currencyKey = "scrub_ip_currency";
	node = json_object_get_member(pJsonObject, scrub_ip_currencyKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&scrub_ip_currency, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *scrub_ip_couponKey = "scrub_ip_coupon";
	node = json_object_get_member(pJsonObject, scrub_ip_couponKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&scrub_ip_coupon, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *scrub_ip_commentKey = "scrub_ip_comment";
	node = json_object_get_member(pJsonObject, scrub_ip_commentKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&scrub_ip_comment, node, "std::string", "");
		} else {
			
		}
	}
}

GetScrubIpDetails_200_response_serviceInfo::GetScrubIpDetails_200_response_serviceInfo(char* json)
{
	this->fromJson(json);
}

char*
GetScrubIpDetails_200_response_serviceInfo::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getScrubIpId();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *scrub_ip_idKey = "scrub_ip_id";
	json_object_set_member(pJsonObject, scrub_ip_idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getScrubIpType();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *scrub_ip_typeKey = "scrub_ip_type";
	json_object_set_member(pJsonObject, scrub_ip_typeKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getScrubIpCustid();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *scrub_ip_custidKey = "scrub_ip_custid";
	json_object_set_member(pJsonObject, scrub_ip_custidKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getScrubIpOrderDate();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *scrub_ip_order_dateKey = "scrub_ip_order_date";
	json_object_set_member(pJsonObject, scrub_ip_order_dateKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getScrubIpIp();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *scrub_ip_ipKey = "scrub_ip_ip";
	json_object_set_member(pJsonObject, scrub_ip_ipKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getScrubIpServiceId();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *scrub_ip_service_idKey = "scrub_ip_service_id";
	json_object_set_member(pJsonObject, scrub_ip_service_idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getScrubIpServiceModule();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *scrub_ip_service_moduleKey = "scrub_ip_service_module";
	json_object_set_member(pJsonObject, scrub_ip_service_moduleKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getScrubIpStatus();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *scrub_ip_statusKey = "scrub_ip_status";
	json_object_set_member(pJsonObject, scrub_ip_statusKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getScrubIpInvoice();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *scrub_ip_invoiceKey = "scrub_ip_invoice";
	json_object_set_member(pJsonObject, scrub_ip_invoiceKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getScrubIpCurrency();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *scrub_ip_currencyKey = "scrub_ip_currency";
	json_object_set_member(pJsonObject, scrub_ip_currencyKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getScrubIpCoupon();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *scrub_ip_couponKey = "scrub_ip_coupon";
	json_object_set_member(pJsonObject, scrub_ip_couponKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getScrubIpComment();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *scrub_ip_commentKey = "scrub_ip_comment";
	json_object_set_member(pJsonObject, scrub_ip_commentKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
GetScrubIpDetails_200_response_serviceInfo::getScrubIpId()
{
	return scrub_ip_id;
}

void
GetScrubIpDetails_200_response_serviceInfo::setScrubIpId(std::string  scrub_ip_id)
{
	this->scrub_ip_id = scrub_ip_id;
}

std::string
GetScrubIpDetails_200_response_serviceInfo::getScrubIpType()
{
	return scrub_ip_type;
}

void
GetScrubIpDetails_200_response_serviceInfo::setScrubIpType(std::string  scrub_ip_type)
{
	this->scrub_ip_type = scrub_ip_type;
}

std::string
GetScrubIpDetails_200_response_serviceInfo::getScrubIpCustid()
{
	return scrub_ip_custid;
}

void
GetScrubIpDetails_200_response_serviceInfo::setScrubIpCustid(std::string  scrub_ip_custid)
{
	this->scrub_ip_custid = scrub_ip_custid;
}

std::string
GetScrubIpDetails_200_response_serviceInfo::getScrubIpOrderDate()
{
	return scrub_ip_order_date;
}

void
GetScrubIpDetails_200_response_serviceInfo::setScrubIpOrderDate(std::string  scrub_ip_order_date)
{
	this->scrub_ip_order_date = scrub_ip_order_date;
}

std::string
GetScrubIpDetails_200_response_serviceInfo::getScrubIpIp()
{
	return scrub_ip_ip;
}

void
GetScrubIpDetails_200_response_serviceInfo::setScrubIpIp(std::string  scrub_ip_ip)
{
	this->scrub_ip_ip = scrub_ip_ip;
}

std::string
GetScrubIpDetails_200_response_serviceInfo::getScrubIpServiceId()
{
	return scrub_ip_service_id;
}

void
GetScrubIpDetails_200_response_serviceInfo::setScrubIpServiceId(std::string  scrub_ip_service_id)
{
	this->scrub_ip_service_id = scrub_ip_service_id;
}

std::string
GetScrubIpDetails_200_response_serviceInfo::getScrubIpServiceModule()
{
	return scrub_ip_service_module;
}

void
GetScrubIpDetails_200_response_serviceInfo::setScrubIpServiceModule(std::string  scrub_ip_service_module)
{
	this->scrub_ip_service_module = scrub_ip_service_module;
}

std::string
GetScrubIpDetails_200_response_serviceInfo::getScrubIpStatus()
{
	return scrub_ip_status;
}

void
GetScrubIpDetails_200_response_serviceInfo::setScrubIpStatus(std::string  scrub_ip_status)
{
	this->scrub_ip_status = scrub_ip_status;
}

std::string
GetScrubIpDetails_200_response_serviceInfo::getScrubIpInvoice()
{
	return scrub_ip_invoice;
}

void
GetScrubIpDetails_200_response_serviceInfo::setScrubIpInvoice(std::string  scrub_ip_invoice)
{
	this->scrub_ip_invoice = scrub_ip_invoice;
}

std::string
GetScrubIpDetails_200_response_serviceInfo::getScrubIpCurrency()
{
	return scrub_ip_currency;
}

void
GetScrubIpDetails_200_response_serviceInfo::setScrubIpCurrency(std::string  scrub_ip_currency)
{
	this->scrub_ip_currency = scrub_ip_currency;
}

std::string
GetScrubIpDetails_200_response_serviceInfo::getScrubIpCoupon()
{
	return scrub_ip_coupon;
}

void
GetScrubIpDetails_200_response_serviceInfo::setScrubIpCoupon(std::string  scrub_ip_coupon)
{
	this->scrub_ip_coupon = scrub_ip_coupon;
}

std::string
GetScrubIpDetails_200_response_serviceInfo::getScrubIpComment()
{
	return scrub_ip_comment;
}

void
GetScrubIpDetails_200_response_serviceInfo::setScrubIpComment(std::string  scrub_ip_comment)
{
	this->scrub_ip_comment = scrub_ip_comment;
}


