#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "GetScrubIpDetails_200_response.h"

using namespace std;
using namespace Tizen::ArtikCloud;

GetScrubIpDetails_200_response::GetScrubIpDetails_200_response()
{
	//__init();
}

GetScrubIpDetails_200_response::~GetScrubIpDetails_200_response()
{
	//__cleanup();
}

void
GetScrubIpDetails_200_response::__init()
{
	//serviceInfo = new GetScrubIpDetails_200_response_serviceInfo();
	//new std::list()std::list> client_links;
	//billingDetails = new GetScrubIpDetails_200_response_billingDetails();
	//custCurrency = std::string();
	//custCurrencySymbol = std::string();
	//package = std::string();
	//extraInfoTables = new GetScrubIpDetails_200_response_extraInfoTables();
	//filter_firewall = new GetScrubIpDetails_200_response_filter_firewall();
}

void
GetScrubIpDetails_200_response::__cleanup()
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
	//if(filter_firewall != NULL) {
	//
	//delete filter_firewall;
	//filter_firewall = NULL;
	//}
	//
}

void
GetScrubIpDetails_200_response::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *serviceInfoKey = "serviceInfo";
	node = json_object_get_member(pJsonObject, serviceInfoKey);
	if (node !=NULL) {
	

		if (isprimitive("GetScrubIpDetails_200_response_serviceInfo")) {
			jsonToValue(&serviceInfo, node, "GetScrubIpDetails_200_response_serviceInfo", "GetScrubIpDetails_200_response_serviceInfo");
		} else {
			
			GetScrubIpDetails_200_response_serviceInfo* obj = static_cast<GetScrubIpDetails_200_response_serviceInfo*> (&serviceInfo);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *client_linksKey = "client_links";
	node = json_object_get_member(pJsonObject, client_linksKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<GetScrubIpDetails_200_response_client_links_inner> new_list;
			GetScrubIpDetails_200_response_client_links_inner inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("GetScrubIpDetails_200_response_client_links_inner")) {
					jsonToValue(&inst, temp_json, "GetScrubIpDetails_200_response_client_links_inner", "");
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
	

		if (isprimitive("GetScrubIpDetails_200_response_billingDetails")) {
			jsonToValue(&billingDetails, node, "GetScrubIpDetails_200_response_billingDetails", "GetScrubIpDetails_200_response_billingDetails");
		} else {
			
			GetScrubIpDetails_200_response_billingDetails* obj = static_cast<GetScrubIpDetails_200_response_billingDetails*> (&billingDetails);
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
	

		if (isprimitive("GetScrubIpDetails_200_response_extraInfoTables")) {
			jsonToValue(&extraInfoTables, node, "GetScrubIpDetails_200_response_extraInfoTables", "GetScrubIpDetails_200_response_extraInfoTables");
		} else {
			
			GetScrubIpDetails_200_response_extraInfoTables* obj = static_cast<GetScrubIpDetails_200_response_extraInfoTables*> (&extraInfoTables);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *filter_firewallKey = "filter_firewall";
	node = json_object_get_member(pJsonObject, filter_firewallKey);
	if (node !=NULL) {
	

		if (isprimitive("GetScrubIpDetails_200_response_filter_firewall")) {
			jsonToValue(&filter_firewall, node, "GetScrubIpDetails_200_response_filter_firewall", "GetScrubIpDetails_200_response_filter_firewall");
		} else {
			
			GetScrubIpDetails_200_response_filter_firewall* obj = static_cast<GetScrubIpDetails_200_response_filter_firewall*> (&filter_firewall);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
}

GetScrubIpDetails_200_response::GetScrubIpDetails_200_response(char* json)
{
	this->fromJson(json);
}

char*
GetScrubIpDetails_200_response::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("GetScrubIpDetails_200_response_serviceInfo")) {
		GetScrubIpDetails_200_response_serviceInfo obj = getServiceInfo();
		node = converttoJson(&obj, "GetScrubIpDetails_200_response_serviceInfo", "");
	}
	else {
		
		GetScrubIpDetails_200_response_serviceInfo obj = static_cast<GetScrubIpDetails_200_response_serviceInfo> (getServiceInfo());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *serviceInfoKey = "serviceInfo";
	json_object_set_member(pJsonObject, serviceInfoKey, node);
	if (isprimitive("GetScrubIpDetails_200_response_client_links_inner")) {
		list<GetScrubIpDetails_200_response_client_links_inner> new_list = static_cast<list <GetScrubIpDetails_200_response_client_links_inner> > (getClientLinks());
		node = converttoJson(&new_list, "GetScrubIpDetails_200_response_client_links_inner", "array");
	} else {
		node = json_node_alloc();
		list<GetScrubIpDetails_200_response_client_links_inner> new_list = static_cast<list <GetScrubIpDetails_200_response_client_links_inner> > (getClientLinks());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<GetScrubIpDetails_200_response_client_links_inner>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			GetScrubIpDetails_200_response_client_links_inner obj = *it;
			JsonNode *node_temp = json_from_string(obj.toJson(), &mygerror);
			json_array_add_element(json_array, node_temp);
			g_clear_error(&mygerror);
		}
		json_node_init_array(node, json_array);
		json_array_unref(json_array);
		
	}


	
	const gchar *client_linksKey = "client_links";
	json_object_set_member(pJsonObject, client_linksKey, node);
	if (isprimitive("GetScrubIpDetails_200_response_billingDetails")) {
		GetScrubIpDetails_200_response_billingDetails obj = getBillingDetails();
		node = converttoJson(&obj, "GetScrubIpDetails_200_response_billingDetails", "");
	}
	else {
		
		GetScrubIpDetails_200_response_billingDetails obj = static_cast<GetScrubIpDetails_200_response_billingDetails> (getBillingDetails());
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
	if (isprimitive("GetScrubIpDetails_200_response_extraInfoTables")) {
		GetScrubIpDetails_200_response_extraInfoTables obj = getExtraInfoTables();
		node = converttoJson(&obj, "GetScrubIpDetails_200_response_extraInfoTables", "");
	}
	else {
		
		GetScrubIpDetails_200_response_extraInfoTables obj = static_cast<GetScrubIpDetails_200_response_extraInfoTables> (getExtraInfoTables());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *extraInfoTablesKey = "extraInfoTables";
	json_object_set_member(pJsonObject, extraInfoTablesKey, node);
	if (isprimitive("GetScrubIpDetails_200_response_filter_firewall")) {
		GetScrubIpDetails_200_response_filter_firewall obj = getFilterFirewall();
		node = converttoJson(&obj, "GetScrubIpDetails_200_response_filter_firewall", "");
	}
	else {
		
		GetScrubIpDetails_200_response_filter_firewall obj = static_cast<GetScrubIpDetails_200_response_filter_firewall> (getFilterFirewall());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *filter_firewallKey = "filter_firewall";
	json_object_set_member(pJsonObject, filter_firewallKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

GetScrubIpDetails_200_response_serviceInfo
GetScrubIpDetails_200_response::getServiceInfo()
{
	return serviceInfo;
}

void
GetScrubIpDetails_200_response::setServiceInfo(GetScrubIpDetails_200_response_serviceInfo  serviceInfo)
{
	this->serviceInfo = serviceInfo;
}

std::list<GetScrubIpDetails_200_response_client_links_inner>
GetScrubIpDetails_200_response::getClientLinks()
{
	return client_links;
}

void
GetScrubIpDetails_200_response::setClientLinks(std::list <GetScrubIpDetails_200_response_client_links_inner> client_links)
{
	this->client_links = client_links;
}

GetScrubIpDetails_200_response_billingDetails
GetScrubIpDetails_200_response::getBillingDetails()
{
	return billingDetails;
}

void
GetScrubIpDetails_200_response::setBillingDetails(GetScrubIpDetails_200_response_billingDetails  billingDetails)
{
	this->billingDetails = billingDetails;
}

std::string
GetScrubIpDetails_200_response::getCustCurrency()
{
	return custCurrency;
}

void
GetScrubIpDetails_200_response::setCustCurrency(std::string  custCurrency)
{
	this->custCurrency = custCurrency;
}

std::string
GetScrubIpDetails_200_response::getCustCurrencySymbol()
{
	return custCurrencySymbol;
}

void
GetScrubIpDetails_200_response::setCustCurrencySymbol(std::string  custCurrencySymbol)
{
	this->custCurrencySymbol = custCurrencySymbol;
}

std::string
GetScrubIpDetails_200_response::getPackage()
{
	return package;
}

void
GetScrubIpDetails_200_response::setPackage(std::string  package)
{
	this->package = package;
}

GetScrubIpDetails_200_response_extraInfoTables
GetScrubIpDetails_200_response::getExtraInfoTables()
{
	return extraInfoTables;
}

void
GetScrubIpDetails_200_response::setExtraInfoTables(GetScrubIpDetails_200_response_extraInfoTables  extraInfoTables)
{
	this->extraInfoTables = extraInfoTables;
}

GetScrubIpDetails_200_response_filter_firewall
GetScrubIpDetails_200_response::getFilterFirewall()
{
	return filter_firewall;
}

void
GetScrubIpDetails_200_response::setFilterFirewall(GetScrubIpDetails_200_response_filter_firewall  filter_firewall)
{
	this->filter_firewall = filter_firewall;
}


