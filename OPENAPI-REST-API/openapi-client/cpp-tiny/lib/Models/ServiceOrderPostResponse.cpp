

#include "ServiceOrderPostResponse.h"

using namespace Tiny;

ServiceOrderPostResponse::ServiceOrderPostResponse()
{
	r_continue = bool(false);
	errors = std::list<std::string>();
	total_cost = std::string();
	iid = std::string();
	iids = std::list<std::string>();
	real_iids = std::list<std::string>();
	serviceId = int(0);
	invoice_description = std::string();
}

ServiceOrderPostResponse::ServiceOrderPostResponse(std::string jsonString)
{
	this->fromJson(jsonString);
}

ServiceOrderPostResponse::~ServiceOrderPostResponse()
{

}

void
ServiceOrderPostResponse::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *r_continueKey = "continue";

    if(object.has_key(r_continueKey))
    {
        bourne::json value = object[r_continueKey];



        jsonToValue(&r_continue, value, "bool");


    }

    const char *errorsKey = "errors";

    if(object.has_key(errorsKey))
    {
        bourne::json value = object[errorsKey];


        std::list<std::string> errors_list;
        std::string element;
        for(auto& var : value.array_range())
        {

            jsonToValue(&element, var, "std::string");


            errors_list.push_back(element);
        }
        errors = errors_list;


    }

    const char *total_costKey = "total_cost";

    if(object.has_key(total_costKey))
    {
        bourne::json value = object[total_costKey];



        jsonToValue(&total_cost, value, "std::string");


    }

    const char *iidKey = "iid";

    if(object.has_key(iidKey))
    {
        bourne::json value = object[iidKey];



        jsonToValue(&iid, value, "std::string");


    }

    const char *iidsKey = "iids";

    if(object.has_key(iidsKey))
    {
        bourne::json value = object[iidsKey];


        std::list<std::string> iids_list;
        std::string element;
        for(auto& var : value.array_range())
        {

            jsonToValue(&element, var, "std::string");


            iids_list.push_back(element);
        }
        iids = iids_list;


    }

    const char *real_iidsKey = "real_iids";

    if(object.has_key(real_iidsKey))
    {
        bourne::json value = object[real_iidsKey];


        std::list<std::string> real_iids_list;
        std::string element;
        for(auto& var : value.array_range())
        {

            jsonToValue(&element, var, "std::string");


            real_iids_list.push_back(element);
        }
        real_iids = real_iids_list;


    }

    const char *serviceIdKey = "serviceId";

    if(object.has_key(serviceIdKey))
    {
        bourne::json value = object[serviceIdKey];



        jsonToValue(&serviceId, value, "int");


    }

    const char *invoice_descriptionKey = "invoice_description";

    if(object.has_key(invoice_descriptionKey))
    {
        bourne::json value = object[invoice_descriptionKey];



        jsonToValue(&invoice_description, value, "std::string");


    }


}

bourne::json
ServiceOrderPostResponse::toJson()
{
    bourne::json object = bourne::json::object();





    object["r_continue"] = isRContinue();





    std::list<std::string> errors_list = getErrors();
    bourne::json errors_arr = bourne::json::array();

    for(auto& var : errors_list)
    {
        errors_arr.append(var);
    }
    object["errors"] = errors_arr;









    object["total_cost"] = getTotalCost();






    object["iid"] = getIid();





    std::list<std::string> iids_list = getIids();
    bourne::json iids_arr = bourne::json::array();

    for(auto& var : iids_list)
    {
        iids_arr.append(var);
    }
    object["iids"] = iids_arr;








    std::list<std::string> real_iids_list = getRealIids();
    bourne::json real_iids_arr = bourne::json::array();

    for(auto& var : real_iids_list)
    {
        real_iids_arr.append(var);
    }
    object["real_iids"] = real_iids_arr;









    object["serviceId"] = getServiceId();






    object["invoice_description"] = getInvoiceDescription();



    return object;

}

bool
ServiceOrderPostResponse::isRContinue()
{
	return r_continue;
}

void
ServiceOrderPostResponse::setRContinue(bool r_continue)
{
	this->r_continue = r_continue;
}

std::list<std::string>
ServiceOrderPostResponse::getErrors()
{
	return errors;
}

void
ServiceOrderPostResponse::setErrors(std::list<std::string> errors)
{
	this->errors = errors;
}

std::string
ServiceOrderPostResponse::getTotalCost()
{
	return total_cost;
}

void
ServiceOrderPostResponse::setTotalCost(std::string total_cost)
{
	this->total_cost = total_cost;
}

std::string
ServiceOrderPostResponse::getIid()
{
	return iid;
}

void
ServiceOrderPostResponse::setIid(std::string iid)
{
	this->iid = iid;
}

std::list<std::string>
ServiceOrderPostResponse::getIids()
{
	return iids;
}

void
ServiceOrderPostResponse::setIids(std::list<std::string> iids)
{
	this->iids = iids;
}

std::list<std::string>
ServiceOrderPostResponse::getRealIids()
{
	return real_iids;
}

void
ServiceOrderPostResponse::setRealIids(std::list<std::string> real_iids)
{
	this->real_iids = real_iids;
}

int
ServiceOrderPostResponse::getServiceId()
{
	return serviceId;
}

void
ServiceOrderPostResponse::setServiceId(int serviceId)
{
	this->serviceId = serviceId;
}

std::string
ServiceOrderPostResponse::getInvoiceDescription()
{
	return invoice_description;
}

void
ServiceOrderPostResponse::setInvoiceDescription(std::string invoice_description)
{
	this->invoice_description = invoice_description;
}



