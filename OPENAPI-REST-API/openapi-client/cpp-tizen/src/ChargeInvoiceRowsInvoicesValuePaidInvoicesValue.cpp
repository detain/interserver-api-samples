#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "ChargeInvoiceRows_invoices_value_paid_invoices_value.h"

using namespace std;
using namespace Tizen::ArtikCloud;

ChargeInvoiceRows_invoices_value_paid_invoices_value::ChargeInvoiceRows_invoices_value_paid_invoices_value()
{
	//__init();
}

ChargeInvoiceRows_invoices_value_paid_invoices_value::~ChargeInvoiceRows_invoices_value_paid_invoices_value()
{
	//__cleanup();
}

void
ChargeInvoiceRows_invoices_value_paid_invoices_value::__init()
{
	//invoices_id = std::string();
	//invoices_description = std::string();
	//invoices_amount = double(0);
	//invoices_date = std::string();
	//invoices_currency = std::string();
	//currency_symbol = std::string();
	//invoices_date_formatted = std::string();
	//payment_type = std::string();
	//new std::map()std::map> refund_invoices;
}

void
ChargeInvoiceRows_invoices_value_paid_invoices_value::__cleanup()
{
	//if(invoices_id != NULL) {
	//
	//delete invoices_id;
	//invoices_id = NULL;
	//}
	//if(invoices_description != NULL) {
	//
	//delete invoices_description;
	//invoices_description = NULL;
	//}
	//if(invoices_amount != NULL) {
	//
	//delete invoices_amount;
	//invoices_amount = NULL;
	//}
	//if(invoices_date != NULL) {
	//
	//delete invoices_date;
	//invoices_date = NULL;
	//}
	//if(invoices_currency != NULL) {
	//
	//delete invoices_currency;
	//invoices_currency = NULL;
	//}
	//if(currency_symbol != NULL) {
	//
	//delete currency_symbol;
	//currency_symbol = NULL;
	//}
	//if(invoices_date_formatted != NULL) {
	//
	//delete invoices_date_formatted;
	//invoices_date_formatted = NULL;
	//}
	//if(payment_type != NULL) {
	//
	//delete payment_type;
	//payment_type = NULL;
	//}
	//if(refund_invoices != NULL) {
	//refund_invoices.RemoveAll(true);
	//delete refund_invoices;
	//refund_invoices = NULL;
	//}
	//
}

