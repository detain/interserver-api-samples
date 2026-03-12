#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "ServerOrderGetResponse.h"

using namespace std;
using namespace Tizen::ArtikCloud;

ServerOrderGetResponse::ServerOrderGetResponse()
{
	//__init();
}

ServerOrderGetResponse::~ServerOrderGetResponse()
{
	//__cleanup();
}

void
ServerOrderGetResponse::__init()
{
	//form_values = new FormValues();
	//config_ids = new ConfigIds();
	//cpu = int(0);
	//new std::map()std::map> cpu_li;
	//config_li = new ConfigLists();
	//frequency = int(0);
	//currency = std::string();
	//country = std::string();
	//step = std::string();
	//new std::map()std::map> field_label;
	//new std::map()std::map> cpu_cores;
	//currencySymbol = std::string();
	//custid = int(0);
	//ima = std::string();
	//new std::list()std::list> regions;
	//new std::list()std::list> asset_servers;
	//new std::list()std::list> buy_it_servers;
	//display_showmore = std::string();
	//cust_discount = double(0);
}

void
ServerOrderGetResponse::__cleanup()
{
	//if(form_values != NULL) {
	//
	//delete form_values;
	//form_values = NULL;
	//}
	//if(config_ids != NULL) {
	//
	//delete config_ids;
	//config_ids = NULL;
	//}
	//if(cpu != NULL) {
	//
	//delete cpu;
	//cpu = NULL;
	//}
	//if(cpu_li != NULL) {
	//cpu_li.RemoveAll(true);
	//delete cpu_li;
	//cpu_li = NULL;
	//}
	//if(config_li != NULL) {
	//
	//delete config_li;
	//config_li = NULL;
	//}
	//if(frequency != NULL) {
	//
	//delete frequency;
	//frequency = NULL;
	//}
	//if(currency != NULL) {
	//
	//delete currency;
	//currency = NULL;
	//}
	//if(country != NULL) {
	//
	//delete country;
	//country = NULL;
	//}
	//if(step != NULL) {
	//
	//delete step;
	//step = NULL;
	//}
	//if(field_label != NULL) {
	//field_label.RemoveAll(true);
	//delete field_label;
	//field_label = NULL;
	//}
	//if(cpu_cores != NULL) {
	//cpu_cores.RemoveAll(true);
	//delete cpu_cores;
	//cpu_cores = NULL;
	//}
	//if(currencySymbol != NULL) {
	//
	//delete currencySymbol;
	//currencySymbol = NULL;
	//}
	//if(custid != NULL) {
	//
	//delete custid;
	//custid = NULL;
	//}
	//if(ima != NULL) {
	//
	//delete ima;
	//ima = NULL;
	//}
	//if(regions != NULL) {
	//regions.RemoveAll(true);
	//delete regions;
	//regions = NULL;
	//}
	//if(asset_servers != NULL) {
	//asset_servers.RemoveAll(true);
	//delete asset_servers;
	//asset_servers = NULL;
	//}
	//if(buy_it_servers != NULL) {
	//buy_it_servers.RemoveAll(true);
	//delete buy_it_servers;
	//buy_it_servers = NULL;
	//}
	//if(display_showmore != NULL) {
	//
	//delete display_showmore;
	//display_showmore = NULL;
	//}
	//if(cust_discount != NULL) {
	//
	//delete cust_discount;
	//cust_discount = NULL;
	//}
	//
}

