#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "DomainTechContact.h"

using namespace std;
using namespace Tizen::ArtikCloud;

DomainTechContact::DomainTechContact()
{
	//__init();
}

DomainTechContact::~DomainTechContact()
{
	//__cleanup();
}

void
DomainTechContact::__init()
{
	//state = std::string();
	//status = std::string();
	//org_name = std::string();
	//country = std::string();
	//postal_code = std::string();
	//fax = std::string();
	//email = std::string();
	//address2 = std::string();
	//address3 = std::string();
	//address1 = std::string();
	//city = std::string();
	//phone = std::string();
	//first_name = std::string();
	//last_name = std::string();
}

void
DomainTechContact::__cleanup()
{
	//if(state != NULL) {
	//
	//delete state;
	//state = NULL;
	//}
	//if(status != NULL) {
	//
	//delete status;
	//status = NULL;
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
	//if(fax != NULL) {
	//
	//delete fax;
	//fax = NULL;
	//}
	//if(email != NULL) {
	//
	//delete email;
	//email = NULL;
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
DomainTechContact::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *stateKey = "state";
	node = json_object_get_member(pJsonObject, stateKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&state, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *statusKey = "status";
	node = json_object_get_member(pJsonObject, statusKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&status, node, "std::string", "");
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
	const gchar *faxKey = "fax";
	node = json_object_get_member(pJsonObject, faxKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&fax, node, "std::string", "");
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

DomainTechContact::DomainTechContact(char* json)
{
	this->fromJson(json);
}

char*
DomainTechContact::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getState();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *stateKey = "state";
	json_object_set_member(pJsonObject, stateKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getStatus();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *statusKey = "status";
	json_object_set_member(pJsonObject, statusKey, node);
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
		std::string obj = getFax();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *faxKey = "fax";
	json_object_set_member(pJsonObject, faxKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getEmail();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *emailKey = "email";
	json_object_set_member(pJsonObject, emailKey, node);
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
DomainTechContact::getState()
{
	return state;
}

void
DomainTechContact::setState(std::string  state)
{
	this->state = state;
}

std::string
DomainTechContact::getStatus()
{
	return status;
}

void
DomainTechContact::setStatus(std::string  status)
{
	this->status = status;
}

std::string
DomainTechContact::getOrgName()
{
	return org_name;
}

void
DomainTechContact::setOrgName(std::string  org_name)
{
	this->org_name = org_name;
}

std::string
DomainTechContact::getCountry()
{
	return country;
}

void
DomainTechContact::setCountry(std::string  country)
{
	this->country = country;
}

std::string
DomainTechContact::getPostalCode()
{
	return postal_code;
}

void
DomainTechContact::setPostalCode(std::string  postal_code)
{
	this->postal_code = postal_code;
}

std::string
DomainTechContact::getFax()
{
	return fax;
}

void
DomainTechContact::setFax(std::string  fax)
{
	this->fax = fax;
}

std::string
DomainTechContact::getEmail()
{
	return email;
}

void
DomainTechContact::setEmail(std::string  email)
{
	this->email = email;
}

std::string
DomainTechContact::getAddress2()
{
	return address2;
}

void
DomainTechContact::setAddress2(std::string  address2)
{
	this->address2 = address2;
}

std::string
DomainTechContact::getAddress3()
{
	return address3;
}

void
DomainTechContact::setAddress3(std::string  address3)
{
	this->address3 = address3;
}

std::string
DomainTechContact::getAddress1()
{
	return address1;
}

void
DomainTechContact::setAddress1(std::string  address1)
{
	this->address1 = address1;
}

std::string
DomainTechContact::getCity()
{
	return city;
}

void
DomainTechContact::setCity(std::string  city)
{
	this->city = city;
}

std::string
DomainTechContact::getPhone()
{
	return phone;
}

void
DomainTechContact::setPhone(std::string  phone)
{
	this->phone = phone;
}

std::string
DomainTechContact::getFirstName()
{
	return first_name;
}

void
DomainTechContact::setFirstName(std::string  first_name)
{
	this->first_name = first_name;
}

std::string
DomainTechContact::getLastName()
{
	return last_name;
}

void
DomainTechContact::setLastName(std::string  last_name)
{
	this->last_name = last_name;
}


