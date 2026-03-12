#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "Vps.h"

using namespace std;
using namespace Tizen::ArtikCloud;

Vps::Vps()
{
	//__init();
}

Vps::~Vps()
{
	//__cleanup();
}

void
Vps::__init()
{
	//serviceInfo = new VpsServiceInfo();
	//new std::list()std::list> client_links;
	//billingDetails = new VpsBillingDetails();
	//custCurrency = std::string();
	//custCurrencySymbol = std::string();
	//serviceMaster = new VpsServiceMaster();
	//package = std::string();
	//serviceExtra = new VpsServiceExtra();
	//extraInfoTables = new VpsExtraInfoTables();
	//r_module = std::string();
	//token = std::string();
	//da_link = int(0);
	//sr_link = int(0);
	//cp_data = new VpsCPData();
	//da_data = new VpsDAData();
	//plesk12_data = new VpsPlesk12Data();
	//serviceAddons = new VpsServiceAddons();
	//os_template = std::string();
	//cpu_graph_data = null;
}

void
Vps::__cleanup()
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
	//if(r_module != NULL) {
	//
	//delete r_module;
	//r_module = NULL;
	//}
	//if(token != NULL) {
	//
	//delete token;
	//token = NULL;
	//}
	//if(da_link != NULL) {
	//
	//delete da_link;
	//da_link = NULL;
	//}
	//if(sr_link != NULL) {
	//
	//delete sr_link;
	//sr_link = NULL;
	//}
	//if(cp_data != NULL) {
	//
	//delete cp_data;
	//cp_data = NULL;
	//}
	//if(da_data != NULL) {
	//
	//delete da_data;
	//da_data = NULL;
	//}
	//if(plesk12_data != NULL) {
	//
	//delete plesk12_data;
	//plesk12_data = NULL;
	//}
	//if(serviceAddons != NULL) {
	//
	//delete serviceAddons;
	//serviceAddons = NULL;
	//}
	//if(os_template != NULL) {
	//
	//delete os_template;
	//os_template = NULL;
	//}
	//if(cpu_graph_data != NULL) {
	//
	//delete cpu_graph_data;
	//cpu_graph_data = NULL;
	//}
	//
}

