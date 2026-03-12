#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "MailServiceInfo.h"

using namespace std;
using namespace Tizen::ArtikCloud;

MailServiceInfo::MailServiceInfo()
{
	//__init();
}

MailServiceInfo::~MailServiceInfo()
{
	//__cleanup();
}

void
MailServiceInfo::__init()
{
	//mail_id = std::string();
	//mail_type = std::string();
	//mail_currency = std::string();
	//mail_order_date = std::string();
	//mail_custid = std::string();
	//mail_quota = std::string();
	//mail_status = std::string();
	//mail_invoice = std::string();
	//mail_username = std::string();
	//mail_ip = std::string();
	//mail_coupon = std::string();
	//mail_extra = std::string();
	//mail_server_status = std::string();
	//mail_comment = std::string();
}

void
MailServiceInfo::__cleanup()
{
	//if(mail_id != NULL) {
	//
	//delete mail_id;
	//mail_id = NULL;
	//}
	//if(mail_type != NULL) {
	//
	//delete mail_type;
	//mail_type = NULL;
	//}
	//if(mail_currency != NULL) {
	//
	//delete mail_currency;
	//mail_currency = NULL;
	//}
	//if(mail_order_date != NULL) {
	//
	//delete mail_order_date;
	//mail_order_date = NULL;
	//}
	//if(mail_custid != NULL) {
	//
	//delete mail_custid;
	//mail_custid = NULL;
	//}
	//if(mail_quota != NULL) {
	//
	//delete mail_quota;
	//mail_quota = NULL;
	//}
	//if(mail_status != NULL) {
	//
	//delete mail_status;
	//mail_status = NULL;
	//}
	//if(mail_invoice != NULL) {
	//
	//delete mail_invoice;
	//mail_invoice = NULL;
	//}
	//if(mail_username != NULL) {
	//
	//delete mail_username;
	//mail_username = NULL;
	//}
	//if(mail_ip != NULL) {
	//
	//delete mail_ip;
	//mail_ip = NULL;
	//}
	//if(mail_coupon != NULL) {
	//
	//delete mail_coupon;
	//mail_coupon = NULL;
	//}
	//if(mail_extra != NULL) {
	//
	//delete mail_extra;
	//mail_extra = NULL;
	//}
	//if(mail_server_status != NULL) {
	//
	//delete mail_server_status;
	//mail_server_status = NULL;
	//}
	//if(mail_comment != NULL) {
	//
	//delete mail_comment;
	//mail_comment = NULL;
	//}
	//
}