void
ChargeInvoiceRows_invoices_value_paid_invoices_value::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *invoices_idKey = "invoices_id";
	node = json_object_get_member(pJsonObject, invoices_idKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&invoices_id, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *invoices_descriptionKey = "invoices_description";
	node = json_object_get_member(pJsonObject, invoices_descriptionKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&invoices_description, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *invoices_amountKey = "invoices_amount";
	node = json_object_get_member(pJsonObject, invoices_amountKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&invoices_amount, node, "long long", "");
		} else {
			
			long long* obj = static_cast<long long*> (&invoices_amount);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *invoices_dateKey = "invoices_date";
	node = json_object_get_member(pJsonObject, invoices_dateKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&invoices_date, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *invoices_currencyKey = "invoices_currency";
	node = json_object_get_member(pJsonObject, invoices_currencyKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&invoices_currency, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *currency_symbolKey = "currency_symbol";
	node = json_object_get_member(pJsonObject, currency_symbolKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&currency_symbol, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *invoices_date_formattedKey = "invoices_date_formatted";
	node = json_object_get_member(pJsonObject, invoices_date_formattedKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&invoices_date_formatted, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *payment_typeKey = "payment_type";
	node = json_object_get_member(pJsonObject, payment_typeKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&payment_type, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *refund_invoicesKey = "refund_invoices";
	node = json_object_get_member(pJsonObject, refund_invoicesKey);
	if (node !=NULL) {
	
		{
			JsonObject* json_obj = json_node_get_object(node);
			map<string,string> new_map;
			json_object_foreach_member(json_obj,helper_func,&new_map);
			refund_invoices = new_map;
		}
		
	}
}

ChargeInvoiceRows_invoices_value_paid_invoices_value::ChargeInvoiceRows_invoices_value_paid_invoices_value(char* json)
{
	this->fromJson(json);
}

char*
ChargeInvoiceRows_invoices_value_paid_invoices_value::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getInvoicesId();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *invoices_idKey = "invoices_id";
	json_object_set_member(pJsonObject, invoices_idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getInvoicesDescription();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *invoices_descriptionKey = "invoices_description";
	json_object_set_member(pJsonObject, invoices_descriptionKey, node);
	if (isprimitive("long long")) {
		long long obj = getInvoicesAmount();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
		long long obj = static_cast<long long> (getInvoicesAmount());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *invoices_amountKey = "invoices_amount";
	json_object_set_member(pJsonObject, invoices_amountKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getInvoicesDate();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *invoices_dateKey = "invoices_date";
	json_object_set_member(pJsonObject, invoices_dateKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getInvoicesCurrency();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *invoices_currencyKey = "invoices_currency";
	json_object_set_member(pJsonObject, invoices_currencyKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getCurrencySymbol();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *currency_symbolKey = "currency_symbol";
	json_object_set_member(pJsonObject, currency_symbolKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getInvoicesDateFormatted();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *invoices_date_formattedKey = "invoices_date_formatted";
	json_object_set_member(pJsonObject, invoices_date_formattedKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getPaymentType();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *payment_typeKey = "payment_type";
	json_object_set_member(pJsonObject, payment_typeKey, node);


	{
		JsonObject* json_obj;
		map<string, string> new_list = static_cast<map <string, string> > (getRefundInvoices());
		json_obj = json_object_new();
		for (map<string, string>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			string obj = (*it).first;
			string obj2 = (*it).second;
			JsonNode* tempnode = json_from_string(obj2.c_str(),NULL);
			json_object_set_member(json_obj, obj.c_str(), tempnode);
		}
	node = json_node_alloc();
	json_node_init_object(node, json_obj);
	json_object_unref(json_obj);
	}

	const gchar *refund_invoicesKey = "refund_invoices";
	json_object_set_member(pJsonObject, refund_invoicesKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
ChargeInvoiceRows_invoices_value_paid_invoices_value::getInvoicesId()
{
	return invoices_id;
}

void
ChargeInvoiceRows_invoices_value_paid_invoices_value::setInvoicesId(std::string  invoices_id)
{
	this->invoices_id = invoices_id;
}

std::string
ChargeInvoiceRows_invoices_value_paid_invoices_value::getInvoicesDescription()
{
	return invoices_description;
}

void
ChargeInvoiceRows_invoices_value_paid_invoices_value::setInvoicesDescription(std::string  invoices_description)
{
	this->invoices_description = invoices_description;
}

long long
ChargeInvoiceRows_invoices_value_paid_invoices_value::getInvoicesAmount()
{
	return invoices_amount;
}

void
ChargeInvoiceRows_invoices_value_paid_invoices_value::setInvoicesAmount(long long  invoices_amount)
{
	this->invoices_amount = invoices_amount;
}

std::string
ChargeInvoiceRows_invoices_value_paid_invoices_value::getInvoicesDate()
{
	return invoices_date;
}

void
ChargeInvoiceRows_invoices_value_paid_invoices_value::setInvoicesDate(std::string  invoices_date)
{
	this->invoices_date = invoices_date;
}

std::string
ChargeInvoiceRows_invoices_value_paid_invoices_value::getInvoicesCurrency()
{
	return invoices_currency;
}

void
ChargeInvoiceRows_invoices_value_paid_invoices_value::setInvoicesCurrency(std::string  invoices_currency)
{
	this->invoices_currency = invoices_currency;
}

std::string
ChargeInvoiceRows_invoices_value_paid_invoices_value::getCurrencySymbol()
{
	return currency_symbol;
}

void
ChargeInvoiceRows_invoices_value_paid_invoices_value::setCurrencySymbol(std::string  currency_symbol)
{
	this->currency_symbol = currency_symbol;
}

std::string
ChargeInvoiceRows_invoices_value_paid_invoices_value::getInvoicesDateFormatted()
{
	return invoices_date_formatted;
}

void
ChargeInvoiceRows_invoices_value_paid_invoices_value::setInvoicesDateFormatted(std::string  invoices_date_formatted)
{
	this->invoices_date_formatted = invoices_date_formatted;
}

std::string
ChargeInvoiceRows_invoices_value_paid_invoices_value::getPaymentType()
{
	return payment_type;
}

void
ChargeInvoiceRows_invoices_value_paid_invoices_value::setPaymentType(std::string  payment_type)
{
	this->payment_type = payment_type;
}

std::map<string, string>
ChargeInvoiceRows_invoices_value_paid_invoices_value::getRefundInvoices()
{
	return refund_invoices;
}

void
ChargeInvoiceRows_invoices_value_paid_invoices_value::setRefundInvoices(std::map <string, string> refund_invoices)
{
	this->refund_invoices = refund_invoices;
}


