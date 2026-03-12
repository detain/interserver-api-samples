#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "GetScrubIpDetails_200_response_filter_firewall.h"

using namespace std;
using namespace Tizen::ArtikCloud;

GetScrubIpDetails_200_response_filter_firewall::GetScrubIpDetails_200_response_filter_firewall()
{
	//__init();
}

GetScrubIpDetails_200_response_filter_firewall::~GetScrubIpDetails_200_response_filter_firewall()
{
	//__cleanup();
}

void
GetScrubIpDetails_200_response_filter_firewall::__init()
{
	//new std::list()std::list> rules;
	//new std::list()std::list> filters;
	//scrub_enabled = int(0);
}

void
GetScrubIpDetails_200_response_filter_firewall::__cleanup()
{
	//if(rules != NULL) {
	//rules.RemoveAll(true);
	//delete rules;
	//rules = NULL;
	//}
	//if(filters != NULL) {
	//filters.RemoveAll(true);
	//delete filters;
	//filters = NULL;
	//}
	//if(scrub_enabled != NULL) {
	//
	//delete scrub_enabled;
	//scrub_enabled = NULL;
	//}
	//
}

void
GetScrubIpDetails_200_response_filter_firewall::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *rulesKey = "rules";
	node = json_object_get_member(pJsonObject, rulesKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<GetScrubIpDetails_200_response_filter_firewall_rules_inner> new_list;
			GetScrubIpDetails_200_response_filter_firewall_rules_inner inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("GetScrubIpDetails_200_response_filter_firewall_rules_inner")) {
					jsonToValue(&inst, temp_json, "GetScrubIpDetails_200_response_filter_firewall_rules_inner", "");
				} else {
					
					inst.fromJson(json_to_string(temp_json, false));
					
				}
				new_list.push_back(inst);
			}
			rules = new_list;
		}
		
	}
	const gchar *filtersKey = "filters";
	node = json_object_get_member(pJsonObject, filtersKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<GetScrubIpDetails_200_response_filter_firewall_filters_inner> new_list;
			GetScrubIpDetails_200_response_filter_firewall_filters_inner inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("GetScrubIpDetails_200_response_filter_firewall_filters_inner")) {
					jsonToValue(&inst, temp_json, "GetScrubIpDetails_200_response_filter_firewall_filters_inner", "");
				} else {
					
					inst.fromJson(json_to_string(temp_json, false));
					
				}
				new_list.push_back(inst);
			}
			filters = new_list;
		}
		
	}
	const gchar *scrub_enabledKey = "scrub_enabled";
	node = json_object_get_member(pJsonObject, scrub_enabledKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&scrub_enabled, node, "int", "");
		} else {
			
		}
	}
}

GetScrubIpDetails_200_response_filter_firewall::GetScrubIpDetails_200_response_filter_firewall(char* json)
{
	this->fromJson(json);
}

char*
GetScrubIpDetails_200_response_filter_firewall::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("GetScrubIpDetails_200_response_filter_firewall_rules_inner")) {
		list<GetScrubIpDetails_200_response_filter_firewall_rules_inner> new_list = static_cast<list <GetScrubIpDetails_200_response_filter_firewall_rules_inner> > (getRules());
		node = converttoJson(&new_list, "GetScrubIpDetails_200_response_filter_firewall_rules_inner", "array");
	} else {
		node = json_node_alloc();
		list<GetScrubIpDetails_200_response_filter_firewall_rules_inner> new_list = static_cast<list <GetScrubIpDetails_200_response_filter_firewall_rules_inner> > (getRules());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<GetScrubIpDetails_200_response_filter_firewall_rules_inner>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			GetScrubIpDetails_200_response_filter_firewall_rules_inner obj = *it;
			JsonNode *node_temp = json_from_string(obj.toJson(), &mygerror);
			json_array_add_element(json_array, node_temp);
			g_clear_error(&mygerror);
		}
		json_node_init_array(node, json_array);
		json_array_unref(json_array);
		
	}


	
	const gchar *rulesKey = "rules";
	json_object_set_member(pJsonObject, rulesKey, node);
	if (isprimitive("GetScrubIpDetails_200_response_filter_firewall_filters_inner")) {
		list<GetScrubIpDetails_200_response_filter_firewall_filters_inner> new_list = static_cast<list <GetScrubIpDetails_200_response_filter_firewall_filters_inner> > (getFilters());
		node = converttoJson(&new_list, "GetScrubIpDetails_200_response_filter_firewall_filters_inner", "array");
	} else {
		node = json_node_alloc();
		list<GetScrubIpDetails_200_response_filter_firewall_filters_inner> new_list = static_cast<list <GetScrubIpDetails_200_response_filter_firewall_filters_inner> > (getFilters());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<GetScrubIpDetails_200_response_filter_firewall_filters_inner>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			GetScrubIpDetails_200_response_filter_firewall_filters_inner obj = *it;
			JsonNode *node_temp = json_from_string(obj.toJson(), &mygerror);
			json_array_add_element(json_array, node_temp);
			g_clear_error(&mygerror);
		}
		json_node_init_array(node, json_array);
		json_array_unref(json_array);
		
	}


	
	const gchar *filtersKey = "filters";
	json_object_set_member(pJsonObject, filtersKey, node);
	if (isprimitive("int")) {
		int obj = getScrubEnabled();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *scrub_enabledKey = "scrub_enabled";
	json_object_set_member(pJsonObject, scrub_enabledKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::list<GetScrubIpDetails_200_response_filter_firewall_rules_inner>
GetScrubIpDetails_200_response_filter_firewall::getRules()
{
	return rules;
}

void
GetScrubIpDetails_200_response_filter_firewall::setRules(std::list <GetScrubIpDetails_200_response_filter_firewall_rules_inner> rules)
{
	this->rules = rules;
}

std::list<GetScrubIpDetails_200_response_filter_firewall_filters_inner>
GetScrubIpDetails_200_response_filter_firewall::getFilters()
{
	return filters;
}

void
GetScrubIpDetails_200_response_filter_firewall::setFilters(std::list <GetScrubIpDetails_200_response_filter_firewall_filters_inner> filters)
{
	this->filters = filters;
}

int
GetScrubIpDetails_200_response_filter_firewall::getScrubEnabled()
{
	return scrub_enabled;
}

void
GetScrubIpDetails_200_response_filter_firewall::setScrubEnabled(int  scrub_enabled)
{
	this->scrub_enabled = scrub_enabled;
}


