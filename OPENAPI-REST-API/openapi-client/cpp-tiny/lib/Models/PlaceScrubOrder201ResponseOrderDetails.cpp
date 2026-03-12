

#include "PlaceScrubOrder_201_response_order_details.h"

using namespace Tiny;

PlaceScrubOrder_201_response_order_details::PlaceScrubOrder_201_response_order_details()
{
	total_cost = int(0);
	service_id = int(0);
	invoice_id = int(0);
	invoice_description = std::string();
	cj_params = PlaceScrubOrder_201_response_order_details_cj_params();
}

PlaceScrubOrder_201_response_order_details::PlaceScrubOrder_201_response_order_details(std::string jsonString)
{
	this->fromJson(jsonString);
}

PlaceScrubOrder_201_response_order_details::~PlaceScrubOrder_201_response_order_details()
{

}

void
PlaceScrubOrder_201_response_order_details::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *total_costKey = "total_cost";

    if(object.has_key(total_costKey))
    {
        bourne::json value = object[total_costKey];



        jsonToValue(&total_cost, value, "int");


    }

    const char *service_idKey = "service_id";

    if(object.has_key(service_idKey))
    {
        bourne::json value = object[service_idKey];



        jsonToValue(&service_id, value, "int");


    }

    const char *invoice_idKey = "invoice_id";

    if(object.has_key(invoice_idKey))
    {
        bourne::json value = object[invoice_idKey];



        jsonToValue(&invoice_id, value, "int");


    }

    const char *invoice_descriptionKey = "invoice_description";

    if(object.has_key(invoice_descriptionKey))
    {
        bourne::json value = object[invoice_descriptionKey];



        jsonToValue(&invoice_description, value, "std::string");


    }

    const char *cj_paramsKey = "cj_params";

    if(object.has_key(cj_paramsKey))
    {
        bourne::json value = object[cj_paramsKey];




        PlaceScrubOrder_201_response_order_details_cj_params* obj = &cj_params;
		obj->fromJson(value.dump());

    }


}

bourne::json
PlaceScrubOrder_201_response_order_details::toJson()
{
    bourne::json object = bourne::json::object();





    object["total_cost"] = getTotalCost();






    object["service_id"] = getServiceId();






    object["invoice_id"] = getInvoiceId();






    object["invoice_description"] = getInvoiceDescription();







	object["cj_params"] = getCjParams().toJson();


    return object;

}

int
PlaceScrubOrder_201_response_order_details::getTotalCost()
{
	return total_cost;
}

void
PlaceScrubOrder_201_response_order_details::setTotalCost(int total_cost)
{
	this->total_cost = total_cost;
}

int
PlaceScrubOrder_201_response_order_details::getServiceId()
{
	return service_id;
}

void
PlaceScrubOrder_201_response_order_details::setServiceId(int service_id)
{
	this->service_id = service_id;
}

int
PlaceScrubOrder_201_response_order_details::getInvoiceId()
{
	return invoice_id;
}

void
PlaceScrubOrder_201_response_order_details::setInvoiceId(int invoice_id)
{
	this->invoice_id = invoice_id;
}

std::string
PlaceScrubOrder_201_response_order_details::getInvoiceDescription()
{
	return invoice_description;
}

void
PlaceScrubOrder_201_response_order_details::setInvoiceDescription(std::string invoice_description)
{
	this->invoice_description = invoice_description;
}

PlaceScrubOrder_201_response_order_details_cj_params
PlaceScrubOrder_201_response_order_details::getCjParams()
{
	return cj_params;
}

void
PlaceScrubOrder_201_response_order_details::setCjParams(PlaceScrubOrder_201_response_order_details_cj_params cj_params)
{
	this->cj_params = cj_params;
}



