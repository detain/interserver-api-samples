

#include "ChargeInvoiceRows_invoices_value_paid_invoices_value.h"

using namespace Tiny;

ChargeInvoiceRows_invoices_value_paid_invoices_value::ChargeInvoiceRows_invoices_value_paid_invoices_value()
{
	invoices_id = std::string();
	invoices_description = std::string();
	invoices_amount = float(0);
	invoices_date = std::string();
	invoices_currency = std::string();
	currency_symbol = std::string();
	invoices_date_formatted = std::string();
	payment_type = std::string();
	refund_invoices = null<ChargeInvoiceRows_invoices_value_paid_invoices_value_refund_invoices_value>();
}

ChargeInvoiceRows_invoices_value_paid_invoices_value::ChargeInvoiceRows_invoices_value_paid_invoices_value(std::string jsonString)
{
	this->fromJson(jsonString);
}

ChargeInvoiceRows_invoices_value_paid_invoices_value::~ChargeInvoiceRows_invoices_value_paid_invoices_value()
{

}

void
ChargeInvoiceRows_invoices_value_paid_invoices_value::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *invoices_idKey = "invoices_id";

    if(object.has_key(invoices_idKey))
    {
        bourne::json value = object[invoices_idKey];



        jsonToValue(&invoices_id, value, "std::string");


    }

    const char *invoices_descriptionKey = "invoices_description";

    if(object.has_key(invoices_descriptionKey))
    {
        bourne::json value = object[invoices_descriptionKey];



        jsonToValue(&invoices_description, value, "std::string");


    }

    const char *invoices_amountKey = "invoices_amount";

    if(object.has_key(invoices_amountKey))
    {
        bourne::json value = object[invoices_amountKey];



        jsonToValue(&invoices_amount, value, "long");


    }

    const char *invoices_dateKey = "invoices_date";

    if(object.has_key(invoices_dateKey))
    {
        bourne::json value = object[invoices_dateKey];



        jsonToValue(&invoices_date, value, "std::string");


    }

    const char *invoices_currencyKey = "invoices_currency";

    if(object.has_key(invoices_currencyKey))
    {
        bourne::json value = object[invoices_currencyKey];



        jsonToValue(&invoices_currency, value, "std::string");


    }

    const char *currency_symbolKey = "currency_symbol";

    if(object.has_key(currency_symbolKey))
    {
        bourne::json value = object[currency_symbolKey];



        jsonToValue(&currency_symbol, value, "std::string");


    }

    const char *invoices_date_formattedKey = "invoices_date_formatted";

    if(object.has_key(invoices_date_formattedKey))
    {
        bourne::json value = object[invoices_date_formattedKey];



        jsonToValue(&invoices_date_formatted, value, "std::string");


    }

    const char *payment_typeKey = "payment_type";

    if(object.has_key(payment_typeKey))
    {
        bourne::json value = object[payment_typeKey];



        jsonToValue(&payment_type, value, "std::string");


    }

    const char *refund_invoicesKey = "refund_invoices";

    if(object.has_key(refund_invoicesKey))
    {
        bourne::json value = object[refund_invoicesKey];


    }


}

bourne::json
ChargeInvoiceRows_invoices_value_paid_invoices_value::toJson()
{
    bourne::json object = bourne::json::object();





    object["invoices_id"] = getInvoicesId();






    object["invoices_description"] = getInvoicesDescription();






    object["invoices_amount"] = getInvoicesAmount();






    object["invoices_date"] = getInvoicesDate();






    object["invoices_currency"] = getInvoicesCurrency();






    object["currency_symbol"] = getCurrencySymbol();






    object["invoices_date_formatted"] = getInvoicesDateFormatted();






    object["payment_type"] = getPaymentType();






    return object;

}

std::string
ChargeInvoiceRows_invoices_value_paid_invoices_value::getInvoicesId()
{
	return invoices_id;
}

void
ChargeInvoiceRows_invoices_value_paid_invoices_value::setInvoicesId(std::string invoices_id)
{
	this->invoices_id = invoices_id;
}

std::string
ChargeInvoiceRows_invoices_value_paid_invoices_value::getInvoicesDescription()
{
	return invoices_description;
}

void
ChargeInvoiceRows_invoices_value_paid_invoices_value::setInvoicesDescription(std::string invoices_description)
{
	this->invoices_description = invoices_description;
}

long
ChargeInvoiceRows_invoices_value_paid_invoices_value::getInvoicesAmount()
{
	return invoices_amount;
}

void
ChargeInvoiceRows_invoices_value_paid_invoices_value::setInvoicesAmount(long invoices_amount)
{
	this->invoices_amount = invoices_amount;
}

std::string
ChargeInvoiceRows_invoices_value_paid_invoices_value::getInvoicesDate()
{
	return invoices_date;
}

void
ChargeInvoiceRows_invoices_value_paid_invoices_value::setInvoicesDate(std::string invoices_date)
{
	this->invoices_date = invoices_date;
}

std::string
ChargeInvoiceRows_invoices_value_paid_invoices_value::getInvoicesCurrency()
{
	return invoices_currency;
}

void
ChargeInvoiceRows_invoices_value_paid_invoices_value::setInvoicesCurrency(std::string invoices_currency)
{
	this->invoices_currency = invoices_currency;
}

std::string
ChargeInvoiceRows_invoices_value_paid_invoices_value::getCurrencySymbol()
{
	return currency_symbol;
}

void
ChargeInvoiceRows_invoices_value_paid_invoices_value::setCurrencySymbol(std::string currency_symbol)
{
	this->currency_symbol = currency_symbol;
}

std::string
ChargeInvoiceRows_invoices_value_paid_invoices_value::getInvoicesDateFormatted()
{
	return invoices_date_formatted;
}

void
ChargeInvoiceRows_invoices_value_paid_invoices_value::setInvoicesDateFormatted(std::string invoices_date_formatted)
{
	this->invoices_date_formatted = invoices_date_formatted;
}

std::string
ChargeInvoiceRows_invoices_value_paid_invoices_value::getPaymentType()
{
	return payment_type;
}

void
ChargeInvoiceRows_invoices_value_paid_invoices_value::setPaymentType(std::string payment_type)
{
	this->payment_type = payment_type;
}

std::map<std::string, ChargeInvoiceRows_invoices_value_paid_invoices_value_refund_invoices_value>
ChargeInvoiceRows_invoices_value_paid_invoices_value::getRefundInvoices()
{
	return refund_invoices;
}

void
ChargeInvoiceRows_invoices_value_paid_invoices_value::setRefundInvoices(std::map<std::string, ChargeInvoiceRows_invoices_value_paid_invoices_value_refund_invoices_value> refund_invoices)
{
	this->refund_invoices = refund_invoices;
}



