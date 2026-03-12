#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "DomainOrderTldServices.h"

using namespace std;
using namespace Tizen::ArtikCloud;

DomainOrderTldServices::DomainOrderTldServices()
{
	//__init();
}

DomainOrderTldServices::~DomainOrderTldServices()
{
	//__cleanup();
}

void
DomainOrderTldServices::__init()
{
	//asia = int(0);
	//be = int(0);
	//biz = int(0);
	//ca = int(0);
}

void
DomainOrderTldServices::__cleanup()
{
	//if(asia != NULL) {
	//
	//delete asia;
	//asia = NULL;
	//}
	//if(be != NULL) {
	//
	//delete be;
	//be = NULL;
	//}
	//if(biz != NULL) {
	//
	//delete biz;
	//biz = NULL;
	//}
	//if(ca != NULL) {
	//
	//delete ca;
	//ca = NULL;
	//}
	//
}

void
DomainOrderTldServices::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *asiaKey = ".asia";
	node = json_object_get_member(pJsonObject, asiaKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&asia, node, "int", "");
		} else {
			
		}
	}
	const gchar *beKey = ".be";
	node = json_object_get_member(pJsonObject, beKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&be, node, "int", "");
		} else {
			
		}
	}
	const gchar *bizKey = ".biz";
	node = json_object_get_member(pJsonObject, bizKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&biz, node, "int", "");
		} else {
			
		}
	}
	const gchar *caKey = ".ca";
	node = json_object_get_member(pJsonObject, caKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&ca, node, "int", "");
		} else {
			
		}
	}
}

DomainOrderTldServices::DomainOrderTldServices(char* json)
{
	this->fromJson(json);
}

char*
DomainOrderTldServices::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("int")) {
		int obj = getAsia();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *asiaKey = ".asia";
	json_object_set_member(pJsonObject, asiaKey, node);
	if (isprimitive("int")) {
		int obj = getBe();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *beKey = ".be";
	json_object_set_member(pJsonObject, beKey, node);
	if (isprimitive("int")) {
		int obj = getBiz();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *bizKey = ".biz";
	json_object_set_member(pJsonObject, bizKey, node);
	if (isprimitive("int")) {
		int obj = getCa();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *caKey = ".ca";
	json_object_set_member(pJsonObject, caKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

int
DomainOrderTldServices::getAsia()
{
	return asia;
}

void
DomainOrderTldServices::setAsia(int  asia)
{
	this->asia = asia;
}

int
DomainOrderTldServices::getBe()
{
	return be;
}

void
DomainOrderTldServices::setBe(int  be)
{
	this->be = be;
}

int
DomainOrderTldServices::getBiz()
{
	return biz;
}

void
DomainOrderTldServices::setBiz(int  biz)
{
	this->biz = biz;
}

int
DomainOrderTldServices::getCa()
{
	return ca;
}

void
DomainOrderTldServices::setCa(int  ca)
{
	this->ca = ca;
}


