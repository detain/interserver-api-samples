#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "DomainBillingExtra.h"

using namespace std;
using namespace Tizen::ArtikCloud;

DomainBillingExtra::DomainBillingExtra()
{
	//__init();
}

DomainBillingExtra::~DomainBillingExtra()
{
	//__cleanup();
}

void
DomainBillingExtra::__init()
{
	//order = new DomainOrderResponse();
	//order_id = std::string();
	//domain_id = std::string();
	//provProcessPending = new DomainProvProcessPending();
	//email = std::string();
	//firstname = std::string();
	//lastname = std::string();
	//company = std::string();
	//address = std::string();
	//address2 = std::string();
	//address3 = std::string();
	//city = std::string();
	//state = std::string();
	//zip = std::string();
	//country = std::string();
	//phone = std::string();
	//fax = std::string();
}

void
DomainBillingExtra::__cleanup()
{
	//if(order != NULL) {
	//
	//delete order;
	//order = NULL;
	//}
	//if(order_id != NULL) {
	//
	//delete order_id;
	//order_id = NULL;
	//}
	//if(domain_id != NULL) {
	//
	//delete domain_id;
	//domain_id = NULL;
	//}
	//if(provProcessPending != NULL) {
	//
	//delete provProcessPending;
	//provProcessPending = NULL;
	//}
	//if(email != NULL) {
	//
	//delete email;
	//email = NULL;
	//}
	//if(firstname != NULL) {
	//
	//delete firstname;
	//firstname = NULL;
	//}
	//if(lastname != NULL) {
	//
	//delete lastname;
	//lastname = NULL;
	//}
	//if(company != NULL) {
	//
	//delete company;
	//company = NULL;
	//}
	//if(address != NULL) {
	//
	//delete address;
	//address = NULL;
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
	//if(fax != NULL) {
	//
	//delete fax;
	//fax = NULL;
	//}
	//
}

