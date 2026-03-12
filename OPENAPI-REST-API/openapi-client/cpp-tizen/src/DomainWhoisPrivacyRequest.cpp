#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "DomainWhoisPrivacyRequest.h"

using namespace std;
using namespace Tizen::ArtikCloud;

DomainWhoisPrivacyRequest::DomainWhoisPrivacyRequest()
{
	//__init();
}

DomainWhoisPrivacyRequest::~DomainWhoisPrivacyRequest()
{
	//__cleanup();
}

void
DomainWhoisPrivacyRequest::__init()
{
	//func = std::string();
	//csrf_token = std::string();
	//domain_firstname = std::string();
	//domain_lastname = std::string();
	//domain_email = std::string();
	//domain_address = std::string();
	//domain_address2 = std::string();
	//domain_address3 = std::string();
	//domain_city = std::string();
	//domain_state = std::string();
	//domain_zip = std::string();
	//domain_country = std::string();
	//domain_phone = std::string();
	//domain_fax = std::string();
	//domain_company = std::string();
	//domain_extra = std::string();
}

void
DomainWhoisPrivacyRequest::__cleanup()
{
	//if(func != NULL) {
	//
	//delete func;
	//func = NULL;
	//}
	//if(csrf_token != NULL) {
	//
	//delete csrf_token;
	//csrf_token = NULL;
	//}
	//if(domain_firstname != NULL) {
	//
	//delete domain_firstname;
	//domain_firstname = NULL;
	//}
	//if(domain_lastname != NULL) {
	//
	//delete domain_lastname;
	//domain_lastname = NULL;
	//}
	//if(domain_email != NULL) {
	//
	//delete domain_email;
	//domain_email = NULL;
	//}
	//if(domain_address != NULL) {
	//
	//delete domain_address;
	//domain_address = NULL;
	//}
	//if(domain_address2 != NULL) {
	//
	//delete domain_address2;
	//domain_address2 = NULL;
	//}
	//if(domain_address3 != NULL) {
	//
	//delete domain_address3;
	//domain_address3 = NULL;
	//}
	//if(domain_city != NULL) {
	//
	//delete domain_city;
	//domain_city = NULL;
	//}
	//if(domain_state != NULL) {
	//
	//delete domain_state;
	//domain_state = NULL;
	//}
	//if(domain_zip != NULL) {
	//
	//delete domain_zip;
	//domain_zip = NULL;
	//}
	//if(domain_country != NULL) {
	//
	//delete domain_country;
	//domain_country = NULL;
	//}
	//if(domain_phone != NULL) {
	//
	//delete domain_phone;
	//domain_phone = NULL;
	//}
	//if(domain_fax != NULL) {
	//
	//delete domain_fax;
	//domain_fax = NULL;
	//}
	//if(domain_company != NULL) {
	//
	//delete domain_company;
	//domain_company = NULL;
	//}
	//if(domain_extra != NULL) {
	//
	//delete domain_extra;
	//domain_extra = NULL;
	//}
	//
}

