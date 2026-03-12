

#include "InvoiceRow.h"

using namespace Tiny;

InvoiceRow::InvoiceRow()
{
}

InvoiceRow::InvoiceRow(std::string jsonString)
{
	this->fromJson(jsonString);
}

InvoiceRow::~InvoiceRow()
{

}

void
InvoiceRow::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);


}

bourne::json
InvoiceRow::toJson()
{
    bourne::json object = bourne::json::object();


    return object;

}



