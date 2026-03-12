#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "WebsitesOrder.h"

using namespace std;
using namespace Tizen::ArtikCloud;

WebsitesOrder::WebsitesOrder()
{
	//__init();
}

WebsitesOrder::~WebsitesOrder()
{
	//__cleanup();
}

void
WebsitesOrder::__init()
{
	//step = std::string();
	//website = std::string();
	//period = int(0);
	//serviceOfferId = int(0);
	//packages = new WebsitesOrderPackages();
	//enableDomainRegistering = bool(false);
	//jsonServices = new WebsitesOrderJsonServices();
	//jsonServiceOffers = new WebsitesOrderJsonServiceOffers();
	//serviceTypes = new WebsitesOrder_serviceTypes();
	//serviceOffers = new WebsitesOrder_serviceOffers();
	//packges = new WebsitesOrder_packges();
}

void
WebsitesOrder::__cleanup()
{
	//if(step != NULL) {
	//
	//delete step;
	//step = NULL;
	//}
	//if(website != NULL) {
	//
	//delete website;
	//website = NULL;
	//}
	//if(period != NULL) {
	//
	//delete period;
	//period = NULL;
	//}
	//if(serviceOfferId != NULL) {
	//
	//delete serviceOfferId;
	//serviceOfferId = NULL;
	//}
	//if(packages != NULL) {
	//
	//delete packages;
	//packages = NULL;
	//}
	//if(enableDomainRegistering != NULL) {
	//
	//delete enableDomainRegistering;
	//enableDomainRegistering = NULL;
	//}
	//if(jsonServices != NULL) {
	//
	//delete jsonServices;
	//jsonServices = NULL;
	//}
	//if(jsonServiceOffers != NULL) {
	//
	//delete jsonServiceOffers;
	//jsonServiceOffers = NULL;
	//}
	//if(serviceTypes != NULL) {
	//
	//delete serviceTypes;
	//serviceTypes = NULL;
	//}
	//if(serviceOffers != NULL) {
	//
	//delete serviceOffers;
	//serviceOffers = NULL;
	//}
	//if(packges != NULL) {
	//
	//delete packges;
	//packges = NULL;
	//}
	//
}

