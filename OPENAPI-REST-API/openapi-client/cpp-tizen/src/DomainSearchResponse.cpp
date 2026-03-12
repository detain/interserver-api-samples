#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "DomainSearchResponse.h"

using namespace std;
using namespace Tizen::ArtikCloud;

DomainSearchResponse::DomainSearchResponse()
{
	//__init();
}

DomainSearchResponse::~DomainSearchResponse()
{
	//__cleanup();
}

void
DomainSearchResponse::__init()
{
	//success = bool(false);
	//response_text = std::string();
	//response_time = std::string();
	//new std::list()std::list> lookup;
	//new std::list()std::list> suggest;
	//new std::list()std::list> tlds;
}

void
DomainSearchResponse::__cleanup()
{
	//if(success != NULL) {
	//
	//delete success;
	//success = NULL;
	//}
	//if(response_text != NULL) {
	//
	//delete response_text;
	//response_text = NULL;
	//}
	//if(response_time != NULL) {
	//
	//delete response_time;
	//response_time = NULL;
	//}
	//if(lookup != NULL) {
	//lookup.RemoveAll(true);
	//delete lookup;
	//lookup = NULL;
	//}
	//if(suggest != NULL) {
	//suggest.RemoveAll(true);
	//delete suggest;
	//suggest = NULL;
	//}
	//if(tlds != NULL) {
	//tlds.RemoveAll(true);
	//delete tlds;
	//tlds = NULL;
	//}
	//
}

void
DomainSearchResponse::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *successKey = "success";
	node = json_object_get_member(pJsonObject, successKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&success, node, "bool", "");
		} else {
			
		}
	}
	const gchar *response_textKey = "response_text";
	node = json_object_get_member(pJsonObject, response_textKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&response_text, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *response_timeKey = "response_time";
	node = json_object_get_member(pJsonObject, response_timeKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&response_time, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *lookupKey = "lookup";
	node = json_object_get_member(pJsonObject, lookupKey);
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
					
					inst.fromJson(json_to_string(temp_json, false));
					
				}
				new_list.push_back(inst);
			}
			lookup = new_list;
		}
		
	}
	const gchar *suggestKey = "suggest";
	node = json_object_get_member(pJsonObject, suggestKey);
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
					
					inst.fromJson(json_to_string(temp_json, false));
					
				}
				new_list.push_back(inst);
			}
			suggest = new_list;
		}
		
	}
	const gchar *tldsKey = "tlds";
	node = json_object_get_member(pJsonObject, tldsKey);
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
			tlds = new_list;
		}
		
	}
}

DomainSearchResponse::DomainSearchResponse(char* json)
{
	this->fromJson(json);
}

char*
DomainSearchResponse::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("bool")) {
		bool obj = getSuccess();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *successKey = "success";
	json_object_set_member(pJsonObject, successKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getResponseText();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *response_textKey = "response_text";
	json_object_set_member(pJsonObject, response_textKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getResponseTime();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *response_timeKey = "response_time";
	json_object_set_member(pJsonObject, response_timeKey, node);
	if (isprimitive("std::string")) {
		list<std::string> new_list = static_cast<list <std::string> > (getLookup());
		node = converttoJson(&new_list, "std::string", "array");
	} else {
		node = json_node_alloc();
		list<std::string> new_list = static_cast<list <std::string> > (getLookup());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<std::string>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			std::string obj = *it;
			JsonNode *node_temp = json_from_string(obj.toJson(), &mygerror);
			json_array_add_element(json_array, node_temp);
			g_clear_error(&mygerror);
		}
		json_node_init_array(node, json_array);
		json_array_unref(json_array);
		
	}


	
	const gchar *lookupKey = "lookup";
	json_object_set_member(pJsonObject, lookupKey, node);
	if (isprimitive("std::string")) {
		list<std::string> new_list = static_cast<list <std::string> > (getSuggest());
		node = converttoJson(&new_list, "std::string", "array");
	} else {
		node = json_node_alloc();
		list<std::string> new_list = static_cast<list <std::string> > (getSuggest());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<std::string>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			std::string obj = *it;
			JsonNode *node_temp = json_from_string(obj.toJson(), &mygerror);
			json_array_add_element(json_array, node_temp);
			g_clear_error(&mygerror);
		}
		json_node_init_array(node, json_array);
		json_array_unref(json_array);
		
	}


	
	const gchar *suggestKey = "suggest";
	json_object_set_member(pJsonObject, suggestKey, node);
	if (isprimitive("std::string")) {
		list<std::string> new_list = static_cast<list <std::string> > (getTlds());
		node = converttoJson(&new_list, "std::string", "array");
	} else {
		node = json_node_alloc();
		list<std::string> new_list = static_cast<list <std::string> > (getTlds());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
	}


	
	const gchar *tldsKey = "tlds";
	json_object_set_member(pJsonObject, tldsKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

bool
DomainSearchResponse::getSuccess()
{
	return success;
}

void
DomainSearchResponse::setSuccess(bool  success)
{
	this->success = success;
}

std::string
DomainSearchResponse::getResponseText()
{
	return response_text;
}

void
DomainSearchResponse::setResponseText(std::string  response_text)
{
	this->response_text = response_text;
}

std::string
DomainSearchResponse::getResponseTime()
{
	return response_time;
}

void
DomainSearchResponse::setResponseTime(std::string  response_time)
{
	this->response_time = response_time;
}

std::list<std::string>
DomainSearchResponse::getLookup()
{
	return lookup;
}

void
DomainSearchResponse::setLookup(std::list <std::string> lookup)
{
	this->lookup = lookup;
}

std::list<std::string>
DomainSearchResponse::getSuggest()
{
	return suggest;
}

void
DomainSearchResponse::setSuggest(std::list <std::string> suggest)
{
	this->suggest = suggest;
}

std::list<std::string>
DomainSearchResponse::getTlds()
{
	return tlds;
}

void
DomainSearchResponse::setTlds(std::list <std::string> tlds)
{
	this->tlds = tlds;
}


