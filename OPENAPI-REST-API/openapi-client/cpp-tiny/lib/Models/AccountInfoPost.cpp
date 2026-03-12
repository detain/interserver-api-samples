

#include "AccountInfoPost.h"

using namespace Tiny;

AccountInfoPost::AccountInfoPost()
{
	name = std::string();
	address = std::string();
	city = std::string();
	state = std::string();
	zip = std::string();
	country = std::string();
	phone = std::string();
	company = std::string();
	address2 = std::string();
	locale = std::string();
	email_invoices = std::string();
	email_abuse = std::string();
	disable_reset = bool(false);
	disable_reinstall = bool(false);
	disable_server_notifications = bool(false);
	disable_email_notifications = bool(false);
	gstin = std::string();
}

AccountInfoPost::AccountInfoPost(std::string jsonString)
{
	this->fromJson(jsonString);
}

AccountInfoPost::~AccountInfoPost()
{

}

void
AccountInfoPost::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *nameKey = "name";

    if(object.has_key(nameKey))
    {
        bourne::json value = object[nameKey];



        jsonToValue(&name, value, "std::string");


    }

    const char *addressKey = "address";

    if(object.has_key(addressKey))
    {
        bourne::json value = object[addressKey];



        jsonToValue(&address, value, "std::string");


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

    const char *companyKey = "company";

    if(object.has_key(companyKey))
    {
        bourne::json value = object[companyKey];



        jsonToValue(&company, value, "std::string");


    }

    const char *address2Key = "address2";

    if(object.has_key(address2Key))
    {
        bourne::json value = object[address2Key];



        jsonToValue(&address2, value, "std::string");


    }

    const char *localeKey = "locale";

    if(object.has_key(localeKey))
    {
        bourne::json value = object[localeKey];



        jsonToValue(&locale, value, "std::string");


    }

    const char *email_invoicesKey = "email_invoices";

    if(object.has_key(email_invoicesKey))
    {
        bourne::json value = object[email_invoicesKey];



        jsonToValue(&email_invoices, value, "std::string");


    }

    const char *email_abuseKey = "email_abuse";

    if(object.has_key(email_abuseKey))
    {
        bourne::json value = object[email_abuseKey];



        jsonToValue(&email_abuse, value, "std::string");


    }

    const char *disable_resetKey = "disable_reset";

    if(object.has_key(disable_resetKey))
    {
        bourne::json value = object[disable_resetKey];



        jsonToValue(&disable_reset, value, "bool");


    }

    const char *disable_reinstallKey = "disable_reinstall";

    if(object.has_key(disable_reinstallKey))
    {
        bourne::json value = object[disable_reinstallKey];



        jsonToValue(&disable_reinstall, value, "bool");


    }

    const char *disable_server_notificationsKey = "disable_server_notifications";

    if(object.has_key(disable_server_notificationsKey))
    {
        bourne::json value = object[disable_server_notificationsKey];



        jsonToValue(&disable_server_notifications, value, "bool");


    }

    const char *disable_email_notificationsKey = "disable_email_notifications";

    if(object.has_key(disable_email_notificationsKey))
    {
        bourne::json value = object[disable_email_notificationsKey];



        jsonToValue(&disable_email_notifications, value, "bool");


    }

    const char *gstinKey = "gstin";

    if(object.has_key(gstinKey))
    {
        bourne::json value = object[gstinKey];



        jsonToValue(&gstin, value, "std::string");


    }


}

bourne::json
AccountInfoPost::toJson()
{
    bourne::json object = bourne::json::object();





    object["name"] = getName();






    object["address"] = getAddress();






    object["city"] = getCity();






    object["state"] = getState();






    object["zip"] = getZip();






    object["country"] = getCountry();






    object["phone"] = getPhone();






    object["company"] = getCompany();






    object["address2"] = getAddress2();






    object["locale"] = getLocale();






    object["email_invoices"] = getEmailInvoices();






    object["email_abuse"] = getEmailAbuse();






    object["disable_reset"] = isDisableReset();






    object["disable_reinstall"] = isDisableReinstall();






    object["disable_server_notifications"] = isDisableServerNotifications();






    object["disable_email_notifications"] = isDisableEmailNotifications();






    object["gstin"] = getGstin();



    return object;

}

std::string
AccountInfoPost::getName()
{
	return name;
}

void
AccountInfoPost::setName(std::string name)
{
	this->name = name;
}

std::string
AccountInfoPost::getAddress()
{
	return address;
}

void
AccountInfoPost::setAddress(std::string address)
{
	this->address = address;
}

std::string
AccountInfoPost::getCity()
{
	return city;
}

void
AccountInfoPost::setCity(std::string city)
{
	this->city = city;
}

std::string
AccountInfoPost::getState()
{
	return state;
}

void
AccountInfoPost::setState(std::string state)
{
	this->state = state;
}

std::string
AccountInfoPost::getZip()
{
	return zip;
}

void
AccountInfoPost::setZip(std::string zip)
{
	this->zip = zip;
}

std::string
AccountInfoPost::getCountry()
{
	return country;
}

void
AccountInfoPost::setCountry(std::string country)
{
	this->country = country;
}

std::string
AccountInfoPost::getPhone()
{
	return phone;
}

void
AccountInfoPost::setPhone(std::string phone)
{
	this->phone = phone;
}

std::string
AccountInfoPost::getCompany()
{
	return company;
}

void
AccountInfoPost::setCompany(std::string company)
{
	this->company = company;
}

std::string
AccountInfoPost::getAddress2()
{
	return address2;
}

void
AccountInfoPost::setAddress2(std::string address2)
{
	this->address2 = address2;
}

std::string
AccountInfoPost::getLocale()
{
	return locale;
}

void
AccountInfoPost::setLocale(std::string locale)
{
	this->locale = locale;
}

std::string
AccountInfoPost::getEmailInvoices()
{
	return email_invoices;
}

void
AccountInfoPost::setEmailInvoices(std::string email_invoices)
{
	this->email_invoices = email_invoices;
}

std::string
AccountInfoPost::getEmailAbuse()
{
	return email_abuse;
}

void
AccountInfoPost::setEmailAbuse(std::string email_abuse)
{
	this->email_abuse = email_abuse;
}

bool
AccountInfoPost::isDisableReset()
{
	return disable_reset;
}

void
AccountInfoPost::setDisableReset(bool disable_reset)
{
	this->disable_reset = disable_reset;
}

bool
AccountInfoPost::isDisableReinstall()
{
	return disable_reinstall;
}

void
AccountInfoPost::setDisableReinstall(bool disable_reinstall)
{
	this->disable_reinstall = disable_reinstall;
}

bool
AccountInfoPost::isDisableServerNotifications()
{
	return disable_server_notifications;
}

void
AccountInfoPost::setDisableServerNotifications(bool disable_server_notifications)
{
	this->disable_server_notifications = disable_server_notifications;
}

bool
AccountInfoPost::isDisableEmailNotifications()
{
	return disable_email_notifications;
}

void
AccountInfoPost::setDisableEmailNotifications(bool disable_email_notifications)
{
	this->disable_email_notifications = disable_email_notifications;
}

std::string
AccountInfoPost::getGstin()
{
	return gstin;
}

void
AccountInfoPost::setGstin(std::string gstin)
{
	this->gstin = gstin;
}



