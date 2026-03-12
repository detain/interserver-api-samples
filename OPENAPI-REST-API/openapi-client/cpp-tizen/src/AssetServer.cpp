#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "AssetServer.h"

using namespace std;
using namespace Tizen::ArtikCloud;

AssetServer::AssetServer()
{
	//__init();
}

AssetServer::~AssetServer()
{
	//__cleanup();
}

void
AssetServer::__init()
{
	//id = int(0);
	//region = std::string();
	//price = std::string();
	//new std::list()std::list> cPU;
	//new std::list()std::list> memory;
	//new std::list()std::list> bandwidth;
	//new std::list()std::list> iPs;
	//new std::map()std::map> hD;
}

void
AssetServer::__cleanup()
{
	//if(id != NULL) {
	//
	//delete id;
	//id = NULL;
	//}
	//if(region != NULL) {
	//
	//delete region;
	//region = NULL;
	//}
	//if(price != NULL) {
	//
	//delete price;
	//price = NULL;
	//}
	//if(cPU != NULL) {
	//cPU.RemoveAll(true);
	//delete cPU;
	//cPU = NULL;
	//}
	//if(memory != NULL) {
	//memory.RemoveAll(true);
	//delete memory;
	//memory = NULL;
	//}
	//if(bandwidth != NULL) {
	//bandwidth.RemoveAll(true);
	//delete bandwidth;
	//bandwidth = NULL;
	//}
	//if(iPs != NULL) {
	//iPs.RemoveAll(true);
	//delete iPs;
	//iPs = NULL;
	//}
	//if(hD != NULL) {
	//hD.RemoveAll(true);
	//delete hD;
	//hD = NULL;
	//}
	//
}

void
AssetServer::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *idKey = "id";
	node = json_object_get_member(pJsonObject, idKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&id, node, "int", "");
		} else {
			
		}
	}
	const gchar *regionKey = "Region";
	node = json_object_get_member(pJsonObject, regionKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&region, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *priceKey = "price";
	node = json_object_get_member(pJsonObject, priceKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&price, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *cPUKey = "CPU";
	node = json_object_get_member(pJsonObject, cPUKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<AssetServer_CPU_inner> new_list;
			AssetServer_CPU_inner inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("AssetServer_CPU_inner")) {
					jsonToValue(&inst, temp_json, "AssetServer_CPU_inner", "");
				} else {
					
					inst.fromJson(json_to_string(temp_json, false));
					
				}
				new_list.push_back(inst);
			}
			cPU = new_list;
		}
		
	}
	const gchar *memoryKey = "Memory";
	node = json_object_get_member(pJsonObject, memoryKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<AssetServer_CPU_inner> new_list;
			AssetServer_CPU_inner inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("AssetServer_CPU_inner")) {
					jsonToValue(&inst, temp_json, "AssetServer_CPU_inner", "");
				} else {
					
					inst.fromJson(json_to_string(temp_json, false));
					
				}
				new_list.push_back(inst);
			}
			memory = new_list;
		}
		
	}
	const gchar *bandwidthKey = "Bandwidth";
	node = json_object_get_member(pJsonObject, bandwidthKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<AssetServer_CPU_inner> new_list;
			AssetServer_CPU_inner inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("AssetServer_CPU_inner")) {
					jsonToValue(&inst, temp_json, "AssetServer_CPU_inner", "");
				} else {
					
					inst.fromJson(json_to_string(temp_json, false));
					
				}
				new_list.push_back(inst);
			}
			bandwidth = new_list;
		}
		
	}
	const gchar *iPsKey = "IPs";
	node = json_object_get_member(pJsonObject, iPsKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<AssetServer_CPU_inner> new_list;
			AssetServer_CPU_inner inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("AssetServer_CPU_inner")) {
					jsonToValue(&inst, temp_json, "AssetServer_CPU_inner", "");
				} else {
					
					inst.fromJson(json_to_string(temp_json, false));
					
				}
				new_list.push_back(inst);
			}
			iPs = new_list;
		}
		
	}
	const gchar *hDKey = "HD";
	node = json_object_get_member(pJsonObject, hDKey);
	if (node !=NULL) {
	
		{
			JsonObject* json_obj = json_node_get_object(node);
			map<string,string> new_map;
			json_object_foreach_member(json_obj,helper_func,&new_map);
			hD = new_map;
		}
		
	}
}

AssetServer::AssetServer(char* json)
{
	this->fromJson(json);
}

