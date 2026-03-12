#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "ServerOrderFormValues.h"

using namespace std;
using namespace Tizen::ArtikCloud;

ServerOrderFormValues::ServerOrderFormValues()
{
	//__init();
}

ServerOrderFormValues::~ServerOrderFormValues()
{
	//__cleanup();
}

void
ServerOrderFormValues::__init()
{
	//memory = int(0);
	//bandwidth = std::string();
	//ips = std::string();
	//os = std::string();
	//cp = int(0);
	//raid = std::string();
	//hd = std::string();
}

void
ServerOrderFormValues::__cleanup()
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
	//
}

void
ServerOrderFormValues::fromJson(char* jsonStr)
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
	const gchar *osKey = "os";
	node = json_object_get_member(pJsonObject, osKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&os, node, "std::string", "");
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
	

		if (isprimitive("std::string")) {
			jsonToValue(&raid, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *hdKey = "hd";
	node = json_object_get_member(pJsonObject, hdKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&hd, node, "std::string", "");
		} else {
			
		}
	}
}

ServerOrderFormValues::ServerOrderFormValues(char* json)
{
	this->fromJson(json);
}

char*
ServerOrderFormValues::toJson()
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
		std::string obj = getOs();
		node = converttoJson(&obj, "std::string", "");
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
	if (isprimitive("std::string")) {
		std::string obj = getRaid();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *raidKey = "raid";
	json_object_set_member(pJsonObject, raidKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getHd();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *hdKey = "hd";
	json_object_set_member(pJsonObject, hdKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

int
ServerOrderFormValues::getMemory()
{
	return memory;
}

void
ServerOrderFormValues::setMemory(int  memory)
{
	this->memory = memory;
}

std::string
ServerOrderFormValues::getBandwidth()
{
	return bandwidth;
}

void
ServerOrderFormValues::setBandwidth(std::string  bandwidth)
{
	this->bandwidth = bandwidth;
}

std::string
ServerOrderFormValues::getIps()
{
	return ips;
}

void
ServerOrderFormValues::setIps(std::string  ips)
{
	this->ips = ips;
}

std::string
ServerOrderFormValues::getOs()
{
	return os;
}

void
ServerOrderFormValues::setOs(std::string  os)
{
	this->os = os;
}

int
ServerOrderFormValues::getCp()
{
	return cp;
}

void
ServerOrderFormValues::setCp(int  cp)
{
	this->cp = cp;
}

std::string
ServerOrderFormValues::getRaid()
{
	return raid;
}

void
ServerOrderFormValues::setRaid(std::string  raid)
{
	this->raid = raid;
}

std::string
ServerOrderFormValues::getHd()
{
	return hd;
}

void
ServerOrderFormValues::setHd(std::string  hd)
{
	this->hd = hd;
}


