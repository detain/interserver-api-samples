#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "DomainAdminContact.h"

using namespace std;
using namespace Tizen::ArtikCloud;

DomainAdminContact::DomainAdminContact()
{
	//__init();
}

DomainAdminContact::~DomainAdminContact()
{
	//__cleanup();
}

void
DomainAdminContact::__init()
{
	//status = std::string();
	//state = std::string();
	//org_name = std::string();
	//country = std::string();
	//postal_code = std::string();
	//email = std::string();
	//fax = std::string();
	//address2 = std::string();
	//address3 = std::string();
	//address1 = std::string();
	//city = std::string();
	//phone = std::string();
	//first_name = std::string();
	//last_name = std::string();
}

void
DomainAdminContact::__cleanup()
{
	//if(status != NULL) {
	//
	//delete status;
	//status = NULL;
	//}
	//if(state != NULL) {
	//
	//delete state;
	//state = NULL;
	//}
	//if(org_name != NULL) {
	//
	//delete org_name;
	//org_name = NULL;
	//}
	//if(country != NULL) {
	//
	//delete country;
	//country = NULL;
	//}
	//if(postal_code != NULL) {
	//
	//delete postal_code;
	//postal_code = NULL;
	//}
	//if(email != NULL) {
	//
	//delete email;
	//email = NULL;
	//}
	//if(fax != NULL) {
	//
	//delete fax;
	//fax = NULL;
	//}
	//if(address2 != NULL) {
	//
	//delete address2;
	//address2 = NULL;
	//}
	//if(address3 != NULL) {
	//
	//delete address3;
	//address3 = NULL;
	//}
	//if(address1 != NULL) {
	//
	//delete address1;
	//address1 = NULL;
	//}
	//if(city != NULL) {
	//
	//delete city;
	//city = NULL;
	//}
	//if(phone != NULL) {
	//
	//delete phone;
	//phone = NULL;
	//}
	//if(first_name != NULL) {
	//
	//delete first_name;
	//first_name = NULL;
	//}
	//if(last_name != NULL) {
	//
	//delete last_name;
	//last_name = NULL;
	//}
	//
}

void
DomainAdminContact::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *statusKey = "status";
	node = json_object_get_member(pJsonObject, statusKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&status, node, "std::string", "");
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
	const gchar *org_nameKey = "org_name";
	node = json_object_get_member(pJsonObject, org_nameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&org_name, node, "std::string", "");
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
	const gchar *postal_codeKey = "postal_code";
	node = json_object_get_member(pJsonObject, postal_codeKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&postal_code, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *emailKey = "email";
	node = json_object_get_member(pJsonObject, emailKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&email, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *faxKey = "fax";
	node = json_object_get_member(pJsonObject, faxKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&fax, node, "std::string", "");
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
	const gchar *address3Key = "address3";
	node = json_object_get_member(pJsonObject, address3Key);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&address3, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *address1Key = "address1";
	node = json_object_get_member(pJsonObject, address1Key);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&address1, node, "std::string", "");
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
	const gchar *phoneKey = "phone";
	node = json_object_get_member(pJsonObject, phoneKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&phone, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *first_nameKey = "first_name";
	node = json_object_get_member(pJsonObject, first_nameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&first_name, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *last_nameKey = "last_name";
	node = json_object_get_member(pJsonObject, last_nameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&last_name, node, "std::string", "");
		} else {
			
		}
	}
}

DomainAdminContact::DomainAdminContact(char* json)
{
	this->fromJson(json);
}

char*
DomainAdminContact::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getStatus();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *statusKey = "status";
	json_object_set_member(pJsonObject, statusKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getState();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *stateKey = "state";
	json_object_set_member(pJsonObject, stateKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getOrgName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *org_nameKey = "org_name";
	json_object_set_member(pJsonObject, org_nameKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getCountry();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *countryKey = "country";
	json_object_set_member(pJsonObject, countryKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getPostalCode();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *postal_codeKey = "postal_code";
	json_object_set_member(pJsonObject, postal_codeKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getEmail();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *emailKey = "email";
	json_object_set_member(pJsonObject, emailKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getFax();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *faxKey = "fax";
	json_object_set_member(pJsonObject, faxKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getAddress2();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *address2Key = "address2";
	json_object_set_member(pJsonObject, address2Key, node);
	if (isprimitive("std::string")) {
		std::string obj = getAddress3();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *address3Key = "address3";
	json_object_set_member(pJsonObject, address3Key, node);
	if (isprimitive("std::string")) {
		std::string obj = getAddress1();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *address1Key = "address1";
	json_object_set_member(pJsonObject, address1Key, node);
	if (isprimitive("std::string")) {
		std::string obj = getCity();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *cityKey = "city";
	json_object_set_member(pJsonObject, cityKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getPhone();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *phoneKey = "phone";
	json_object_set_member(pJsonObject, phoneKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getFirstName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *first_nameKey = "first_name";
	json_object_set_member(pJsonObject, first_nameKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getLastName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *last_nameKey = "last_name";
	json_object_set_member(pJsonObject, last_nameKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
DomainAdminContact::getStatus()
{
	return status;
}

void
DomainAdminContact::setStatus(std::string  status)
{
	this->status = status;
}

std::string
DomainAdminContact::getState()
{
	return state;
}

void
DomainAdminContact::setState(std::string  state)
{
	this->state = state;
}

std::string
DomainAdminContact::getOrgName()
{
	return org_name;
}

void
DomainAdminContact::setOrgName(std::string  org_name)
{
	this->org_name = org_name;
}

std::string
DomainAdminContact::getCountry()
{
	return country;
}

void
DomainAdminContact::setCountry(std::string  country)
{
	this->country = country;
}

std::string
DomainAdminContact::getPostalCode()
{
	return postal_code;
}

void
DomainAdminContact::setPostalCode(std::string  postal_code)
{
	this->postal_code = postal_code;
}

std::string
DomainAdminContact::getEmail()
{
	return email;
}

void
DomainAdminContact::setEmail(std::string  email)
{
	this->email = email;
}

std::string
DomainAdminContact::getFax()
{
	return fax;
}

void
DomainAdminContact::setFax(std::string  fax)
{
	this->fax = fax;
}

std::string
DomainAdminContact::getAddress2()
{
	return address2;
}

void
DomainAdminContact::setAddress2(std::string  address2)
{
	this->address2 = address2;
}

std::string
DomainAdminContact::getAddress3()
{
	return address3;
}

void
DomainAdminContact::setAddress3(std::string  address3)
{
	this->address3 = address3;
}

std::string
DomainAdminContact::getAddress1()
{
	return address1;
}

void
DomainAdminContact::setAddress1(std::string  address1)
{
	this->address1 = address1;
}

std::string
DomainAdminContact::getCity()
{
	return city;
}

void
DomainAdminContact::setCity(std::string  city)
{
	this->city = city;
}

std::string
DomainAdminContact::getPhone()
{
	return phone;
}

void
DomainAdminContact::setPhone(std::string  phone)
{
	this->phone = phone;
}

std::string
DomainAdminContact::getFirstName()
{
	return first_name;
}

void
DomainAdminContact::setFirstName(std::string  first_name)
{
	this->first_name = first_name;
}

std::string
DomainAdminContact::getLastName()
{
	return last_name;
}

void
DomainAdminContact::setLastName(std::string  last_name)
{
	this->last_name = last_name;
}


