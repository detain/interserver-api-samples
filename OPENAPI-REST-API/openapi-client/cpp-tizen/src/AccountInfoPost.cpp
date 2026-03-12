#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "AccountInfoPost.h"

using namespace std;
using namespace Tizen::ArtikCloud;

AccountInfoPost::AccountInfoPost()
{
	//__init();
}

AccountInfoPost::~AccountInfoPost()
{
	//__cleanup();
}

void
AccountInfoPost::__init()
{
	//name = std::string();
	//address = std::string();
	//city = std::string();
	//state = std::string();
	//zip = std::string();
	//country = std::string();
	//phone = std::string();
	//company = std::string();
	//address2 = std::string();
	//locale = std::string();
	//email_invoices = std::string();
	//email_abuse = std::string();
	//disable_reset = bool(false);
	//disable_reinstall = bool(false);
	//disable_server_notifications = bool(false);
	//disable_email_notifications = bool(false);
	//gstin = std::string();
}

void
AccountInfoPost::__cleanup()
{
	//if(name != NULL) {
	//
	//delete name;
	//name = NULL;
	//}
	//if(address != NULL) {
	//
	//delete address;
	//address = NULL;
	//}
	//if(city != NULL) {
	//
	//delete city;
	//city = NULL;
	//}
	//if(state != NULL) {
	//
	//delete state;
	//state = NULL;
	//}
	//if(zip != NULL) {
	//
	//delete zip;
	//zip = NULL;
	//}
	//if(country != NULL) {
	//
	//delete country;
	//country = NULL;
	//}
	//if(phone != NULL) {
	//
	//delete phone;
	//phone = NULL;
	//}
	//if(company != NULL) {
	//
	//delete company;
	//company = NULL;
	//}
	//if(address2 != NULL) {
	//
	//delete address2;
	//address2 = NULL;
	//}
	//if(locale != NULL) {
	//
	//delete locale;
	//locale = NULL;
	//}
	//if(email_invoices != NULL) {
	//
	//delete email_invoices;
	//email_invoices = NULL;
	//}
	//if(email_abuse != NULL) {
	//
	//delete email_abuse;
	//email_abuse = NULL;
	//}
	//if(disable_reset != NULL) {
	//
	//delete disable_reset;
	//disable_reset = NULL;
	//}
	//if(disable_reinstall != NULL) {
	//
	//delete disable_reinstall;
	//disable_reinstall = NULL;
	//}
	//if(disable_server_notifications != NULL) {
	//
	//delete disable_server_notifications;
	//disable_server_notifications = NULL;
	//}
	//if(disable_email_notifications != NULL) {
	//
	//delete disable_email_notifications;
	//disable_email_notifications = NULL;
	//}
	//if(gstin != NULL) {
	//
	//delete gstin;
	//gstin = NULL;
	//}
	//
}

void
AccountInfoPost::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *nameKey = "name";
	node = json_object_get_member(pJsonObject, nameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&name, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *addressKey = "address";
	node = json_object_get_member(pJsonObject, addressKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&address, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *cityKey = "city";
	node = json_object_get_member(pJsonObject, cityKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&city, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *stateKey = "state";
	node = json_object_get_member(pJsonObject, stateKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&state, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *zipKey = "zip";
	node = json_object_get_member(pJsonObject, zipKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&zip, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *countryKey = "country";
	node = json_object_get_member(pJsonObject, countryKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&country, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *phoneKey = "phone";
	node = json_object_get_member(pJsonObject, phoneKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&phone, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *companyKey = "company";
	node = json_object_get_member(pJsonObject, companyKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&company, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *address2Key = "address2";
	node = json_object_get_member(pJsonObject, address2Key);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&address2, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *localeKey = "locale";
	node = json_object_get_member(pJsonObject, localeKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&locale, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *email_invoicesKey = "email_invoices";
	node = json_object_get_member(pJsonObject, email_invoicesKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&email_invoices, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *email_abuseKey = "email_abuse";
	node = json_object_get_member(pJsonObject, email_abuseKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&email_abuse, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *disable_resetKey = "disable_reset";
	node = json_object_get_member(pJsonObject, disable_resetKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&disable_reset, node, "bool", "");
		} else {
			
		}
	}
	const gchar *disable_reinstallKey = "disable_reinstall";
	node = json_object_get_member(pJsonObject, disable_reinstallKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&disable_reinstall, node, "bool", "");
		} else {
			
		}
	}
	const gchar *disable_server_notificationsKey = "disable_server_notifications";
	node = json_object_get_member(pJsonObject, disable_server_notificationsKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&disable_server_notifications, node, "bool", "");
		} else {
			
		}
	}
	const gchar *disable_email_notificationsKey = "disable_email_notifications";
	node = json_object_get_member(pJsonObject, disable_email_notificationsKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&disable_email_notifications, node, "bool", "");
		} else {
			
		}
	}
	const gchar *gstinKey = "gstin";
	node = json_object_get_member(pJsonObject, gstinKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&gstin, node, "std::string", "");
		} else {
			
		}
	}
}

AccountInfoPost::AccountInfoPost(char* json)
{
	this->fromJson(json);
}

