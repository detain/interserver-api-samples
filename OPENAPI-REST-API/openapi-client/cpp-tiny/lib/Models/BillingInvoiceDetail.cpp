

#include "BillingInvoiceDetail.h"

using namespace Tiny;

BillingInvoiceDetail::BillingInvoiceDetail()
{
}

BillingInvoiceDetail::BillingInvoiceDetail(std::string jsonString)
{
	this->fromJson(jsonString);
}

BillingInvoiceDetail::~BillingInvoiceDetail()
{

}

void
BillingInvoiceDetail::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);


}

bourne::json
BillingInvoiceDetail::toJson()
{
    bourne::json object = bourne::json::object();


    return object;

}



