#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "MailSchema.h"

using namespace std;
using namespace Tizen::ArtikCloud;

MailSchema::MailSchema()
{
	//__init();
}

MailSchema::~MailSchema()
{
	//__cleanup();
}

void
MailSchema::__init()
{
	//serviceInfo = new MailServiceInfo();
	//new std::list()std::list> client_links;
	//billingDetails = new MailBillingDetails();
	//custCurrency = std::string();
	//custCurrencySymbol = std::string();
	//package = std::string();
	//extraInfoTables = new MailSchema_extraInfoTables();
	//serviceType = new MailServiceType();
	//usage_count = std::string();
	//new std::list()std::list> serviceExtra;
}

void
MailSchema::__cleanup()
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
	//if(extraInfoTables != NULL) {
	//
	//delete extraInfoTables;
	//extraInfoTables = NULL;
	//}
	//if(serviceType != NULL) {
	//
	//delete serviceType;
	//serviceType = NULL;
	//}
	//if(usage_count != NULL) {
	//
	//delete usage_count;
	//usage_count = NULL;
	//}
	//if(serviceExtra != NULL) {
	//serviceExtra.RemoveAll(true);
	//delete serviceExtra;
	//serviceExtra = NULL;
	//}
	//
}

void
MailSchema::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *serviceInfoKey = "serviceInfo";
	node = json_object_get_member(pJsonObject, serviceInfoKey);
	if (node !=NULL) {
	

		if (isprimitive("MailServiceInfo")) {
			jsonToValue(&serviceInfo, node, "MailServiceInfo", "MailServiceInfo");
		} else {
			
			MailServiceInfo* obj = static_cast<MailServiceInfo*> (&serviceInfo);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *client_linksKey = "client_links";
	node = json_object_get_member(pJsonObject, client_linksKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<MailClientLink> new_list;
			MailClientLink inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("MailClientLink")) {
					jsonToValue(&inst, temp_json, "MailClientLink", "");
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
	

		if (isprimitive("MailBillingDetails")) {
			jsonToValue(&billingDetails, node, "MailBillingDetails", "MailBillingDetails");
		} else {
			
			MailBillingDetails* obj = static_cast<MailBillingDetails*> (&billingDetails);
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
	const gchar *extraInfoTablesKey = "extraInfoTables";
	node = json_object_get_member(pJsonObject, extraInfoTablesKey);
	if (node !=NULL) {
	

		if (isprimitive("MailSchema_extraInfoTables")) {
			jsonToValue(&extraInfoTables, node, "MailSchema_extraInfoTables", "MailSchema_extraInfoTables");
		} else {
			
			MailSchema_extraInfoTables* obj = static_cast<MailSchema_extraInfoTables*> (&extraInfoTables);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *serviceTypeKey = "serviceType";
	node = json_object_get_member(pJsonObject, serviceTypeKey);
	if (node !=NULL) {
	

		if (isprimitive("MailServiceType")) {
			jsonToValue(&serviceType, node, "MailServiceType", "MailServiceType");
		} else {
			
			MailServiceType* obj = static_cast<MailServiceType*> (&serviceType);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *usage_countKey = "usage_count";
	node = json_object_get_member(pJsonObject, usage_countKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&usage_count, node, "std::string", "");
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
}

MailSchema::MailSchema(char* json)
{
	this->fromJson(json);
}

char*
MailSchema::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("MailServiceInfo")) {
		MailServiceInfo obj = getServiceInfo();
		node = converttoJson(&obj, "MailServiceInfo", "");
	}
	else {
		
		MailServiceInfo obj = static_cast<MailServiceInfo> (getServiceInfo());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *serviceInfoKey = "serviceInfo";
	json_object_set_member(pJsonObject, serviceInfoKey, node);
	if (isprimitive("MailClientLink")) {
		list<MailClientLink> new_list = static_cast<list <MailClientLink> > (getClientLinks());
		node = converttoJson(&new_list, "MailClientLink", "array");
	} else {
		node = json_node_alloc();
		list<MailClientLink> new_list = static_cast<list <MailClientLink> > (getClientLinks());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<MailClientLink>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			MailClientLink obj = *it;
			JsonNode *node_temp = json_from_string(obj.toJson(), &mygerror);
			json_array_add_element(json_array, node_temp);
			g_clear_error(&mygerror);
		}
		json_node_init_array(node, json_array);
		json_array_unref(json_array);
		
	}


	
	const gchar *client_linksKey = "client_links";
	json_object_set_member(pJsonObject, client_linksKey, node);
	if (isprimitive("MailBillingDetails")) {
		MailBillingDetails obj = getBillingDetails();
		node = converttoJson(&obj, "MailBillingDetails", "");
	}
	else {
		
		MailBillingDetails obj = static_cast<MailBillingDetails> (getBillingDetails());
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
	if (isprimitive("MailSchema_extraInfoTables")) {
		MailSchema_extraInfoTables obj = getExtraInfoTables();
		node = converttoJson(&obj, "MailSchema_extraInfoTables", "");
	}
	else {
		
		MailSchema_extraInfoTables obj = static_cast<MailSchema_extraInfoTables> (getExtraInfoTables());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *extraInfoTablesKey = "extraInfoTables";
	json_object_set_member(pJsonObject, extraInfoTablesKey, node);
	if (isprimitive("MailServiceType")) {
		MailServiceType obj = getServiceType();
		node = converttoJson(&obj, "MailServiceType", "");
	}
	else {
		
		MailServiceType obj = static_cast<MailServiceType> (getServiceType());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *serviceTypeKey = "serviceType";
	json_object_set_member(pJsonObject, serviceTypeKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getUsageCount();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *usage_countKey = "usage_count";
	json_object_set_member(pJsonObject, usage_countKey, node);
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
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

MailServiceInfo
MailSchema::getServiceInfo()
{
	return serviceInfo;
}

void
MailSchema::setServiceInfo(MailServiceInfo  serviceInfo)
{
	this->serviceInfo = serviceInfo;
}

std::list<MailClientLink>
MailSchema::getClientLinks()
{
	return client_links;
}

void
MailSchema::setClientLinks(std::list <MailClientLink> client_links)
{
	this->client_links = client_links;
}

MailBillingDetails
MailSchema::getBillingDetails()
{
	return billingDetails;
}

void
MailSchema::setBillingDetails(MailBillingDetails  billingDetails)
{
	this->billingDetails = billingDetails;
}

std::string
MailSchema::getCustCurrency()
{
	return custCurrency;
}

void
MailSchema::setCustCurrency(std::string  custCurrency)
{
	this->custCurrency = custCurrency;
}

std::string
MailSchema::getCustCurrencySymbol()
{
	return custCurrencySymbol;
}

void
MailSchema::setCustCurrencySymbol(std::string  custCurrencySymbol)
{
	this->custCurrencySymbol = custCurrencySymbol;
}

std::string
MailSchema::getPackage()
{
	return package;
}

void
MailSchema::setPackage(std::string  package)
{
	this->package = package;
}

MailSchema_extraInfoTables
MailSchema::getExtraInfoTables()
{
	return extraInfoTables;
}

void
MailSchema::setExtraInfoTables(MailSchema_extraInfoTables  extraInfoTables)
{
	this->extraInfoTables = extraInfoTables;
}

MailServiceType
MailSchema::getServiceType()
{
	return serviceType;
}

void
MailSchema::setServiceType(MailServiceType  serviceType)
{
	this->serviceType = serviceType;
}

std::string
MailSchema::getUsageCount()
{
	return usage_count;
}

void
MailSchema::setUsageCount(std::string  usage_count)
{
	this->usage_count = usage_count;
}

std::list<std::string>
MailSchema::getServiceExtra()
{
	return serviceExtra;
}

void
MailSchema::setServiceExtra(std::list <std::string> serviceExtra)
{
	this->serviceExtra = serviceExtra;
}


