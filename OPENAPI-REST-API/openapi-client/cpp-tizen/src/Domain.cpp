#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "Domain.h"

using namespace std;
using namespace Tizen::ArtikCloud;

Domain::Domain()
{
	//__init();
}

Domain::~Domain()
{
	//__cleanup();
}

void
Domain::__init()
{
	//serviceInfo = new DomainServiceInfo();
	//new std::map()std::map> serviceTypes;
	//new std::list()std::list> client_links;
	//billingDetails = new DomainBillingDetails();
	//custCurrency = std::string();
	//custCurrencySymbol = std::string();
	//serviceExtra = new DomainBillingExtra();
	//extraInfoTables = new BackupExtraInfoTables();
	//serviceType = new DomainServiceType();
	//contact_details = new DomainContactDetails();
	//pwarning = std::string();
	//transfer_info = std::string();
	//errors = bool(false);
	//new std::list()std::list> domain_logs;
	//allInfo = new DomainAllInfo();
	//registrarStatus = std::string();
	//locked = std::string();
	//whoisPrivacy = std::string();
	//autoRenew = std::string();
}

void
Domain::__cleanup()
{
	//if(serviceInfo != NULL) {
	//
	//delete serviceInfo;
	//serviceInfo = NULL;
	//}
	//if(serviceTypes != NULL) {
	//serviceTypes.RemoveAll(true);
	//delete serviceTypes;
	//serviceTypes = NULL;
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
	//if(serviceType != NULL) {
	//
	//delete serviceType;
	//serviceType = NULL;
	//}
	//if(contact_details != NULL) {
	//
	//delete contact_details;
	//contact_details = NULL;
	//}
	//if(pwarning != NULL) {
	//
	//delete pwarning;
	//pwarning = NULL;
	//}
	//if(transfer_info != NULL) {
	//
	//delete transfer_info;
	//transfer_info = NULL;
	//}
	//if(errors != NULL) {
	//
	//delete errors;
	//errors = NULL;
	//}
	//if(domain_logs != NULL) {
	//domain_logs.RemoveAll(true);
	//delete domain_logs;
	//domain_logs = NULL;
	//}
	//if(allInfo != NULL) {
	//
	//delete allInfo;
	//allInfo = NULL;
	//}
	//if(registrarStatus != NULL) {
	//
	//delete registrarStatus;
	//registrarStatus = NULL;
	//}
	//if(locked != NULL) {
	//
	//delete locked;
	//locked = NULL;
	//}
	//if(whoisPrivacy != NULL) {
	//
	//delete whoisPrivacy;
	//whoisPrivacy = NULL;
	//}
	//if(autoRenew != NULL) {
	//
	//delete autoRenew;
	//autoRenew = NULL;
	//}
	//
}

