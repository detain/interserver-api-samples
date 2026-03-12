

#include "ChargeInvoiceRows_invoices_value.h"

using namespace Tiny;

ChargeInvoiceRows_invoices_value::ChargeInvoiceRows_invoices_value()
{
	invoices_id = float(0);
	invoices_description = std::string();
	invoices_amount = float(0);
	invoices_date = std::string();
	invoices_paid = float(0);
	invoices_due_date = std::string();
	invoices_currency = std::string();
	currency_symbol = std::string();
	invoices_date_formatted = std::string();
	paid_invoices = null<ChargeInvoiceRows_invoices_value_paid_invoices_value>();
}

ChargeInvoiceRows_invoices_value::ChargeInvoiceRows_invoices_value(std::string jsonString)
{
	this->fromJson(jsonString);
}

ChargeInvoiceRows_invoices_value::~ChargeInvoiceRows_invoices_value()
{

}

void
ChargeInvoiceRows_invoices_value::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *invoices_idKey = "invoices_id";

    if(object.has_key(invoices_idKey))
    {
        bourne::json value = object[invoices_idKey];



        jsonToValue(&invoices_id, value, "long");


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

    const char *invoices_paidKey = "invoices_paid";

    if(object.has_key(invoices_paidKey))
    {
        bourne::json value = object[invoices_paidKey];



        jsonToValue(&invoices_paid, value, "long");


    }

    const char *invoices_due_dateKey = "invoices_due_date";

    if(object.has_key(invoices_due_dateKey))
    {
        bourne::json value = object[invoices_due_dateKey];



        jsonToValue(&invoices_due_date, value, "std::string");


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

    const char *paid_invoicesKey = "paid_invoices";

    if(object.has_key(paid_invoicesKey))
    {
        bourne::json value = object[paid_invoicesKey];


    }


}

bourne::json
ChargeInvoiceRows_invoices_value::toJson()
{
    bourne::json object = bourne::json::object();





    object["invoices_id"] = getInvoicesId();






    object["invoices_description"] = getInvoicesDescription();






    object["invoices_amount"] = getInvoicesAmount();






    object["invoices_date"] = getInvoicesDate();






    object["invoices_paid"] = getInvoicesPaid();






    object["invoices_due_date"] = getInvoicesDueDate();






    object["invoices_currency"] = getInvoicesCurrency();






    object["currency_symbol"] = getCurrencySymbol();






    object["invoices_date_formatted"] = getInvoicesDateFormatted();






    return object;

}

long
ChargeInvoiceRows_invoices_value::getInvoicesId()
{
	return invoices_id;
}

void
ChargeInvoiceRows_invoices_value::setInvoicesId(long invoices_id)
{
	this->invoices_id = invoices_id;
}

std::string
ChargeInvoiceRows_invoices_value::getInvoicesDescription()
{
	return invoices_description;
}

void
ChargeInvoiceRows_invoices_value::setInvoicesDescription(std::string invoices_description)
{
	this->invoices_description = invoices_description;
}

long
ChargeInvoiceRows_invoices_value::getInvoicesAmount()
{
	return invoices_amount;
}

void
ChargeInvoiceRows_invoices_value::setInvoicesAmount(long invoices_amount)
{
	this->invoices_amount = invoices_amount;
}

std::string
ChargeInvoiceRows_invoices_value::getInvoicesDate()
{
	return invoices_date;
}

void
ChargeInvoiceRows_invoices_value::setInvoicesDate(std::string invoices_date)
{
	this->invoices_date = invoices_date;
}

long
ChargeInvoiceRows_invoices_value::getInvoicesPaid()
{
	return invoices_paid;
}

void
ChargeInvoiceRows_invoices_value::setInvoicesPaid(long invoices_paid)
{
	this->invoices_paid = invoices_paid;
}

std::string
ChargeInvoiceRows_invoices_value::getInvoicesDueDate()
{
	return invoices_due_date;
}

void
ChargeInvoiceRows_invoices_value::setInvoicesDueDate(std::string invoices_due_date)
{
	this->invoices_due_date = invoices_due_date;
}

std::string
ChargeInvoiceRows_invoices_value::getInvoicesCurrency()
{
	return invoices_currency;
}

void
ChargeInvoiceRows_invoices_value::setInvoicesCurrency(std::string invoices_currency)
{
	this->invoices_currency = invoices_currency;
}

std::string
ChargeInvoiceRows_invoices_value::getCurrencySymbol()
{
	return currency_symbol;
}

void
ChargeInvoiceRows_invoices_value::setCurrencySymbol(std::string currency_symbol)
{
	this->currency_symbol = currency_symbol;
}

std::string
ChargeInvoiceRows_invoices_value::getInvoicesDateFormatted()
{
	return invoices_date_formatted;
}

void
ChargeInvoiceRows_invoices_value::setInvoicesDateFormatted(std::string invoices_date_formatted)
{
	this->invoices_date_formatted = invoices_date_formatted;
}

std::map<std::string, ChargeInvoiceRows_invoices_value_paid_invoices_value>
ChargeInvoiceRows_invoices_value::getPaidInvoices()
{
	return paid_invoices;
}

void
ChargeInvoiceRows_invoices_value::setPaidInvoices(std::map<std::string, ChargeInvoiceRows_invoices_value_paid_invoices_value> paid_invoices)
{
	this->paid_invoices = paid_invoices;
}



