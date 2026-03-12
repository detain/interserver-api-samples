#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "ServerOrderFieldLabels.h"

using namespace std;
using namespace Tizen::ArtikCloud;

ServerOrderFieldLabels::ServerOrderFieldLabels()
{
	//__init();
}

ServerOrderFieldLabels::~ServerOrderFieldLabels()
{
	//__cleanup();
}

void
ServerOrderFieldLabels::__init()
{
	//bandwidth = null;
	//ips = null;
	//os = null;
	//cp = null;
	//raid = null;
	//memory = null;
	//hd = null;
}

void
ServerOrderFieldLabels::__cleanup()
{
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
	//
}

void
ServerOrderFieldLabels::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *bandwidthKey = "bandwidth";
	node = json_object_get_member(pJsonObject, bandwidthKey);
	if (node !=NULL) {
	

		if (isprimitive("ServerOrderFieldLabel")) {
			jsonToValue(&bandwidth, node, "ServerOrderFieldLabel", "ServerOrderFieldLabel");
		} else {
			
			ServerOrderFieldLabel* obj = static_cast<ServerOrderFieldLabel*> (&bandwidth);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *ipsKey = "ips";
	node = json_object_get_member(pJsonObject, ipsKey);
	if (node !=NULL) {
	

		if (isprimitive("ServerOrderFieldLabel")) {
			jsonToValue(&ips, node, "ServerOrderFieldLabel", "ServerOrderFieldLabel");
		} else {
			
			ServerOrderFieldLabel* obj = static_cast<ServerOrderFieldLabel*> (&ips);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *osKey = "os";
	node = json_object_get_member(pJsonObject, osKey);
	if (node !=NULL) {
	

		if (isprimitive("ServerOrderFieldLabel")) {
			jsonToValue(&os, node, "ServerOrderFieldLabel", "ServerOrderFieldLabel");
		} else {
			
			ServerOrderFieldLabel* obj = static_cast<ServerOrderFieldLabel*> (&os);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *cpKey = "cp";
	node = json_object_get_member(pJsonObject, cpKey);
	if (node !=NULL) {
	

		if (isprimitive("ServerOrderFieldLabel")) {
			jsonToValue(&cp, node, "ServerOrderFieldLabel", "ServerOrderFieldLabel");
		} else {
			
			ServerOrderFieldLabel* obj = static_cast<ServerOrderFieldLabel*> (&cp);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *raidKey = "raid";
	node = json_object_get_member(pJsonObject, raidKey);
	if (node !=NULL) {
	

		if (isprimitive("ServerOrderFieldLabel")) {
			jsonToValue(&raid, node, "ServerOrderFieldLabel", "ServerOrderFieldLabel");
		} else {
			
			ServerOrderFieldLabel* obj = static_cast<ServerOrderFieldLabel*> (&raid);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *memoryKey = "memory";
	node = json_object_get_member(pJsonObject, memoryKey);
	if (node !=NULL) {
	

		if (isprimitive("ServerOrderFieldLabel")) {
			jsonToValue(&memory, node, "ServerOrderFieldLabel", "ServerOrderFieldLabel");
		} else {
			
			ServerOrderFieldLabel* obj = static_cast<ServerOrderFieldLabel*> (&memory);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *hdKey = "hd";
	node = json_object_get_member(pJsonObject, hdKey);
	if (node !=NULL) {
	

		if (isprimitive("ServerOrderFieldLabel")) {
			jsonToValue(&hd, node, "ServerOrderFieldLabel", "ServerOrderFieldLabel");
		} else {
			
			ServerOrderFieldLabel* obj = static_cast<ServerOrderFieldLabel*> (&hd);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
}

ServerOrderFieldLabels::ServerOrderFieldLabels(char* json)
{
	this->fromJson(json);
}

char*
ServerOrderFieldLabels::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("ServerOrderFieldLabel")) {
		ServerOrderFieldLabel obj = getBandwidth();
		node = converttoJson(&obj, "ServerOrderFieldLabel", "");
	}
	else {
		
		ServerOrderFieldLabel obj = static_cast<ServerOrderFieldLabel> (getBandwidth());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *bandwidthKey = "bandwidth";
	json_object_set_member(pJsonObject, bandwidthKey, node);
	if (isprimitive("ServerOrderFieldLabel")) {
		ServerOrderFieldLabel obj = getIps();
		node = converttoJson(&obj, "ServerOrderFieldLabel", "");
	}
	else {
		
		ServerOrderFieldLabel obj = static_cast<ServerOrderFieldLabel> (getIps());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *ipsKey = "ips";
	json_object_set_member(pJsonObject, ipsKey, node);
	if (isprimitive("ServerOrderFieldLabel")) {
		ServerOrderFieldLabel obj = getOs();
		node = converttoJson(&obj, "ServerOrderFieldLabel", "");
	}
	else {
		
		ServerOrderFieldLabel obj = static_cast<ServerOrderFieldLabel> (getOs());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *osKey = "os";
	json_object_set_member(pJsonObject, osKey, node);
	if (isprimitive("ServerOrderFieldLabel")) {
		ServerOrderFieldLabel obj = getCp();
		node = converttoJson(&obj, "ServerOrderFieldLabel", "");
	}
	else {
		
		ServerOrderFieldLabel obj = static_cast<ServerOrderFieldLabel> (getCp());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *cpKey = "cp";
	json_object_set_member(pJsonObject, cpKey, node);
	if (isprimitive("ServerOrderFieldLabel")) {
		ServerOrderFieldLabel obj = getRaid();
		node = converttoJson(&obj, "ServerOrderFieldLabel", "");
	}
	else {
		
		ServerOrderFieldLabel obj = static_cast<ServerOrderFieldLabel> (getRaid());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *raidKey = "raid";
	json_object_set_member(pJsonObject, raidKey, node);
	if (isprimitive("ServerOrderFieldLabel")) {
		ServerOrderFieldLabel obj = getMemory();
		node = converttoJson(&obj, "ServerOrderFieldLabel", "");
	}
	else {
		
		ServerOrderFieldLabel obj = static_cast<ServerOrderFieldLabel> (getMemory());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *memoryKey = "memory";
	json_object_set_member(pJsonObject, memoryKey, node);
	if (isprimitive("ServerOrderFieldLabel")) {
		ServerOrderFieldLabel obj = getHd();
		node = converttoJson(&obj, "ServerOrderFieldLabel", "");
	}
	else {
		
		ServerOrderFieldLabel obj = static_cast<ServerOrderFieldLabel> (getHd());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
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

ServerOrderFieldLabel
ServerOrderFieldLabels::getBandwidth()
{
	return bandwidth;
}

void
ServerOrderFieldLabels::setBandwidth(ServerOrderFieldLabel  bandwidth)
{
	this->bandwidth = bandwidth;
}

ServerOrderFieldLabel
ServerOrderFieldLabels::getIps()
{
	return ips;
}

void
ServerOrderFieldLabels::setIps(ServerOrderFieldLabel  ips)
{
	this->ips = ips;
}

ServerOrderFieldLabel
ServerOrderFieldLabels::getOs()
{
	return os;
}

void
ServerOrderFieldLabels::setOs(ServerOrderFieldLabel  os)
{
	this->os = os;
}

ServerOrderFieldLabel
ServerOrderFieldLabels::getCp()
{
	return cp;
}

void
ServerOrderFieldLabels::setCp(ServerOrderFieldLabel  cp)
{
	this->cp = cp;
}

ServerOrderFieldLabel
ServerOrderFieldLabels::getRaid()
{
	return raid;
}

void
ServerOrderFieldLabels::setRaid(ServerOrderFieldLabel  raid)
{
	this->raid = raid;
}

ServerOrderFieldLabel
ServerOrderFieldLabels::getMemory()
{
	return memory;
}

void
ServerOrderFieldLabels::setMemory(ServerOrderFieldLabel  memory)
{
	this->memory = memory;
}

ServerOrderFieldLabel
ServerOrderFieldLabels::getHd()
{
	return hd;
}

void
ServerOrderFieldLabels::setHd(ServerOrderFieldLabel  hd)
{
	this->hd = hd;
}


