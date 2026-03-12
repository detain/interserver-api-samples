#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "DomainOrder.h"

using namespace std;
using namespace Tizen::ArtikCloud;

DomainOrder::DomainOrder()
{
	//__init();
}

DomainOrder::~DomainOrder()
{
	//__cleanup();
}

void
DomainOrder::__init()
{
	//whoisPrivacyCost = std::string();
	//services = new DomainOrder_services();
	//tldServices = null;
}

void
DomainOrder::__cleanup()
{
	//if(whoisPrivacyCost != NULL) {
	//
	//delete whoisPrivacyCost;
	//whoisPrivacyCost = NULL;
	//}
	//if(services != NULL) {
	//
	//delete services;
	//services = NULL;
	//}
	//if(tldServices != NULL) {
	//
	//delete tldServices;
	//tldServices = NULL;
	//}
	//
}

void
DomainOrder::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *whoisPrivacyCostKey = "whoisPrivacyCost";
	node = json_object_get_member(pJsonObject, whoisPrivacyCostKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&whoisPrivacyCost, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *servicesKey = "services";
	node = json_object_get_member(pJsonObject, servicesKey);
	if (node !=NULL) {
	

		if (isprimitive("DomainOrder_services")) {
			jsonToValue(&services, node, "DomainOrder_services", "DomainOrder_services");
		} else {
			
			DomainOrder_services* obj = static_cast<DomainOrder_services*> (&services);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *tldServicesKey = "tldServices";
	node = json_object_get_member(pJsonObject, tldServicesKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&tldServices, node, "std::string", "");
		} else {
			
			std::string* obj = static_cast<std::string*> (&tldServices);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
}

DomainOrder::DomainOrder(char* json)
{
	this->fromJson(json);
}

char*
DomainOrder::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getWhoisPrivacyCost();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *whoisPrivacyCostKey = "whoisPrivacyCost";
	json_object_set_member(pJsonObject, whoisPrivacyCostKey, node);
	if (isprimitive("DomainOrder_services")) {
		DomainOrder_services obj = getServices();
		node = converttoJson(&obj, "DomainOrder_services", "");
	}
	else {
		
		DomainOrder_services obj = static_cast<DomainOrder_services> (getServices());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *servicesKey = "services";
	json_object_set_member(pJsonObject, servicesKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getTldServices();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
		std::string obj = static_cast<std::string> (getTldServices());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *tldServicesKey = "tldServices";
	json_object_set_member(pJsonObject, tldServicesKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
DomainOrder::getWhoisPrivacyCost()
{
	return whoisPrivacyCost;
}

void
DomainOrder::setWhoisPrivacyCost(std::string  whoisPrivacyCost)
{
	this->whoisPrivacyCost = whoisPrivacyCost;
}

DomainOrder_services
DomainOrder::getServices()
{
	return services;
}

void
DomainOrder::setServices(DomainOrder_services  services)
{
	this->services = services;
}

std::string
DomainOrder::getTldServices()
{
	return tldServices;
}

void
DomainOrder::setTldServices(std::string  tldServices)
{
	this->tldServices = tldServices;
}


