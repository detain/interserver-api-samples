

#include "DomainWhoisPrivacyRequest.h"

using namespace Tiny;

DomainWhoisPrivacyRequest::DomainWhoisPrivacyRequest()
{
	func = std::string();
	csrf_token = std::string();
	domain_firstname = std::string();
	domain_lastname = std::string();
	domain_email = std::string();
	domain_address = std::string();
	domain_address2 = std::string();
	domain_address3 = std::string();
	domain_city = std::string();
	domain_state = std::string();
	domain_zip = std::string();
	domain_country = std::string();
	domain_phone = std::string();
	domain_fax = std::string();
	domain_company = std::string();
	domain_extra = std::string();
}

DomainWhoisPrivacyRequest::DomainWhoisPrivacyRequest(std::string jsonString)
{
	this->fromJson(jsonString);
}

DomainWhoisPrivacyRequest::~DomainWhoisPrivacyRequest()
{

}

void
DomainWhoisPrivacyRequest::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *funcKey = "func";

    if(object.has_key(funcKey))
    {
        bourne::json value = object[funcKey];



        jsonToValue(&func, value, "std::string");


    }

    const char *csrf_tokenKey = "csrf_token";

    if(object.has_key(csrf_tokenKey))
    {
        bourne::json value = object[csrf_tokenKey];



        jsonToValue(&csrf_token, value, "std::string");


    }

    const char *domain_firstnameKey = "domain_firstname";

    if(object.has_key(domain_firstnameKey))
    {
        bourne::json value = object[domain_firstnameKey];



        jsonToValue(&domain_firstname, value, "std::string");


    }

    const char *domain_lastnameKey = "domain_lastname";

    if(object.has_key(domain_lastnameKey))
    {
        bourne::json value = object[domain_lastnameKey];



        jsonToValue(&domain_lastname, value, "std::string");


    }

    const char *domain_emailKey = "domain_email";

    if(object.has_key(domain_emailKey))
    {
        bourne::json value = object[domain_emailKey];



        jsonToValue(&domain_email, value, "std::string");


    }

    const char *domain_addressKey = "domain_address";

    if(object.has_key(domain_addressKey))
    {
        bourne::json value = object[domain_addressKey];



        jsonToValue(&domain_address, value, "std::string");


    }

    const char *domain_address2Key = "domain_address2";

    if(object.has_key(domain_address2Key))
    {
        bourne::json value = object[domain_address2Key];



        jsonToValue(&domain_address2, value, "std::string");


    }

    const char *domain_address3Key = "domain_address3";

    if(object.has_key(domain_address3Key))
    {
        bourne::json value = object[domain_address3Key];



        jsonToValue(&domain_address3, value, "std::string");


    }

    const char *domain_cityKey = "domain_city";

    if(object.has_key(domain_cityKey))
    {
        bourne::json value = object[domain_cityKey];



        jsonToValue(&domain_city, value, "std::string");


    }

    const char *domain_stateKey = "domain_state";

    if(object.has_key(domain_stateKey))
    {
        bourne::json value = object[domain_stateKey];



        jsonToValue(&domain_state, value, "std::string");


    }

    const char *domain_zipKey = "domain_zip";

    if(object.has_key(domain_zipKey))
    {
        bourne::json value = object[domain_zipKey];



        jsonToValue(&domain_zip, value, "std::string");


    }

    const char *domain_countryKey = "domain_country";

    if(object.has_key(domain_countryKey))
    {
        bourne::json value = object[domain_countryKey];



        jsonToValue(&domain_country, value, "std::string");


    }

    const char *domain_phoneKey = "domain_phone";

    if(object.has_key(domain_phoneKey))
    {
        bourne::json value = object[domain_phoneKey];



        jsonToValue(&domain_phone, value, "std::string");


    }

    const char *domain_faxKey = "domain_fax";

    if(object.has_key(domain_faxKey))
    {
        bourne::json value = object[domain_faxKey];



        jsonToValue(&domain_fax, value, "std::string");


    }

    const char *domain_companyKey = "domain_company";

    if(object.has_key(domain_companyKey))
    {
        bourne::json value = object[domain_companyKey];



        jsonToValue(&domain_company, value, "std::string");


    }

    const char *domain_extraKey = "domain_extra";

    if(object.has_key(domain_extraKey))
    {
        bourne::json value = object[domain_extraKey];



        jsonToValue(&domain_extra, value, "std::string");


    }


}

