#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "DnsNewRecord.h"

using namespace std;
using namespace Tizen::ArtikCloud;

DnsNewRecord::DnsNewRecord()
{
	//__init();
}

DnsNewRecord::~DnsNewRecord()
{
	//__cleanup();
}

void
DnsNewRecord::__init()
{
	//name = std::string();
	//type = new DnsRecordType();
	//content = std::string();
	//ttl = int(0);
	//prio = int(0);
}

void
DnsNewRecord::__cleanup()
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
	//
}

void
DnsNewRecord::fromJson(char* jsonStr)
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
	

		if (isprimitive("int")) {
			jsonToValue(&ttl, node, "int", "");
		} else {
			
		}
	}
	const gchar *prioKey = "prio";
	node = json_object_get_member(pJsonObject, prioKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&prio, node, "int", "");
		} else {
			
		}
	}
}

DnsNewRecord::DnsNewRecord(char* json)
{
	this->fromJson(json);
}

char*
DnsNewRecord::toJson()
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
	if (isprimitive("int")) {
		int obj = getTtl();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *ttlKey = "ttl";
	json_object_set_member(pJsonObject, ttlKey, node);
	if (isprimitive("int")) {
		int obj = getPrio();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *prioKey = "prio";
	json_object_set_member(pJsonObject, prioKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
DnsNewRecord::getName()
{
	return name;
}

void
DnsNewRecord::setName(std::string  name)
{
	this->name = name;
}

DnsRecordType
DnsNewRecord::getType()
{
	return type;
}

void
DnsNewRecord::setType(DnsRecordType  type)
{
	this->type = type;
}

std::string
DnsNewRecord::getContent()
{
	return content;
}

void
DnsNewRecord::setContent(std::string  content)
{
	this->content = content;
}

int
DnsNewRecord::getTtl()
{
	return ttl;
}

void
DnsNewRecord::setTtl(int  ttl)
{
	this->ttl = ttl;
}

int
DnsNewRecord::getPrio()
{
	return prio;
}

void
DnsNewRecord::setPrio(int  prio)
{
	this->prio = prio;
}


