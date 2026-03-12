#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "BackupServiceInfo.h"

using namespace std;
using namespace Tizen::ArtikCloud;

BackupServiceInfo::BackupServiceInfo()
{
	//__init();
}

BackupServiceInfo::~BackupServiceInfo()
{
	//__cleanup();
}

void
BackupServiceInfo::__init()
{
	//backup_id = std::string();
	//backup_server = std::string();
	//backup_username = std::string();
	//backup_type = std::string();
	//backup_currency = std::string();
	//backup_order_date = std::string();
	//backup_custid = std::string();
	//backup_quota = std::string();
	//backup_ip = std::string();
	//backup_status = std::string();
	//backup_invoice = std::string();
	//backup_coupon = std::string();
	//backup_extra = std::string();
	//backup_server_status = std::string();
	//backup_comment = std::string();
}

void
BackupServiceInfo::__cleanup()
{
	//if(backup_id != NULL) {
	//
	//delete backup_id;
	//backup_id = NULL;
	//}
	//if(backup_server != NULL) {
	//
	//delete backup_server;
	//backup_server = NULL;
	//}
	//if(backup_username != NULL) {
	//
	//delete backup_username;
	//backup_username = NULL;
	//}
	//if(backup_type != NULL) {
	//
	//delete backup_type;
	//backup_type = NULL;
	//}
	//if(backup_currency != NULL) {
	//
	//delete backup_currency;
	//backup_currency = NULL;
	//}
	//if(backup_order_date != NULL) {
	//
	//delete backup_order_date;
	//backup_order_date = NULL;
	//}
	//if(backup_custid != NULL) {
	//
	//delete backup_custid;
	//backup_custid = NULL;
	//}
	//if(backup_quota != NULL) {
	//
	//delete backup_quota;
	//backup_quota = NULL;
	//}
	//if(backup_ip != NULL) {
	//
	//delete backup_ip;
	//backup_ip = NULL;
	//}
	//if(backup_status != NULL) {
	//
	//delete backup_status;
	//backup_status = NULL;
	//}
	//if(backup_invoice != NULL) {
	//
	//delete backup_invoice;
	//backup_invoice = NULL;
	//}
	//if(backup_coupon != NULL) {
	//
	//delete backup_coupon;
	//backup_coupon = NULL;
	//}
	//if(backup_extra != NULL) {
	//
	//delete backup_extra;
	//backup_extra = NULL;
	//}
	//if(backup_server_status != NULL) {
	//
	//delete backup_server_status;
	//backup_server_status = NULL;
	//}
	//if(backup_comment != NULL) {
	//
	//delete backup_comment;
	//backup_comment = NULL;
	//}
	//
}