void
DomainWhoisPrivacyRequest::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *funcKey = "func";
	node = json_object_get_member(pJsonObject, funcKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&func, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *csrf_tokenKey = "csrf_token";
	node = json_object_get_member(pJsonObject, csrf_tokenKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&csrf_token, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *domain_firstnameKey = "domain_firstname";
	node = json_object_get_member(pJsonObject, domain_firstnameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&domain_firstname, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *domain_lastnameKey = "domain_lastname";
	node = json_object_get_member(pJsonObject, domain_lastnameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&domain_lastname, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *domain_emailKey = "domain_email";
	node = json_object_get_member(pJsonObject, domain_emailKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&domain_email, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *domain_addressKey = "domain_address";
	node = json_object_get_member(pJsonObject, domain_addressKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&domain_address, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *domain_address2Key = "domain_address2";
	node = json_object_get_member(pJsonObject, domain_address2Key);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&domain_address2, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *domain_address3Key = "domain_address3";
	node = json_object_get_member(pJsonObject, domain_address3Key);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&domain_address3, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *domain_cityKey = "domain_city";
	node = json_object_get_member(pJsonObject, domain_cityKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&domain_city, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *domain_stateKey = "domain_state";
	node = json_object_get_member(pJsonObject, domain_stateKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&domain_state, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *domain_zipKey = "domain_zip";
	node = json_object_get_member(pJsonObject, domain_zipKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&domain_zip, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *domain_countryKey = "domain_country";
	node = json_object_get_member(pJsonObject, domain_countryKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&domain_country, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *domain_phoneKey = "domain_phone";
	node = json_object_get_member(pJsonObject, domain_phoneKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&domain_phone, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *domain_faxKey = "domain_fax";
	node = json_object_get_member(pJsonObject, domain_faxKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&domain_fax, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *domain_companyKey = "domain_company";
	node = json_object_get_member(pJsonObject, domain_companyKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&domain_company, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *domain_extraKey = "domain_extra";
	node = json_object_get_member(pJsonObject, domain_extraKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&domain_extra, node, "std::string", "");
		} else {
			
		}
	}
}

DomainWhoisPrivacyRequest::DomainWhoisPrivacyRequest(char* json)
{
	this->fromJson(json);
}

char*
DomainWhoisPrivacyRequest::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getFunc();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *funcKey = "func";
	json_object_set_member(pJsonObject, funcKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getCsrfToken();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *csrf_tokenKey = "csrf_token";
	json_object_set_member(pJsonObject, csrf_tokenKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getDomainFirstname();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *domain_firstnameKey = "domain_firstname";
	json_object_set_member(pJsonObject, domain_firstnameKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getDomainLastname();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *domain_lastnameKey = "domain_lastname";
	json_object_set_member(pJsonObject, domain_lastnameKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getDomainEmail();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *domain_emailKey = "domain_email";
	json_object_set_member(pJsonObject, domain_emailKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getDomainAddress();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *domain_addressKey = "domain_address";
	json_object_set_member(pJsonObject, domain_addressKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getDomainAddress2();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *domain_address2Key = "domain_address2";
	json_object_set_member(pJsonObject, domain_address2Key, node);
	if (isprimitive("std::string")) {
		std::string obj = getDomainAddress3();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *domain_address3Key = "domain_address3";
	json_object_set_member(pJsonObject, domain_address3Key, node);
	if (isprimitive("std::string")) {
		std::string obj = getDomainCity();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *domain_cityKey = "domain_city";
	json_object_set_member(pJsonObject, domain_cityKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getDomainState();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *domain_stateKey = "domain_state";
	json_object_set_member(pJsonObject, domain_stateKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getDomainZip();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *domain_zipKey = "domain_zip";
	json_object_set_member(pJsonObject, domain_zipKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getDomainCountry();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *domain_countryKey = "domain_country";
	json_object_set_member(pJsonObject, domain_countryKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getDomainPhone();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *domain_phoneKey = "domain_phone";
	json_object_set_member(pJsonObject, domain_phoneKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getDomainFax();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *domain_faxKey = "domain_fax";
	json_object_set_member(pJsonObject, domain_faxKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getDomainCompany();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *domain_companyKey = "domain_company";
	json_object_set_member(pJsonObject, domain_companyKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getDomainExtra();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *domain_extraKey = "domain_extra";
	json_object_set_member(pJsonObject, domain_extraKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
DomainWhoisPrivacyRequest::getFunc()
{
	return func;
}

void
DomainWhoisPrivacyRequest::setFunc(std::string  func)
{
	this->func = func;
}

std::string
DomainWhoisPrivacyRequest::getCsrfToken()
{
	return csrf_token;
}

void
DomainWhoisPrivacyRequest::setCsrfToken(std::string  csrf_token)
{
	this->csrf_token = csrf_token;
}

std::string
DomainWhoisPrivacyRequest::getDomainFirstname()
{
	return domain_firstname;
}

void
DomainWhoisPrivacyRequest::setDomainFirstname(std::string  domain_firstname)
{
	this->domain_firstname = domain_firstname;
}

std::string
DomainWhoisPrivacyRequest::getDomainLastname()
{
	return domain_lastname;
}

void
DomainWhoisPrivacyRequest::setDomainLastname(std::string  domain_lastname)
{
	this->domain_lastname = domain_lastname;
}

std::string
DomainWhoisPrivacyRequest::getDomainEmail()
{
	return domain_email;
}

void
DomainWhoisPrivacyRequest::setDomainEmail(std::string  domain_email)
{
	this->domain_email = domain_email;
}

std::string
DomainWhoisPrivacyRequest::getDomainAddress()
{
	return domain_address;
}

void
DomainWhoisPrivacyRequest::setDomainAddress(std::string  domain_address)
{
	this->domain_address = domain_address;
}

std::string
DomainWhoisPrivacyRequest::getDomainAddress2()
{
	return domain_address2;
}

void
DomainWhoisPrivacyRequest::setDomainAddress2(std::string  domain_address2)
{
	this->domain_address2 = domain_address2;
}

std::string
DomainWhoisPrivacyRequest::getDomainAddress3()
{
	return domain_address3;
}

void
DomainWhoisPrivacyRequest::setDomainAddress3(std::string  domain_address3)
{
	this->domain_address3 = domain_address3;
}

std::string
DomainWhoisPrivacyRequest::getDomainCity()
{
	return domain_city;
}

void
DomainWhoisPrivacyRequest::setDomainCity(std::string  domain_city)
{
	this->domain_city = domain_city;
}

std::string
DomainWhoisPrivacyRequest::getDomainState()
{
	return domain_state;
}

void
DomainWhoisPrivacyRequest::setDomainState(std::string  domain_state)
{
	this->domain_state = domain_state;
}

std::string
DomainWhoisPrivacyRequest::getDomainZip()
{
	return domain_zip;
}

void
DomainWhoisPrivacyRequest::setDomainZip(std::string  domain_zip)
{
	this->domain_zip = domain_zip;
}

std::string
DomainWhoisPrivacyRequest::getDomainCountry()
{
	return domain_country;
}

void
DomainWhoisPrivacyRequest::setDomainCountry(std::string  domain_country)
{
	this->domain_country = domain_country;
}

std::string
DomainWhoisPrivacyRequest::getDomainPhone()
{
	return domain_phone;
}

void
DomainWhoisPrivacyRequest::setDomainPhone(std::string  domain_phone)
{
	this->domain_phone = domain_phone;
}

std::string
DomainWhoisPrivacyRequest::getDomainFax()
{
	return domain_fax;
}

void
DomainWhoisPrivacyRequest::setDomainFax(std::string  domain_fax)
{
	this->domain_fax = domain_fax;
}

std::string
DomainWhoisPrivacyRequest::getDomainCompany()
{
	return domain_company;
}

void
DomainWhoisPrivacyRequest::setDomainCompany(std::string  domain_company)
{
	this->domain_company = domain_company;
}

std::string
DomainWhoisPrivacyRequest::getDomainExtra()
{
	return domain_extra;
}

void
DomainWhoisPrivacyRequest::setDomainExtra(std::string  domain_extra)
{
	this->domain_extra = domain_extra;
}


