#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "QuickserverOrderServerDetails381.h"

using namespace std;
using namespace Tizen::ArtikCloud;

QuickserverOrderServerDetails381::QuickserverOrderServerDetails381()
{
	//__init();
}

QuickserverOrderServerDetails381::~QuickserverOrderServerDetails381()
{
	//__cleanup();
}

void
QuickserverOrderServerDetails381::__init()
{
	//cpu = std::string();
	//ram = std::string();
	//hd = std::string();
	//cores = int(0);
	//cost = std::string();
}

void
QuickserverOrderServerDetails381::__cleanup()
{
	//if(cpu != NULL) {
	//
	//delete cpu;
	//cpu = NULL;
	//}
	//if(ram != NULL) {
	//
	//delete ram;
	//ram = NULL;
	//}
	//if(hd != NULL) {
	//
	//delete hd;
	//hd = NULL;
	//}
	//if(cores != NULL) {
	//
	//delete cores;
	//cores = NULL;
	//}
	//if(cost != NULL) {
	//
	//delete cost;
	//cost = NULL;
	//}
	//
}

void
QuickserverOrderServerDetails381::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *cpuKey = "cpu";
	node = json_object_get_member(pJsonObject, cpuKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&cpu, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *ramKey = "ram";
	node = json_object_get_member(pJsonObject, ramKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&ram, node, "std::string", "");
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
	const gchar *coresKey = "cores";
	node = json_object_get_member(pJsonObject, coresKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&cores, node, "int", "");
		} else {
			
		}
	}
	const gchar *costKey = "cost";
	node = json_object_get_member(pJsonObject, costKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&cost, node, "std::string", "");
		} else {
			
		}
	}
}

QuickserverOrderServerDetails381::QuickserverOrderServerDetails381(char* json)
{
	this->fromJson(json);
}

char*
QuickserverOrderServerDetails381::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getCpu();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *cpuKey = "cpu";
	json_object_set_member(pJsonObject, cpuKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getRam();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *ramKey = "ram";
	json_object_set_member(pJsonObject, ramKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getHd();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *hdKey = "hd";
	json_object_set_member(pJsonObject, hdKey, node);
	if (isprimitive("int")) {
		int obj = getCores();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *coresKey = "cores";
	json_object_set_member(pJsonObject, coresKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getCost();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *costKey = "cost";
	json_object_set_member(pJsonObject, costKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
QuickserverOrderServerDetails381::getCpu()
{
	return cpu;
}

void
QuickserverOrderServerDetails381::setCpu(std::string  cpu)
{
	this->cpu = cpu;
}

std::string
QuickserverOrderServerDetails381::getRam()
{
	return ram;
}

void
QuickserverOrderServerDetails381::setRam(std::string  ram)
{
	this->ram = ram;
}

std::string
QuickserverOrderServerDetails381::getHd()
{
	return hd;
}

void
QuickserverOrderServerDetails381::setHd(std::string  hd)
{
	this->hd = hd;
}

int
QuickserverOrderServerDetails381::getCores()
{
	return cores;
}

void
QuickserverOrderServerDetails381::setCores(int  cores)
{
	this->cores = cores;
}

std::string
QuickserverOrderServerDetails381::getCost()
{
	return cost;
}

void
QuickserverOrderServerDetails381::setCost(std::string  cost)
{
	this->cost = cost;
}


