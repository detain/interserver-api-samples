#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "Website.h"

using namespace std;
using namespace Tizen::ArtikCloud;

Website::Website()
{
	//__init();
}

Website::~Website()
{
	//__cleanup();
}

void
Website::__init()
{
	//serviceInfo = new WebsiteServiceInfo();
	//new std::list()std::list> client_links;
	//billingDetails = new WebsiteBillingDetails();
	//custCurrency = std::string();
	//custCurrencySymbol = std::string();
	//serviceMaster = new WebsiteServiceMaster();
	//package = std::string();
	//new std::list()std::list> serviceExtra;
	//extraInfoTables = new WebsiteExtraInfoTables();
}

void
Website::__cleanup()
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
	//if(serviceMaster != NULL) {
	//
	//delete serviceMaster;
	//serviceMaster = NULL;
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
	//
}

void
Website::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *serviceInfoKey = "serviceInfo";
	node = json_object_get_member(pJsonObject, serviceInfoKey);
	if (node !=NULL) {
	

		if (isprimitive("WebsiteServiceInfo")) {
			jsonToValue(&serviceInfo, node, "WebsiteServiceInfo", "WebsiteServiceInfo");
		} else {
			
			WebsiteServiceInfo* obj = static_cast<WebsiteServiceInfo*> (&serviceInfo);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *client_linksKey = "client_links";
	node = json_object_get_member(pJsonObject, client_linksKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<WebsiteClientLink> new_list;
			WebsiteClientLink inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("WebsiteClientLink")) {
					jsonToValue(&inst, temp_json, "WebsiteClientLink", "");
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
	

		if (isprimitive("WebsiteBillingDetails")) {
			jsonToValue(&billingDetails, node, "WebsiteBillingDetails", "WebsiteBillingDetails");
		} else {
			
			WebsiteBillingDetails* obj = static_cast<WebsiteBillingDetails*> (&billingDetails);
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
	const gchar *serviceMasterKey = "serviceMaster";
	node = json_object_get_member(pJsonObject, serviceMasterKey);
	if (node !=NULL) {
	

		if (isprimitive("WebsiteServiceMaster")) {
			jsonToValue(&serviceMaster, node, "WebsiteServiceMaster", "WebsiteServiceMaster");
		} else {
			
			WebsiteServiceMaster* obj = static_cast<WebsiteServiceMaster*> (&serviceMaster);
			obj->fromJson(json_to_string(node, false));
			
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
					
					inst.fromJson(json_to_string(temp_json, false));
					
				}
				new_list.push_back(inst);
			}
			serviceExtra = new_list;
		}
		
	}
	const gchar *extraInfoTablesKey = "extraInfoTables";
	node = json_object_get_member(pJsonObject, extraInfoTablesKey);
	if (node !=NULL) {
	

		if (isprimitive("WebsiteExtraInfoTables")) {
			jsonToValue(&extraInfoTables, node, "WebsiteExtraInfoTables", "WebsiteExtraInfoTables");
		} else {
			
			WebsiteExtraInfoTables* obj = static_cast<WebsiteExtraInfoTables*> (&extraInfoTables);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
}

Website::Website(char* json)
{
	this->fromJson(json);
}

char*
Website::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("WebsiteServiceInfo")) {
		WebsiteServiceInfo obj = getServiceInfo();
		node = converttoJson(&obj, "WebsiteServiceInfo", "");
	}
	else {
		
		WebsiteServiceInfo obj = static_cast<WebsiteServiceInfo> (getServiceInfo());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *serviceInfoKey = "serviceInfo";
	json_object_set_member(pJsonObject, serviceInfoKey, node);
	if (isprimitive("WebsiteClientLink")) {
		list<WebsiteClientLink> new_list = static_cast<list <WebsiteClientLink> > (getClientLinks());
		node = converttoJson(&new_list, "WebsiteClientLink", "array");
	} else {
		node = json_node_alloc();
		list<WebsiteClientLink> new_list = static_cast<list <WebsiteClientLink> > (getClientLinks());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<WebsiteClientLink>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			WebsiteClientLink obj = *it;
			JsonNode *node_temp = json_from_string(obj.toJson(), &mygerror);
			json_array_add_element(json_array, node_temp);
			g_clear_error(&mygerror);
		}
		json_node_init_array(node, json_array);
		json_array_unref(json_array);
		
	}


	
	const gchar *client_linksKey = "client_links";
	json_object_set_member(pJsonObject, client_linksKey, node);
	if (isprimitive("WebsiteBillingDetails")) {
		WebsiteBillingDetails obj = getBillingDetails();
		node = converttoJson(&obj, "WebsiteBillingDetails", "");
	}
	else {
		
		WebsiteBillingDetails obj = static_cast<WebsiteBillingDetails> (getBillingDetails());
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
	if (isprimitive("WebsiteServiceMaster")) {
		WebsiteServiceMaster obj = getServiceMaster();
		node = converttoJson(&obj, "WebsiteServiceMaster", "");
	}
	else {
		
		WebsiteServiceMaster obj = static_cast<WebsiteServiceMaster> (getServiceMaster());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *serviceMasterKey = "serviceMaster";
	json_object_set_member(pJsonObject, serviceMasterKey, node);
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
		
		for (list<std::string>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			std::string obj = *it;
			JsonNode *node_temp = json_from_string(obj.toJson(), &mygerror);
			json_array_add_element(json_array, node_temp);
			g_clear_error(&mygerror);
		}
		json_node_init_array(node, json_array);
		json_array_unref(json_array);
		
	}


	
	const gchar *serviceExtraKey = "serviceExtra";
	json_object_set_member(pJsonObject, serviceExtraKey, node);
	if (isprimitive("WebsiteExtraInfoTables")) {
		WebsiteExtraInfoTables obj = getExtraInfoTables();
		node = converttoJson(&obj, "WebsiteExtraInfoTables", "");
	}
	else {
		
		WebsiteExtraInfoTables obj = static_cast<WebsiteExtraInfoTables> (getExtraInfoTables());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *extraInfoTablesKey = "extraInfoTables";
	json_object_set_member(pJsonObject, extraInfoTablesKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

WebsiteServiceInfo
Website::getServiceInfo()
{
	return serviceInfo;
}

void
Website::setServiceInfo(WebsiteServiceInfo  serviceInfo)
{
	this->serviceInfo = serviceInfo;
}

std::list<WebsiteClientLink>
Website::getClientLinks()
{
	return client_links;
}

void
Website::setClientLinks(std::list <WebsiteClientLink> client_links)
{
	this->client_links = client_links;
}

WebsiteBillingDetails
Website::getBillingDetails()
{
	return billingDetails;
}

void
Website::setBillingDetails(WebsiteBillingDetails  billingDetails)
{
	this->billingDetails = billingDetails;
}

std::string
Website::getCustCurrency()
{
	return custCurrency;
}

void
Website::setCustCurrency(std::string  custCurrency)
{
	this->custCurrency = custCurrency;
}

std::string
Website::getCustCurrencySymbol()
{
	return custCurrencySymbol;
}

void
Website::setCustCurrencySymbol(std::string  custCurrencySymbol)
{
	this->custCurrencySymbol = custCurrencySymbol;
}

WebsiteServiceMaster
Website::getServiceMaster()
{
	return serviceMaster;
}

void
Website::setServiceMaster(WebsiteServiceMaster  serviceMaster)
{
	this->serviceMaster = serviceMaster;
}

std::string
Website::getPackage()
{
	return package;
}

void
Website::setPackage(std::string  package)
{
	this->package = package;
}

std::list<std::string>
Website::getServiceExtra()
{
	return serviceExtra;
}

void
Website::setServiceExtra(std::list <std::string> serviceExtra)
{
	this->serviceExtra = serviceExtra;
}

WebsiteExtraInfoTables
Website::getExtraInfoTables()
{
	return extraInfoTables;
}

void
Website::setExtraInfoTables(WebsiteExtraInfoTables  extraInfoTables)
{
	this->extraInfoTables = extraInfoTables;
}


