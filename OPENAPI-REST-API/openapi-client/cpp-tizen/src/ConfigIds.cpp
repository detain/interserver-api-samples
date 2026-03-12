#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "ConfigIds.h"

using namespace std;
using namespace Tizen::ArtikCloud;

ConfigIds::ConfigIds()
{
	//__init();
}

ConfigIds::~ConfigIds()
{
	//__cleanup();
}

void
ConfigIds::__init()
{
	//memory = int(0);
	//hd = int(0);
	//bandwidth = int(0);
	//ips = int(0);
	//os = int(0);
	//cp = int(0);
	//raid = int(0);
}

void
ConfigIds::__cleanup()
{
	//if(memory != NULL) {
	//
	//delete memory;
	//memory = NULL;
	//}
	//if(hd != NULL) {
	//
	//delete hd;
	//hd = NULL;
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
	//if(os != NULL) {
	//
	//delete os;
	//os = NULL;
	//}
	//if(cp != NULL) {
	//
	//delete cp;
	//cp = NULL;
	//}
	//if(raid != NULL) {
	//
	//delete raid;
	//raid = NULL;
	//}
	//
}

void
ConfigIds::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *memoryKey = "memory";
	node = json_object_get_member(pJsonObject, memoryKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&memory, node, "int", "");
		} else {
			
		}
	}
	const gchar *hdKey = "hd";
	node = json_object_get_member(pJsonObject, hdKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&hd, node, "int", "");
		} else {
			
		}
	}
	const gchar *bandwidthKey = "bandwidth";
	node = json_object_get_member(pJsonObject, bandwidthKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&bandwidth, node, "int", "");
		} else {
			
		}
	}
	const gchar *ipsKey = "ips";
	node = json_object_get_member(pJsonObject, ipsKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&ips, node, "int", "");
		} else {
			
		}
	}
	const gchar *osKey = "os";
	node = json_object_get_member(pJsonObject, osKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&os, node, "int", "");
		} else {
			
		}
	}
	const gchar *cpKey = "cp";
	node = json_object_get_member(pJsonObject, cpKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&cp, node, "int", "");
		} else {
			
		}
	}
	const gchar *raidKey = "raid";
	node = json_object_get_member(pJsonObject, raidKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&raid, node, "int", "");
		} else {
			
		}
	}
}

ConfigIds::ConfigIds(char* json)
{
	this->fromJson(json);
}

char*
ConfigIds::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("int")) {
		int obj = getMemory();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *memoryKey = "memory";
	json_object_set_member(pJsonObject, memoryKey, node);
	if (isprimitive("int")) {
		int obj = getHd();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *hdKey = "hd";
	json_object_set_member(pJsonObject, hdKey, node);
	if (isprimitive("int")) {
		int obj = getBandwidth();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *bandwidthKey = "bandwidth";
	json_object_set_member(pJsonObject, bandwidthKey, node);
	if (isprimitive("int")) {
		int obj = getIps();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *ipsKey = "ips";
	json_object_set_member(pJsonObject, ipsKey, node);
	if (isprimitive("int")) {
		int obj = getOs();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *osKey = "os";
	json_object_set_member(pJsonObject, osKey, node);
	if (isprimitive("int")) {
		int obj = getCp();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *cpKey = "cp";
	json_object_set_member(pJsonObject, cpKey, node);
	if (isprimitive("int")) {
		int obj = getRaid();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
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

int
ConfigIds::getMemory()
{
	return memory;
}

void
ConfigIds::setMemory(int  memory)
{
	this->memory = memory;
}

int
ConfigIds::getHd()
{
	return hd;
}

void
ConfigIds::setHd(int  hd)
{
	this->hd = hd;
}

int
ConfigIds::getBandwidth()
{
	return bandwidth;
}

void
ConfigIds::setBandwidth(int  bandwidth)
{
	this->bandwidth = bandwidth;
}

int
ConfigIds::getIps()
{
	return ips;
}

void
ConfigIds::setIps(int  ips)
{
	this->ips = ips;
}

int
ConfigIds::getOs()
{
	return os;
}

void
ConfigIds::setOs(int  os)
{
	this->os = os;
}

int
ConfigIds::getCp()
{
	return cp;
}

void
ConfigIds::setCp(int  cp)
{
	this->cp = cp;
}

int
ConfigIds::getRaid()
{
	return raid;
}

void
ConfigIds::setRaid(int  raid)
{
	this->raid = raid;
}


