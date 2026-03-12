#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "ConfigLists.h"

using namespace std;
using namespace Tizen::ArtikCloud;

ConfigLists::ConfigLists()
{
	//__init();
}

ConfigLists::~ConfigLists()
{
	//__cleanup();
}

void
ConfigLists::__init()
{
	//new std::map()std::map> cpu_li;
	//new std::map()std::map> memory_li;
	//new std::map()std::map> hd_li;
	//new std::map()std::map> bandwidth_li;
	//new std::map()std::map> ips_li;
	//new std::map()std::map> os_li;
	//new std::map()std::map> cp_li;
	//new std::list()std::list> raid_li;
}

void
ConfigLists::__cleanup()
{
	//if(cpu_li != NULL) {
	//cpu_li.RemoveAll(true);
	//delete cpu_li;
	//cpu_li = NULL;
	//}
	//if(memory_li != NULL) {
	//memory_li.RemoveAll(true);
	//delete memory_li;
	//memory_li = NULL;
	//}
	//if(hd_li != NULL) {
	//hd_li.RemoveAll(true);
	//delete hd_li;
	//hd_li = NULL;
	//}
	//if(bandwidth_li != NULL) {
	//bandwidth_li.RemoveAll(true);
	//delete bandwidth_li;
	//bandwidth_li = NULL;
	//}
	//if(ips_li != NULL) {
	//ips_li.RemoveAll(true);
	//delete ips_li;
	//ips_li = NULL;
	//}
	//if(os_li != NULL) {
	//os_li.RemoveAll(true);
	//delete os_li;
	//os_li = NULL;
	//}
	//if(cp_li != NULL) {
	//cp_li.RemoveAll(true);
	//delete cp_li;
	//cp_li = NULL;
	//}
	//if(raid_li != NULL) {
	//raid_li.RemoveAll(true);
	//delete raid_li;
	//raid_li = NULL;
	//}
	//
}

void
ConfigLists::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
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
	const gchar *memory_liKey = "memory_li";
	node = json_object_get_member(pJsonObject, memory_liKey);
	if (node !=NULL) {
	
		{
			JsonObject* json_obj = json_node_get_object(node);
			map<string,string> new_map;
			json_object_foreach_member(json_obj,helper_func,&new_map);
			memory_li = new_map;
		}
		
	}
	const gchar *hd_liKey = "hd_li";
	node = json_object_get_member(pJsonObject, hd_liKey);
	if (node !=NULL) {
	
		{
			JsonObject* json_obj = json_node_get_object(node);
			map<string,string> new_map;
			json_object_foreach_member(json_obj,helper_func,&new_map);
			hd_li = new_map;
		}
		
	}
	const gchar *bandwidth_liKey = "bandwidth_li";
	node = json_object_get_member(pJsonObject, bandwidth_liKey);
	if (node !=NULL) {
	
		{
			JsonObject* json_obj = json_node_get_object(node);
			map<string,string> new_map;
			json_object_foreach_member(json_obj,helper_func,&new_map);
			bandwidth_li = new_map;
		}
		
	}
	const gchar *ips_liKey = "ips_li";
	node = json_object_get_member(pJsonObject, ips_liKey);
	if (node !=NULL) {
	
		{
			JsonObject* json_obj = json_node_get_object(node);
			map<string,string> new_map;
			json_object_foreach_member(json_obj,helper_func,&new_map);
			ips_li = new_map;
		}
		
	}
	const gchar *os_liKey = "os_li";
	node = json_object_get_member(pJsonObject, os_liKey);
	if (node !=NULL) {
	
		{
			JsonObject* json_obj = json_node_get_object(node);
			map<string,string> new_map;
			json_object_foreach_member(json_obj,helper_func,&new_map);
			os_li = new_map;
		}
		
	}
	const gchar *cp_liKey = "cp_li";
	node = json_object_get_member(pJsonObject, cp_liKey);
	if (node !=NULL) {
	
		{
			JsonObject* json_obj = json_node_get_object(node);
			map<string,string> new_map;
			json_object_foreach_member(json_obj,helper_func,&new_map);
			cp_li = new_map;
		}
		
	}
	const gchar *raid_liKey = "raid_li";
	node = json_object_get_member(pJsonObject, raid_liKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<RaidOption> new_list;
			RaidOption inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("RaidOption")) {
					jsonToValue(&inst, temp_json, "RaidOption", "");
				} else {
					
					inst.fromJson(json_to_string(temp_json, false));
					
				}
				new_list.push_back(inst);
			}
			raid_li = new_list;
		}
		
	}
}

