#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "DomainServiceInfo.h"

using namespace std;
using namespace Tizen::ArtikCloud;

DomainServiceInfo::DomainServiceInfo()
{
	//__init();
}

DomainServiceInfo::~DomainServiceInfo()
{
	//__cleanup();
}

void
DomainServiceInfo::__init()
{
	//domain_id = std::string();
	//domain_hostname = std::string();
	//domain_username = std::string();
	//domain_password = std::string();
	//domain_type = std::string();
	//domain_currency = std::string();
	//domain_expire_date = std::string();
	//domain_order_date = std::string();
	//domain_custid = std::string();
	//domain_status = std::string();
	//domain_invoice = std::string();
	//domain_coupon = std::string();
}

void
DomainServiceInfo::__cleanup()
{
	//if(domain_id != NULL) {
	//
	//delete domain_id;
	//domain_id = NULL;
	//}
	//if(domain_hostname != NULL) {
	//
	//delete domain_hostname;
	//domain_hostname = NULL;
	//}
	//if(domain_username != NULL) {
	//
	//delete domain_username;
	//domain_username = NULL;
	//}
	//if(domain_password != NULL) {
	//
	//delete domain_password;
	//domain_password = NULL;
	//}
	//if(domain_type != NULL) {
	//
	//delete domain_type;
	//domain_type = NULL;
	//}
	//if(domain_currency != NULL) {
	//
	//delete domain_currency;
	//domain_currency = NULL;
	//}
	//if(domain_expire_date != NULL) {
	//
	//delete domain_expire_date;
	//domain_expire_date = NULL;
	//}
	//if(domain_order_date != NULL) {
	//
	//delete domain_order_date;
	//domain_order_date = NULL;
	//}
	//if(domain_custid != NULL) {
	//
	//delete domain_custid;
	//domain_custid = NULL;
	//}
	//if(domain_status != NULL) {
	//
	//delete domain_status;
	//domain_status = NULL;
	//}
	//if(domain_invoice != NULL) {
	//
	//delete domain_invoice;
	//domain_invoice = NULL;
	//}
	//if(domain_coupon != NULL) {
	//
	//delete domain_coupon;
	//domain_coupon = NULL;
	//}
	//
}

