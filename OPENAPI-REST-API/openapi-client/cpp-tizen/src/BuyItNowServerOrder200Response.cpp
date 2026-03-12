#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "BuyItNowServerOrder_200_response.h"

using namespace std;
using namespace Tizen::ArtikCloud;

BuyItNowServerOrder_200_response::BuyItNowServerOrder_200_response()
{
	//__init();
}

BuyItNowServerOrder_200_response::~BuyItNowServerOrder_200_response()
{
	//__cleanup();
}

void
BuyItNowServerOrder_200_response::__init()
{
	//new std::list()std::list> bandwidth;
	//new std::list()std::list> ips;
	//new std::list()std::list> os;
	//new std::list()std::list> cp;
	//new std::list()std::list> raid;
}

void
BuyItNowServerOrder_200_response::__cleanup()
{
	//if(bandwidth != NULL) {
	//bandwidth.RemoveAll(true);
	//delete bandwidth;
	//bandwidth = NULL;
	//}
	//if(ips != NULL) {
	//ips.RemoveAll(true);
	//delete ips;
	//ips = NULL;
	//}
	//if(os != NULL) {
	//os.RemoveAll(true);
	//delete os;
	//os = NULL;
	//}
	//if(cp != NULL) {
	//cp.RemoveAll(true);
	//delete cp;
	//cp = NULL;
	//}
	//if(raid != NULL) {
	//raid.RemoveAll(true);
	//delete raid;
	//raid = NULL;
	//}
	//
}

void
BuyItNowServerOrder_200_response::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *bandwidthKey = "bandwidth";
	node = json_object_get_member(pJsonObject, bandwidthKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<BuyItNowServerOrder_200_response_bandwidth_inner> new_list;
			BuyItNowServerOrder_200_response_bandwidth_inner inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("BuyItNowServerOrder_200_response_bandwidth_inner")) {
					jsonToValue(&inst, temp_json, "BuyItNowServerOrder_200_response_bandwidth_inner", "");
				} else {
					
					inst.fromJson(json_to_string(temp_json, false));
					
				}
				new_list.push_back(inst);
			}
			bandwidth = new_list;
		}
		
	}
	const gchar *ipsKey = "ips";
	node = json_object_get_member(pJsonObject, ipsKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<BuyItNowServerOrder_200_response_ips_inner> new_list;
			BuyItNowServerOrder_200_response_ips_inner inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("BuyItNowServerOrder_200_response_ips_inner")) {
					jsonToValue(&inst, temp_json, "BuyItNowServerOrder_200_response_ips_inner", "");
				} else {
					
					inst.fromJson(json_to_string(temp_json, false));
					
				}
				new_list.push_back(inst);
			}
			ips = new_list;
		}
		
	}
	const gchar *osKey = "os";
	node = json_object_get_member(pJsonObject, osKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<BuyItNowServerOrder_200_response_os_inner> new_list;
			BuyItNowServerOrder_200_response_os_inner inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("BuyItNowServerOrder_200_response_os_inner")) {
					jsonToValue(&inst, temp_json, "BuyItNowServerOrder_200_response_os_inner", "");
				} else {
					
					inst.fromJson(json_to_string(temp_json, false));
					
				}
				new_list.push_back(inst);
			}
			os = new_list;
		}
		
	}
	const gchar *cpKey = "cp";
	node = json_object_get_member(pJsonObject, cpKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<BuyItNowServerOrder_200_response_cp_inner> new_list;
			BuyItNowServerOrder_200_response_cp_inner inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("BuyItNowServerOrder_200_response_cp_inner")) {
					jsonToValue(&inst, temp_json, "BuyItNowServerOrder_200_response_cp_inner", "");
				} else {
					
					inst.fromJson(json_to_string(temp_json, false));
					
				}
				new_list.push_back(inst);
			}
			cp = new_list;
		}
		
	}
	const gchar *raidKey = "raid";
	node = json_object_get_member(pJsonObject, raidKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<BuyItNowServerOrder_200_response_raid_inner> new_list;
			BuyItNowServerOrder_200_response_raid_inner inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("BuyItNowServerOrder_200_response_raid_inner")) {
					jsonToValue(&inst, temp_json, "BuyItNowServerOrder_200_response_raid_inner", "");
				} else {
					
					inst.fromJson(json_to_string(temp_json, false));
					
				}
				new_list.push_back(inst);
			}
			raid = new_list;
		}
		
	}
}

BuyItNowServerOrder_200_response::BuyItNowServerOrder_200_response(char* json)
{
	this->fromJson(json);
}

