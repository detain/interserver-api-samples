

#include "AddServer_200_response.h"

using namespace Tiny;

AddServer_200_response::AddServer_200_response()
{
	text = std::string();
	invoice = int(0);
	order = int(0);
}

AddServer_200_response::AddServer_200_response(std::string jsonString)
{
	this->fromJson(jsonString);
}

AddServer_200_response::~AddServer_200_response()
{

}

void
AddServer_200_response::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *textKey = "text";

    if(object.has_key(textKey))
    {
        bourne::json value = object[textKey];



        jsonToValue(&text, value, "std::string");


    }

    const char *invoiceKey = "invoice";

    if(object.has_key(invoiceKey))
    {
        bourne::json value = object[invoiceKey];



        jsonToValue(&invoice, value, "int");


    }

    const char *orderKey = "order";

    if(object.has_key(orderKey))
    {
        bourne::json value = object[orderKey];



        jsonToValue(&order, value, "int");


    }


}

bourne::json
AddServer_200_response::toJson()
{
    bourne::json object = bourne::json::object();





    object["text"] = getText();






    object["invoice"] = getInvoice();






    object["order"] = getOrder();



    return object;

}

std::string
AddServer_200_response::getText()
{
	return text;
}

void
AddServer_200_response::setText(std::string text)
{
	this->text = text;
}

int
AddServer_200_response::getInvoice()
{
	return invoice;
}

void
AddServer_200_response::setInvoice(int invoice)
{
	this->invoice = invoice;
}

int
AddServer_200_response::getOrder()
{
	return order;
}

void
AddServer_200_response::setOrder(int order)
{
	this->order = order;
}



