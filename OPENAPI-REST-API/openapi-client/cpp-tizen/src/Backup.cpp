#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "Backup.h"

using namespace std;
using namespace Tizen::ArtikCloud;

Backup::Backup()
{
	//__init();
}

Backup::~Backup()
{
	//__cleanup();
}

void
Backup::__init()
{
	//serviceInfo = new BackupServiceInfo();
	//new std::list()std::list> client_links;
	//billingDetails = new BackupBillingDetails();
	//custCurrency = std::string();
	//custCurrencySymbol = std::string();
	//serviceMaster = new BackupServiceMaster();
	//package = std::string();
	//serviceExtra = std::string();
	//extraInfoTables = new BackupExtraInfoTables();
}

void
Backup::__cleanup()
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
	//
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
Backup::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *serviceInfoKey = "serviceInfo";
	node = json_object_get_member(pJsonObject, serviceInfoKey);
	if (node !=NULL) {
	

		if (isprimitive("BackupServiceInfo")) {
			jsonToValue(&serviceInfo, node, "BackupServiceInfo", "BackupServiceInfo");
		} else {
			
			BackupServiceInfo* obj = static_cast<BackupServiceInfo*> (&serviceInfo);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *client_linksKey = "client_links";
	node = json_object_get_member(pJsonObject, client_linksKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<BackupClientLink> new_list;
			BackupClientLink inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("BackupClientLink")) {
					jsonToValue(&inst, temp_json, "BackupClientLink", "");
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
	

		if (isprimitive("BackupBillingDetails")) {
			jsonToValue(&billingDetails, node, "BackupBillingDetails", "BackupBillingDetails");
		} else {
			
			BackupBillingDetails* obj = static_cast<BackupBillingDetails*> (&billingDetails);
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
	

		if (isprimitive("BackupServiceMaster")) {
			jsonToValue(&serviceMaster, node, "BackupServiceMaster", "BackupServiceMaster");
		} else {
			
			BackupServiceMaster* obj = static_cast<BackupServiceMaster*> (&serviceMaster);
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
	

		if (isprimitive("std::string")) {
			jsonToValue(&serviceExtra, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *extraInfoTablesKey = "extraInfoTables";
	node = json_object_get_member(pJsonObject, extraInfoTablesKey);
	if (node !=NULL) {
	

		if (isprimitive("BackupExtraInfoTables")) {
			jsonToValue(&extraInfoTables, node, "BackupExtraInfoTables", "BackupExtraInfoTables");
		} else {
			
			BackupExtraInfoTables* obj = static_cast<BackupExtraInfoTables*> (&extraInfoTables);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
}

Backup::Backup(char* json)
{
	this->fromJson(json);
}

char*
Backup::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("BackupServiceInfo")) {
		BackupServiceInfo obj = getServiceInfo();
		node = converttoJson(&obj, "BackupServiceInfo", "");
	}
	else {
		
		BackupServiceInfo obj = static_cast<BackupServiceInfo> (getServiceInfo());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *serviceInfoKey = "serviceInfo";
	json_object_set_member(pJsonObject, serviceInfoKey, node);
	if (isprimitive("BackupClientLink")) {
		list<BackupClientLink> new_list = static_cast<list <BackupClientLink> > (getClientLinks());
		node = converttoJson(&new_list, "BackupClientLink", "array");
	} else {
		node = json_node_alloc();
		list<BackupClientLink> new_list = static_cast<list <BackupClientLink> > (getClientLinks());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<BackupClientLink>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			BackupClientLink obj = *it;
			JsonNode *node_temp = json_from_string(obj.toJson(), &mygerror);
			json_array_add_element(json_array, node_temp);
			g_clear_error(&mygerror);
		}
		json_node_init_array(node, json_array);
		json_array_unref(json_array);
		
	}


	
	const gchar *client_linksKey = "client_links";
	json_object_set_member(pJsonObject, client_linksKey, node);
	if (isprimitive("BackupBillingDetails")) {
		BackupBillingDetails obj = getBillingDetails();
		node = converttoJson(&obj, "BackupBillingDetails", "");
	}
	else {
		
		BackupBillingDetails obj = static_cast<BackupBillingDetails> (getBillingDetails());
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
	if (isprimitive("BackupServiceMaster")) {
		BackupServiceMaster obj = getServiceMaster();
		node = converttoJson(&obj, "BackupServiceMaster", "");
	}
	else {
		
		BackupServiceMaster obj = static_cast<BackupServiceMaster> (getServiceMaster());
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
		std::string obj = getServiceExtra();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *serviceExtraKey = "serviceExtra";
	json_object_set_member(pJsonObject, serviceExtraKey, node);
	if (isprimitive("BackupExtraInfoTables")) {
		BackupExtraInfoTables obj = getExtraInfoTables();
		node = converttoJson(&obj, "BackupExtraInfoTables", "");
	}
	else {
		
		BackupExtraInfoTables obj = static_cast<BackupExtraInfoTables> (getExtraInfoTables());
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

BackupServiceInfo
Backup::getServiceInfo()
{
	return serviceInfo;
}

void
Backup::setServiceInfo(BackupServiceInfo  serviceInfo)
{
	this->serviceInfo = serviceInfo;
}

std::list<BackupClientLink>
Backup::getClientLinks()
{
	return client_links;
}

void
Backup::setClientLinks(std::list <BackupClientLink> client_links)
{
	this->client_links = client_links;
}

BackupBillingDetails
Backup::getBillingDetails()
{
	return billingDetails;
}

void
Backup::setBillingDetails(BackupBillingDetails  billingDetails)
{
	this->billingDetails = billingDetails;
}

std::string
Backup::getCustCurrency()
{
	return custCurrency;
}

void
Backup::setCustCurrency(std::string  custCurrency)
{
	this->custCurrency = custCurrency;
}

std::string
Backup::getCustCurrencySymbol()
{
	return custCurrencySymbol;
}

void
Backup::setCustCurrencySymbol(std::string  custCurrencySymbol)
{
	this->custCurrencySymbol = custCurrencySymbol;
}

BackupServiceMaster
Backup::getServiceMaster()
{
	return serviceMaster;
}

void
Backup::setServiceMaster(BackupServiceMaster  serviceMaster)
{
	this->serviceMaster = serviceMaster;
}

std::string
Backup::getPackage()
{
	return package;
}

void
Backup::setPackage(std::string  package)
{
	this->package = package;
}

std::string
Backup::getServiceExtra()
{
	return serviceExtra;
}

void
Backup::setServiceExtra(std::string  serviceExtra)
{
	this->serviceExtra = serviceExtra;
}

BackupExtraInfoTables
Backup::getExtraInfoTables()
{
	return extraInfoTables;
}

void
Backup::setExtraInfoTables(BackupExtraInfoTables  extraInfoTables)
{
	this->extraInfoTables = extraInfoTables;
}


