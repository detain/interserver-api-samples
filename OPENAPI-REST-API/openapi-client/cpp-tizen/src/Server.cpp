#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "Server.h"

using namespace std;
using namespace Tizen::ArtikCloud;

Server::Server()
{
	//__init();
}

Server::~Server()
{
	//__cleanup();
}

void
Server::__init()
{
	//ipmiAuth = bool(false);
	//new std::list()std::list> client_links;
	//billingDetails = new ServerBillingDetails();
	//custCurrency = std::string();
	//custCurrencySymbol = std::string();
	//package = std::string();
	//new std::list()std::list> serviceExtra;
	//locations = new Server_locations();
	//networkInfo = new ServerNetworkInfo();
	//extraInfoTables = new ServerExtraInfoTables();
	//serviceInfo = new ServerServiceInfo();
}

void
Server::__cleanup()
{
	//if(ipmiAuth != NULL) {
	//
	//delete ipmiAuth;
	//ipmiAuth = NULL;
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
	//if(locations != NULL) {
	//
	//delete locations;
	//locations = NULL;
	//}
	//if(networkInfo != NULL) {
	//
	//delete networkInfo;
	//networkInfo = NULL;
	//}
	//if(extraInfoTables != NULL) {
	//
	//delete extraInfoTables;
	//extraInfoTables = NULL;
	//}
	//if(serviceInfo != NULL) {
	//
	//delete serviceInfo;
	//serviceInfo = NULL;
	//}
	//
}