void
WebsitesOrder::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *stepKey = "step";
	node = json_object_get_member(pJsonObject, stepKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&step, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *websiteKey = "website";
	node = json_object_get_member(pJsonObject, websiteKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&website, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *periodKey = "period";
	node = json_object_get_member(pJsonObject, periodKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&period, node, "int", "");
		} else {
			
		}
	}
	const gchar *serviceOfferIdKey = "serviceOfferId";
	node = json_object_get_member(pJsonObject, serviceOfferIdKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&serviceOfferId, node, "int", "");
		} else {
			
		}
	}
	const gchar *packagesKey = "packages";
	node = json_object_get_member(pJsonObject, packagesKey);
	if (node !=NULL) {
	

		if (isprimitive("WebsitesOrderPackages")) {
			jsonToValue(&packages, node, "WebsitesOrderPackages", "WebsitesOrderPackages");
		} else {
			
			WebsitesOrderPackages* obj = static_cast<WebsitesOrderPackages*> (&packages);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *enableDomainRegisteringKey = "enableDomainRegistering";
	node = json_object_get_member(pJsonObject, enableDomainRegisteringKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&enableDomainRegistering, node, "bool", "");
		} else {
			
		}
	}
	const gchar *jsonServicesKey = "jsonServices";
	node = json_object_get_member(pJsonObject, jsonServicesKey);
	if (node !=NULL) {
	

		if (isprimitive("WebsitesOrderJsonServices")) {
			jsonToValue(&jsonServices, node, "WebsitesOrderJsonServices", "WebsitesOrderJsonServices");
		} else {
			
			WebsitesOrderJsonServices* obj = static_cast<WebsitesOrderJsonServices*> (&jsonServices);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *jsonServiceOffersKey = "jsonServiceOffers";
	node = json_object_get_member(pJsonObject, jsonServiceOffersKey);
	if (node !=NULL) {
	

		if (isprimitive("WebsitesOrderJsonServiceOffers")) {
			jsonToValue(&jsonServiceOffers, node, "WebsitesOrderJsonServiceOffers", "WebsitesOrderJsonServiceOffers");
		} else {
			
			WebsitesOrderJsonServiceOffers* obj = static_cast<WebsitesOrderJsonServiceOffers*> (&jsonServiceOffers);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *serviceTypesKey = "serviceTypes";
	node = json_object_get_member(pJsonObject, serviceTypesKey);
	if (node !=NULL) {
	

		if (isprimitive("WebsitesOrder_serviceTypes")) {
			jsonToValue(&serviceTypes, node, "WebsitesOrder_serviceTypes", "WebsitesOrder_serviceTypes");
		} else {
			
			WebsitesOrder_serviceTypes* obj = static_cast<WebsitesOrder_serviceTypes*> (&serviceTypes);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *serviceOffersKey = "serviceOffers";
	node = json_object_get_member(pJsonObject, serviceOffersKey);
	if (node !=NULL) {
	

		if (isprimitive("WebsitesOrder_serviceOffers")) {
			jsonToValue(&serviceOffers, node, "WebsitesOrder_serviceOffers", "WebsitesOrder_serviceOffers");
		} else {
			
			WebsitesOrder_serviceOffers* obj = static_cast<WebsitesOrder_serviceOffers*> (&serviceOffers);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *packgesKey = "packges";
	node = json_object_get_member(pJsonObject, packgesKey);
	if (node !=NULL) {
	

		if (isprimitive("WebsitesOrder_packges")) {
			jsonToValue(&packges, node, "WebsitesOrder_packges", "WebsitesOrder_packges");
		} else {
			
			WebsitesOrder_packges* obj = static_cast<WebsitesOrder_packges*> (&packges);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
}

WebsitesOrder::WebsitesOrder(char* json)
{
	this->fromJson(json);
}

char*
WebsitesOrder::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getStep();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *stepKey = "step";
	json_object_set_member(pJsonObject, stepKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getWebsite();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *websiteKey = "website";
	json_object_set_member(pJsonObject, websiteKey, node);
	if (isprimitive("int")) {
		int obj = getPeriod();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *periodKey = "period";
	json_object_set_member(pJsonObject, periodKey, node);
	if (isprimitive("int")) {
		int obj = getServiceOfferId();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *serviceOfferIdKey = "serviceOfferId";
	json_object_set_member(pJsonObject, serviceOfferIdKey, node);
	if (isprimitive("WebsitesOrderPackages")) {
		WebsitesOrderPackages obj = getPackages();
		node = converttoJson(&obj, "WebsitesOrderPackages", "");
	}
	else {
		
		WebsitesOrderPackages obj = static_cast<WebsitesOrderPackages> (getPackages());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *packagesKey = "packages";
	json_object_set_member(pJsonObject, packagesKey, node);
	if (isprimitive("bool")) {
		bool obj = getEnableDomainRegistering();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *enableDomainRegisteringKey = "enableDomainRegistering";
	json_object_set_member(pJsonObject, enableDomainRegisteringKey, node);
	if (isprimitive("WebsitesOrderJsonServices")) {
		WebsitesOrderJsonServices obj = getJsonServices();
		node = converttoJson(&obj, "WebsitesOrderJsonServices", "");
	}
	else {
		
		WebsitesOrderJsonServices obj = static_cast<WebsitesOrderJsonServices> (getJsonServices());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *jsonServicesKey = "jsonServices";
	json_object_set_member(pJsonObject, jsonServicesKey, node);
	if (isprimitive("WebsitesOrderJsonServiceOffers")) {
		WebsitesOrderJsonServiceOffers obj = getJsonServiceOffers();
		node = converttoJson(&obj, "WebsitesOrderJsonServiceOffers", "");
	}
	else {
		
		WebsitesOrderJsonServiceOffers obj = static_cast<WebsitesOrderJsonServiceOffers> (getJsonServiceOffers());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *jsonServiceOffersKey = "jsonServiceOffers";
	json_object_set_member(pJsonObject, jsonServiceOffersKey, node);
	if (isprimitive("WebsitesOrder_serviceTypes")) {
		WebsitesOrder_serviceTypes obj = getServiceTypes();
		node = converttoJson(&obj, "WebsitesOrder_serviceTypes", "");
	}
	else {
		
		WebsitesOrder_serviceTypes obj = static_cast<WebsitesOrder_serviceTypes> (getServiceTypes());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *serviceTypesKey = "serviceTypes";
	json_object_set_member(pJsonObject, serviceTypesKey, node);
	if (isprimitive("WebsitesOrder_serviceOffers")) {
		WebsitesOrder_serviceOffers obj = getServiceOffers();
		node = converttoJson(&obj, "WebsitesOrder_serviceOffers", "");
	}
	else {
		
		WebsitesOrder_serviceOffers obj = static_cast<WebsitesOrder_serviceOffers> (getServiceOffers());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *serviceOffersKey = "serviceOffers";
	json_object_set_member(pJsonObject, serviceOffersKey, node);
	if (isprimitive("WebsitesOrder_packges")) {
		WebsitesOrder_packges obj = getPackges();
		node = converttoJson(&obj, "WebsitesOrder_packges", "");
	}
	else {
		
		WebsitesOrder_packges obj = static_cast<WebsitesOrder_packges> (getPackges());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *packgesKey = "packges";
	json_object_set_member(pJsonObject, packgesKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
WebsitesOrder::getStep()
{
	return step;
}

void
WebsitesOrder::setStep(std::string  step)
{
	this->step = step;
}

std::string
WebsitesOrder::getWebsite()
{
	return website;
}

void
WebsitesOrder::setWebsite(std::string  website)
{
	this->website = website;
}

int
WebsitesOrder::getPeriod()
{
	return period;
}

void
WebsitesOrder::setPeriod(int  period)
{
	this->period = period;
}

int
WebsitesOrder::getServiceOfferId()
{
	return serviceOfferId;
}

void
WebsitesOrder::setServiceOfferId(int  serviceOfferId)
{
	this->serviceOfferId = serviceOfferId;
}

WebsitesOrderPackages
WebsitesOrder::getPackages()
{
	return packages;
}

void
WebsitesOrder::setPackages(WebsitesOrderPackages  packages)
{
	this->packages = packages;
}

bool
WebsitesOrder::getEnableDomainRegistering()
{
	return enableDomainRegistering;
}

void
WebsitesOrder::setEnableDomainRegistering(bool  enableDomainRegistering)
{
	this->enableDomainRegistering = enableDomainRegistering;
}

WebsitesOrderJsonServices
WebsitesOrder::getJsonServices()
{
	return jsonServices;
}

void
WebsitesOrder::setJsonServices(WebsitesOrderJsonServices  jsonServices)
{
	this->jsonServices = jsonServices;
}

WebsitesOrderJsonServiceOffers
WebsitesOrder::getJsonServiceOffers()
{
	return jsonServiceOffers;
}

void
WebsitesOrder::setJsonServiceOffers(WebsitesOrderJsonServiceOffers  jsonServiceOffers)
{
	this->jsonServiceOffers = jsonServiceOffers;
}

WebsitesOrder_serviceTypes
WebsitesOrder::getServiceTypes()
{
	return serviceTypes;
}

void
WebsitesOrder::setServiceTypes(WebsitesOrder_serviceTypes  serviceTypes)
{
	this->serviceTypes = serviceTypes;
}

WebsitesOrder_serviceOffers
WebsitesOrder::getServiceOffers()
{
	return serviceOffers;
}

void
WebsitesOrder::setServiceOffers(WebsitesOrder_serviceOffers  serviceOffers)
{
	this->serviceOffers = serviceOffers;
}

WebsitesOrder_packges
WebsitesOrder::getPackges()
{
	return packges;
}

void
WebsitesOrder::setPackges(WebsitesOrder_packges  packges)
{
	this->packges = packges;
}