void
Domain::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *serviceInfoKey = "serviceInfo";
	node = json_object_get_member(pJsonObject, serviceInfoKey);
	if (node !=NULL) {
	

		if (isprimitive("DomainServiceInfo")) {
			jsonToValue(&serviceInfo, node, "DomainServiceInfo", "DomainServiceInfo");
		} else {
			
			DomainServiceInfo* obj = static_cast<DomainServiceInfo*> (&serviceInfo);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *serviceTypesKey = "serviceTypes";
	node = json_object_get_member(pJsonObject, serviceTypesKey);
	if (node !=NULL) {
	
		{
			JsonObject* json_obj = json_node_get_object(node);
			map<string,string> new_map;
			json_object_foreach_member(json_obj,helper_func,&new_map);
			serviceTypes = new_map;
		}
		
	}
	const gchar *client_linksKey = "client_links";
	node = json_object_get_member(pJsonObject, client_linksKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<DomainClientLink> new_list;
			DomainClientLink inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("DomainClientLink")) {
					jsonToValue(&inst, temp_json, "DomainClientLink", "");
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
	

		if (isprimitive("DomainBillingDetails")) {
			jsonToValue(&billingDetails, node, "DomainBillingDetails", "DomainBillingDetails");
		} else {
			
			DomainBillingDetails* obj = static_cast<DomainBillingDetails*> (&billingDetails);
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
	const gchar *serviceExtraKey = "serviceExtra";
	node = json_object_get_member(pJsonObject, serviceExtraKey);
	if (node !=NULL) {
	

		if (isprimitive("DomainBillingExtra")) {
			jsonToValue(&serviceExtra, node, "DomainBillingExtra", "DomainBillingExtra");
		} else {
			
			DomainBillingExtra* obj = static_cast<DomainBillingExtra*> (&serviceExtra);
			obj->fromJson(json_to_string(node, false));
			
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
	const gchar *serviceTypeKey = "serviceType";
	node = json_object_get_member(pJsonObject, serviceTypeKey);
	if (node !=NULL) {
	

		if (isprimitive("DomainServiceType")) {
			jsonToValue(&serviceType, node, "DomainServiceType", "DomainServiceType");
		} else {
			
			DomainServiceType* obj = static_cast<DomainServiceType*> (&serviceType);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *contact_detailsKey = "contact_details";
	node = json_object_get_member(pJsonObject, contact_detailsKey);
	if (node !=NULL) {
	

		if (isprimitive("DomainContactDetails")) {
			jsonToValue(&contact_details, node, "DomainContactDetails", "DomainContactDetails");
		} else {
			
			DomainContactDetails* obj = static_cast<DomainContactDetails*> (&contact_details);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *pwarningKey = "pwarning";
	node = json_object_get_member(pJsonObject, pwarningKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&pwarning, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *transfer_infoKey = "transfer_info";
	node = json_object_get_member(pJsonObject, transfer_infoKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&transfer_info, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *errorsKey = "errors";
	node = json_object_get_member(pJsonObject, errorsKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&errors, node, "bool", "");
		} else {
			
		}
	}
	const gchar *domain_logsKey = "domain_logs";
	node = json_object_get_member(pJsonObject, domain_logsKey);
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
			domain_logs = new_list;
		}
		
	}
	const gchar *allInfoKey = "allInfo";
	node = json_object_get_member(pJsonObject, allInfoKey);
	if (node !=NULL) {
	

		if (isprimitive("DomainAllInfo")) {
			jsonToValue(&allInfo, node, "DomainAllInfo", "DomainAllInfo");
		} else {
			
			DomainAllInfo* obj = static_cast<DomainAllInfo*> (&allInfo);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *registrarStatusKey = "registrarStatus";
	node = json_object_get_member(pJsonObject, registrarStatusKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&registrarStatus, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *lockedKey = "locked";
	node = json_object_get_member(pJsonObject, lockedKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&locked, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *whoisPrivacyKey = "whoisPrivacy";
	node = json_object_get_member(pJsonObject, whoisPrivacyKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&whoisPrivacy, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *autoRenewKey = "autoRenew";
	node = json_object_get_member(pJsonObject, autoRenewKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&autoRenew, node, "std::string", "");
		} else {
			
		}
	}
}

Domain::Domain(char* json)
{
	this->fromJson(json);
}

char*
Domain::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("DomainServiceInfo")) {
		DomainServiceInfo obj = getServiceInfo();
		node = converttoJson(&obj, "DomainServiceInfo", "");
	}
	else {
		
		DomainServiceInfo obj = static_cast<DomainServiceInfo> (getServiceInfo());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *serviceInfoKey = "serviceInfo";
	json_object_set_member(pJsonObject, serviceInfoKey, node);


	{
		JsonObject* json_obj;
		map<string, string> new_list = static_cast<map <string, string> > (getServiceTypes());
		json_obj = json_object_new();
		for (map<string, string>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			string obj = (*it).first;
			string obj2 = (*it).second;
			JsonNode* tempnode = json_from_string(obj2.c_str(),NULL);
			json_object_set_member(json_obj, obj.c_str(), tempnode);
		}
	node = json_node_alloc();
	json_node_init_object(node, json_obj);
	json_object_unref(json_obj);
	}

	const gchar *serviceTypesKey = "serviceTypes";
	json_object_set_member(pJsonObject, serviceTypesKey, node);
	if (isprimitive("DomainClientLink")) {
		list<DomainClientLink> new_list = static_cast<list <DomainClientLink> > (getClientLinks());
		node = converttoJson(&new_list, "DomainClientLink", "array");
	} else {
		node = json_node_alloc();
		list<DomainClientLink> new_list = static_cast<list <DomainClientLink> > (getClientLinks());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<DomainClientLink>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			DomainClientLink obj = *it;
			JsonNode *node_temp = json_from_string(obj.toJson(), &mygerror);
			json_array_add_element(json_array, node_temp);
			g_clear_error(&mygerror);
		}
		json_node_init_array(node, json_array);
		json_array_unref(json_array);
		
	}


	
	const gchar *client_linksKey = "client_links";
	json_object_set_member(pJsonObject, client_linksKey, node);
	if (isprimitive("DomainBillingDetails")) {
		DomainBillingDetails obj = getBillingDetails();
		node = converttoJson(&obj, "DomainBillingDetails", "");
	}
	else {
		
		DomainBillingDetails obj = static_cast<DomainBillingDetails> (getBillingDetails());
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
	if (isprimitive("DomainBillingExtra")) {
		DomainBillingExtra obj = getServiceExtra();
		node = converttoJson(&obj, "DomainBillingExtra", "");
	}
	else {
		
		DomainBillingExtra obj = static_cast<DomainBillingExtra> (getServiceExtra());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
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
	if (isprimitive("DomainServiceType")) {
		DomainServiceType obj = getServiceType();
		node = converttoJson(&obj, "DomainServiceType", "");
	}
	else {
		
		DomainServiceType obj = static_cast<DomainServiceType> (getServiceType());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *serviceTypeKey = "serviceType";
	json_object_set_member(pJsonObject, serviceTypeKey, node);
	if (isprimitive("DomainContactDetails")) {
		DomainContactDetails obj = getContactDetails();
		node = converttoJson(&obj, "DomainContactDetails", "");
	}
	else {
		
		DomainContactDetails obj = static_cast<DomainContactDetails> (getContactDetails());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *contact_detailsKey = "contact_details";
	json_object_set_member(pJsonObject, contact_detailsKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getPwarning();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *pwarningKey = "pwarning";
	json_object_set_member(pJsonObject, pwarningKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getTransferInfo();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *transfer_infoKey = "transfer_info";
	json_object_set_member(pJsonObject, transfer_infoKey, node);
	if (isprimitive("bool")) {
		bool obj = getErrors();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *errorsKey = "errors";
	json_object_set_member(pJsonObject, errorsKey, node);
	if (isprimitive("std::string")) {
		list<std::string> new_list = static_cast<list <std::string> > (getDomainLogs());
		node = converttoJson(&new_list, "std::string", "array");
	} else {
		node = json_node_alloc();
		list<std::string> new_list = static_cast<list <std::string> > (getDomainLogs());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
	}


	
	const gchar *domain_logsKey = "domain_logs";
	json_object_set_member(pJsonObject, domain_logsKey, node);
	if (isprimitive("DomainAllInfo")) {
		DomainAllInfo obj = getAllInfo();
		node = converttoJson(&obj, "DomainAllInfo", "");
	}
	else {
		
		DomainAllInfo obj = static_cast<DomainAllInfo> (getAllInfo());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *allInfoKey = "allInfo";
	json_object_set_member(pJsonObject, allInfoKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getRegistrarStatus();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *registrarStatusKey = "registrarStatus";
	json_object_set_member(pJsonObject, registrarStatusKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getLocked();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *lockedKey = "locked";
	json_object_set_member(pJsonObject, lockedKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getWhoisPrivacy();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *whoisPrivacyKey = "whoisPrivacy";
	json_object_set_member(pJsonObject, whoisPrivacyKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getAutoRenew();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *autoRenewKey = "autoRenew";
	json_object_set_member(pJsonObject, autoRenewKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

DomainServiceInfo
Domain::getServiceInfo()
{
	return serviceInfo;
}

void
Domain::setServiceInfo(DomainServiceInfo  serviceInfo)
{
	this->serviceInfo = serviceInfo;
}

std::map<string, string>
Domain::getServiceTypes()
{
	return serviceTypes;
}

void
Domain::setServiceTypes(std::map <string, string> serviceTypes)
{
	this->serviceTypes = serviceTypes;
}

std::list<DomainClientLink>
Domain::getClientLinks()
{
	return client_links;
}

void
Domain::setClientLinks(std::list <DomainClientLink> client_links)
{
	this->client_links = client_links;
}

DomainBillingDetails
Domain::getBillingDetails()
{
	return billingDetails;
}

void
Domain::setBillingDetails(DomainBillingDetails  billingDetails)
{
	this->billingDetails = billingDetails;
}

std::string
Domain::getCustCurrency()
{
	return custCurrency;
}

void
Domain::setCustCurrency(std::string  custCurrency)
{
	this->custCurrency = custCurrency;
}

std::string
Domain::getCustCurrencySymbol()
{
	return custCurrencySymbol;
}

void
Domain::setCustCurrencySymbol(std::string  custCurrencySymbol)
{
	this->custCurrencySymbol = custCurrencySymbol;
}

DomainBillingExtra
Domain::getServiceExtra()
{
	return serviceExtra;
}

void
Domain::setServiceExtra(DomainBillingExtra  serviceExtra)
{
	this->serviceExtra = serviceExtra;
}

BackupExtraInfoTables
Domain::getExtraInfoTables()
{
	return extraInfoTables;
}

void
Domain::setExtraInfoTables(BackupExtraInfoTables  extraInfoTables)
{
	this->extraInfoTables = extraInfoTables;
}

DomainServiceType
Domain::getServiceType()
{
	return serviceType;
}

void
Domain::setServiceType(DomainServiceType  serviceType)
{
	this->serviceType = serviceType;
}

DomainContactDetails
Domain::getContactDetails()
{
	return contact_details;
}

void
Domain::setContactDetails(DomainContactDetails  contact_details)
{
	this->contact_details = contact_details;
}

std::string
Domain::getPwarning()
{
	return pwarning;
}

void
Domain::setPwarning(std::string  pwarning)
{
	this->pwarning = pwarning;
}

std::string
Domain::getTransferInfo()
{
	return transfer_info;
}

void
Domain::setTransferInfo(std::string  transfer_info)
{
	this->transfer_info = transfer_info;
}

bool
Domain::getErrors()
{
	return errors;
}

void
Domain::setErrors(bool  errors)
{
	this->errors = errors;
}

std::list<std::string>
Domain::getDomainLogs()
{
	return domain_logs;
}

void
Domain::setDomainLogs(std::list <std::string> domain_logs)
{
	this->domain_logs = domain_logs;
}

DomainAllInfo
Domain::getAllInfo()
{
	return allInfo;
}

void
Domain::setAllInfo(DomainAllInfo  allInfo)
{
	this->allInfo = allInfo;
}

std::string
Domain::getRegistrarStatus()
{
	return registrarStatus;
}

void
Domain::setRegistrarStatus(std::string  registrarStatus)
{
	this->registrarStatus = registrarStatus;
}

std::string
Domain::getLocked()
{
	return locked;
}

void
Domain::setLocked(std::string  locked)
{
	this->locked = locked;
}

std::string
Domain::getWhoisPrivacy()
{
	return whoisPrivacy;
}

void
Domain::setWhoisPrivacy(std::string  whoisPrivacy)
{
	this->whoisPrivacy = whoisPrivacy;
}

std::string
Domain::getAutoRenew()
{
	return autoRenew;
}

void
Domain::setAutoRenew(std::string  autoRenew)
{
	this->autoRenew = autoRenew;
}