void
DomainBillingExtra::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *orderKey = "order";
	node = json_object_get_member(pJsonObject, orderKey);
	if (node !=NULL) {
	

		if (isprimitive("DomainOrderResponse")) {
			jsonToValue(&order, node, "DomainOrderResponse", "DomainOrderResponse");
		} else {
			
			DomainOrderResponse* obj = static_cast<DomainOrderResponse*> (&order);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *order_idKey = "order_id";
	node = json_object_get_member(pJsonObject, order_idKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&order_id, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *domain_idKey = "domain_id";
	node = json_object_get_member(pJsonObject, domain_idKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&domain_id, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *provProcessPendingKey = "provProcessPending";
	node = json_object_get_member(pJsonObject, provProcessPendingKey);
	if (node !=NULL) {
	

		if (isprimitive("DomainProvProcessPending")) {
			jsonToValue(&provProcessPending, node, "DomainProvProcessPending", "DomainProvProcessPending");
		} else {
			
			DomainProvProcessPending* obj = static_cast<DomainProvProcessPending*> (&provProcessPending);
			obj->fromJson(json_to_string(node, false));
			
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
	const gchar *firstnameKey = "firstname";
	node = json_object_get_member(pJsonObject, firstnameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&firstname, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *lastnameKey = "lastname";
	node = json_object_get_member(pJsonObject, lastnameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&lastname, node, "std::string", "");
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
	const gchar *addressKey = "address";
	node = json_object_get_member(pJsonObject, addressKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&address, node, "std::string", "");
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
	const gchar *faxKey = "fax";
	node = json_object_get_member(pJsonObject, faxKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&fax, node, "std::string", "");
		} else {
			
		}
	}
}

DomainBillingExtra::DomainBillingExtra(char* json)
{
	this->fromJson(json);
}

char*
DomainBillingExtra::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("DomainOrderResponse")) {
		DomainOrderResponse obj = getOrder();
		node = converttoJson(&obj, "DomainOrderResponse", "");
	}
	else {
		
		DomainOrderResponse obj = static_cast<DomainOrderResponse> (getOrder());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *orderKey = "order";
	json_object_set_member(pJsonObject, orderKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getOrderId();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *order_idKey = "order_id";
	json_object_set_member(pJsonObject, order_idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getDomainId();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *domain_idKey = "domain_id";
	json_object_set_member(pJsonObject, domain_idKey, node);
	if (isprimitive("DomainProvProcessPending")) {
		DomainProvProcessPending obj = getProvProcessPending();
		node = converttoJson(&obj, "DomainProvProcessPending", "");
	}
	else {
		
		DomainProvProcessPending obj = static_cast<DomainProvProcessPending> (getProvProcessPending());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *provProcessPendingKey = "provProcessPending";
	json_object_set_member(pJsonObject, provProcessPendingKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getEmail();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *emailKey = "email";
	json_object_set_member(pJsonObject, emailKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getFirstname();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *firstnameKey = "firstname";
	json_object_set_member(pJsonObject, firstnameKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getLastname();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *lastnameKey = "lastname";
	json_object_set_member(pJsonObject, lastnameKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getCompany();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *companyKey = "company";
	json_object_set_member(pJsonObject, companyKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getAddress();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *addressKey = "address";
	json_object_set_member(pJsonObject, addressKey, node);
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
		std::string obj = getFax();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *faxKey = "fax";
	json_object_set_member(pJsonObject, faxKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

DomainOrderResponse
DomainBillingExtra::getOrder()
{
	return order;
}

void
DomainBillingExtra::setOrder(DomainOrderResponse  order)
{
	this->order = order;
}

std::string
DomainBillingExtra::getOrderId()
{
	return order_id;
}

void
DomainBillingExtra::setOrderId(std::string  order_id)
{
	this->order_id = order_id;
}

std::string
DomainBillingExtra::getDomainId()
{
	return domain_id;
}

void
DomainBillingExtra::setDomainId(std::string  domain_id)
{
	this->domain_id = domain_id;
}

DomainProvProcessPending
DomainBillingExtra::getProvProcessPending()
{
	return provProcessPending;
}

void
DomainBillingExtra::setProvProcessPending(DomainProvProcessPending  provProcessPending)
{
	this->provProcessPending = provProcessPending;
}

std::string
DomainBillingExtra::getEmail()
{
	return email;
}

void
DomainBillingExtra::setEmail(std::string  email)
{
	this->email = email;
}

std::string
DomainBillingExtra::getFirstname()
{
	return firstname;
}

void
DomainBillingExtra::setFirstname(std::string  firstname)
{
	this->firstname = firstname;
}

std::string
DomainBillingExtra::getLastname()
{
	return lastname;
}

void
DomainBillingExtra::setLastname(std::string  lastname)
{
	this->lastname = lastname;
}

std::string
DomainBillingExtra::getCompany()
{
	return company;
}

void
DomainBillingExtra::setCompany(std::string  company)
{
	this->company = company;
}

std::string
DomainBillingExtra::getAddress()
{
	return address;
}

void
DomainBillingExtra::setAddress(std::string  address)
{
	this->address = address;
}

std::string
DomainBillingExtra::getAddress2()
{
	return address2;
}

void
DomainBillingExtra::setAddress2(std::string  address2)
{
	this->address2 = address2;
}

std::string
DomainBillingExtra::getAddress3()
{
	return address3;
}

void
DomainBillingExtra::setAddress3(std::string  address3)
{
	this->address3 = address3;
}

std::string
DomainBillingExtra::getCity()
{
	return city;
}

void
DomainBillingExtra::setCity(std::string  city)
{
	this->city = city;
}

std::string
DomainBillingExtra::getState()
{
	return state;
}

void
DomainBillingExtra::setState(std::string  state)
{
	this->state = state;
}

std::string
DomainBillingExtra::getZip()
{
	return zip;
}

void
DomainBillingExtra::setZip(std::string  zip)
{
	this->zip = zip;
}

std::string
DomainBillingExtra::getCountry()
{
	return country;
}

void
DomainBillingExtra::setCountry(std::string  country)
{
	this->country = country;
}

std::string
DomainBillingExtra::getPhone()
{
	return phone;
}

void
DomainBillingExtra::setPhone(std::string  phone)
{
	this->phone = phone;
}

std::string
DomainBillingExtra::getFax()
{
	return fax;
}

void
DomainBillingExtra::setFax(std::string  fax)
{
	this->fax = fax;
}


