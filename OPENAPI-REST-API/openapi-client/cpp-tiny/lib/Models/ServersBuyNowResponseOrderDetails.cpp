

#include "ServersBuyNowResponse_order_details.h"

using namespace Tiny;

ServersBuyNowResponse_order_details::ServersBuyNowResponse_order_details()
{
	service_id = float(0);
	invoice_id = float(0);
}

ServersBuyNowResponse_order_details::ServersBuyNowResponse_order_details(std::string jsonString)
{
	this->fromJson(jsonString);
}

ServersBuyNowResponse_order_details::~ServersBuyNowResponse_order_details()
{

}

void
ServersBuyNowResponse_order_details::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *service_idKey = "service_id";

    if(object.has_key(service_idKey))
    {
        bourne::json value = object[service_idKey];



        jsonToValue(&service_id, value, "long");


    }

    const char *invoice_idKey = "invoice_id";

    if(object.has_key(invoice_idKey))
    {
        bourne::json value = object[invoice_idKey];



        jsonToValue(&invoice_id, value, "long");


    }


}

bourne::json
ServersBuyNowResponse_order_details::toJson()
{
    bourne::json object = bourne::json::object();





    object["service_id"] = getServiceId();






    object["invoice_id"] = getInvoiceId();



    return object;

}

long
ServersBuyNowResponse_order_details::getServiceId()
{
	return service_id;
}

void
ServersBuyNowResponse_order_details::setServiceId(long service_id)
{
	this->service_id = service_id;
}

long
ServersBuyNowResponse_order_details::getInvoiceId()
{
	return invoice_id;
}

void
ServersBuyNowResponse_order_details::setInvoiceId(long invoice_id)
{
	this->invoice_id = invoice_id;
}