void
Server::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *ipmiAuthKey = "ipmiAuth";
	node = json_object_get_member(pJsonObject, ipmiAuthKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&ipmiAuth, node, "bool", "");
		} else {
			
		}
	}
	const gchar *client_linksKey = "client_links";
	node = json_object_get_member(pJsonObject, client_linksKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<ServerClientLink> new_list;
			ServerClientLink inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("ServerClientLink")) {
					jsonToValue(&inst, temp_json, "ServerClientLink", "");
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
	

		if (isprimitive("ServerBillingDetails")) {
			jsonToValue(&billingDetails, node, "ServerBillingDetails", "ServerBillingDetails");
		} else {
			
			ServerBillingDetails* obj = static_cast<ServerBillingDetails*> (&billingDetails);
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
	const gchar *locationsKey = "locations";
	node = json_object_get_member(pJsonObject, locationsKey);
	if (node !=NULL) {
	

		if (isprimitive("Server_locations")) {
			jsonToValue(&locations, node, "Server_locations", "Server_locations");
		} else {
			
			Server_locations* obj = static_cast<Server_locations*> (&locations);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *networkInfoKey = "networkInfo";
	node = json_object_get_member(pJsonObject, networkInfoKey);
	if (node !=NULL) {
	

		if (isprimitive("ServerNetworkInfo")) {
			jsonToValue(&networkInfo, node, "ServerNetworkInfo", "ServerNetworkInfo");
		} else {
			
			ServerNetworkInfo* obj = static_cast<ServerNetworkInfo*> (&networkInfo);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *extraInfoTablesKey = "extraInfoTables";
	node = json_object_get_member(pJsonObject, extraInfoTablesKey);
	if (node !=NULL) {
	

		if (isprimitive("ServerExtraInfoTables")) {
			jsonToValue(&extraInfoTables, node, "ServerExtraInfoTables", "ServerExtraInfoTables");
		} else {
			
			ServerExtraInfoTables* obj = static_cast<ServerExtraInfoTables*> (&extraInfoTables);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *serviceInfoKey = "serviceInfo";
	node = json_object_get_member(pJsonObject, serviceInfoKey);
	if (node !=NULL) {
	

		if (isprimitive("ServerServiceInfo")) {
			jsonToValue(&serviceInfo, node, "ServerServiceInfo", "ServerServiceInfo");
		} else {
			
			ServerServiceInfo* obj = static_cast<ServerServiceInfo*> (&serviceInfo);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
}

Server::Server(char* json)
{
	this->fromJson(json);
}

char*
Server::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("bool")) {
		bool obj = getIpmiAuth();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *ipmiAuthKey = "ipmiAuth";
	json_object_set_member(pJsonObject, ipmiAuthKey, node);
	if (isprimitive("ServerClientLink")) {
		list<ServerClientLink> new_list = static_cast<list <ServerClientLink> > (getClientLinks());
		node = converttoJson(&new_list, "ServerClientLink", "array");
	} else {
		node = json_node_alloc();
		list<ServerClientLink> new_list = static_cast<list <ServerClientLink> > (getClientLinks());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<ServerClientLink>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			ServerClientLink obj = *it;
			JsonNode *node_temp = json_from_string(obj.toJson(), &mygerror);
			json_array_add_element(json_array, node_temp);
			g_clear_error(&mygerror);
		}
		json_node_init_array(node, json_array);
		json_array_unref(json_array);
		
	}


	
	const gchar *client_linksKey = "client_links";
	json_object_set_member(pJsonObject, client_linksKey, node);
	if (isprimitive("ServerBillingDetails")) {
		ServerBillingDetails obj = getBillingDetails();
		node = converttoJson(&obj, "ServerBillingDetails", "");
	}
	else {
		
		ServerBillingDetails obj = static_cast<ServerBillingDetails> (getBillingDetails());
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
	if (isprimitive("Server_locations")) {
		Server_locations obj = getLocations();
		node = converttoJson(&obj, "Server_locations", "");
	}
	else {
		
		Server_locations obj = static_cast<Server_locations> (getLocations());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *locationsKey = "locations";
	json_object_set_member(pJsonObject, locationsKey, node);
	if (isprimitive("ServerNetworkInfo")) {
		ServerNetworkInfo obj = getNetworkInfo();
		node = converttoJson(&obj, "ServerNetworkInfo", "");
	}
	else {
		
		ServerNetworkInfo obj = static_cast<ServerNetworkInfo> (getNetworkInfo());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *networkInfoKey = "networkInfo";
	json_object_set_member(pJsonObject, networkInfoKey, node);
	if (isprimitive("ServerExtraInfoTables")) {
		ServerExtraInfoTables obj = getExtraInfoTables();
		node = converttoJson(&obj, "ServerExtraInfoTables", "");
	}
	else {
		
		ServerExtraInfoTables obj = static_cast<ServerExtraInfoTables> (getExtraInfoTables());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *extraInfoTablesKey = "extraInfoTables";
	json_object_set_member(pJsonObject, extraInfoTablesKey, node);
	if (isprimitive("ServerServiceInfo")) {
		ServerServiceInfo obj = getServiceInfo();
		node = converttoJson(&obj, "ServerServiceInfo", "");
	}
	else {
		
		ServerServiceInfo obj = static_cast<ServerServiceInfo> (getServiceInfo());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *serviceInfoKey = "serviceInfo";
	json_object_set_member(pJsonObject, serviceInfoKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

bool
Server::getIpmiAuth()
{
	return ipmiAuth;
}

void
Server::setIpmiAuth(bool  ipmiAuth)
{
	this->ipmiAuth = ipmiAuth;
}

std::list<ServerClientLink>
Server::getClientLinks()
{
	return client_links;
}

void
Server::setClientLinks(std::list <ServerClientLink> client_links)
{
	this->client_links = client_links;
}

ServerBillingDetails
Server::getBillingDetails()
{
	return billingDetails;
}

void
Server::setBillingDetails(ServerBillingDetails  billingDetails)
{
	this->billingDetails = billingDetails;
}

std::string
Server::getCustCurrency()
{
	return custCurrency;
}

void
Server::setCustCurrency(std::string  custCurrency)
{
	this->custCurrency = custCurrency;
}

std::string
Server::getCustCurrencySymbol()
{
	return custCurrencySymbol;
}

void
Server::setCustCurrencySymbol(std::string  custCurrencySymbol)
{
	this->custCurrencySymbol = custCurrencySymbol;
}

std::string
Server::getPackage()
{
	return package;
}

void
Server::setPackage(std::string  package)
{
	this->package = package;
}

std::list<std::string>
Server::getServiceExtra()
{
	return serviceExtra;
}

void
Server::setServiceExtra(std::list <std::string> serviceExtra)
{
	this->serviceExtra = serviceExtra;
}

Server_locations
Server::getLocations()
{
	return locations;
}

void
Server::setLocations(Server_locations  locations)
{
	this->locations = locations;
}

ServerNetworkInfo
Server::getNetworkInfo()
{
	return networkInfo;
}

void
Server::setNetworkInfo(ServerNetworkInfo  networkInfo)
{
	this->networkInfo = networkInfo;
}

ServerExtraInfoTables
Server::getExtraInfoTables()
{
	return extraInfoTables;
}

void
Server::setExtraInfoTables(ServerExtraInfoTables  extraInfoTables)
{
	this->extraInfoTables = extraInfoTables;
}

ServerServiceInfo
Server::getServiceInfo()
{
	return serviceInfo;
}

void
Server::setServiceInfo(ServerServiceInfo  serviceInfo)
{
	this->serviceInfo = serviceInfo;
}