void
MailServiceInfo::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *mail_idKey = "mail_id";
	node = json_object_get_member(pJsonObject, mail_idKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&mail_id, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *mail_typeKey = "mail_type";
	node = json_object_get_member(pJsonObject, mail_typeKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&mail_type, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *mail_currencyKey = "mail_currency";
	node = json_object_get_member(pJsonObject, mail_currencyKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&mail_currency, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *mail_order_dateKey = "mail_order_date";
	node = json_object_get_member(pJsonObject, mail_order_dateKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&mail_order_date, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *mail_custidKey = "mail_custid";
	node = json_object_get_member(pJsonObject, mail_custidKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&mail_custid, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *mail_quotaKey = "mail_quota";
	node = json_object_get_member(pJsonObject, mail_quotaKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&mail_quota, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *mail_statusKey = "mail_status";
	node = json_object_get_member(pJsonObject, mail_statusKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&mail_status, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *mail_invoiceKey = "mail_invoice";
	node = json_object_get_member(pJsonObject, mail_invoiceKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&mail_invoice, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *mail_usernameKey = "mail_username";
	node = json_object_get_member(pJsonObject, mail_usernameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&mail_username, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *mail_ipKey = "mail_ip";
	node = json_object_get_member(pJsonObject, mail_ipKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&mail_ip, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *mail_couponKey = "mail_coupon";
	node = json_object_get_member(pJsonObject, mail_couponKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&mail_coupon, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *mail_extraKey = "mail_extra";
	node = json_object_get_member(pJsonObject, mail_extraKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&mail_extra, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *mail_server_statusKey = "mail_server_status";
	node = json_object_get_member(pJsonObject, mail_server_statusKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&mail_server_status, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *mail_commentKey = "mail_comment";
	node = json_object_get_member(pJsonObject, mail_commentKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&mail_comment, node, "std::string", "");
		} else {
			
		}
	}
}

MailServiceInfo::MailServiceInfo(char* json)
{
	this->fromJson(json);
}

char*
MailServiceInfo::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getMailId();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *mail_idKey = "mail_id";
	json_object_set_member(pJsonObject, mail_idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getMailType();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *mail_typeKey = "mail_type";
	json_object_set_member(pJsonObject, mail_typeKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getMailCurrency();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *mail_currencyKey = "mail_currency";
	json_object_set_member(pJsonObject, mail_currencyKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getMailOrderDate();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *mail_order_dateKey = "mail_order_date";
	json_object_set_member(pJsonObject, mail_order_dateKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getMailCustid();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *mail_custidKey = "mail_custid";
	json_object_set_member(pJsonObject, mail_custidKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getMailQuota();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *mail_quotaKey = "mail_quota";
	json_object_set_member(pJsonObject, mail_quotaKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getMailStatus();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *mail_statusKey = "mail_status";
	json_object_set_member(pJsonObject, mail_statusKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getMailInvoice();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *mail_invoiceKey = "mail_invoice";
	json_object_set_member(pJsonObject, mail_invoiceKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getMailUsername();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *mail_usernameKey = "mail_username";
	json_object_set_member(pJsonObject, mail_usernameKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getMailIp();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *mail_ipKey = "mail_ip";
	json_object_set_member(pJsonObject, mail_ipKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getMailCoupon();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *mail_couponKey = "mail_coupon";
	json_object_set_member(pJsonObject, mail_couponKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getMailExtra();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *mail_extraKey = "mail_extra";
	json_object_set_member(pJsonObject, mail_extraKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getMailServerStatus();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *mail_server_statusKey = "mail_server_status";
	json_object_set_member(pJsonObject, mail_server_statusKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getMailComment();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *mail_commentKey = "mail_comment";
	json_object_set_member(pJsonObject, mail_commentKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
MailServiceInfo::getMailId()
{
	return mail_id;
}

void
MailServiceInfo::setMailId(std::string  mail_id)
{
	this->mail_id = mail_id;
}

std::string
MailServiceInfo::getMailType()
{
	return mail_type;
}

void
MailServiceInfo::setMailType(std::string  mail_type)
{
	this->mail_type = mail_type;
}

std::string
MailServiceInfo::getMailCurrency()
{
	return mail_currency;
}

void
MailServiceInfo::setMailCurrency(std::string  mail_currency)
{
	this->mail_currency = mail_currency;
}

std::string
MailServiceInfo::getMailOrderDate()
{
	return mail_order_date;
}

void
MailServiceInfo::setMailOrderDate(std::string  mail_order_date)
{
	this->mail_order_date = mail_order_date;
}

std::string
MailServiceInfo::getMailCustid()
{
	return mail_custid;
}

void
MailServiceInfo::setMailCustid(std::string  mail_custid)
{
	this->mail_custid = mail_custid;
}

std::string
MailServiceInfo::getMailQuota()
{
	return mail_quota;
}

void
MailServiceInfo::setMailQuota(std::string  mail_quota)
{
	this->mail_quota = mail_quota;
}

std::string
MailServiceInfo::getMailStatus()
{
	return mail_status;
}

void
MailServiceInfo::setMailStatus(std::string  mail_status)
{
	this->mail_status = mail_status;
}

std::string
MailServiceInfo::getMailInvoice()
{
	return mail_invoice;
}

void
MailServiceInfo::setMailInvoice(std::string  mail_invoice)
{
	this->mail_invoice = mail_invoice;
}

std::string
MailServiceInfo::getMailUsername()
{
	return mail_username;
}

void
MailServiceInfo::setMailUsername(std::string  mail_username)
{
	this->mail_username = mail_username;
}

std::string
MailServiceInfo::getMailIp()
{
	return mail_ip;
}

void
MailServiceInfo::setMailIp(std::string  mail_ip)
{
	this->mail_ip = mail_ip;
}

std::string
MailServiceInfo::getMailCoupon()
{
	return mail_coupon;
}

void
MailServiceInfo::setMailCoupon(std::string  mail_coupon)
{
	this->mail_coupon = mail_coupon;
}

std::string
MailServiceInfo::getMailExtra()
{
	return mail_extra;
}

void
MailServiceInfo::setMailExtra(std::string  mail_extra)
{
	this->mail_extra = mail_extra;
}

std::string
MailServiceInfo::getMailServerStatus()
{
	return mail_server_status;
}

void
MailServiceInfo::setMailServerStatus(std::string  mail_server_status)
{
	this->mail_server_status = mail_server_status;
}

std::string
MailServiceInfo::getMailComment()
{
	return mail_comment;
}

void
MailServiceInfo::setMailComment(std::string  mail_comment)
{
	this->mail_comment = mail_comment;
}


