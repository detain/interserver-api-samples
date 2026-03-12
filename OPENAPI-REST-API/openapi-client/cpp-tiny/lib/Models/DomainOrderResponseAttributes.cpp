

#include "DomainOrderResponse_attributes.h"

using namespace Tiny;

DomainOrderResponse_attributes::DomainOrderResponse_attributes()
{
	id = std::string();
	admin_email = std::string();
}

DomainOrderResponse_attributes::DomainOrderResponse_attributes(std::string jsonString)
{
	this->fromJson(jsonString);
}

DomainOrderResponse_attributes::~DomainOrderResponse_attributes()
{

}

void
DomainOrderResponse_attributes::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *idKey = "id";

    if(object.has_key(idKey))
    {
        bourne::json value = object[idKey];



        jsonToValue(&id, value, "std::string");


    }

    const char *admin_emailKey = "admin_email";

    if(object.has_key(admin_emailKey))
    {
        bourne::json value = object[admin_emailKey];



        jsonToValue(&admin_email, value, "std::string");


    }


}

bourne::json
DomainOrderResponse_attributes::toJson()
{
    bourne::json object = bourne::json::object();





    object["id"] = getId();






    object["admin_email"] = getAdminEmail();



    return object;

}

std::string
DomainOrderResponse_attributes::getId()
{
	return id;
}

void
DomainOrderResponse_attributes::setId(std::string id)
{
	this->id = id;
}

std::string
DomainOrderResponse_attributes::getAdminEmail()
{
	return admin_email;
}

void
DomainOrderResponse_attributes::setAdminEmail(std::string admin_email)
{
	this->admin_email = admin_email;
}



