#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "DomainDnssecRequest.h"

using namespace std;
using namespace Tizen::ArtikCloud;

DomainDnssecRequest::DomainDnssecRequest()
{
	//__init();
}

DomainDnssecRequest::~DomainDnssecRequest()
{
	//__cleanup();
}

void
DomainDnssecRequest::__init()
{
	//new std::list()std::list> algorithm;
	//new std::list()std::list> digest_type;
	//new std::list()std::list> digest;
	//new std::list()std::list> key_tag;
}

void
DomainDnssecRequest::__cleanup()
{
	//if(algorithm != NULL) {
	//algorithm.RemoveAll(true);
	//delete algorithm;
	//algorithm = NULL;
	//}
	//if(digest_type != NULL) {
	//digest_type.RemoveAll(true);
	//delete digest_type;
	//digest_type = NULL;
	//}
	//if(digest != NULL) {
	//digest.RemoveAll(true);
	//delete digest;
	//digest = NULL;
	//}
	//if(key_tag != NULL) {
	//key_tag.RemoveAll(true);
	//delete key_tag;
	//key_tag = NULL;
	//}
	//
}

void
DomainDnssecRequest::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *algorithmKey = "algorithm";
	node = json_object_get_member(pJsonObject, algorithmKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<int> new_list;
			int inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("int")) {
					jsonToValue(&inst, temp_json, "int", "");
				} else {
					
				}
				new_list.push_back(inst);
			}
			algorithm = new_list;
		}
		
	}
	const gchar *digest_typeKey = "digest_type";
	node = json_object_get_member(pJsonObject, digest_typeKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<int> new_list;
			int inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("int")) {
					jsonToValue(&inst, temp_json, "int", "");
				} else {
					
				}
				new_list.push_back(inst);
			}
			digest_type = new_list;
		}
		
	}
	const gchar *digestKey = "digest";
	node = json_object_get_member(pJsonObject, digestKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<std::string> new_list;
			std::string inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("std::string")) {
					jsonToValue(&inst, temp_json, "std::string", "");
				} else {
					
				}
				new_list.push_back(inst);
			}
			digest = new_list;
		}
		
	}
	const gchar *key_tagKey = "key_tag";
	node = json_object_get_member(pJsonObject, key_tagKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<int> new_list;
			int inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("int")) {
					jsonToValue(&inst, temp_json, "int", "");
				} else {
					
				}
				new_list.push_back(inst);
			}
			key_tag = new_list;
		}
		
	}
}

DomainDnssecRequest::DomainDnssecRequest(char* json)
{
	this->fromJson(json);
}

char*
DomainDnssecRequest::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("int")) {
		list<int> new_list = static_cast<list <int> > (getAlgorithm());
		node = converttoJson(&new_list, "int", "array");
	} else {
		node = json_node_alloc();
		list<int> new_list = static_cast<list <int> > (getAlgorithm());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
	}


	
	const gchar *algorithmKey = "algorithm";
	json_object_set_member(pJsonObject, algorithmKey, node);
	if (isprimitive("int")) {
		list<int> new_list = static_cast<list <int> > (getDigestType());
		node = converttoJson(&new_list, "int", "array");
	} else {
		node = json_node_alloc();
		list<int> new_list = static_cast<list <int> > (getDigestType());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
	}


	
	const gchar *digest_typeKey = "digest_type";
	json_object_set_member(pJsonObject, digest_typeKey, node);
	if (isprimitive("std::string")) {
		list<std::string> new_list = static_cast<list <std::string> > (getDigest());
		node = converttoJson(&new_list, "std::string", "array");
	} else {
		node = json_node_alloc();
		list<std::string> new_list = static_cast<list <std::string> > (getDigest());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
	}


	
	const gchar *digestKey = "digest";
	json_object_set_member(pJsonObject, digestKey, node);
	if (isprimitive("int")) {
		list<int> new_list = static_cast<list <int> > (getKeyTag());
		node = converttoJson(&new_list, "int", "array");
	} else {
		node = json_node_alloc();
		list<int> new_list = static_cast<list <int> > (getKeyTag());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
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

std::list<int>
DomainDnssecRequest::getAlgorithm()
{
	return algorithm;
}

void
DomainDnssecRequest::setAlgorithm(std::list <int> algorithm)
{
	this->algorithm = algorithm;
}

std::list<int>
DomainDnssecRequest::getDigestType()
{
	return digest_type;
}

void
DomainDnssecRequest::setDigestType(std::list <int> digest_type)
{
	this->digest_type = digest_type;
}

std::list<std::string>
DomainDnssecRequest::getDigest()
{
	return digest;
}

void
DomainDnssecRequest::setDigest(std::list <std::string> digest)
{
	this->digest = digest;
}

std::list<int>
DomainDnssecRequest::getKeyTag()
{
	return key_tag;
}

void
DomainDnssecRequest::setKeyTag(std::list <int> key_tag)
{
	this->key_tag = key_tag;
}


