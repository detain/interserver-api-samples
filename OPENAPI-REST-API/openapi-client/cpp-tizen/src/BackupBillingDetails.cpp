#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "BackupBillingDetails.h"

using namespace std;
using namespace Tizen::ArtikCloud;

BackupBillingDetails::BackupBillingDetails()
{
	//__init();
}

BackupBillingDetails::~BackupBillingDetails()
{
	//__cleanup();
}

void
BackupBillingDetails::__init()
{
	//service_last_invoice_date = std::string();
	//service_payment_status = std::string();
	//service_frequency = std::string();
	//next_date = std::string();
	//service_next_invoice_date = std::string();
	//service_currency = std::string();
	//service_currency_symbol = std::string();
	//service_cost_info = std::string();
	//service_extra = std::string();
	//service_extra_json = std::string();
}

void
BackupBillingDetails::__cleanup()
{
	//if(service_last_invoice_date != NULL) {
	//
	//delete service_last_invoice_date;
	//service_last_invoice_date = NULL;
	//}
	//if(service_payment_status != NULL) {
	//
	//delete service_payment_status;
	//service_payment_status = NULL;
	//}
	//if(service_frequency != NULL) {
	//
	//delete service_frequency;
	//service_frequency = NULL;
	//}
	//if(next_date != NULL) {
	//
	//delete next_date;
	//next_date = NULL;
	//}
	//if(service_next_invoice_date != NULL) {
	//
	//delete service_next_invoice_date;
	//service_next_invoice_date = NULL;
	//}
	//if(service_currency != NULL) {
	//
	//delete service_currency;
	//service_currency = NULL;
	//}
	//if(service_currency_symbol != NULL) {
	//
	//delete service_currency_symbol;
	//service_currency_symbol = NULL;
	//}
	//if(service_cost_info != NULL) {
	//
	//delete service_cost_info;
	//service_cost_info = NULL;
	//}
	//if(service_extra != NULL) {
	//
	//delete service_extra;
	//service_extra = NULL;
	//}
	//if(service_extra_json != NULL) {
	//
	//delete service_extra_json;
	//service_extra_json = NULL;
	//}
	//
}

void
BackupBillingDetails::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *service_last_invoice_dateKey = "service_last_invoice_date";
	node = json_object_get_member(pJsonObject, service_last_invoice_dateKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&service_last_invoice_date, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *service_payment_statusKey = "service_payment_status";
	node = json_object_get_member(pJsonObject, service_payment_statusKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&service_payment_status, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *service_frequencyKey = "service_frequency";
	node = json_object_get_member(pJsonObject, service_frequencyKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&service_frequency, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *next_dateKey = "next_date";
	node = json_object_get_member(pJsonObject, next_dateKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&next_date, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *service_next_invoice_dateKey = "service_next_invoice_date";
	node = json_object_get_member(pJsonObject, service_next_invoice_dateKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&service_next_invoice_date, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *service_currencyKey = "service_currency";
	node = json_object_get_member(pJsonObject, service_currencyKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&service_currency, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *service_currency_symbolKey = "service_currency_symbol";
	node = json_object_get_member(pJsonObject, service_currency_symbolKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&service_currency_symbol, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *service_cost_infoKey = "service_cost_info";
	node = json_object_get_member(pJsonObject, service_cost_infoKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&service_cost_info, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *service_extraKey = "service_extra";
	node = json_object_get_member(pJsonObject, service_extraKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&service_extra, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *service_extra_jsonKey = "service_extra_json";
	node = json_object_get_member(pJsonObject, service_extra_jsonKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&service_extra_json, node, "std::string", "");
		} else {
			
		}
	}
}

BackupBillingDetails::BackupBillingDetails(char* json)
{
	this->fromJson(json);
}

char*
BackupBillingDetails::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getServiceLastInvoiceDate();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *service_last_invoice_dateKey = "service_last_invoice_date";
	json_object_set_member(pJsonObject, service_last_invoice_dateKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getServicePaymentStatus();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *service_payment_statusKey = "service_payment_status";
	json_object_set_member(pJsonObject, service_payment_statusKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getServiceFrequency();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *service_frequencyKey = "service_frequency";
	json_object_set_member(pJsonObject, service_frequencyKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getNextDate();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *next_dateKey = "next_date";
	json_object_set_member(pJsonObject, next_dateKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getServiceNextInvoiceDate();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *service_next_invoice_dateKey = "service_next_invoice_date";
	json_object_set_member(pJsonObject, service_next_invoice_dateKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getServiceCurrency();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *service_currencyKey = "service_currency";
	json_object_set_member(pJsonObject, service_currencyKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getServiceCurrencySymbol();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *service_currency_symbolKey = "service_currency_symbol";
	json_object_set_member(pJsonObject, service_currency_symbolKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getServiceCostInfo();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *service_cost_infoKey = "service_cost_info";
	json_object_set_member(pJsonObject, service_cost_infoKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getServiceExtra();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *service_extraKey = "service_extra";
	json_object_set_member(pJsonObject, service_extraKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getServiceExtraJson();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *service_extra_jsonKey = "service_extra_json";
	json_object_set_member(pJsonObject, service_extra_jsonKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
BackupBillingDetails::getServiceLastInvoiceDate()
{
	return service_last_invoice_date;
}

void
BackupBillingDetails::setServiceLastInvoiceDate(std::string  service_last_invoice_date)
{
	this->service_last_invoice_date = service_last_invoice_date;
}

std::string
BackupBillingDetails::getServicePaymentStatus()
{
	return service_payment_status;
}

void
BackupBillingDetails::setServicePaymentStatus(std::string  service_payment_status)
{
	this->service_payment_status = service_payment_status;
}

std::string
BackupBillingDetails::getServiceFrequency()
{
	return service_frequency;
}

void
BackupBillingDetails::setServiceFrequency(std::string  service_frequency)
{
	this->service_frequency = service_frequency;
}

std::string
BackupBillingDetails::getNextDate()
{
	return next_date;
}

void
BackupBillingDetails::setNextDate(std::string  next_date)
{
	this->next_date = next_date;
}

std::string
BackupBillingDetails::getServiceNextInvoiceDate()
{
	return service_next_invoice_date;
}

void
BackupBillingDetails::setServiceNextInvoiceDate(std::string  service_next_invoice_date)
{
	this->service_next_invoice_date = service_next_invoice_date;
}

std::string
BackupBillingDetails::getServiceCurrency()
{
	return service_currency;
}

void
BackupBillingDetails::setServiceCurrency(std::string  service_currency)
{
	this->service_currency = service_currency;
}

std::string
BackupBillingDetails::getServiceCurrencySymbol()
{
	return service_currency_symbol;
}

void
BackupBillingDetails::setServiceCurrencySymbol(std::string  service_currency_symbol)
{
	this->service_currency_symbol = service_currency_symbol;
}

std::string
BackupBillingDetails::getServiceCostInfo()
{
	return service_cost_info;
}

void
BackupBillingDetails::setServiceCostInfo(std::string  service_cost_info)
{
	this->service_cost_info = service_cost_info;
}

std::string
BackupBillingDetails::getServiceExtra()
{
	return service_extra;
}

void
BackupBillingDetails::setServiceExtra(std::string  service_extra)
{
	this->service_extra = service_extra;
}

std::string
BackupBillingDetails::getServiceExtraJson()
{
	return service_extra_json;
}

void
BackupBillingDetails::setServiceExtraJson(std::string  service_extra_json)
{
	this->service_extra_json = service_extra_json;
}


