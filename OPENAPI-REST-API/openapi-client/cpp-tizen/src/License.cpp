#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "License.h"

using namespace std;
using namespace Tizen::ArtikCloud;

License::License()
{
	//__init();
}

License::~License()
{
	//__cleanup();
}

void
License::__init()
{
	//serviceInfo = new LicenseServiceInfo();
	//new std::list()std::list> client_links;
	//billingDetails = new LicenseBillingDetails();
	//custCurrency = std::string();
	//custCurrencySymbol = std::string();
	//package = std::string();
	//new std::list()std::list> serviceExtra;
	//extraInfoTables = new License_extraInfoTables();
	//service_overview_extra = std::string();
	//serviceType = new LicenseServiceType();
	//license_key = std::string();
}

void
License::__cleanup()
{
	//if(serviceInfo != NULL) {
	//
	//delete serviceInfo;
	//serviceInfo = NULL;
	//}
	//if(client_links != NULL) {
	//client_links.RemoveAll(true);
	//delete client_links;
	//client_links = NULL;
	//}
	//if(billingDetails != NULL) {
	//
	//delete billingDetails;
	//billingDetails = NULL;
	//}
	//if(custCurrency != NULL) {
	//
	//delete custCurrency;
	//custCurrency = NULL;
	//}
	//if(custCurrencySymbol != NULL) {
	//
	//delete custCurrencySymbol;
	//custCurrencySymbol = NULL;
	//}
	//if(package != NULL) {
	//
	//delete package;
	//package = NULL;
	//}
	//if(serviceExtra != NULL) {
	//serviceExtra.RemoveAll(true);
	//delete serviceExtra;
	//serviceExtra = NULL;
	//}
	//if(extraInfoTables != NULL) {
	//
	//delete extraInfoTables;
	//extraInfoTables = NULL;
	//}
	//if(service_overview_extra != NULL) {
	//
	//delete service_overview_extra;
	//service_overview_extra = NULL;
	//}
	//if(serviceType != NULL) {
	//
	//delete serviceType;
	//serviceType = NULL;
	//}
	//if(license_key != NULL) {
	//
	//delete license_key;
	//license_key = NULL;
	//}
	//
}