void
ServerOrderGetResponse::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *form_valuesKey = "form_values";
	node = json_object_get_member(pJsonObject, form_valuesKey);
	if (node !=NULL) {
	

		if (isprimitive("FormValues")) {
			jsonToValue(&form_values, node, "FormValues", "FormValues");
		} else {
			
			FormValues* obj = static_cast<FormValues*> (&form_values);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *config_idsKey = "config_ids";
	node = json_object_get_member(pJsonObject, config_idsKey);
	if (node !=NULL) {
	

		if (isprimitive("ConfigIds")) {
			jsonToValue(&config_ids, node, "ConfigIds", "ConfigIds");
		} else {
			
			ConfigIds* obj = static_cast<ConfigIds*> (&config_ids);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *cpuKey = "cpu";
	node = json_object_get_member(pJsonObject, cpuKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&cpu, node, "int", "");
		} else {
			
		}
	}
	const gchar *cpu_liKey = "cpu_li";
	node = json_object_get_member(pJsonObject, cpu_liKey);
	if (node !=NULL) {
	
		{
			JsonObject* json_obj = json_node_get_object(node);
			map<string,string> new_map;
			json_object_foreach_member(json_obj,helper_func,&new_map);
			cpu_li = new_map;
		}
		
	}
	const gchar *config_liKey = "config_li";
	node = json_object_get_member(pJsonObject, config_liKey);
	if (node !=NULL) {
	

		if (isprimitive("ConfigLists")) {
			jsonToValue(&config_li, node, "ConfigLists", "ConfigLists");
		} else {
			
			ConfigLists* obj = static_cast<ConfigLists*> (&config_li);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *frequencyKey = "frequency";
	node = json_object_get_member(pJsonObject, frequencyKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&frequency, node, "int", "");
		} else {
			
		}
	}
	const gchar *currencyKey = "currency";
	node = json_object_get_member(pJsonObject, currencyKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&currency, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *countryKey = "country";
	node = json_object_get_member(pJsonObject, countryKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&country, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *stepKey = "step";
	node = json_object_get_member(pJsonObject, stepKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&step, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *field_labelKey = "field_label";
	node = json_object_get_member(pJsonObject, field_labelKey);
	if (node !=NULL) {
	
		{
			JsonObject* json_obj = json_node_get_object(node);
			map<string,string> new_map;
			json_object_foreach_member(json_obj,helper_func,&new_map);
			field_label = new_map;
		}
		
	}
	const gchar *cpu_coresKey = "cpu_cores";
	node = json_object_get_member(pJsonObject, cpu_coresKey);
	if (node !=NULL) {
	
		{
			JsonObject* json_obj = json_node_get_object(node);
			map<string,string> new_map;
			json_object_foreach_member(json_obj,helper_func,&new_map);
			cpu_cores = new_map;
		}
		
	}
	const gchar *currencySymbolKey = "currencySymbol";
	node = json_object_get_member(pJsonObject, currencySymbolKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&currencySymbol, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *custidKey = "custid";
	node = json_object_get_member(pJsonObject, custidKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&custid, node, "int", "");
		} else {
			
		}
	}
	const gchar *imaKey = "ima";
	node = json_object_get_member(pJsonObject, imaKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&ima, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *regionsKey = "regions";
	node = json_object_get_member(pJsonObject, regionsKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<Region> new_list;
			Region inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("Region")) {
					jsonToValue(&inst, temp_json, "Region", "");
				} else {
					
					inst.fromJson(json_to_string(temp_json, false));
					
				}
				new_list.push_back(inst);
			}
			regions = new_list;
		}
		
	}
	const gchar *asset_serversKey = "asset_servers";
	node = json_object_get_member(pJsonObject, asset_serversKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<AssetServer> new_list;
			AssetServer inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("AssetServer")) {
					jsonToValue(&inst, temp_json, "AssetServer", "");
				} else {
					
					inst.fromJson(json_to_string(temp_json, false));
					
				}
				new_list.push_back(inst);
			}
			asset_servers = new_list;
		}
		
	}
	const gchar *buy_it_serversKey = "buy_it_servers";
	node = json_object_get_member(pJsonObject, buy_it_serversKey);
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
			buy_it_servers = new_list;
		}
		
	}
	const gchar *display_showmoreKey = "display_showmore";
	node = json_object_get_member(pJsonObject, display_showmoreKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&display_showmore, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *cust_discountKey = "cust_discount";
	node = json_object_get_member(pJsonObject, cust_discountKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&cust_discount, node, "long long", "");
		} else {
			
			long long* obj = static_cast<long long*> (&cust_discount);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
}

ServerOrderGetResponse::ServerOrderGetResponse(char* json)
{
	this->fromJson(json);
}

