#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "Quickserver.h"

using namespace std;
using namespace Tizen::ArtikCloud;

Quickserver::Quickserver()
{
	//__init();
}

Quickserver::~Quickserver()
{
	//__cleanup();
}

void
Quickserver::__init()
{
	//serviceInfo = new QuickserverServiceInfo();
	//new std::list()std::list> client_links;
	//billingDetails = new QuickserverBillingDetails();
	//custCurrency = std::string();
	//custCurrencySymbol = std::string();
	//serviceMaster = new QuickserverServiceMaster();
	//package = std::string();
	//os_template = std::string();
	//serviceExtra = new Quickserver_serviceExtra();
	//extraInfoTables = new Quickserver_extraInfoTables();
	//cpu_graph_data = std::string();
	//bandwidth_xaxis = std::string();
	//bandwidth_yaxis = std::string();
	//r_module = std::string();
	//token = std::string();
	//service_disk_used = std::string();
	//service_disk_total = std::string();
	//disk_percentage = double(0);
	//memory = std::string();
	//hdd = std::string();
	//new std::list()std::list> service_overview_extra;
}

void
Quickserver::__cleanup()
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
	//if(os_template != NULL) {
	//
	//delete os_template;
	//os_template = NULL;
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
	//if(cpu_graph_data != NULL) {
	//
	//delete cpu_graph_data;
	//cpu_graph_data = NULL;
	//}
	//if(bandwidth_xaxis != NULL) {
	//
	//delete bandwidth_xaxis;
	//bandwidth_xaxis = NULL;
	//}
	//if(bandwidth_yaxis != NULL) {
	//
	//delete bandwidth_yaxis;
	//bandwidth_yaxis = NULL;
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
	//if(service_disk_used != NULL) {
	//
	//delete service_disk_used;
	//service_disk_used = NULL;
	//}
	//if(service_disk_total != NULL) {
	//
	//delete service_disk_total;
	//service_disk_total = NULL;
	//}
	//if(disk_percentage != NULL) {
	//
	//delete disk_percentage;
	//disk_percentage = NULL;
	//}
	//if(memory != NULL) {
	//
	//delete memory;
	//memory = NULL;
	//}
	//if(hdd != NULL) {
	//
	//delete hdd;
	//hdd = NULL;
	//}
	//if(service_overview_extra != NULL) {
	//service_overview_extra.RemoveAll(true);
	//delete service_overview_extra;
	//service_overview_extra = NULL;
	//}
	//
}

