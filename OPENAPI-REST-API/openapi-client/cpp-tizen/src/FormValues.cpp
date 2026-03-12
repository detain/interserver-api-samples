#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "FormValues.h"

using namespace std;
using namespace Tizen::ArtikCloud;

FormValues::FormValues()
{
	//__init();
}

FormValues::~FormValues()
{
	//__cleanup();
}

void
FormValues::__init()
{
	//memory = int(0);
	//bandwidth = int(0);
	//ips = int(0);
	//os = int(0);
	//cp = int(0);
	//raid = int(0);
	//hd = int(0);
	//region = int(0);
}

void
FormValues::__cleanup()
{
	//if(memory != NULL) {
	//
	//delete memory;
	//memory = NULL;
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
	//if(hd != NULL) {
	//
	//delete hd;
	//hd = NULL;
	//}
	//if(region != NULL) {
	//
	//delete region;
	//region = NULL;
	//}
	//
}

void
FormValues::fromJson(char* jsonStr)
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
	const gchar *hdKey = "hd";
	node = json_object_get_member(pJsonObject, hdKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&hd, node, "int", "");
		} else {
			
		}
	}
	const gchar *regionKey = "region";
	node = json_object_get_member(pJsonObject, regionKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&region, node, "int", "");
		} else {
			
		}
	}
}

FormValues::FormValues(char* json)
{
	this->fromJson(json);
}

char*
FormValues::toJson()
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
	if (isprimitive("int")) {
		int obj = getHd();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *hdKey = "hd";
	json_object_set_member(pJsonObject, hdKey, node);
	if (isprimitive("int")) {
		int obj = getRegion();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *regionKey = "region";
	json_object_set_member(pJsonObject, regionKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

int
FormValues::getMemory()
{
	return memory;
}

void
FormValues::setMemory(int  memory)
{
	this->memory = memory;
}

int
FormValues::getBandwidth()
{
	return bandwidth;
}

void
FormValues::setBandwidth(int  bandwidth)
{
	this->bandwidth = bandwidth;
}

int
FormValues::getIps()
{
	return ips;
}

void
FormValues::setIps(int  ips)
{
	this->ips = ips;
}

int
FormValues::getOs()
{
	return os;
}

void
FormValues::setOs(int  os)
{
	this->os = os;
}

int
FormValues::getCp()
{
	return cp;
}

void
FormValues::setCp(int  cp)
{
	this->cp = cp;
}

int
FormValues::getRaid()
{
	return raid;
}

void
FormValues::setRaid(int  raid)
{
	this->raid = raid;
}

int
FormValues::getHd()
{
	return hd;
}

void
FormValues::setHd(int  hd)
{
	this->hd = hd;
}

int
FormValues::getRegion()
{
	return region;
}

void
FormValues::setRegion(int  region)
{
	this->region = region;
}


