

#include "DomainOwnerContact.h"

using namespace Tiny;

DomainOwnerContact::DomainOwnerContact()
{
	postal_code = std::string();
	org_name = std::string();
	country = std::string();
	status = std::string();
	state = std::string();
	first_name = std::string();
	last_name = std::string();
	address3 = std::string();
	fax = std::string();
	address2 = std::string();
	email = std::string();
	city = std::string();
	phone = std::string();
	address1 = std::string();
}

DomainOwnerContact::DomainOwnerContact(std::string jsonString)
{
	this->fromJson(jsonString);
}

DomainOwnerContact::~DomainOwnerContact()
{

}

void
DomainOwnerContact::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *postal_codeKey = "postal_code";

    if(object.has_key(postal_codeKey))
    {
        bourne::json value = object[postal_codeKey];



        jsonToValue(&postal_code, value, "std::string");


    }

    const char *org_nameKey = "org_name";

    if(object.has_key(org_nameKey))
    {
        bourne::json value = object[org_nameKey];



        jsonToValue(&org_name, value, "std::string");


    }

    const char *countryKey = "country";

    if(object.has_key(countryKey))
    {
        bourne::json value = object[countryKey];



        jsonToValue(&country, value, "std::string");


    }

    const char *statusKey = "status";

    if(object.has_key(statusKey))
    {
        bourne::json value = object[statusKey];



        jsonToValue(&status, value, "std::string");


    }

    const char *stateKey = "state";

    if(object.has_key(stateKey))
    {
        bourne::json value = object[stateKey];



        jsonToValue(&state, value, "std::string");


    }

    const char *first_nameKey = "first_name";

    if(object.has_key(first_nameKey))
    {
        bourne::json value = object[first_nameKey];



        jsonToValue(&first_name, value, "std::string");


    }

    const char *last_nameKey = "last_name";

    if(object.has_key(last_nameKey))
    {
        bourne::json value = object[last_nameKey];



        jsonToValue(&last_name, value, "std::string");


    }

    const char *address3Key = "address3";

    if(object.has_key(address3Key))
    {
        bourne::json value = object[address3Key];



        jsonToValue(&address3, value, "std::string");


    }

    const char *faxKey = "fax";

    if(object.has_key(faxKey))
    {
        bourne::json value = object[faxKey];



        jsonToValue(&fax, value, "std::string");


    }

    const char *address2Key = "address2";

    if(object.has_key(address2Key))
    {
        bourne::json value = object[address2Key];



        jsonToValue(&address2, value, "std::string");


    }

    const char *emailKey = "email";

    if(object.has_key(emailKey))
    {
        bourne::json value = object[emailKey];



        jsonToValue(&email, value, "std::string");


    }

    const char *cityKey = "city";

    if(object.has_key(cityKey))
    {
        bourne::json value = object[cityKey];



        jsonToValue(&city, value, "std::string");


    }

    const char *phoneKey = "phone";

    if(object.has_key(phoneKey))
    {
        bourne::json value = object[phoneKey];



        jsonToValue(&phone, value, "std::string");


    }

    const char *address1Key = "address1";

    if(object.has_key(address1Key))
    {
        bourne::json value = object[address1Key];



        jsonToValue(&address1, value, "std::string");


    }


}

bourne::json
DomainOwnerContact::toJson()
{
    bourne::json object = bourne::json::object();





    object["postal_code"] = getPostalCode();






    object["org_name"] = getOrgName();






    object["country"] = getCountry();






    object["status"] = getStatus();






    object["state"] = getState();






    object["first_name"] = getFirstName();






    object["last_name"] = getLastName();






    object["address3"] = getAddress3();






    object["fax"] = getFax();






    object["address2"] = getAddress2();






    object["email"] = getEmail();






    object["city"] = getCity();






    object["phone"] = getPhone();






    object["address1"] = getAddress1();



    return object;

}

std::string
DomainOwnerContact::getPostalCode()
{
	return postal_code;
}

void
DomainOwnerContact::setPostalCode(std::string postal_code)
{
	this->postal_code = postal_code;
}

std::string
DomainOwnerContact::getOrgName()
{
	return org_name;
}

void
DomainOwnerContact::setOrgName(std::string org_name)
{
	this->org_name = org_name;
}

std::string
DomainOwnerContact::getCountry()
{
	return country;
}

void
DomainOwnerContact::setCountry(std::string country)
{
	this->country = country;
}

std::string
DomainOwnerContact::getStatus()
{
	return status;
}

void
DomainOwnerContact::setStatus(std::string status)
{
	this->status = status;
}

std::string
DomainOwnerContact::getState()
{
	return state;
}

void
DomainOwnerContact::setState(std::string state)
{
	this->state = state;
}

std::string
DomainOwnerContact::getFirstName()
{
	return first_name;
}

void
DomainOwnerContact::setFirstName(std::string first_name)
{
	this->first_name = first_name;
}

std::string
DomainOwnerContact::getLastName()
{
	return last_name;
}

void
DomainOwnerContact::setLastName(std::string last_name)
{
	this->last_name = last_name;
}

std::string
DomainOwnerContact::getAddress3()
{
	return address3;
}

void
DomainOwnerContact::setAddress3(std::string address3)
{
	this->address3 = address3;
}

std::string
DomainOwnerContact::getFax()
{
	return fax;
}

void
DomainOwnerContact::setFax(std::string fax)
{
	this->fax = fax;
}

std::string
DomainOwnerContact::getAddress2()
{
	return address2;
}

void
DomainOwnerContact::setAddress2(std::string address2)
{
	this->address2 = address2;
}

std::string
DomainOwnerContact::getEmail()
{
	return email;
}

void
DomainOwnerContact::setEmail(std::string email)
{
	this->email = email;
}

std::string
DomainOwnerContact::getCity()
{
	return city;
}

void
DomainOwnerContact::setCity(std::string city)
{
	this->city = city;
}

std::string
DomainOwnerContact::getPhone()
{
	return phone;
}

void
DomainOwnerContact::setPhone(std::string phone)
{
	this->phone = phone;
}

std::string
DomainOwnerContact::getAddress1()
{
	return address1;
}

void
DomainOwnerContact::setAddress1(std::string address1)
{
	this->address1 = address1;
}



