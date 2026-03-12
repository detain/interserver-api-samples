#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "VpsOrder_platformPackages.h"

using namespace std;
using namespace Tizen::ArtikCloud;

VpsOrder_platformPackages::VpsOrder_platformPackages()
{
	//__init();
}

VpsOrder_platformPackages::~VpsOrder_platformPackages()
{
	//__cleanup();
}

void
VpsOrder_platformPackages::__init()
{
	//kvm = double(0);
	//kvmstorage = double(0);
	//hyperv = double(0);
}

void
VpsOrder_platformPackages::__cleanup()
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
VpsOrder_platformPackages::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *kvmKey = "kvm";
	node = json_object_get_member(pJsonObject, kvmKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&kvm, node, "long long", "");
		} else {
			
			long long* obj = static_cast<long long*> (&kvm);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *kvmstorageKey = "kvmstorage";
	node = json_object_get_member(pJsonObject, kvmstorageKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&kvmstorage, node, "long long", "");
		} else {
			
			long long* obj = static_cast<long long*> (&kvmstorage);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *hypervKey = "hyperv";
	node = json_object_get_member(pJsonObject, hypervKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&hyperv, node, "long long", "");
		} else {
			
			long long* obj = static_cast<long long*> (&hyperv);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
}

VpsOrder_platformPackages::VpsOrder_platformPackages(char* json)
{
	this->fromJson(json);
}

char*
VpsOrder_platformPackages::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("long long")) {
		long long obj = getKvm();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
		long long obj = static_cast<long long> (getKvm());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *kvmKey = "kvm";
	json_object_set_member(pJsonObject, kvmKey, node);
	if (isprimitive("long long")) {
		long long obj = getKvmstorage();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
		long long obj = static_cast<long long> (getKvmstorage());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *kvmstorageKey = "kvmstorage";
	json_object_set_member(pJsonObject, kvmstorageKey, node);
	if (isprimitive("long long")) {
		long long obj = getHyperv();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
		long long obj = static_cast<long long> (getHyperv());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
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

long long
VpsOrder_platformPackages::getKvm()
{
	return kvm;
}

void
VpsOrder_platformPackages::setKvm(long long  kvm)
{
	this->kvm = kvm;
}

long long
VpsOrder_platformPackages::getKvmstorage()
{
	return kvmstorage;
}

void
VpsOrder_platformPackages::setKvmstorage(long long  kvmstorage)
{
	this->kvmstorage = kvmstorage;
}

long long
VpsOrder_platformPackages::getHyperv()
{
	return hyperv;
}

void
VpsOrder_platformPackages::setHyperv(long long  hyperv)
{
	this->hyperv = hyperv;
}


