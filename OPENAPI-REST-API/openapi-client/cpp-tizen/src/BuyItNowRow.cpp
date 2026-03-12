#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "BuyItNowRow.h"

using namespace std;
using namespace Tizen::ArtikCloud;

BuyItNowRow::BuyItNowRow()
{
	//__init();
}

BuyItNowRow::~BuyItNowRow()
{
	//__cleanup();
}

void
BuyItNowRow::__init()
{
	//server_id = std::string();
	//new std::list()std::list> cpu;
	//memory = std::string();
	//new std::map()std::map> disk;
	//bandwidth = std::string();
	//ips = std::string();
	//location = std::string();
	//price = int(0);
}

void
BuyItNowRow::__cleanup()
{
	//if(server_id != NULL) {
	//
	//delete server_id;
	//server_id = NULL;
	//}
	//if(cpu != NULL) {
	//cpu.RemoveAll(true);
	//delete cpu;
	//cpu = NULL;
	//}
	//if(memory != NULL) {
	//
	//delete memory;
	//memory = NULL;
	//}
	//if(disk != NULL) {
	//disk.RemoveAll(true);
	//delete disk;
	//disk = NULL;
	//}
	//if(bandwidth != NULL) {
	//
	//delete bandwidth;
	//bandwidth = NULL;
	//}
	//if(ips != NULL) {
	//
	//delete ips;
	//ips = NULL;
	//}
	//if(location != NULL) {
	//
	//delete location;
	//location = NULL;
	//}
	//if(price != NULL) {
	//
	//delete price;
	//price = NULL;
	//}
	//
}

void
BuyItNowRow::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *server_idKey = "server_id";
	node = json_object_get_member(pJsonObject, server_idKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&server_id, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *cpuKey = "cpu";
	node = json_object_get_member(pJsonObject, cpuKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<BuyItNowRow_cpu_inner> new_list;
			BuyItNowRow_cpu_inner inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("BuyItNowRow_cpu_inner")) {
					jsonToValue(&inst, temp_json, "BuyItNowRow_cpu_inner", "");
				} else {
					
					inst.fromJson(json_to_string(temp_json, false));
					
				}
				new_list.push_back(inst);
			}
			cpu = new_list;
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
	const gchar *diskKey = "disk";
	node = json_object_get_member(pJsonObject, diskKey);
	if (node !=NULL) {
	
		{
			JsonObject* json_obj = json_node_get_object(node);
			map<string,string> new_map;
			json_object_foreach_member(json_obj,helper_func,&new_map);
			disk = new_map;
		}
		
	}
	const gchar *bandwidthKey = "bandwidth";
	node = json_object_get_member(pJsonObject, bandwidthKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&bandwidth, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *ipsKey = "ips";
	node = json_object_get_member(pJsonObject, ipsKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&ips, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *locationKey = "location";
	node = json_object_get_member(pJsonObject, locationKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&location, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *priceKey = "price";
	node = json_object_get_member(pJsonObject, priceKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&price, node, "int", "");
		} else {
			
		}
	}
}

BuyItNowRow::BuyItNowRow(char* json)
{
	this->fromJson(json);
}

char*
BuyItNowRow::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getServerId();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *server_idKey = "server_id";
	json_object_set_member(pJsonObject, server_idKey, node);
	if (isprimitive("BuyItNowRow_cpu_inner")) {
		list<BuyItNowRow_cpu_inner> new_list = static_cast<list <BuyItNowRow_cpu_inner> > (getCpu());
		node = converttoJson(&new_list, "BuyItNowRow_cpu_inner", "array");
	} else {
		node = json_node_alloc();
		list<BuyItNowRow_cpu_inner> new_list = static_cast<list <BuyItNowRow_cpu_inner> > (getCpu());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<BuyItNowRow_cpu_inner>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			BuyItNowRow_cpu_inner obj = *it;
			JsonNode *node_temp = json_from_string(obj.toJson(), &mygerror);
			json_array_add_element(json_array, node_temp);
			g_clear_error(&mygerror);
		}
		json_node_init_array(node, json_array);
		json_array_unref(json_array);
		
	}


	
	const gchar *cpuKey = "cpu";
	json_object_set_member(pJsonObject, cpuKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getMemory();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *memoryKey = "memory";
	json_object_set_member(pJsonObject, memoryKey, node);


	{
		JsonObject* json_obj;
		map<string, string> new_list = static_cast<map <string, string> > (getDisk());
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

	const gchar *diskKey = "disk";
	json_object_set_member(pJsonObject, diskKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getBandwidth();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *bandwidthKey = "bandwidth";
	json_object_set_member(pJsonObject, bandwidthKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getIps();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *ipsKey = "ips";
	json_object_set_member(pJsonObject, ipsKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getLocation();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *locationKey = "location";
	json_object_set_member(pJsonObject, locationKey, node);
	if (isprimitive("int")) {
		int obj = getPrice();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *priceKey = "price";
	json_object_set_member(pJsonObject, priceKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
BuyItNowRow::getServerId()
{
	return server_id;
}

void
BuyItNowRow::setServerId(std::string  server_id)
{
	this->server_id = server_id;
}

std::list<BuyItNowRow_cpu_inner>
BuyItNowRow::getCpu()
{
	return cpu;
}

void
BuyItNowRow::setCpu(std::list <BuyItNowRow_cpu_inner> cpu)
{
	this->cpu = cpu;
}

std::string
BuyItNowRow::getMemory()
{
	return memory;
}

void
BuyItNowRow::setMemory(std::string  memory)
{
	this->memory = memory;
}

std::map<string, string>
BuyItNowRow::getDisk()
{
	return disk;
}

void
BuyItNowRow::setDisk(std::map <string, string> disk)
{
	this->disk = disk;
}

std::string
BuyItNowRow::getBandwidth()
{
	return bandwidth;
}

void
BuyItNowRow::setBandwidth(std::string  bandwidth)
{
	this->bandwidth = bandwidth;
}

std::string
BuyItNowRow::getIps()
{
	return ips;
}

void
BuyItNowRow::setIps(std::string  ips)
{
	this->ips = ips;
}

std::string
BuyItNowRow::getLocation()
{
	return location;
}

void
BuyItNowRow::setLocation(std::string  location)
{
	this->location = location;
}

int
BuyItNowRow::getPrice()
{
	return price;
}

void
BuyItNowRow::setPrice(int  price)
{
	this->price = price;
}