char*
AssetServer::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("int")) {
		int obj = getId();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *idKey = "id";
	json_object_set_member(pJsonObject, idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getRegion();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *regionKey = "Region";
	json_object_set_member(pJsonObject, regionKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getPrice();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *priceKey = "price";
	json_object_set_member(pJsonObject, priceKey, node);
	if (isprimitive("AssetServer_CPU_inner")) {
		list<AssetServer_CPU_inner> new_list = static_cast<list <AssetServer_CPU_inner> > (getCPU());
		node = converttoJson(&new_list, "AssetServer_CPU_inner", "array");
	} else {
		node = json_node_alloc();
		list<AssetServer_CPU_inner> new_list = static_cast<list <AssetServer_CPU_inner> > (getCPU());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<AssetServer_CPU_inner>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			AssetServer_CPU_inner obj = *it;
			JsonNode *node_temp = json_from_string(obj.toJson(), &mygerror);
			json_array_add_element(json_array, node_temp);
			g_clear_error(&mygerror);
		}
		json_node_init_array(node, json_array);
		json_array_unref(json_array);
		
	}


	
	const gchar *cPUKey = "CPU";
	json_object_set_member(pJsonObject, cPUKey, node);
	if (isprimitive("AssetServer_CPU_inner")) {
		list<AssetServer_CPU_inner> new_list = static_cast<list <AssetServer_CPU_inner> > (getMemory());
		node = converttoJson(&new_list, "AssetServer_CPU_inner", "array");
	} else {
		node = json_node_alloc();
		list<AssetServer_CPU_inner> new_list = static_cast<list <AssetServer_CPU_inner> > (getMemory());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<AssetServer_CPU_inner>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			AssetServer_CPU_inner obj = *it;
			JsonNode *node_temp = json_from_string(obj.toJson(), &mygerror);
			json_array_add_element(json_array, node_temp);
			g_clear_error(&mygerror);
		}
		json_node_init_array(node, json_array);
		json_array_unref(json_array);
		
	}


	
	const gchar *memoryKey = "Memory";
	json_object_set_member(pJsonObject, memoryKey, node);
	if (isprimitive("AssetServer_CPU_inner")) {
		list<AssetServer_CPU_inner> new_list = static_cast<list <AssetServer_CPU_inner> > (getBandwidth());
		node = converttoJson(&new_list, "AssetServer_CPU_inner", "array");
	} else {
		node = json_node_alloc();
		list<AssetServer_CPU_inner> new_list = static_cast<list <AssetServer_CPU_inner> > (getBandwidth());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<AssetServer_CPU_inner>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			AssetServer_CPU_inner obj = *it;
			JsonNode *node_temp = json_from_string(obj.toJson(), &mygerror);
			json_array_add_element(json_array, node_temp);
			g_clear_error(&mygerror);
		}
		json_node_init_array(node, json_array);
		json_array_unref(json_array);
		
	}


	
	const gchar *bandwidthKey = "Bandwidth";
	json_object_set_member(pJsonObject, bandwidthKey, node);
	if (isprimitive("AssetServer_CPU_inner")) {
		list<AssetServer_CPU_inner> new_list = static_cast<list <AssetServer_CPU_inner> > (getIPs());
		node = converttoJson(&new_list, "AssetServer_CPU_inner", "array");
	} else {
		node = json_node_alloc();
		list<AssetServer_CPU_inner> new_list = static_cast<list <AssetServer_CPU_inner> > (getIPs());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<AssetServer_CPU_inner>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			AssetServer_CPU_inner obj = *it;
			JsonNode *node_temp = json_from_string(obj.toJson(), &mygerror);
			json_array_add_element(json_array, node_temp);
			g_clear_error(&mygerror);
		}
		json_node_init_array(node, json_array);
		json_array_unref(json_array);
		
	}


	
	const gchar *iPsKey = "IPs";
	json_object_set_member(pJsonObject, iPsKey, node);


	{
		JsonObject* json_obj;
		map<string, string> new_list = static_cast<map <string, string> > (getHD());
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

	const gchar *hDKey = "HD";
	json_object_set_member(pJsonObject, hDKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

int
AssetServer::getId()
{
	return id;
}

void
AssetServer::setId(int  id)
{
	this->id = id;
}

std::string
AssetServer::getRegion()
{
	return region;
}

void
AssetServer::setRegion(std::string  region)
{
	this->region = region;
}

std::string
AssetServer::getPrice()
{
	return price;
}

void
AssetServer::setPrice(std::string  price)
{
	this->price = price;
}

std::list<AssetServer_CPU_inner>
AssetServer::getCPU()
{
	return cPU;
}

void
AssetServer::setCPU(std::list <AssetServer_CPU_inner> cPU)
{
	this->cPU = cPU;
}

std::list<AssetServer_CPU_inner>
AssetServer::getMemory()
{
	return memory;
}

void
AssetServer::setMemory(std::list <AssetServer_CPU_inner> memory)
{
	this->memory = memory;
}

std::list<AssetServer_CPU_inner>
AssetServer::getBandwidth()
{
	return bandwidth;
}

void
AssetServer::setBandwidth(std::list <AssetServer_CPU_inner> bandwidth)
{
	this->bandwidth = bandwidth;
}

std::list<AssetServer_CPU_inner>
AssetServer::getIPs()
{
	return iPs;
}

void
AssetServer::setIPs(std::list <AssetServer_CPU_inner> iPs)
{
	this->iPs = iPs;
}

std::map<string, string>
AssetServer::getHD()
{
	return hD;
}

void
AssetServer::setHD(std::map <string, string> hD)
{
	this->hD = hD;
}


