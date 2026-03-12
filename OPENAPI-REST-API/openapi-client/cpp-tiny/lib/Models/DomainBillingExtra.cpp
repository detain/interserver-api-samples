

#include "DomainBillingExtra.h"

using namespace Tiny;

DomainBillingExtra::DomainBillingExtra()
{
	order = DomainOrderResponse();
	order_id = std::string();
	domain_id = std::string();
	provProcessPending = DomainProvProcessPending();
	email = std::string();
	firstname = std::string();
	lastname = std::string();
	company = std::string();
	address = std::string();
	address2 = std::string();
	address3 = std::string();
	city = std::string();
	state = std::string();
	zip = std::string();
	country = std::string();
	phone = std::string();
	fax = std::string();
}

DomainBillingExtra::DomainBillingExtra(std::string jsonString)
{
	this->fromJson(jsonString);
}

DomainBillingExtra::~DomainBillingExtra()
{

}

void
DomainBillingExtra::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *orderKey = "order";

    if(object.has_key(orderKey))
    {
        bourne::json value = object[orderKey];




        DomainOrderResponse* obj = &order;
		obj->fromJson(value.dump());

    }

    const char *order_idKey = "order_id";

    if(object.has_key(order_idKey))
    {
        bourne::json value = object[order_idKey];



        jsonToValue(&order_id, value, "std::string");


    }

    const char *domain_idKey = "domain_id";

    if(object.has_key(domain_idKey))
    {
        bourne::json value = object[domain_idKey];



        jsonToValue(&domain_id, value, "std::string");


    }

    const char *provProcessPendingKey = "provProcessPending";

    if(object.has_key(provProcessPendingKey))
    {
        bourne::json value = object[provProcessPendingKey];




        DomainProvProcessPending* obj = &provProcessPending;
		obj->fromJson(value.dump());

    }

    const char *emailKey = "email";

    if(object.has_key(emailKey))
    {
        bourne::json value = object[emailKey];



        jsonToValue(&email, value, "std::string");


    }

    const char *firstnameKey = "firstname";

    if(object.has_key(firstnameKey))
    {
        bourne::json value = object[firstnameKey];



        jsonToValue(&firstname, value, "std::string");


    }

    const char *lastnameKey = "lastname";

    if(object.has_key(lastnameKey))
    {
        bourne::json value = object[lastnameKey];



        jsonToValue(&lastname, value, "std::string");


    }

    const char *companyKey = "company";

    if(object.has_key(companyKey))
    {
        bourne::json value = object[companyKey];



        jsonToValue(&company, value, "std::string");


    }

    const char *addressKey = "address";

    if(object.has_key(addressKey))
    {
        bourne::json value = object[addressKey];



        jsonToValue(&address, value, "std::string");


    }

    const char *address2Key = "address2";

    if(object.has_key(address2Key))
    {
        bourne::json value = object[address2Key];



        jsonToValue(&address2, value, "std::string");


    }

    const char *address3Key = "address3";

    if(object.has_key(address3Key))
    {
        bourne::json value = object[address3Key];



        jsonToValue(&address3, value, "std::string");


    }

    const char *cityKey = "city";

    if(object.has_key(cityKey))
    {
        bourne::json value = object[cityKey];



        jsonToValue(&city, value, "std::string");


    }

    const char *stateKey = "state";

    if(object.has_key(stateKey))
    {
        bourne::json value = object[stateKey];



        jsonToValue(&state, value, "std::string");


    }

    const char *zipKey = "zip";

    if(object.has_key(zipKey))
    {
        bourne::json value = object[zipKey];



        jsonToValue(&zip, value, "std::string");


    }

    const char *countryKey = "country";

    if(object.has_key(countryKey))
    {
        bourne::json value = object[countryKey];



        jsonToValue(&country, value, "std::string");


    }

    const char *phoneKey = "phone";

    if(object.has_key(phoneKey))
    {
        bourne::json value = object[phoneKey];



        jsonToValue(&phone, value, "std::string");


    }

    const char *faxKey = "fax";

    if(object.has_key(faxKey))
    {
        bourne::json value = object[faxKey];



        jsonToValue(&fax, value, "std::string");


    }


}