bourne::json
DomainWhoisPrivacyRequest::toJson()
{
    bourne::json object = bourne::json::object();





    object["func"] = getFunc();






    object["csrf_token"] = getCsrfToken();






    object["domain_firstname"] = getDomainFirstname();






    object["domain_lastname"] = getDomainLastname();






    object["domain_email"] = getDomainEmail();






    object["domain_address"] = getDomainAddress();






    object["domain_address2"] = getDomainAddress2();






    object["domain_address3"] = getDomainAddress3();






    object["domain_city"] = getDomainCity();






    object["domain_state"] = getDomainState();






    object["domain_zip"] = getDomainZip();






    object["domain_country"] = getDomainCountry();






    object["domain_phone"] = getDomainPhone();






    object["domain_fax"] = getDomainFax();






    object["domain_company"] = getDomainCompany();






    object["domain_extra"] = getDomainExtra();



    return object;

}

std::string
DomainWhoisPrivacyRequest::getFunc()
{
	return func;
}

void
DomainWhoisPrivacyRequest::setFunc(std::string func)
{
	this->func = func;
}

std::string
DomainWhoisPrivacyRequest::getCsrfToken()
{
	return csrf_token;
}

void
DomainWhoisPrivacyRequest::setCsrfToken(std::string csrf_token)
{
	this->csrf_token = csrf_token;
}

std::string
DomainWhoisPrivacyRequest::getDomainFirstname()
{
	return domain_firstname;
}

void
DomainWhoisPrivacyRequest::setDomainFirstname(std::string domain_firstname)
{
	this->domain_firstname = domain_firstname;
}

std::string
DomainWhoisPrivacyRequest::getDomainLastname()
{
	return domain_lastname;
}

void
DomainWhoisPrivacyRequest::setDomainLastname(std::string domain_lastname)
{
	this->domain_lastname = domain_lastname;
}

std::string
DomainWhoisPrivacyRequest::getDomainEmail()
{
	return domain_email;
}

void
DomainWhoisPrivacyRequest::setDomainEmail(std::string domain_email)
{
	this->domain_email = domain_email;
}

std::string
DomainWhoisPrivacyRequest::getDomainAddress()
{
	return domain_address;
}

void
DomainWhoisPrivacyRequest::setDomainAddress(std::string domain_address)
{
	this->domain_address = domain_address;
}

std::string
DomainWhoisPrivacyRequest::getDomainAddress2()
{
	return domain_address2;
}

void
DomainWhoisPrivacyRequest::setDomainAddress2(std::string domain_address2)
{
	this->domain_address2 = domain_address2;
}

std::string
DomainWhoisPrivacyRequest::getDomainAddress3()
{
	return domain_address3;
}

void
DomainWhoisPrivacyRequest::setDomainAddress3(std::string domain_address3)
{
	this->domain_address3 = domain_address3;
}

std::string
DomainWhoisPrivacyRequest::getDomainCity()
{
	return domain_city;
}

void
DomainWhoisPrivacyRequest::setDomainCity(std::string domain_city)
{
	this->domain_city = domain_city;
}

std::string
DomainWhoisPrivacyRequest::getDomainState()
{
	return domain_state;
}

void
DomainWhoisPrivacyRequest::setDomainState(std::string domain_state)
{
	this->domain_state = domain_state;
}

std::string
DomainWhoisPrivacyRequest::getDomainZip()
{
	return domain_zip;
}

void
DomainWhoisPrivacyRequest::setDomainZip(std::string domain_zip)
{
	this->domain_zip = domain_zip;
}

std::string
DomainWhoisPrivacyRequest::getDomainCountry()
{
	return domain_country;
}

void
DomainWhoisPrivacyRequest::setDomainCountry(std::string domain_country)
{
	this->domain_country = domain_country;
}

std::string
DomainWhoisPrivacyRequest::getDomainPhone()
{
	return domain_phone;
}

void
DomainWhoisPrivacyRequest::setDomainPhone(std::string domain_phone)
{
	this->domain_phone = domain_phone;
}

std::string
DomainWhoisPrivacyRequest::getDomainFax()
{
	return domain_fax;
}

void
DomainWhoisPrivacyRequest::setDomainFax(std::string domain_fax)
{
	this->domain_fax = domain_fax;
}

std::string
DomainWhoisPrivacyRequest::getDomainCompany()
{
	return domain_company;
}

void
DomainWhoisPrivacyRequest::setDomainCompany(std::string domain_company)
{
	this->domain_company = domain_company;
}

std::string
DomainWhoisPrivacyRequest::getDomainExtra()
{
	return domain_extra;
}

void
DomainWhoisPrivacyRequest::setDomainExtra(std::string domain_extra)
{
	this->domain_extra = domain_extra;
}