char*
AccountInfoPost::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *nameKey = "name";
	json_object_set_member(pJsonObject, nameKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getAddress();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *addressKey = "address";
	json_object_set_member(pJsonObject, addressKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getCity();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *cityKey = "city";
	json_object_set_member(pJsonObject, cityKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getState();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *stateKey = "state";
	json_object_set_member(pJsonObject, stateKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getZip();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *zipKey = "zip";
	json_object_set_member(pJsonObject, zipKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getCountry();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *countryKey = "country";
	json_object_set_member(pJsonObject, countryKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getPhone();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *phoneKey = "phone";
	json_object_set_member(pJsonObject, phoneKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getCompany();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *companyKey = "company";
	json_object_set_member(pJsonObject, companyKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getAddress2();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *address2Key = "address2";
	json_object_set_member(pJsonObject, address2Key, node);
	if (isprimitive("std::string")) {
		std::string obj = getLocale();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *localeKey = "locale";
	json_object_set_member(pJsonObject, localeKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getEmailInvoices();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *email_invoicesKey = "email_invoices";
	json_object_set_member(pJsonObject, email_invoicesKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getEmailAbuse();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *email_abuseKey = "email_abuse";
	json_object_set_member(pJsonObject, email_abuseKey, node);
	if (isprimitive("bool")) {
		bool obj = getDisableReset();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *disable_resetKey = "disable_reset";
	json_object_set_member(pJsonObject, disable_resetKey, node);
	if (isprimitive("bool")) {
		bool obj = getDisableReinstall();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *disable_reinstallKey = "disable_reinstall";
	json_object_set_member(pJsonObject, disable_reinstallKey, node);
	if (isprimitive("bool")) {
		bool obj = getDisableServerNotifications();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *disable_server_notificationsKey = "disable_server_notifications";
	json_object_set_member(pJsonObject, disable_server_notificationsKey, node);
	if (isprimitive("bool")) {
		bool obj = getDisableEmailNotifications();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *disable_email_notificationsKey = "disable_email_notifications";
	json_object_set_member(pJsonObject, disable_email_notificationsKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getGstin();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *gstinKey = "gstin";
	json_object_set_member(pJsonObject, gstinKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
AccountInfoPost::getName()
{
	return name;
}

void
AccountInfoPost::setName(std::string  name)
{
	this->name = name;
}

std::string
AccountInfoPost::getAddress()
{
	return address;
}

void
AccountInfoPost::setAddress(std::string  address)
{
	this->address = address;
}

std::string
AccountInfoPost::getCity()
{
	return city;
}

void
AccountInfoPost::setCity(std::string  city)
{
	this->city = city;
}

std::string
AccountInfoPost::getState()
{
	return state;
}

void
AccountInfoPost::setState(std::string  state)
{
	this->state = state;
}

std::string
AccountInfoPost::getZip()
{
	return zip;
}

void
AccountInfoPost::setZip(std::string  zip)
{
	this->zip = zip;
}

std::string
AccountInfoPost::getCountry()
{
	return country;
}

void
AccountInfoPost::setCountry(std::string  country)
{
	this->country = country;
}

std::string
AccountInfoPost::getPhone()
{
	return phone;
}

void
AccountInfoPost::setPhone(std::string  phone)
{
	this->phone = phone;
}

std::string
AccountInfoPost::getCompany()
{
	return company;
}

void
AccountInfoPost::setCompany(std::string  company)
{
	this->company = company;
}

std::string
AccountInfoPost::getAddress2()
{
	return address2;
}

void
AccountInfoPost::setAddress2(std::string  address2)
{
	this->address2 = address2;
}

std::string
AccountInfoPost::getLocale()
{
	return locale;
}

void
AccountInfoPost::setLocale(std::string  locale)
{
	this->locale = locale;
}

std::string
AccountInfoPost::getEmailInvoices()
{
	return email_invoices;
}

void
AccountInfoPost::setEmailInvoices(std::string  email_invoices)
{
	this->email_invoices = email_invoices;
}

std::string
AccountInfoPost::getEmailAbuse()
{
	return email_abuse;
}

void
AccountInfoPost::setEmailAbuse(std::string  email_abuse)
{
	this->email_abuse = email_abuse;
}

bool
AccountInfoPost::getDisableReset()
{
	return disable_reset;
}

void
AccountInfoPost::setDisableReset(bool  disable_reset)
{
	this->disable_reset = disable_reset;
}

bool
AccountInfoPost::getDisableReinstall()
{
	return disable_reinstall;
}

void
AccountInfoPost::setDisableReinstall(bool  disable_reinstall)
{
	this->disable_reinstall = disable_reinstall;
}

bool
AccountInfoPost::getDisableServerNotifications()
{
	return disable_server_notifications;
}

void
AccountInfoPost::setDisableServerNotifications(bool  disable_server_notifications)
{
	this->disable_server_notifications = disable_server_notifications;
}

bool
AccountInfoPost::getDisableEmailNotifications()
{
	return disable_email_notifications;
}

void
AccountInfoPost::setDisableEmailNotifications(bool  disable_email_notifications)
{
	this->disable_email_notifications = disable_email_notifications;
}

std::string
AccountInfoPost::getGstin()
{
	return gstin;
}

void
AccountInfoPost::setGstin(std::string  gstin)
{
	this->gstin = gstin;
}