char*
ServerOrderGetResponse::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("FormValues")) {
		FormValues obj = getFormValues();
		node = converttoJson(&obj, "FormValues", "");
	}
	else {
		
		FormValues obj = static_cast<FormValues> (getFormValues());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *form_valuesKey = "form_values";
	json_object_set_member(pJsonObject, form_valuesKey, node);
	if (isprimitive("ConfigIds")) {
		ConfigIds obj = getConfigIds();
		node = converttoJson(&obj, "ConfigIds", "");
	}
	else {
		
		ConfigIds obj = static_cast<ConfigIds> (getConfigIds());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *config_idsKey = "config_ids";
	json_object_set_member(pJsonObject, config_idsKey, node);
	if (isprimitive("int")) {
		int obj = getCpu();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *cpuKey = "cpu";
	json_object_set_member(pJsonObject, cpuKey, node);


	{
		JsonObject* json_obj;
		map<string, string> new_list = static_cast<map <string, string> > (getCpuLi());
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

	const gchar *cpu_liKey = "cpu_li";
	json_object_set_member(pJsonObject, cpu_liKey, node);
	if (isprimitive("ConfigLists")) {
		ConfigLists obj = getConfigLi();
		node = converttoJson(&obj, "ConfigLists", "");
	}
	else {
		
		ConfigLists obj = static_cast<ConfigLists> (getConfigLi());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *config_liKey = "config_li";
	json_object_set_member(pJsonObject, config_liKey, node);
	if (isprimitive("int")) {
		int obj = getFrequency();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *frequencyKey = "frequency";
	json_object_set_member(pJsonObject, frequencyKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getCurrency();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *currencyKey = "currency";
	json_object_set_member(pJsonObject, currencyKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getCountry();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *countryKey = "country";
	json_object_set_member(pJsonObject, countryKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getStep();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *stepKey = "step";
	json_object_set_member(pJsonObject, stepKey, node);


	{
		JsonObject* json_obj;
		map<string, string> new_list = static_cast<map <string, string> > (getFieldLabel());
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

	const gchar *field_labelKey = "field_label";
	json_object_set_member(pJsonObject, field_labelKey, node);


	{
		JsonObject* json_obj;
		map<string, string> new_list = static_cast<map <string, string> > (getCpuCores());
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

	const gchar *cpu_coresKey = "cpu_cores";
	json_object_set_member(pJsonObject, cpu_coresKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getCurrencySymbol();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *currencySymbolKey = "currencySymbol";
	json_object_set_member(pJsonObject, currencySymbolKey, node);
	if (isprimitive("int")) {
		int obj = getCustid();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *custidKey = "custid";
	json_object_set_member(pJsonObject, custidKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getIma();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *imaKey = "ima";
	json_object_set_member(pJsonObject, imaKey, node);
	if (isprimitive("Region")) {
		list<Region> new_list = static_cast<list <Region> > (getRegions());
		node = converttoJson(&new_list, "Region", "array");
	} else {
		node = json_node_alloc();
		list<Region> new_list = static_cast<list <Region> > (getRegions());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<Region>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			Region obj = *it;
			JsonNode *node_temp = json_from_string(obj.toJson(), &mygerror);
			json_array_add_element(json_array, node_temp);
			g_clear_error(&mygerror);
		}
		json_node_init_array(node, json_array);
		json_array_unref(json_array);
		
	}


	
	const gchar *regionsKey = "regions";
	json_object_set_member(pJsonObject, regionsKey, node);
	if (isprimitive("AssetServer")) {
		list<AssetServer> new_list = static_cast<list <AssetServer> > (getAssetServers());
		node = converttoJson(&new_list, "AssetServer", "array");
	} else {
		node = json_node_alloc();
		list<AssetServer> new_list = static_cast<list <AssetServer> > (getAssetServers());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<AssetServer>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			AssetServer obj = *it;
			JsonNode *node_temp = json_from_string(obj.toJson(), &mygerror);
			json_array_add_element(json_array, node_temp);
			g_clear_error(&mygerror);
		}
		json_node_init_array(node, json_array);
		json_array_unref(json_array);
		
	}


	
	const gchar *asset_serversKey = "asset_servers";
	json_object_set_member(pJsonObject, asset_serversKey, node);
	if (isprimitive("std::string")) {
		list<std::string> new_list = static_cast<list <std::string> > (getBuyItServers());
		node = converttoJson(&new_list, "std::string", "array");
	} else {
		node = json_node_alloc();
		list<std::string> new_list = static_cast<list <std::string> > (getBuyItServers());
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


	
	const gchar *buy_it_serversKey = "buy_it_servers";
	json_object_set_member(pJsonObject, buy_it_serversKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getDisplayShowmore();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *display_showmoreKey = "display_showmore";
	json_object_set_member(pJsonObject, display_showmoreKey, node);
	if (isprimitive("long long")) {
		long long obj = getCustDiscount();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
		long long obj = static_cast<long long> (getCustDiscount());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *cust_discountKey = "cust_discount";
	json_object_set_member(pJsonObject, cust_discountKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

FormValues
ServerOrderGetResponse::getFormValues()
{
	return form_values;
}

void
ServerOrderGetResponse::setFormValues(FormValues  form_values)
{
	this->form_values = form_values;
}

ConfigIds
ServerOrderGetResponse::getConfigIds()
{
	return config_ids;
}

void
ServerOrderGetResponse::setConfigIds(ConfigIds  config_ids)
{
	this->config_ids = config_ids;
}

int
ServerOrderGetResponse::getCpu()
{
	return cpu;
}

void
ServerOrderGetResponse::setCpu(int  cpu)
{
	this->cpu = cpu;
}

std::map<string, string>
ServerOrderGetResponse::getCpuLi()
{
	return cpu_li;
}

void
ServerOrderGetResponse::setCpuLi(std::map <string, string> cpu_li)
{
	this->cpu_li = cpu_li;
}

ConfigLists
ServerOrderGetResponse::getConfigLi()
{
	return config_li;
}

void
ServerOrderGetResponse::setConfigLi(ConfigLists  config_li)
{
	this->config_li = config_li;
}

int
ServerOrderGetResponse::getFrequency()
{
	return frequency;
}

void
ServerOrderGetResponse::setFrequency(int  frequency)
{
	this->frequency = frequency;
}

std::string
ServerOrderGetResponse::getCurrency()
{
	return currency;
}

void
ServerOrderGetResponse::setCurrency(std::string  currency)
{
	this->currency = currency;
}

std::string
ServerOrderGetResponse::getCountry()
{
	return country;
}

void
ServerOrderGetResponse::setCountry(std::string  country)
{
	this->country = country;
}

std::string
ServerOrderGetResponse::getStep()
{
	return step;
}

void
ServerOrderGetResponse::setStep(std::string  step)
{
	this->step = step;
}

std::map<string, string>
ServerOrderGetResponse::getFieldLabel()
{
	return field_label;
}

void
ServerOrderGetResponse::setFieldLabel(std::map <string, string> field_label)
{
	this->field_label = field_label;
}

std::map<string, string>
ServerOrderGetResponse::getCpuCores()
{
	return cpu_cores;
}

void
ServerOrderGetResponse::setCpuCores(std::map <string, string> cpu_cores)
{
	this->cpu_cores = cpu_cores;
}

std::string
ServerOrderGetResponse::getCurrencySymbol()
{
	return currencySymbol;
}

void
ServerOrderGetResponse::setCurrencySymbol(std::string  currencySymbol)
{
	this->currencySymbol = currencySymbol;
}

int
ServerOrderGetResponse::getCustid()
{
	return custid;
}

void
ServerOrderGetResponse::setCustid(int  custid)
{
	this->custid = custid;
}

std::string
ServerOrderGetResponse::getIma()
{
	return ima;
}

void
ServerOrderGetResponse::setIma(std::string  ima)
{
	this->ima = ima;
}

std::list<Region>
ServerOrderGetResponse::getRegions()
{
	return regions;
}

void
ServerOrderGetResponse::setRegions(std::list <Region> regions)
{
	this->regions = regions;
}

std::list<AssetServer>
ServerOrderGetResponse::getAssetServers()
{
	return asset_servers;
}

void
ServerOrderGetResponse::setAssetServers(std::list <AssetServer> asset_servers)
{
	this->asset_servers = asset_servers;
}

std::list<std::string>
ServerOrderGetResponse::getBuyItServers()
{
	return buy_it_servers;
}

void
ServerOrderGetResponse::setBuyItServers(std::list <std::string> buy_it_servers)
{
	this->buy_it_servers = buy_it_servers;
}

std::string
ServerOrderGetResponse::getDisplayShowmore()
{
	return display_showmore;
}

void
ServerOrderGetResponse::setDisplayShowmore(std::string  display_showmore)
{
	this->display_showmore = display_showmore;
}

long long
ServerOrderGetResponse::getCustDiscount()
{
	return cust_discount;
}

void
ServerOrderGetResponse::setCustDiscount(long long  cust_discount)
{
	this->cust_discount = cust_discount;
}