void
DomainServiceInfo::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *domain_idKey = "domain_id";
	node = json_object_get_member(pJsonObject, domain_idKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&domain_id, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *domain_hostnameKey = "domain_hostname";
	node = json_object_get_member(pJsonObject, domain_hostnameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&domain_hostname, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *domain_usernameKey = "domain_username";
	node = json_object_get_member(pJsonObject, domain_usernameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&domain_username, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *domain_passwordKey = "domain_password";
	node = json_object_get_member(pJsonObject, domain_passwordKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&domain_password, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *domain_typeKey = "domain_type";
	node = json_object_get_member(pJsonObject, domain_typeKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&domain_type, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *domain_currencyKey = "domain_currency";
	node = json_object_get_member(pJsonObject, domain_currencyKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&domain_currency, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *domain_expire_dateKey = "domain_expire_date";
	node = json_object_get_member(pJsonObject, domain_expire_dateKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&domain_expire_date, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *domain_order_dateKey = "domain_order_date";
	node = json_object_get_member(pJsonObject, domain_order_dateKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&domain_order_date, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *domain_custidKey = "domain_custid";
	node = json_object_get_member(pJsonObject, domain_custidKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&domain_custid, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *domain_statusKey = "domain_status";
	node = json_object_get_member(pJsonObject, domain_statusKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&domain_status, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *domain_invoiceKey = "domain_invoice";
	node = json_object_get_member(pJsonObject, domain_invoiceKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&domain_invoice, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *domain_couponKey = "domain_coupon";
	node = json_object_get_member(pJsonObject, domain_couponKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&domain_coupon, node, "std::string", "");
		} else {
			
		}
	}
}

DomainServiceInfo::DomainServiceInfo(char* json)
{
	this->fromJson(json);
}

char*
DomainServiceInfo::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getDomainId();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *domain_idKey = "domain_id";
	json_object_set_member(pJsonObject, domain_idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getDomainHostname();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *domain_hostnameKey = "domain_hostname";
	json_object_set_member(pJsonObject, domain_hostnameKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getDomainUsername();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *domain_usernameKey = "domain_username";
	json_object_set_member(pJsonObject, domain_usernameKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getDomainPassword();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *domain_passwordKey = "domain_password";
	json_object_set_member(pJsonObject, domain_passwordKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getDomainType();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *domain_typeKey = "domain_type";
	json_object_set_member(pJsonObject, domain_typeKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getDomainCurrency();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *domain_currencyKey = "domain_currency";
	json_object_set_member(pJsonObject, domain_currencyKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getDomainExpireDate();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *domain_expire_dateKey = "domain_expire_date";
	json_object_set_member(pJsonObject, domain_expire_dateKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getDomainOrderDate();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *domain_order_dateKey = "domain_order_date";
	json_object_set_member(pJsonObject, domain_order_dateKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getDomainCustid();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *domain_custidKey = "domain_custid";
	json_object_set_member(pJsonObject, domain_custidKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getDomainStatus();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *domain_statusKey = "domain_status";
	json_object_set_member(pJsonObject, domain_statusKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getDomainInvoice();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *domain_invoiceKey = "domain_invoice";
	json_object_set_member(pJsonObject, domain_invoiceKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getDomainCoupon();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *domain_couponKey = "domain_coupon";
	json_object_set_member(pJsonObject, domain_couponKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
DomainServiceInfo::getDomainId()
{
	return domain_id;
}

void
DomainServiceInfo::setDomainId(std::string  domain_id)
{
	this->domain_id = domain_id;
}

std::string
DomainServiceInfo::getDomainHostname()
{
	return domain_hostname;
}

void
DomainServiceInfo::setDomainHostname(std::string  domain_hostname)
{
	this->domain_hostname = domain_hostname;
}

std::string
DomainServiceInfo::getDomainUsername()
{
	return domain_username;
}

void
DomainServiceInfo::setDomainUsername(std::string  domain_username)
{
	this->domain_username = domain_username;
}

std::string
DomainServiceInfo::getDomainPassword()
{
	return domain_password;
}

void
DomainServiceInfo::setDomainPassword(std::string  domain_password)
{
	this->domain_password = domain_password;
}

std::string
DomainServiceInfo::getDomainType()
{
	return domain_type;
}

void
DomainServiceInfo::setDomainType(std::string  domain_type)
{
	this->domain_type = domain_type;
}

std::string
DomainServiceInfo::getDomainCurrency()
{
	return domain_currency;
}

void
DomainServiceInfo::setDomainCurrency(std::string  domain_currency)
{
	this->domain_currency = domain_currency;
}

std::string
DomainServiceInfo::getDomainExpireDate()
{
	return domain_expire_date;
}

void
DomainServiceInfo::setDomainExpireDate(std::string  domain_expire_date)
{
	this->domain_expire_date = domain_expire_date;
}

std::string
DomainServiceInfo::getDomainOrderDate()
{
	return domain_order_date;
}

void
DomainServiceInfo::setDomainOrderDate(std::string  domain_order_date)
{
	this->domain_order_date = domain_order_date;
}

std::string
DomainServiceInfo::getDomainCustid()
{
	return domain_custid;
}

void
DomainServiceInfo::setDomainCustid(std::string  domain_custid)
{
	this->domain_custid = domain_custid;
}

std::string
DomainServiceInfo::getDomainStatus()
{
	return domain_status;
}

void
DomainServiceInfo::setDomainStatus(std::string  domain_status)
{
	this->domain_status = domain_status;
}

std::string
DomainServiceInfo::getDomainInvoice()
{
	return domain_invoice;
}

void
DomainServiceInfo::setDomainInvoice(std::string  domain_invoice)
{
	this->domain_invoice = domain_invoice;
}

std::string
DomainServiceInfo::getDomainCoupon()
{
	return domain_coupon;
}

void
DomainServiceInfo::setDomainCoupon(std::string  domain_coupon)
{
	this->domain_coupon = domain_coupon;
}