char*
BuyItNowServerOrder_200_response::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("BuyItNowServerOrder_200_response_bandwidth_inner")) {
		list<BuyItNowServerOrder_200_response_bandwidth_inner> new_list = static_cast<list <BuyItNowServerOrder_200_response_bandwidth_inner> > (getBandwidth());
		node = converttoJson(&new_list, "BuyItNowServerOrder_200_response_bandwidth_inner", "array");
	} else {
		node = json_node_alloc();
		list<BuyItNowServerOrder_200_response_bandwidth_inner> new_list = static_cast<list <BuyItNowServerOrder_200_response_bandwidth_inner> > (getBandwidth());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<BuyItNowServerOrder_200_response_bandwidth_inner>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			BuyItNowServerOrder_200_response_bandwidth_inner obj = *it;
			JsonNode *node_temp = json_from_string(obj.toJson(), &mygerror);
			json_array_add_element(json_array, node_temp);
			g_clear_error(&mygerror);
		}
		json_node_init_array(node, json_array);
		json_array_unref(json_array);
		
	}


	
	const gchar *bandwidthKey = "bandwidth";
	json_object_set_member(pJsonObject, bandwidthKey, node);
	if (isprimitive("BuyItNowServerOrder_200_response_ips_inner")) {
		list<BuyItNowServerOrder_200_response_ips_inner> new_list = static_cast<list <BuyItNowServerOrder_200_response_ips_inner> > (getIps());
		node = converttoJson(&new_list, "BuyItNowServerOrder_200_response_ips_inner", "array");
	} else {
		node = json_node_alloc();
		list<BuyItNowServerOrder_200_response_ips_inner> new_list = static_cast<list <BuyItNowServerOrder_200_response_ips_inner> > (getIps());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<BuyItNowServerOrder_200_response_ips_inner>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			BuyItNowServerOrder_200_response_ips_inner obj = *it;
			JsonNode *node_temp = json_from_string(obj.toJson(), &mygerror);
			json_array_add_element(json_array, node_temp);
			g_clear_error(&mygerror);
		}
		json_node_init_array(node, json_array);
		json_array_unref(json_array);
		
	}


	
	const gchar *ipsKey = "ips";
	json_object_set_member(pJsonObject, ipsKey, node);
	if (isprimitive("BuyItNowServerOrder_200_response_os_inner")) {
		list<BuyItNowServerOrder_200_response_os_inner> new_list = static_cast<list <BuyItNowServerOrder_200_response_os_inner> > (getOs());
		node = converttoJson(&new_list, "BuyItNowServerOrder_200_response_os_inner", "array");
	} else {
		node = json_node_alloc();
		list<BuyItNowServerOrder_200_response_os_inner> new_list = static_cast<list <BuyItNowServerOrder_200_response_os_inner> > (getOs());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<BuyItNowServerOrder_200_response_os_inner>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			BuyItNowServerOrder_200_response_os_inner obj = *it;
			JsonNode *node_temp = json_from_string(obj.toJson(), &mygerror);
			json_array_add_element(json_array, node_temp);
			g_clear_error(&mygerror);
		}
		json_node_init_array(node, json_array);
		json_array_unref(json_array);
		
	}


	
	const gchar *osKey = "os";
	json_object_set_member(pJsonObject, osKey, node);
	if (isprimitive("BuyItNowServerOrder_200_response_cp_inner")) {
		list<BuyItNowServerOrder_200_response_cp_inner> new_list = static_cast<list <BuyItNowServerOrder_200_response_cp_inner> > (getCp());
		node = converttoJson(&new_list, "BuyItNowServerOrder_200_response_cp_inner", "array");
	} else {
		node = json_node_alloc();
		list<BuyItNowServerOrder_200_response_cp_inner> new_list = static_cast<list <BuyItNowServerOrder_200_response_cp_inner> > (getCp());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<BuyItNowServerOrder_200_response_cp_inner>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			BuyItNowServerOrder_200_response_cp_inner obj = *it;
			JsonNode *node_temp = json_from_string(obj.toJson(), &mygerror);
			json_array_add_element(json_array, node_temp);
			g_clear_error(&mygerror);
		}
		json_node_init_array(node, json_array);
		json_array_unref(json_array);
		
	}


	
	const gchar *cpKey = "cp";
	json_object_set_member(pJsonObject, cpKey, node);
	if (isprimitive("BuyItNowServerOrder_200_response_raid_inner")) {
		list<BuyItNowServerOrder_200_response_raid_inner> new_list = static_cast<list <BuyItNowServerOrder_200_response_raid_inner> > (getRaid());
		node = converttoJson(&new_list, "BuyItNowServerOrder_200_response_raid_inner", "array");
	} else {
		node = json_node_alloc();
		list<BuyItNowServerOrder_200_response_raid_inner> new_list = static_cast<list <BuyItNowServerOrder_200_response_raid_inner> > (getRaid());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<BuyItNowServerOrder_200_response_raid_inner>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			BuyItNowServerOrder_200_response_raid_inner obj = *it;
			JsonNode *node_temp = json_from_string(obj.toJson(), &mygerror);
			json_array_add_element(json_array, node_temp);
			g_clear_error(&mygerror);
		}
		json_node_init_array(node, json_array);
		json_array_unref(json_array);
		
	}


	
	const gchar *raidKey = "raid";
	json_object_set_member(pJsonObject, raidKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::list<BuyItNowServerOrder_200_response_bandwidth_inner>
BuyItNowServerOrder_200_response::getBandwidth()
{
	return bandwidth;
}

void
BuyItNowServerOrder_200_response::setBandwidth(std::list <BuyItNowServerOrder_200_response_bandwidth_inner> bandwidth)
{
	this->bandwidth = bandwidth;
}

std::list<BuyItNowServerOrder_200_response_ips_inner>
BuyItNowServerOrder_200_response::getIps()
{
	return ips;
}

void
BuyItNowServerOrder_200_response::setIps(std::list <BuyItNowServerOrder_200_response_ips_inner> ips)
{
	this->ips = ips;
}

std::list<BuyItNowServerOrder_200_response_os_inner>
BuyItNowServerOrder_200_response::getOs()
{
	return os;
}

void
BuyItNowServerOrder_200_response::setOs(std::list <BuyItNowServerOrder_200_response_os_inner> os)
{
	this->os = os;
}

std::list<BuyItNowServerOrder_200_response_cp_inner>
BuyItNowServerOrder_200_response::getCp()
{
	return cp;
}

void
BuyItNowServerOrder_200_response::setCp(std::list <BuyItNowServerOrder_200_response_cp_inner> cp)
{
	this->cp = cp;
}

std::list<BuyItNowServerOrder_200_response_raid_inner>
BuyItNowServerOrder_200_response::getRaid()
{
	return raid;
}

void
BuyItNowServerOrder_200_response::setRaid(std::list <BuyItNowServerOrder_200_response_raid_inner> raid)
{
	this->raid = raid;
}