bourne::json
DomainBillingExtra::toJson()
{
    bourne::json object = bourne::json::object();






	object["order"] = getOrder().toJson();





    object["order_id"] = getOrderId();






    object["domain_id"] = getDomainId();







	object["provProcessPending"] = getProvProcessPending().toJson();





    object["email"] = getEmail();






    object["firstname"] = getFirstname();






    object["lastname"] = getLastname();






    object["company"] = getCompany();






    object["address"] = getAddress();






    object["address2"] = getAddress2();






    object["address3"] = getAddress3();






    object["city"] = getCity();






    object["state"] = getState();






    object["zip"] = getZip();






    object["country"] = getCountry();






    object["phone"] = getPhone();






    object["fax"] = getFax();



    return object;

}

DomainOrderResponse
DomainBillingExtra::getOrder()
{
	return order;
}

void
DomainBillingExtra::setOrder(DomainOrderResponse order)
{
	this->order = order;
}

std::string
DomainBillingExtra::getOrderId()
{
	return order_id;
}

void
DomainBillingExtra::setOrderId(std::string order_id)
{
	this->order_id = order_id;
}

std::string
DomainBillingExtra::getDomainId()
{
	return domain_id;
}

void
DomainBillingExtra::setDomainId(std::string domain_id)
{
	this->domain_id = domain_id;
}

DomainProvProcessPending
DomainBillingExtra::getProvProcessPending()
{
	return provProcessPending;
}

void
DomainBillingExtra::setProvProcessPending(DomainProvProcessPending provProcessPending)
{
	this->provProcessPending = provProcessPending;
}

std::string
DomainBillingExtra::getEmail()
{
	return email;
}

void
DomainBillingExtra::setEmail(std::string email)
{
	this->email = email;
}

std::string
DomainBillingExtra::getFirstname()
{
	return firstname;
}

void
DomainBillingExtra::setFirstname(std::string firstname)
{
	this->firstname = firstname;
}

std::string
DomainBillingExtra::getLastname()
{
	return lastname;
}

void
DomainBillingExtra::setLastname(std::string lastname)
{
	this->lastname = lastname;
}

std::string
DomainBillingExtra::getCompany()
{
	return company;
}

void
DomainBillingExtra::setCompany(std::string company)
{
	this->company = company;
}

std::string
DomainBillingExtra::getAddress()
{
	return address;
}

void
DomainBillingExtra::setAddress(std::string address)
{
	this->address = address;
}

std::string
DomainBillingExtra::getAddress2()
{
	return address2;
}

void
DomainBillingExtra::setAddress2(std::string address2)
{
	this->address2 = address2;
}

std::string
DomainBillingExtra::getAddress3()
{
	return address3;
}

void
DomainBillingExtra::setAddress3(std::string address3)
{
	this->address3 = address3;
}

std::string
DomainBillingExtra::getCity()
{
	return city;
}

void
DomainBillingExtra::setCity(std::string city)
{
	this->city = city;
}

std::string
DomainBillingExtra::getState()
{
	return state;
}

void
DomainBillingExtra::setState(std::string state)
{
	this->state = state;
}

std::string
DomainBillingExtra::getZip()
{
	return zip;
}

void
DomainBillingExtra::setZip(std::string zip)
{
	this->zip = zip;
}

std::string
DomainBillingExtra::getCountry()
{
	return country;
}

void
DomainBillingExtra::setCountry(std::string country)
{
	this->country = country;
}

std::string
DomainBillingExtra::getPhone()
{
	return phone;
}

void
DomainBillingExtra::setPhone(std::string phone)
{
	this->phone = phone;
}

std::string
DomainBillingExtra::getFax()
{
	return fax;
}

void
DomainBillingExtra::setFax(std::string fax)
{
	this->fax = fax;
}