void
Quickserver::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *serviceInfoKey = "serviceInfo";
	node = json_object_get_member(pJsonObject, serviceInfoKey);
	if (node !=NULL) {
	

		if (isprimitive("QuickserverServiceInfo")) {
			jsonToValue(&serviceInfo, node, "QuickserverServiceInfo", "QuickserverServiceInfo");
		} else {
			
			QuickserverServiceInfo* obj = static_cast<QuickserverServiceInfo*> (&serviceInfo);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *client_linksKey = "client_links";
	node = json_object_get_member(pJsonObject, client_linksKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<QuickserverClientLink> new_list;
			QuickserverClientLink inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("QuickserverClientLink")) {
					jsonToValue(&inst, temp_json, "QuickserverClientLink", "");
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
	

		if (isprimitive("QuickserverBillingDetails")) {
			jsonToValue(&billingDetails, node, "QuickserverBillingDetails", "QuickserverBillingDetails");
		} else {
			
			QuickserverBillingDetails* obj = static_cast<QuickserverBillingDetails*> (&billingDetails);
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
	

		if (isprimitive("QuickserverServiceMaster")) {
			jsonToValue(&serviceMaster, node, "QuickserverServiceMaster", "QuickserverServiceMaster");
		} else {
			
			QuickserverServiceMaster* obj = static_cast<QuickserverServiceMaster*> (&serviceMaster);
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
	const gchar *os_templateKey = "os_template";
	node = json_object_get_member(pJsonObject, os_templateKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&os_template, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *serviceExtraKey = "serviceExtra";
	node = json_object_get_member(pJsonObject, serviceExtraKey);
	if (node !=NULL) {
	

		if (isprimitive("Quickserver_serviceExtra")) {
			jsonToValue(&serviceExtra, node, "Quickserver_serviceExtra", "Quickserver_serviceExtra");
		} else {
			
			Quickserver_serviceExtra* obj = static_cast<Quickserver_serviceExtra*> (&serviceExtra);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *extraInfoTablesKey = "extraInfoTables";
	node = json_object_get_member(pJsonObject, extraInfoTablesKey);
	if (node !=NULL) {
	

		if (isprimitive("Quickserver_extraInfoTables")) {
			jsonToValue(&extraInfoTables, node, "Quickserver_extraInfoTables", "Quickserver_extraInfoTables");
		} else {
			
			Quickserver_extraInfoTables* obj = static_cast<Quickserver_extraInfoTables*> (&extraInfoTables);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *cpu_graph_dataKey = "cpu_graph_data";
	node = json_object_get_member(pJsonObject, cpu_graph_dataKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&cpu_graph_data, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *bandwidth_xaxisKey = "bandwidth_xaxis";
	node = json_object_get_member(pJsonObject, bandwidth_xaxisKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&bandwidth_xaxis, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *bandwidth_yaxisKey = "bandwidth_yaxis";
	node = json_object_get_member(pJsonObject, bandwidth_yaxisKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&bandwidth_yaxis, node, "std::string", "");
		} else {
			
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
	const gchar *service_disk_usedKey = "service_disk_used";
	node = json_object_get_member(pJsonObject, service_disk_usedKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&service_disk_used, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *service_disk_totalKey = "service_disk_total";
	node = json_object_get_member(pJsonObject, service_disk_totalKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&service_disk_total, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *disk_percentageKey = "disk_percentage";
	node = json_object_get_member(pJsonObject, disk_percentageKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&disk_percentage, node, "long long", "");
		} else {
			
			long long* obj = static_cast<long long*> (&disk_percentage);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *memoryKey = "memory";
	node = json_object_get_member(pJsonObject, memoryKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&memory, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *hddKey = "hdd";
	node = json_object_get_member(pJsonObject, hddKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&hdd, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *service_overview_extraKey = "service_overview_extra";
	node = json_object_get_member(pJsonObject, service_overview_extraKey);
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
			service_overview_extra = new_list;
		}
		
	}
}

Quickserver::Quickserver(char* json)
{
	this->fromJson(json);
}

char*
Quickserver::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("QuickserverServiceInfo")) {
		QuickserverServiceInfo obj = getServiceInfo();
		node = converttoJson(&obj, "QuickserverServiceInfo", "");
	}
	else {
		
		QuickserverServiceInfo obj = static_cast<QuickserverServiceInfo> (getServiceInfo());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *serviceInfoKey = "serviceInfo";
	json_object_set_member(pJsonObject, serviceInfoKey, node);
	if (isprimitive("QuickserverClientLink")) {
		list<QuickserverClientLink> new_list = static_cast<list <QuickserverClientLink> > (getClientLinks());
		node = converttoJson(&new_list, "QuickserverClientLink", "array");
	} else {
		node = json_node_alloc();
		list<QuickserverClientLink> new_list = static_cast<list <QuickserverClientLink> > (getClientLinks());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<QuickserverClientLink>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			QuickserverClientLink obj = *it;
			JsonNode *node_temp = json_from_string(obj.toJson(), &mygerror);
			json_array_add_element(json_array, node_temp);
			g_clear_error(&mygerror);
		}
		json_node_init_array(node, json_array);
		json_array_unref(json_array);
		
	}


	
	const gchar *client_linksKey = "client_links";
	json_object_set_member(pJsonObject, client_linksKey, node);
	if (isprimitive("QuickserverBillingDetails")) {
		QuickserverBillingDetails obj = getBillingDetails();
		node = converttoJson(&obj, "QuickserverBillingDetails", "");
	}
	else {
		
		QuickserverBillingDetails obj = static_cast<QuickserverBillingDetails> (getBillingDetails());
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
	if (isprimitive("QuickserverServiceMaster")) {
		QuickserverServiceMaster obj = getServiceMaster();
		node = converttoJson(&obj, "QuickserverServiceMaster", "");
	}
	else {
		
		QuickserverServiceMaster obj = static_cast<QuickserverServiceMaster> (getServiceMaster());
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
		std::string obj = getOsTemplate();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *os_templateKey = "os_template";
	json_object_set_member(pJsonObject, os_templateKey, node);
	if (isprimitive("Quickserver_serviceExtra")) {
		Quickserver_serviceExtra obj = getServiceExtra();
		node = converttoJson(&obj, "Quickserver_serviceExtra", "");
	}
	else {
		
		Quickserver_serviceExtra obj = static_cast<Quickserver_serviceExtra> (getServiceExtra());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *serviceExtraKey = "serviceExtra";
	json_object_set_member(pJsonObject, serviceExtraKey, node);
	if (isprimitive("Quickserver_extraInfoTables")) {
		Quickserver_extraInfoTables obj = getExtraInfoTables();
		node = converttoJson(&obj, "Quickserver_extraInfoTables", "");
	}
	else {
		
		Quickserver_extraInfoTables obj = static_cast<Quickserver_extraInfoTables> (getExtraInfoTables());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *extraInfoTablesKey = "extraInfoTables";
	json_object_set_member(pJsonObject, extraInfoTablesKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getCpuGraphData();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *cpu_graph_dataKey = "cpu_graph_data";
	json_object_set_member(pJsonObject, cpu_graph_dataKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getBandwidthXaxis();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *bandwidth_xaxisKey = "bandwidth_xaxis";
	json_object_set_member(pJsonObject, bandwidth_xaxisKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getBandwidthYaxis();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *bandwidth_yaxisKey = "bandwidth_yaxis";
	json_object_set_member(pJsonObject, bandwidth_yaxisKey, node);
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
	if (isprimitive("std::string")) {
		std::string obj = getServiceDiskUsed();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *service_disk_usedKey = "service_disk_used";
	json_object_set_member(pJsonObject, service_disk_usedKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getServiceDiskTotal();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *service_disk_totalKey = "service_disk_total";
	json_object_set_member(pJsonObject, service_disk_totalKey, node);
	if (isprimitive("long long")) {
		long long obj = getDiskPercentage();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
		long long obj = static_cast<long long> (getDiskPercentage());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *disk_percentageKey = "disk_percentage";
	json_object_set_member(pJsonObject, disk_percentageKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getMemory();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *memoryKey = "memory";
	json_object_set_member(pJsonObject, memoryKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getHdd();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *hddKey = "hdd";
	json_object_set_member(pJsonObject, hddKey, node);
	if (isprimitive("std::string")) {
		list<std::string> new_list = static_cast<list <std::string> > (getServiceOverviewExtra());
		node = converttoJson(&new_list, "std::string", "array");
	} else {
		node = json_node_alloc();
		list<std::string> new_list = static_cast<list <std::string> > (getServiceOverviewExtra());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
	}


	
	const gchar *service_overview_extraKey = "service_overview_extra";
	json_object_set_member(pJsonObject, service_overview_extraKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

QuickserverServiceInfo
Quickserver::getServiceInfo()
{
	return serviceInfo;
}

void
Quickserver::setServiceInfo(QuickserverServiceInfo  serviceInfo)
{
	this->serviceInfo = serviceInfo;
}

std::list<QuickserverClientLink>
Quickserver::getClientLinks()
{
	return client_links;
}

void
Quickserver::setClientLinks(std::list <QuickserverClientLink> client_links)
{
	this->client_links = client_links;
}

QuickserverBillingDetails
Quickserver::getBillingDetails()
{
	return billingDetails;
}

void
Quickserver::setBillingDetails(QuickserverBillingDetails  billingDetails)
{
	this->billingDetails = billingDetails;
}

std::string
Quickserver::getCustCurrency()
{
	return custCurrency;
}

void
Quickserver::setCustCurrency(std::string  custCurrency)
{
	this->custCurrency = custCurrency;
}

std::string
Quickserver::getCustCurrencySymbol()
{
	return custCurrencySymbol;
}

void
Quickserver::setCustCurrencySymbol(std::string  custCurrencySymbol)
{
	this->custCurrencySymbol = custCurrencySymbol;
}

QuickserverServiceMaster
Quickserver::getServiceMaster()
{
	return serviceMaster;
}

void
Quickserver::setServiceMaster(QuickserverServiceMaster  serviceMaster)
{
	this->serviceMaster = serviceMaster;
}

std::string
Quickserver::getPackage()
{
	return package;
}

void
Quickserver::setPackage(std::string  package)
{
	this->package = package;
}

std::string
Quickserver::getOsTemplate()
{
	return os_template;
}

void
Quickserver::setOsTemplate(std::string  os_template)
{
	this->os_template = os_template;
}

Quickserver_serviceExtra
Quickserver::getServiceExtra()
{
	return serviceExtra;
}

void
Quickserver::setServiceExtra(Quickserver_serviceExtra  serviceExtra)
{
	this->serviceExtra = serviceExtra;
}

Quickserver_extraInfoTables
Quickserver::getExtraInfoTables()
{
	return extraInfoTables;
}

void
Quickserver::setExtraInfoTables(Quickserver_extraInfoTables  extraInfoTables)
{
	this->extraInfoTables = extraInfoTables;
}

std::string
Quickserver::getCpuGraphData()
{
	return cpu_graph_data;
}

void
Quickserver::setCpuGraphData(std::string  cpu_graph_data)
{
	this->cpu_graph_data = cpu_graph_data;
}

std::string
Quickserver::getBandwidthXaxis()
{
	return bandwidth_xaxis;
}

void
Quickserver::setBandwidthXaxis(std::string  bandwidth_xaxis)
{
	this->bandwidth_xaxis = bandwidth_xaxis;
}

std::string
Quickserver::getBandwidthYaxis()
{
	return bandwidth_yaxis;
}

void
Quickserver::setBandwidthYaxis(std::string  bandwidth_yaxis)
{
	this->bandwidth_yaxis = bandwidth_yaxis;
}

std::string
Quickserver::getRModule()
{
	return r_module;
}

void
Quickserver::setRModule(std::string  r_module)
{
	this->r_module = r_module;
}

std::string
Quickserver::getToken()
{
	return token;
}

void
Quickserver::setToken(std::string  token)
{
	this->token = token;
}

std::string
Quickserver::getServiceDiskUsed()
{
	return service_disk_used;
}

void
Quickserver::setServiceDiskUsed(std::string  service_disk_used)
{
	this->service_disk_used = service_disk_used;
}

std::string
Quickserver::getServiceDiskTotal()
{
	return service_disk_total;
}

void
Quickserver::setServiceDiskTotal(std::string  service_disk_total)
{
	this->service_disk_total = service_disk_total;
}

long long
Quickserver::getDiskPercentage()
{
	return disk_percentage;
}

void
Quickserver::setDiskPercentage(long long  disk_percentage)
{
	this->disk_percentage = disk_percentage;
}

std::string
Quickserver::getMemory()
{
	return memory;
}

void
Quickserver::setMemory(std::string  memory)
{
	this->memory = memory;
}

std::string
Quickserver::getHdd()
{
	return hdd;
}

void
Quickserver::setHdd(std::string  hdd)
{
	this->hdd = hdd;
}

std::list<std::string>
Quickserver::getServiceOverviewExtra()
{
	return service_overview_extra;
}

void
Quickserver::setServiceOverviewExtra(std::list <std::string> service_overview_extra)
{
	this->service_overview_extra = service_overview_extra;
}


