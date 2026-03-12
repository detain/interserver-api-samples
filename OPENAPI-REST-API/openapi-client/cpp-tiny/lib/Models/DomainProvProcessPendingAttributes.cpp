

#include "DomainProvProcessPending_attributes.h"

using namespace Tiny;

DomainProvProcessPending_attributes::DomainProvProcessPending_attributes()
{
	id = std::string();
	order_id = std::string();
	registrationexpirationdate = std::string();
	f_auto_renew = std::string();
}

DomainProvProcessPending_attributes::DomainProvProcessPending_attributes(std::string jsonString)
{
	this->fromJson(jsonString);
}

DomainProvProcessPending_attributes::~DomainProvProcessPending_attributes()
{

}

void
DomainProvProcessPending_attributes::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *idKey = "id";

    if(object.has_key(idKey))
    {
        bourne::json value = object[idKey];



        jsonToValue(&id, value, "std::string");


    }

    const char *order_idKey = "order_id";

    if(object.has_key(order_idKey))
    {
        bourne::json value = object[order_idKey];



        jsonToValue(&order_id, value, "std::string");


    }

    const char *registrationexpirationdateKey = "registration expiration date";

    if(object.has_key(registrationexpirationdateKey))
    {
        bourne::json value = object[registrationexpirationdateKey];



        jsonToValue(&registrationexpirationdate, value, "std::string");


    }

    const char *f_auto_renewKey = "f_auto_renew";

    if(object.has_key(f_auto_renewKey))
    {
        bourne::json value = object[f_auto_renewKey];



        jsonToValue(&f_auto_renew, value, "std::string");


    }


}

bourne::json
DomainProvProcessPending_attributes::toJson()
{
    bourne::json object = bourne::json::object();





    object["id"] = getId();






    object["order_id"] = getOrderId();






    object["registrationexpirationdate"] = getRegistrationexpirationdate();






    object["f_auto_renew"] = getFAutoRenew();



    return object;

}

std::string
DomainProvProcessPending_attributes::getId()
{
	return id;
}

void
DomainProvProcessPending_attributes::setId(std::string id)
{
	this->id = id;
}

std::string
DomainProvProcessPending_attributes::getOrderId()
{
	return order_id;
}

void
DomainProvProcessPending_attributes::setOrderId(std::string order_id)
{
	this->order_id = order_id;
}

std::string
DomainProvProcessPending_attributes::getRegistrationexpirationdate()
{
	return registrationexpirationdate;
}

void
DomainProvProcessPending_attributes::setRegistrationexpirationdate(std::string registrationexpirationdate)
{
	this->registrationexpirationdate = registrationexpirationdate;
}

std::string
DomainProvProcessPending_attributes::getFAutoRenew()
{
	return f_auto_renew;
}

void
DomainProvProcessPending_attributes::setFAutoRenew(std::string f_auto_renew)
{
	this->f_auto_renew = f_auto_renew;
}