void
BackupServiceInfo::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *backup_idKey = "backup_id";
	node = json_object_get_member(pJsonObject, backup_idKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&backup_id, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *backup_serverKey = "backup_server";
	node = json_object_get_member(pJsonObject, backup_serverKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&backup_server, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *backup_usernameKey = "backup_username";
	node = json_object_get_member(pJsonObject, backup_usernameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&backup_username, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *backup_typeKey = "backup_type";
	node = json_object_get_member(pJsonObject, backup_typeKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&backup_type, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *backup_currencyKey = "backup_currency";
	node = json_object_get_member(pJsonObject, backup_currencyKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&backup_currency, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *backup_order_dateKey = "backup_order_date";
	node = json_object_get_member(pJsonObject, backup_order_dateKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&backup_order_date, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *backup_custidKey = "backup_custid";
	node = json_object_get_member(pJsonObject, backup_custidKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&backup_custid, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *backup_quotaKey = "backup_quota";
	node = json_object_get_member(pJsonObject, backup_quotaKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&backup_quota, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *backup_ipKey = "backup_ip";
	node = json_object_get_member(pJsonObject, backup_ipKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&backup_ip, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *backup_statusKey = "backup_status";
	node = json_object_get_member(pJsonObject, backup_statusKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&backup_status, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *backup_invoiceKey = "backup_invoice";
	node = json_object_get_member(pJsonObject, backup_invoiceKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&backup_invoice, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *backup_couponKey = "backup_coupon";
	node = json_object_get_member(pJsonObject, backup_couponKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&backup_coupon, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *backup_extraKey = "backup_extra";
	node = json_object_get_member(pJsonObject, backup_extraKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&backup_extra, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *backup_server_statusKey = "backup_server_status";
	node = json_object_get_member(pJsonObject, backup_server_statusKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&backup_server_status, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *backup_commentKey = "backup_comment";
	node = json_object_get_member(pJsonObject, backup_commentKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&backup_comment, node, "std::string", "");
		} else {
			
		}
	}
}

BackupServiceInfo::BackupServiceInfo(char* json)
{
	this->fromJson(json);
}

char*
BackupServiceInfo::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getBackupId();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *backup_idKey = "backup_id";
	json_object_set_member(pJsonObject, backup_idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getBackupServer();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *backup_serverKey = "backup_server";
	json_object_set_member(pJsonObject, backup_serverKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getBackupUsername();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *backup_usernameKey = "backup_username";
	json_object_set_member(pJsonObject, backup_usernameKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getBackupType();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *backup_typeKey = "backup_type";
	json_object_set_member(pJsonObject, backup_typeKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getBackupCurrency();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *backup_currencyKey = "backup_currency";
	json_object_set_member(pJsonObject, backup_currencyKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getBackupOrderDate();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *backup_order_dateKey = "backup_order_date";
	json_object_set_member(pJsonObject, backup_order_dateKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getBackupCustid();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *backup_custidKey = "backup_custid";
	json_object_set_member(pJsonObject, backup_custidKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getBackupQuota();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *backup_quotaKey = "backup_quota";
	json_object_set_member(pJsonObject, backup_quotaKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getBackupIp();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *backup_ipKey = "backup_ip";
	json_object_set_member(pJsonObject, backup_ipKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getBackupStatus();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *backup_statusKey = "backup_status";
	json_object_set_member(pJsonObject, backup_statusKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getBackupInvoice();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *backup_invoiceKey = "backup_invoice";
	json_object_set_member(pJsonObject, backup_invoiceKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getBackupCoupon();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *backup_couponKey = "backup_coupon";
	json_object_set_member(pJsonObject, backup_couponKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getBackupExtra();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *backup_extraKey = "backup_extra";
	json_object_set_member(pJsonObject, backup_extraKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getBackupServerStatus();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *backup_server_statusKey = "backup_server_status";
	json_object_set_member(pJsonObject, backup_server_statusKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getBackupComment();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *backup_commentKey = "backup_comment";
	json_object_set_member(pJsonObject, backup_commentKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
BackupServiceInfo::getBackupId()
{
	return backup_id;
}

void
BackupServiceInfo::setBackupId(std::string  backup_id)
{
	this->backup_id = backup_id;
}

std::string
BackupServiceInfo::getBackupServer()
{
	return backup_server;
}

void
BackupServiceInfo::setBackupServer(std::string  backup_server)
{
	this->backup_server = backup_server;
}

std::string
BackupServiceInfo::getBackupUsername()
{
	return backup_username;
}

void
BackupServiceInfo::setBackupUsername(std::string  backup_username)
{
	this->backup_username = backup_username;
}

std::string
BackupServiceInfo::getBackupType()
{
	return backup_type;
}

void
BackupServiceInfo::setBackupType(std::string  backup_type)
{
	this->backup_type = backup_type;
}

std::string
BackupServiceInfo::getBackupCurrency()
{
	return backup_currency;
}

void
BackupServiceInfo::setBackupCurrency(std::string  backup_currency)
{
	this->backup_currency = backup_currency;
}

std::string
BackupServiceInfo::getBackupOrderDate()
{
	return backup_order_date;
}

void
BackupServiceInfo::setBackupOrderDate(std::string  backup_order_date)
{
	this->backup_order_date = backup_order_date;
}

std::string
BackupServiceInfo::getBackupCustid()
{
	return backup_custid;
}

void
BackupServiceInfo::setBackupCustid(std::string  backup_custid)
{
	this->backup_custid = backup_custid;
}

std::string
BackupServiceInfo::getBackupQuota()
{
	return backup_quota;
}

void
BackupServiceInfo::setBackupQuota(std::string  backup_quota)
{
	this->backup_quota = backup_quota;
}

std::string
BackupServiceInfo::getBackupIp()
{
	return backup_ip;
}

void
BackupServiceInfo::setBackupIp(std::string  backup_ip)
{
	this->backup_ip = backup_ip;
}

std::string
BackupServiceInfo::getBackupStatus()
{
	return backup_status;
}

void
BackupServiceInfo::setBackupStatus(std::string  backup_status)
{
	this->backup_status = backup_status;
}

std::string
BackupServiceInfo::getBackupInvoice()
{
	return backup_invoice;
}

void
BackupServiceInfo::setBackupInvoice(std::string  backup_invoice)
{
	this->backup_invoice = backup_invoice;
}

std::string
BackupServiceInfo::getBackupCoupon()
{
	return backup_coupon;
}

void
BackupServiceInfo::setBackupCoupon(std::string  backup_coupon)
{
	this->backup_coupon = backup_coupon;
}

std::string
BackupServiceInfo::getBackupExtra()
{
	return backup_extra;
}

void
BackupServiceInfo::setBackupExtra(std::string  backup_extra)
{
	this->backup_extra = backup_extra;
}

std::string
BackupServiceInfo::getBackupServerStatus()
{
	return backup_server_status;
}

void
BackupServiceInfo::setBackupServerStatus(std::string  backup_server_status)
{
	this->backup_server_status = backup_server_status;
}

std::string
BackupServiceInfo::getBackupComment()
{
	return backup_comment;
}

void
BackupServiceInfo::setBackupComment(std::string  backup_comment)
{
	this->backup_comment = backup_comment;
}


