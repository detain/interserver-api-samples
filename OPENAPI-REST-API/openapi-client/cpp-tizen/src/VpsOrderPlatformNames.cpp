#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "VpsOrder_platformNames.h"

using namespace std;
using namespace Tizen::ArtikCloud;

VpsOrder_platformNames::VpsOrder_platformNames()
{
	//__init();
}

VpsOrder_platformNames::~VpsOrder_platformNames()
{
	//__cleanup();
}

void
VpsOrder_platformNames::__init()
{
	//kvm = std::string();
	//kvmstorage = std::string();
	//hyperv = std::string();
}

void
VpsOrder_platformNames::__cleanup()
{
	//if(kvm != NULL) {
	//
	//delete kvm;
	//kvm = NULL;
	//}
	//if(kvmstorage != NULL) {
	//
	//delete kvmstorage;
	//kvmstorage = NULL;
	//}
	//if(hyperv != NULL) {
	//
	//delete hyperv;
	//hyperv = NULL;
	//}
	//
}

void
VpsOrder_platformNames::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *kvmKey = "kvm";
	node = json_object_get_member(pJsonObject, kvmKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&kvm, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *kvmstorageKey = "kvmstorage";
	node = json_object_get_member(pJsonObject, kvmstorageKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&kvmstorage, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *hypervKey = "hyperv";
	node = json_object_get_member(pJsonObject, hypervKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&hyperv, node, "std::string", "");
		} else {
			
		}
	}
}

VpsOrder_platformNames::VpsOrder_platformNames(char* json)
{
	this->fromJson(json);
}

char*
VpsOrder_platformNames::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getKvm();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *kvmKey = "kvm";
	json_object_set_member(pJsonObject, kvmKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getKvmstorage();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *kvmstorageKey = "kvmstorage";
	json_object_set_member(pJsonObject, kvmstorageKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getHyperv();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *hypervKey = "hyperv";
	json_object_set_member(pJsonObject, hypervKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
VpsOrder_platformNames::getKvm()
{
	return kvm;
}

void
VpsOrder_platformNames::setKvm(std::string  kvm)
{
	this->kvm = kvm;
}

std::string
VpsOrder_platformNames::getKvmstorage()
{
	return kvmstorage;
}

void
VpsOrder_platformNames::setKvmstorage(std::string  kvmstorage)
{
	this->kvmstorage = kvmstorage;
}

std::string
VpsOrder_platformNames::getHyperv()
{
	return hyperv;
}

void
VpsOrder_platformNames::setHyperv(std::string  hyperv)
{
	this->hyperv = hyperv;
}