void
License::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *serviceInfoKey = "serviceInfo";
	node = json_object_get_member(pJsonObject, serviceInfoKey);
	if (node !=NULL) {
	

		if (isprimitive("LicenseServiceInfo")) {
			jsonToValue(&serviceInfo, node, "LicenseServiceInfo", "LicenseServiceInfo");
		} else {
			
			LicenseServiceInfo* obj = static_cast<LicenseServiceInfo*> (&serviceInfo);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *client_linksKey = "client_links";
	node = json_object_get_member(pJsonObject, client_linksKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<LicenseClientLink> new_list;
			LicenseClientLink inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("LicenseClientLink")) {
					jsonToValue(&inst, temp_json, "LicenseClientLink", "");
				} else {
					
					inst.fromJson(json_to_string(temp_json, false));
					
				}
				new_list.push_back(inst);
			}
			client_links = new_list;
		}
		
	}
	const gchar *billingDetailsKey = "billingDetails";
	node = json_object_get_member(pJsonObject, billingDetailsKey);
	if (node !=NULL) {
	

		if (isprimitive("LicenseBillingDetails")) {
			jsonToValue(&billingDetails, node, "LicenseBillingDetails", "LicenseBillingDetails");
		} else {
			
			LicenseBillingDetails* obj = static_cast<LicenseBillingDetails*> (&billingDetails);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *custCurrencyKey = "custCurrency";
	node = json_object_get_member(pJsonObject, custCurrencyKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&custCurrency, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *custCurrencySymbolKey = "custCurrencySymbol";
	node = json_object_get_member(pJsonObject, custCurrencySymbolKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&custCurrencySymbol, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *packageKey = "package";
	node = json_object_get_member(pJsonObject, packageKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&package, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *serviceExtraKey = "serviceExtra";
	node = json_object_get_member(pJsonObject, serviceExtraKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<std::string> new_list;
			std::string inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("std::string")) {
					jsonToValue(&inst, temp_json, "std::string", "");
				} else {
					
				}
				new_list.push_back(inst);
			}
			serviceExtra = new_list;
		}
		
	}
	const gchar *extraInfoTablesKey = "extraInfoTables";
	node = json_object_get_member(pJsonObject, extraInfoTablesKey);
	if (node !=NULL) {
	

		if (isprimitive("License_extraInfoTables")) {
			jsonToValue(&extraInfoTables, node, "License_extraInfoTables", "License_extraInfoTables");
		} else {
			
			License_extraInfoTables* obj = static_cast<License_extraInfoTables*> (&extraInfoTables);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *service_overview_extraKey = "service_overview_extra";
	node = json_object_get_member(pJsonObject, service_overview_extraKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&service_overview_extra, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *serviceTypeKey = "serviceType";
	node = json_object_get_member(pJsonObject, serviceTypeKey);
	if (node !=NULL) {
	

		if (isprimitive("LicenseServiceType")) {
			jsonToValue(&serviceType, node, "LicenseServiceType", "LicenseServiceType");
		} else {
			
			LicenseServiceType* obj = static_cast<LicenseServiceType*> (&serviceType);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *license_keyKey = "license_key";
	node = json_object_get_member(pJsonObject, license_keyKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&license_key, node, "std::string", "");
		} else {
			
		}
	}
}

License::License(char* json)
{
	this->fromJson(json);
}

char*
License::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("LicenseServiceInfo")) {
		LicenseServiceInfo obj = getServiceInfo();
		node = converttoJson(&obj, "LicenseServiceInfo", "");
	}
	else {
		
		LicenseServiceInfo obj = static_cast<LicenseServiceInfo> (getServiceInfo());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *serviceInfoKey = "serviceInfo";
	json_object_set_member(pJsonObject, serviceInfoKey, node);
	if (isprimitive("LicenseClientLink")) {
		list<LicenseClientLink> new_list = static_cast<list <LicenseClientLink> > (getClientLinks());
		node = converttoJson(&new_list, "LicenseClientLink", "array");
	} else {
		node = json_node_alloc();
		list<LicenseClientLink> new_list = static_cast<list <LicenseClientLink> > (getClientLinks());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<LicenseClientLink>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			LicenseClientLink obj = *it;
			JsonNode *node_temp = json_from_string(obj.toJson(), &mygerror);
			json_array_add_element(json_array, node_temp);
			g_clear_error(&mygerror);
		}
		json_node_init_array(node, json_array);
		json_array_unref(json_array);
		
	}


	
	const gchar *client_linksKey = "client_links";
	json_object_set_member(pJsonObject, client_linksKey, node);
	if (isprimitive("LicenseBillingDetails")) {
		LicenseBillingDetails obj = getBillingDetails();
		node = converttoJson(&obj, "LicenseBillingDetails", "");
	}
	else {
		
		LicenseBillingDetails obj = static_cast<LicenseBillingDetails> (getBillingDetails());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *billingDetailsKey = "billingDetails";
	json_object_set_member(pJsonObject, billingDetailsKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getCustCurrency();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *custCurrencyKey = "custCurrency";
	json_object_set_member(pJsonObject, custCurrencyKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getCustCurrencySymbol();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *custCurrencySymbolKey = "custCurrencySymbol";
	json_object_set_member(pJsonObject, custCurrencySymbolKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getPackage();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *packageKey = "package";
	json_object_set_member(pJsonObject, packageKey, node);
	if (isprimitive("std::string")) {
		list<std::string> new_list = static_cast<list <std::string> > (getServiceExtra());
		node = converttoJson(&new_list, "std::string", "array");
	} else {
		node = json_node_alloc();
		list<std::string> new_list = static_cast<list <std::string> > (getServiceExtra());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
	}


	
	const gchar *serviceExtraKey = "serviceExtra";
	json_object_set_member(pJsonObject, serviceExtraKey, node);
	if (isprimitive("License_extraInfoTables")) {
		License_extraInfoTables obj = getExtraInfoTables();
		node = converttoJson(&obj, "License_extraInfoTables", "");
	}
	else {
		
		License_extraInfoTables obj = static_cast<License_extraInfoTables> (getExtraInfoTables());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *extraInfoTablesKey = "extraInfoTables";
	json_object_set_member(pJsonObject, extraInfoTablesKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getServiceOverviewExtra();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *service_overview_extraKey = "service_overview_extra";
	json_object_set_member(pJsonObject, service_overview_extraKey, node);
	if (isprimitive("LicenseServiceType")) {
		LicenseServiceType obj = getServiceType();
		node = converttoJson(&obj, "LicenseServiceType", "");
	}
	else {
		
		LicenseServiceType obj = static_cast<LicenseServiceType> (getServiceType());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *serviceTypeKey = "serviceType";
	json_object_set_member(pJsonObject, serviceTypeKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getLicenseKey();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *license_keyKey = "license_key";
	json_object_set_member(pJsonObject, license_keyKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

LicenseServiceInfo
License::getServiceInfo()
{
	return serviceInfo;
}

void
License::setServiceInfo(LicenseServiceInfo  serviceInfo)
{
	this->serviceInfo = serviceInfo;
}

std::list<LicenseClientLink>
License::getClientLinks()
{
	return client_links;
}

void
License::setClientLinks(std::list <LicenseClientLink> client_links)
{
	this->client_links = client_links;
}

LicenseBillingDetails
License::getBillingDetails()
{
	return billingDetails;
}

void
License::setBillingDetails(LicenseBillingDetails  billingDetails)
{
	this->billingDetails = billingDetails;
}

std::string
License::getCustCurrency()
{
	return custCurrency;
}

void
License::setCustCurrency(std::string  custCurrency)
{
	this->custCurrency = custCurrency;
}

std::string
License::getCustCurrencySymbol()
{
	return custCurrencySymbol;
}

void
License::setCustCurrencySymbol(std::string  custCurrencySymbol)
{
	this->custCurrencySymbol = custCurrencySymbol;
}

std::string
License::getPackage()
{
	return package;
}

void
License::setPackage(std::string  package)
{
	this->package = package;
}

std::list<std::string>
License::getServiceExtra()
{
	return serviceExtra;
}

void
License::setServiceExtra(std::list <std::string> serviceExtra)
{
	this->serviceExtra = serviceExtra;
}

License_extraInfoTables
License::getExtraInfoTables()
{
	return extraInfoTables;
}

void
License::setExtraInfoTables(License_extraInfoTables  extraInfoTables)
{
	this->extraInfoTables = extraInfoTables;
}

std::string
License::getServiceOverviewExtra()
{
	return service_overview_extra;
}

void
License::setServiceOverviewExtra(std::string  service_overview_extra)
{
	this->service_overview_extra = service_overview_extra;
}

LicenseServiceType
License::getServiceType()
{
	return serviceType;
}

void
License::setServiceType(LicenseServiceType  serviceType)
{
	this->serviceType = serviceType;
}

std::string
License::getLicenseKey()
{
	return license_key;
}

void
License::setLicenseKey(std::string  license_key)
{
	this->license_key = license_key;
}


