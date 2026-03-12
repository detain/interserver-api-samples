#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "DnsUpdateRecord.h"

using namespace std;
using namespace Tizen::ArtikCloud;

DnsUpdateRecord::DnsUpdateRecord()
{
	//__init();
}

DnsUpdateRecord::~DnsUpdateRecord()
{
	//__cleanup();
}

void
DnsUpdateRecord::__init()
{
	//name = std::string();
	//type = new DnsRecordType();
	//content = std::string();
	//ttl = std::string();
	//prio = std::string();
	//disabled = std::string();
	//ordername = std::string();
	//auth = std::string();
}

void
DnsUpdateRecord::__cleanup()
{
	//if(name != NULL) {
	//
	//delete name;
	//name = NULL;
	//}
	//if(type != NULL) {
	//
	//delete type;
	//type = NULL;
	//}
	//if(content != NULL) {
	//
	//delete content;
	//content = NULL;
	//}
	//if(ttl != NULL) {
	//
	//delete ttl;
	//ttl = NULL;
	//}
	//if(prio != NULL) {
	//
	//delete prio;
	//prio = NULL;
	//}
	//if(disabled != NULL) {
	//
	//delete disabled;
	//disabled = NULL;
	//}
	//if(ordername != NULL) {
	//
	//delete ordername;
	//ordername = NULL;
	//}
	//if(auth != NULL) {
	//
	//delete auth;
	//auth = NULL;
	//}
	//
}

void
DnsUpdateRecord::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *nameKey = "name";
	node = json_object_get_member(pJsonObject, nameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&name, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *typeKey = "type";
	node = json_object_get_member(pJsonObject, typeKey);
	if (node !=NULL) {
	

		if (isprimitive("DnsRecordType")) {
			jsonToValue(&type, node, "DnsRecordType", "DnsRecordType");
		} else {
			
			DnsRecordType* obj = static_cast<DnsRecordType*> (&type);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *contentKey = "content";
	node = json_object_get_member(pJsonObject, contentKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&content, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *ttlKey = "ttl";
	node = json_object_get_member(pJsonObject, ttlKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&ttl, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *prioKey = "prio";
	node = json_object_get_member(pJsonObject, prioKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&prio, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *disabledKey = "disabled";
	node = json_object_get_member(pJsonObject, disabledKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&disabled, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *ordernameKey = "ordername";
	node = json_object_get_member(pJsonObject, ordernameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&ordername, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *authKey = "auth";
	node = json_object_get_member(pJsonObject, authKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&auth, node, "std::string", "");
		} else {
			
		}
	}
}

DnsUpdateRecord::DnsUpdateRecord(char* json)
{
	this->fromJson(json);
}

char*
DnsUpdateRecord::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *nameKey = "name";
	json_object_set_member(pJsonObject, nameKey, node);
	if (isprimitive("DnsRecordType")) {
		DnsRecordType obj = getType();
		node = converttoJson(&obj, "DnsRecordType", "");
	}
	else {
		
		DnsRecordType obj = static_cast<DnsRecordType> (getType());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *typeKey = "type";
	json_object_set_member(pJsonObject, typeKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getContent();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *contentKey = "content";
	json_object_set_member(pJsonObject, contentKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getTtl();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *ttlKey = "ttl";
	json_object_set_member(pJsonObject, ttlKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getPrio();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *prioKey = "prio";
	json_object_set_member(pJsonObject, prioKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getDisabled();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *disabledKey = "disabled";
	json_object_set_member(pJsonObject, disabledKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getOrdername();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *ordernameKey = "ordername";
	json_object_set_member(pJsonObject, ordernameKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getAuth();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *authKey = "auth";
	json_object_set_member(pJsonObject, authKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
DnsUpdateRecord::getName()
{
	return name;
}

void
DnsUpdateRecord::setName(std::string  name)
{
	this->name = name;
}

DnsRecordType
DnsUpdateRecord::getType()
{
	return type;
}

void
DnsUpdateRecord::setType(DnsRecordType  type)
{
	this->type = type;
}

std::string
DnsUpdateRecord::getContent()
{
	return content;
}

void
DnsUpdateRecord::setContent(std::string  content)
{
	this->content = content;
}

std::string
DnsUpdateRecord::getTtl()
{
	return ttl;
}

void
DnsUpdateRecord::setTtl(std::string  ttl)
{
	this->ttl = ttl;
}

std::string
DnsUpdateRecord::getPrio()
{
	return prio;
}

void
DnsUpdateRecord::setPrio(std::string  prio)
{
	this->prio = prio;
}

std::string
DnsUpdateRecord::getDisabled()
{
	return disabled;
}

void
DnsUpdateRecord::setDisabled(std::string  disabled)
{
	this->disabled = disabled;
}

std::string
DnsUpdateRecord::getOrdername()
{
	return ordername;
}

void
DnsUpdateRecord::setOrdername(std::string  ordername)
{
	this->ordername = ordername;
}

std::string
DnsUpdateRecord::getAuth()
{
	return auth;
}

void
DnsUpdateRecord::setAuth(std::string  auth)
{
	this->auth = auth;
}


