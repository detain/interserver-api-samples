

#include "PaymentInvoiceRows.h"

using namespace Tiny;

PaymentInvoiceRows::PaymentInvoiceRows()
{
}

PaymentInvoiceRows::PaymentInvoiceRows(std::string jsonString)
{
	this->fromJson(jsonString);
}

PaymentInvoiceRows::~PaymentInvoiceRows()
{

}

void
PaymentInvoiceRows::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);


}

bourne::json
PaymentInvoiceRows::toJson()
{
    bourne::json object = bourne::json::object();


    return object;

}