void
Vps::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *serviceInfoKey = "serviceInfo";
	node = json_object_get_member(pJsonObject, serviceInfoKey);
	if (node !=NULL) {
	

		if (isprimitive("VpsServiceInfo")) {
			jsonToValue(&serviceInfo, node, "VpsServiceInfo", "VpsServiceInfo");
		} else {
			
			VpsServiceInfo* obj = static_cast<VpsServiceInfo*> (&serviceInfo);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *client_linksKey = "client_links";
	node = json_object_get_member(pJsonObject, client_linksKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<VpsClientLink> new_list;
			VpsClientLink inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("VpsClientLink")) {
					jsonToValue(&inst, temp_json, "VpsClientLink", "");
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
	

		if (isprimitive("VpsBillingDetails")) {
			jsonToValue(&billingDetails, node, "VpsBillingDetails", "VpsBillingDetails");
		} else {
			
			VpsBillingDetails* obj = static_cast<VpsBillingDetails*> (&billingDetails);
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
	

		if (isprimitive("VpsServiceMaster")) {
			jsonToValue(&serviceMaster, node, "VpsServiceMaster", "VpsServiceMaster");
		} else {
			
			VpsServiceMaster* obj = static_cast<VpsServiceMaster*> (&serviceMaster);
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
	

		if (isprimitive("VpsServiceExtra")) {
			jsonToValue(&serviceExtra, node, "VpsServiceExtra", "VpsServiceExtra");
		} else {
			
			VpsServiceExtra* obj = static_cast<VpsServiceExtra*> (&serviceExtra);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *extraInfoTablesKey = "extraInfoTables";
	node = json_object_get_member(pJsonObject, extraInfoTablesKey);
	if (node !=NULL) {
	

		if (isprimitive("VpsExtraInfoTables")) {
			jsonToValue(&extraInfoTables, node, "VpsExtraInfoTables", "VpsExtraInfoTables");
		} else {
			
			VpsExtraInfoTables* obj = static_cast<VpsExtraInfoTables*> (&extraInfoTables);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *r_moduleKey = "module";
	node = json_object_get_member(pJsonObject, r_moduleKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&r_module, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *tokenKey = "token";
	node = json_object_get_member(pJsonObject, tokenKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&token, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *da_linkKey = "da_link";
	node = json_object_get_member(pJsonObject, da_linkKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&da_link, node, "int", "");
		} else {
			
		}
	}
	const gchar *sr_linkKey = "sr_link";
	node = json_object_get_member(pJsonObject, sr_linkKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&sr_link, node, "int", "");
		} else {
			
		}
	}
	const gchar *cp_dataKey = "cp_data";
	node = json_object_get_member(pJsonObject, cp_dataKey);
	if (node !=NULL) {
	

		if (isprimitive("VpsCPData")) {
			jsonToValue(&cp_data, node, "VpsCPData", "VpsCPData");
		} else {
			
			VpsCPData* obj = static_cast<VpsCPData*> (&cp_data);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *da_dataKey = "da_data";
	node = json_object_get_member(pJsonObject, da_dataKey);
	if (node !=NULL) {
	

		if (isprimitive("VpsDAData")) {
			jsonToValue(&da_data, node, "VpsDAData", "VpsDAData");
		} else {
			
			VpsDAData* obj = static_cast<VpsDAData*> (&da_data);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *plesk12_dataKey = "plesk12_data";
	node = json_object_get_member(pJsonObject, plesk12_dataKey);
	if (node !=NULL) {
	

		if (isprimitive("VpsPlesk12Data")) {
			jsonToValue(&plesk12_data, node, "VpsPlesk12Data", "VpsPlesk12Data");
		} else {
			
			VpsPlesk12Data* obj = static_cast<VpsPlesk12Data*> (&plesk12_data);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *serviceAddonsKey = "serviceAddons";
	node = json_object_get_member(pJsonObject, serviceAddonsKey);
	if (node !=NULL) {
	

		if (isprimitive("VpsServiceAddons")) {
			jsonToValue(&serviceAddons, node, "VpsServiceAddons", "VpsServiceAddons");
		} else {
			
			VpsServiceAddons* obj = static_cast<VpsServiceAddons*> (&serviceAddons);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *os_templateKey = "os_template";
	node = json_object_get_member(pJsonObject, os_templateKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&os_template, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *cpu_graph_dataKey = "cpu_graph_data";
	node = json_object_get_member(pJsonObject, cpu_graph_dataKey);
	if (node !=NULL) {
	

		if (isprimitive("AnyType")) {
			jsonToValue(&cpu_graph_data, node, "AnyType", "");
		} else {
			
			AnyType* obj = static_cast<AnyType*> (&cpu_graph_data);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
}

Vps::Vps(char* json)
{
	this->fromJson(json);
}

char*
Vps::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("VpsServiceInfo")) {
		VpsServiceInfo obj = getServiceInfo();
		node = converttoJson(&obj, "VpsServiceInfo", "");
	}
	else {
		
		VpsServiceInfo obj = static_cast<VpsServiceInfo> (getServiceInfo());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *serviceInfoKey = "serviceInfo";
	json_object_set_member(pJsonObject, serviceInfoKey, node);
	if (isprimitive("VpsClientLink")) {
		list<VpsClientLink> new_list = static_cast<list <VpsClientLink> > (getClientLinks());
		node = converttoJson(&new_list, "VpsClientLink", "array");
	} else {
		node = json_node_alloc();
		list<VpsClientLink> new_list = static_cast<list <VpsClientLink> > (getClientLinks());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<VpsClientLink>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			VpsClientLink obj = *it;
			JsonNode *node_temp = json_from_string(obj.toJson(), &mygerror);
			json_array_add_element(json_array, node_temp);
			g_clear_error(&mygerror);
		}
		json_node_init_array(node, json_array);
		json_array_unref(json_array);
		
	}


	
	const gchar *client_linksKey = "client_links";
	json_object_set_member(pJsonObject, client_linksKey, node);
	if (isprimitive("VpsBillingDetails")) {
		VpsBillingDetails obj = getBillingDetails();
		node = converttoJson(&obj, "VpsBillingDetails", "");
	}
	else {
		
		VpsBillingDetails obj = static_cast<VpsBillingDetails> (getBillingDetails());
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
	if (isprimitive("VpsServiceMaster")) {
		VpsServiceMaster obj = getServiceMaster();
		node = converttoJson(&obj, "VpsServiceMaster", "");
	}
	else {
		
		VpsServiceMaster obj = static_cast<VpsServiceMaster> (getServiceMaster());
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
	if (isprimitive("VpsServiceExtra")) {
		VpsServiceExtra obj = getServiceExtra();
		node = converttoJson(&obj, "VpsServiceExtra", "");
	}
	else {
		
		VpsServiceExtra obj = static_cast<VpsServiceExtra> (getServiceExtra());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *serviceExtraKey = "serviceExtra";
	json_object_set_member(pJsonObject, serviceExtraKey, node);
	if (isprimitive("VpsExtraInfoTables")) {
		VpsExtraInfoTables obj = getExtraInfoTables();
		node = converttoJson(&obj, "VpsExtraInfoTables", "");
	}
	else {
		
		VpsExtraInfoTables obj = static_cast<VpsExtraInfoTables> (getExtraInfoTables());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *extraInfoTablesKey = "extraInfoTables";
	json_object_set_member(pJsonObject, extraInfoTablesKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getRModule();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *r_moduleKey = "module";
	json_object_set_member(pJsonObject, r_moduleKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getToken();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *tokenKey = "token";
	json_object_set_member(pJsonObject, tokenKey, node);
	if (isprimitive("int")) {
		int obj = getDaLink();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *da_linkKey = "da_link";
	json_object_set_member(pJsonObject, da_linkKey, node);
	if (isprimitive("int")) {
		int obj = getSrLink();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *sr_linkKey = "sr_link";
	json_object_set_member(pJsonObject, sr_linkKey, node);
	if (isprimitive("VpsCPData")) {
		VpsCPData obj = getCpData();
		node = converttoJson(&obj, "VpsCPData", "");
	}
	else {
		
		VpsCPData obj = static_cast<VpsCPData> (getCpData());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *cp_dataKey = "cp_data";
	json_object_set_member(pJsonObject, cp_dataKey, node);
	if (isprimitive("VpsDAData")) {
		VpsDAData obj = getDaData();
		node = converttoJson(&obj, "VpsDAData", "");
	}
	else {
		
		VpsDAData obj = static_cast<VpsDAData> (getDaData());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *da_dataKey = "da_data";
	json_object_set_member(pJsonObject, da_dataKey, node);
	if (isprimitive("VpsPlesk12Data")) {
		VpsPlesk12Data obj = getPlesk12Data();
		node = converttoJson(&obj, "VpsPlesk12Data", "");
	}
	else {
		
		VpsPlesk12Data obj = static_cast<VpsPlesk12Data> (getPlesk12Data());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *plesk12_dataKey = "plesk12_data";
	json_object_set_member(pJsonObject, plesk12_dataKey, node);
	if (isprimitive("VpsServiceAddons")) {
		VpsServiceAddons obj = getServiceAddons();
		node = converttoJson(&obj, "VpsServiceAddons", "");
	}
	else {
		
		VpsServiceAddons obj = static_cast<VpsServiceAddons> (getServiceAddons());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *serviceAddonsKey = "serviceAddons";
	json_object_set_member(pJsonObject, serviceAddonsKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getOsTemplate();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *os_templateKey = "os_template";
	json_object_set_member(pJsonObject, os_templateKey, node);
	if (isprimitive("AnyType")) {
		AnyType obj = getCpuGraphData();
		node = converttoJson(&obj, "AnyType", "");
	}
	else {
		
		AnyType obj = static_cast<AnyType> (getCpuGraphData());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *cpu_graph_dataKey = "cpu_graph_data";
	json_object_set_member(pJsonObject, cpu_graph_dataKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

VpsServiceInfo
Vps::getServiceInfo()
{
	return serviceInfo;
}

void
Vps::setServiceInfo(VpsServiceInfo  serviceInfo)
{
	this->serviceInfo = serviceInfo;
}

std::list<VpsClientLink>
Vps::getClientLinks()
{
	return client_links;
}

void
Vps::setClientLinks(std::list <VpsClientLink> client_links)
{
	this->client_links = client_links;
}

VpsBillingDetails
Vps::getBillingDetails()
{
	return billingDetails;
}

void
Vps::setBillingDetails(VpsBillingDetails  billingDetails)
{
	this->billingDetails = billingDetails;
}

std::string
Vps::getCustCurrency()
{
	return custCurrency;
}

void
Vps::setCustCurrency(std::string  custCurrency)
{
	this->custCurrency = custCurrency;
}

std::string
Vps::getCustCurrencySymbol()
{
	return custCurrencySymbol;
}

void
Vps::setCustCurrencySymbol(std::string  custCurrencySymbol)
{
	this->custCurrencySymbol = custCurrencySymbol;
}

VpsServiceMaster
Vps::getServiceMaster()
{
	return serviceMaster;
}

void
Vps::setServiceMaster(VpsServiceMaster  serviceMaster)
{
	this->serviceMaster = serviceMaster;
}

std::string
Vps::getPackage()
{
	return package;
}

void
Vps::setPackage(std::string  package)
{
	this->package = package;
}

VpsServiceExtra
Vps::getServiceExtra()
{
	return serviceExtra;
}

void
Vps::setServiceExtra(VpsServiceExtra  serviceExtra)
{
	this->serviceExtra = serviceExtra;
}

VpsExtraInfoTables
Vps::getExtraInfoTables()
{
	return extraInfoTables;
}

void
Vps::setExtraInfoTables(VpsExtraInfoTables  extraInfoTables)
{
	this->extraInfoTables = extraInfoTables;
}

std::string
Vps::getRModule()
{
	return r_module;
}

void
Vps::setRModule(std::string  r_module)
{
	this->r_module = r_module;
}

std::string
Vps::getToken()
{
	return token;
}

void
Vps::setToken(std::string  token)
{
	this->token = token;
}

int
Vps::getDaLink()
{
	return da_link;
}

void
Vps::setDaLink(int  da_link)
{
	this->da_link = da_link;
}

int
Vps::getSrLink()
{
	return sr_link;
}

void
Vps::setSrLink(int  sr_link)
{
	this->sr_link = sr_link;
}

VpsCPData
Vps::getCpData()
{
	return cp_data;
}

void
Vps::setCpData(VpsCPData  cp_data)
{
	this->cp_data = cp_data;
}

VpsDAData
Vps::getDaData()
{
	return da_data;
}

void
Vps::setDaData(VpsDAData  da_data)
{
	this->da_data = da_data;
}

VpsPlesk12Data
Vps::getPlesk12Data()
{
	return plesk12_data;
}

void
Vps::setPlesk12Data(VpsPlesk12Data  plesk12_data)
{
	this->plesk12_data = plesk12_data;
}

VpsServiceAddons
Vps::getServiceAddons()
{
	return serviceAddons;
}

void
Vps::setServiceAddons(VpsServiceAddons  serviceAddons)
{
	this->serviceAddons = serviceAddons;
}

std::string
Vps::getOsTemplate()
{
	return os_template;
}

void
Vps::setOsTemplate(std::string  os_template)
{
	this->os_template = os_template;
}

AnyType
Vps::getCpuGraphData()
{
	return cpu_graph_data;
}

void
Vps::setCpuGraphData(AnyType  cpu_graph_data)
{
	this->cpu_graph_data = cpu_graph_data;
}


