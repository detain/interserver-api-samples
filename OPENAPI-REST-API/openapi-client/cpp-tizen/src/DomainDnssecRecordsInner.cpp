#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "DomainDnssecRecords_inner.h"

using namespace std;
using namespace Tizen::ArtikCloud;

DomainDnssecRecords_inner::DomainDnssecRecords_inner()
{
	//__init();
}

DomainDnssecRecords_inner::~DomainDnssecRecords_inner()
{
	//__cleanup();
}

void
DomainDnssecRecords_inner::__init()
{
	//algorithm = std::string();
	//digest_type = std::string();
	//digest = std::string();
	//key_tag = std::string();
}

void
DomainDnssecRecords_inner::__cleanup()
{
	//if(algorithm != NULL) {
	//
	//delete algorithm;
	//algorithm = NULL;
	//}
	//if(digest_type != NULL) {
	//
	//delete digest_type;
	//digest_type = NULL;
	//}
	//if(digest != NULL) {
	//
	//delete digest;
	//digest = NULL;
	//}
	//if(key_tag != NULL) {
	//
	//delete key_tag;
	//key_tag = NULL;
	//}
	//
}

void
DomainDnssecRecords_inner::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *algorithmKey = "algorithm";
	node = json_object_get_member(pJsonObject, algorithmKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&algorithm, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *digest_typeKey = "digest_type";
	node = json_object_get_member(pJsonObject, digest_typeKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&digest_type, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *digestKey = "digest";
	node = json_object_get_member(pJsonObject, digestKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&digest, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *key_tagKey = "key_tag";
	node = json_object_get_member(pJsonObject, key_tagKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&key_tag, node, "std::string", "");
		} else {
			
		}
	}
}

DomainDnssecRecords_inner::DomainDnssecRecords_inner(char* json)
{
	this->fromJson(json);
}

char*
DomainDnssecRecords_inner::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getAlgorithm();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *algorithmKey = "algorithm";
	json_object_set_member(pJsonObject, algorithmKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getDigestType();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *digest_typeKey = "digest_type";
	json_object_set_member(pJsonObject, digest_typeKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getDigest();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *digestKey = "digest";
	json_object_set_member(pJsonObject, digestKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getKeyTag();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *key_tagKey = "key_tag";
	json_object_set_member(pJsonObject, key_tagKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
DomainDnssecRecords_inner::getAlgorithm()
{
	return algorithm;
}

void
DomainDnssecRecords_inner::setAlgorithm(std::string  algorithm)
{
	this->algorithm = algorithm;
}

std::string
DomainDnssecRecords_inner::getDigestType()
{
	return digest_type;
}

void
DomainDnssecRecords_inner::setDigestType(std::string  digest_type)
{
	this->digest_type = digest_type;
}

std::string
DomainDnssecRecords_inner::getDigest()
{
	return digest;
}

void
DomainDnssecRecords_inner::setDigest(std::string  digest)
{
	this->digest = digest;
}

std::string
DomainDnssecRecords_inner::getKeyTag()
{
	return key_tag;
}

void
DomainDnssecRecords_inner::setKeyTag(std::string  key_tag)
{
	this->key_tag = key_tag;
}


