

#include "ChargeInvoiceRows.h"

using namespace Tiny;

ChargeInvoiceRows::ChargeInvoiceRows()
{
	success = bool(false);
	invoices = null<ChargeInvoiceRows_invoices_value>();
}

ChargeInvoiceRows::ChargeInvoiceRows(std::string jsonString)
{
	this->fromJson(jsonString);
}

ChargeInvoiceRows::~ChargeInvoiceRows()
{

}

void
ChargeInvoiceRows::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *successKey = "success";

    if(object.has_key(successKey))
    {
        bourne::json value = object[successKey];



        jsonToValue(&success, value, "bool");


    }

    const char *invoicesKey = "invoices";

    if(object.has_key(invoicesKey))
    {
        bourne::json value = object[invoicesKey];


    }


}

bourne::json
ChargeInvoiceRows::toJson()
{
    bourne::json object = bourne::json::object();





    object["success"] = isSuccess();






    return object;

}

bool
ChargeInvoiceRows::isSuccess()
{
	return success;
}

void
ChargeInvoiceRows::setSuccess(bool success)
{
	this->success = success;
}

std::map<std::string, ChargeInvoiceRows_invoices_value>
ChargeInvoiceRows::getInvoices()
{
	return invoices;
}

void
ChargeInvoiceRows::setInvoices(std::map<std::string, ChargeInvoiceRows_invoices_value> invoices)
{
	this->invoices = invoices;
}