ConfigLists::ConfigLists(char* json)
{
	this->fromJson(json);
}

char*
ConfigLists::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;


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


	{
		JsonObject* json_obj;
		map<string, string> new_list = static_cast<map <string, string> > (getMemoryLi());
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

	const gchar *memory_liKey = "memory_li";
	json_object_set_member(pJsonObject, memory_liKey, node);


	{
		JsonObject* json_obj;
		map<string, string> new_list = static_cast<map <string, string> > (getHdLi());
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

	const gchar *hd_liKey = "hd_li";
	json_object_set_member(pJsonObject, hd_liKey, node);


	{
		JsonObject* json_obj;
		map<string, string> new_list = static_cast<map <string, string> > (getBandwidthLi());
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

	const gchar *bandwidth_liKey = "bandwidth_li";
	json_object_set_member(pJsonObject, bandwidth_liKey, node);


	{
		JsonObject* json_obj;
		map<string, string> new_list = static_cast<map <string, string> > (getIpsLi());
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

	const gchar *ips_liKey = "ips_li";
	json_object_set_member(pJsonObject, ips_liKey, node);


	{
		JsonObject* json_obj;
		map<string, string> new_list = static_cast<map <string, string> > (getOsLi());
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

	const gchar *os_liKey = "os_li";
	json_object_set_member(pJsonObject, os_liKey, node);


	{
		JsonObject* json_obj;
		map<string, string> new_list = static_cast<map <string, string> > (getCpLi());
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

	const gchar *cp_liKey = "cp_li";
	json_object_set_member(pJsonObject, cp_liKey, node);
	if (isprimitive("RaidOption")) {
		list<RaidOption> new_list = static_cast<list <RaidOption> > (getRaidLi());
		node = converttoJson(&new_list, "RaidOption", "array");
	} else {
		node = json_node_alloc();
		list<RaidOption> new_list = static_cast<list <RaidOption> > (getRaidLi());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<RaidOption>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			RaidOption obj = *it;
			JsonNode *node_temp = json_from_string(obj.toJson(), &mygerror);
			json_array_add_element(json_array, node_temp);
			g_clear_error(&mygerror);
		}
		json_node_init_array(node, json_array);
		json_array_unref(json_array);
		
	}


	
	const gchar *raid_liKey = "raid_li";
	json_object_set_member(pJsonObject, raid_liKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::map<string, string>
ConfigLists::getCpuLi()
{
	return cpu_li;
}

void
ConfigLists::setCpuLi(std::map <string, string> cpu_li)
{
	this->cpu_li = cpu_li;
}

std::map<string, string>
ConfigLists::getMemoryLi()
{
	return memory_li;
}

void
ConfigLists::setMemoryLi(std::map <string, string> memory_li)
{
	this->memory_li = memory_li;
}

std::map<string, string>
ConfigLists::getHdLi()
{
	return hd_li;
}

void
ConfigLists::setHdLi(std::map <string, string> hd_li)
{
	this->hd_li = hd_li;
}

std::map<string, string>
ConfigLists::getBandwidthLi()
{
	return bandwidth_li;
}

void
ConfigLists::setBandwidthLi(std::map <string, string> bandwidth_li)
{
	this->bandwidth_li = bandwidth_li;
}

std::map<string, string>
ConfigLists::getIpsLi()
{
	return ips_li;
}

void
ConfigLists::setIpsLi(std::map <string, string> ips_li)
{
	this->ips_li = ips_li;
}

std::map<string, string>
ConfigLists::getOsLi()
{
	return os_li;
}

void
ConfigLists::setOsLi(std::map <string, string> os_li)
{
	this->os_li = os_li;
}

std::map<string, string>
ConfigLists::getCpLi()
{
	return cp_li;
}

void
ConfigLists::setCpLi(std::map <string, string> cp_li)
{
	this->cp_li = cp_li;
}

std::list<RaidOption>
ConfigLists::getRaidLi()
{
	return raid_li;
}

void
ConfigLists::setRaidLi(std::list <RaidOption> raid_li)
{
	this->raid_li = raid_li;
}


