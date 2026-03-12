

#include "DomainAdminContact.h"

using namespace Tiny;

DomainAdminContact::DomainAdminContact()
{
	status = std::string();
	state = std::string();
	org_name = std::string();
	country = std::string();
	postal_code = std::string();
	email = std::string();
	fax = std::string();
	address2 = std::string();
	address3 = std::string();
	address1 = std::string();
	city = std::string();
	phone = std::string();
	first_name = std::string();
	last_name = std::string();
}

DomainAdminContact::DomainAdminContact(std::string jsonString)
{
	this->fromJson(jsonString);
}

DomainAdminContact::~DomainAdminContact()
{

}

void
DomainAdminContact::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

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

    const char *postal_codeKey = "postal_code";

    if(object.has_key(postal_codeKey))
    {
        bourne::json value = object[postal_codeKey];



        jsonToValue(&postal_code, value, "std::string");


    }

    const char *emailKey = "email";

    if(object.has_key(emailKey))
    {
        bourne::json value = object[emailKey];



        jsonToValue(&email, value, "std::string");


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

    const char *address3Key = "address3";

    if(object.has_key(address3Key))
    {
        bourne::json value = object[address3Key];



        jsonToValue(&address3, value, "std::string");


    }

    const char *address1Key = "address1";

    if(object.has_key(address1Key))
    {
        bourne::json value = object[address1Key];



        jsonToValue(&address1, value, "std::string");


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


}

bourne::json
DomainAdminContact::toJson()
{
    bourne::json object = bourne::json::object();





    object["status"] = getStatus();






    object["state"] = getState();






    object["org_name"] = getOrgName();






    object["country"] = getCountry();






    object["postal_code"] = getPostalCode();






    object["email"] = getEmail();






    object["fax"] = getFax();






    object["address2"] = getAddress2();






    object["address3"] = getAddress3();






    object["address1"] = getAddress1();






    object["city"] = getCity();






    object["phone"] = getPhone();






    object["first_name"] = getFirstName();






    object["last_name"] = getLastName();



    return object;

}

std::string
DomainAdminContact::getStatus()
{
	return status;
}

void
DomainAdminContact::setStatus(std::string status)
{
	this->status = status;
}

std::string
DomainAdminContact::getState()
{
	return state;
}

void
DomainAdminContact::setState(std::string state)
{
	this->state = state;
}

std::string
DomainAdminContact::getOrgName()
{
	return org_name;
}

void
DomainAdminContact::setOrgName(std::string org_name)
{
	this->org_name = org_name;
}

std::string
DomainAdminContact::getCountry()
{
	return country;
}

void
DomainAdminContact::setCountry(std::string country)
{
	this->country = country;
}

std::string
DomainAdminContact::getPostalCode()
{
	return postal_code;
}

void
DomainAdminContact::setPostalCode(std::string postal_code)
{
	this->postal_code = postal_code;
}

std::string
DomainAdminContact::getEmail()
{
	return email;
}

void
DomainAdminContact::setEmail(std::string email)
{
	this->email = email;
}

std::string
DomainAdminContact::getFax()
{
	return fax;
}

void
DomainAdminContact::setFax(std::string fax)
{
	this->fax = fax;
}

std::string
DomainAdminContact::getAddress2()
{
	return address2;
}

void
DomainAdminContact::setAddress2(std::string address2)
{
	this->address2 = address2;
}

std::string
DomainAdminContact::getAddress3()
{
	return address3;
}

void
DomainAdminContact::setAddress3(std::string address3)
{
	this->address3 = address3;
}

std::string
DomainAdminContact::getAddress1()
{
	return address1;
}

void
DomainAdminContact::setAddress1(std::string address1)
{
	this->address1 = address1;
}

std::string
DomainAdminContact::getCity()
{
	return city;
}

void
DomainAdminContact::setCity(std::string city)
{
	this->city = city;
}

std::string
DomainAdminContact::getPhone()
{
	return phone;
}

void
DomainAdminContact::setPhone(std::string phone)
{
	this->phone = phone;
}

std::string
DomainAdminContact::getFirstName()
{
	return first_name;
}

void
DomainAdminContact::setFirstName(std::string first_name)
{
	this->first_name = first_name;
}

std::string
DomainAdminContact::getLastName()
{
	return last_name;
}

void
DomainAdminContact::setLastName(std::string last_name)
{
	this->last_name = last_name;
}



