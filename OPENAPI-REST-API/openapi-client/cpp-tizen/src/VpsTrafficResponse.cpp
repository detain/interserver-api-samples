#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "VpsTrafficResponse.h"

using namespace std;
using namespace Tizen::ArtikCloud;

VpsTrafficResponse::VpsTrafficResponse()
{
	//__init();
}

VpsTrafficResponse::~VpsTrafficResponse()
{
	//__cleanup();
}

void
VpsTrafficResponse::__init()
{
	//name = std::string();
	//target = std::string();
	//interval = int(0);
	//history = new VpsTrafficHistoryResponse();
	//last = null;
	//new std::list()std::list> times;
	//totals = new VpsTrafficTotalsResposne();
	//usage = new VpsTrafficUsageResponse();
	//new std::list()std::list> data;
}

void
VpsTrafficResponse::__cleanup()
{
	//if(name != NULL) {
	//
	//delete name;
	//name = NULL;
	//}
	//if(target != NULL) {
	//
	//delete target;
	//target = NULL;
	//}
	//if(interval != NULL) {
	//
	//delete interval;
	//interval = NULL;
	//}
	//if(history != NULL) {
	//
	//delete history;
	//history = NULL;
	//}
	//if(last != NULL) {
	//
	//delete last;
	//last = NULL;
	//}
	//if(times != NULL) {
	//times.RemoveAll(true);
	//delete times;
	//times = NULL;
	//}
	//if(totals != NULL) {
	//
	//delete totals;
	//totals = NULL;
	//}
	//if(usage != NULL) {
	//
	//delete usage;
	//usage = NULL;
	//}
	//if(data != NULL) {
	//data.RemoveAll(true);
	//delete data;
	//data = NULL;
	//}
	//
}

void
VpsTrafficResponse::fromJson(char* jsonStr)
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
	const gchar *targetKey = "target";
	node = json_object_get_member(pJsonObject, targetKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&target, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *intervalKey = "interval";
	node = json_object_get_member(pJsonObject, intervalKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&interval, node, "int", "");
		} else {
			
		}
	}
	const gchar *historyKey = "history";
	node = json_object_get_member(pJsonObject, historyKey);
	if (node !=NULL) {
	

		if (isprimitive("VpsTrafficHistoryResponse")) {
			jsonToValue(&history, node, "VpsTrafficHistoryResponse", "VpsTrafficHistoryResponse");
		} else {
			
			VpsTrafficHistoryResponse* obj = static_cast<VpsTrafficHistoryResponse*> (&history);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *lastKey = "last";
	node = json_object_get_member(pJsonObject, lastKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&last, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *timesKey = "times";
	node = json_object_get_member(pJsonObject, timesKey);
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
			times = new_list;
		}
		
	}
	const gchar *totalsKey = "totals";
	node = json_object_get_member(pJsonObject, totalsKey);
	if (node !=NULL) {
	

		if (isprimitive("VpsTrafficTotalsResposne")) {
			jsonToValue(&totals, node, "VpsTrafficTotalsResposne", "VpsTrafficTotalsResposne");
		} else {
			
			VpsTrafficTotalsResposne* obj = static_cast<VpsTrafficTotalsResposne*> (&totals);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *usageKey = "usage";
	node = json_object_get_member(pJsonObject, usageKey);
	if (node !=NULL) {
	

		if (isprimitive("VpsTrafficUsageResponse")) {
			jsonToValue(&usage, node, "VpsTrafficUsageResponse", "VpsTrafficUsageResponse");
		} else {
			
			VpsTrafficUsageResponse* obj = static_cast<VpsTrafficUsageResponse*> (&usage);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *dataKey = "data";
	node = json_object_get_member(pJsonObject, dataKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<VpsTrafficDataSectionResponse> new_list;
			VpsTrafficDataSectionResponse inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("VpsTrafficDataSectionResponse")) {
					jsonToValue(&inst, temp_json, "VpsTrafficDataSectionResponse", "");
				} else {
					
					inst.fromJson(json_to_string(temp_json, false));
					
				}
				new_list.push_back(inst);
			}
			data = new_list;
		}
		
	}
}

VpsTrafficResponse::VpsTrafficResponse(char* json)
{
	this->fromJson(json);
}

char*
VpsTrafficResponse::toJson()
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
	if (isprimitive("std::string")) {
		std::string obj = getTarget();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *targetKey = "target";
	json_object_set_member(pJsonObject, targetKey, node);
	if (isprimitive("int")) {
		int obj = getInterval();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *intervalKey = "interval";
	json_object_set_member(pJsonObject, intervalKey, node);
	if (isprimitive("VpsTrafficHistoryResponse")) {
		VpsTrafficHistoryResponse obj = getHistory();
		node = converttoJson(&obj, "VpsTrafficHistoryResponse", "");
	}
	else {
		
		VpsTrafficHistoryResponse obj = static_cast<VpsTrafficHistoryResponse> (getHistory());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *historyKey = "history";
	json_object_set_member(pJsonObject, historyKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getLast();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *lastKey = "last";
	json_object_set_member(pJsonObject, lastKey, node);
	if (isprimitive("std::string")) {
		list<std::string> new_list = static_cast<list <std::string> > (getTimes());
		node = converttoJson(&new_list, "std::string", "array");
	} else {
		node = json_node_alloc();
		list<std::string> new_list = static_cast<list <std::string> > (getTimes());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
	}


	
	const gchar *timesKey = "times";
	json_object_set_member(pJsonObject, timesKey, node);
	if (isprimitive("VpsTrafficTotalsResposne")) {
		VpsTrafficTotalsResposne obj = getTotals();
		node = converttoJson(&obj, "VpsTrafficTotalsResposne", "");
	}
	else {
		
		VpsTrafficTotalsResposne obj = static_cast<VpsTrafficTotalsResposne> (getTotals());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *totalsKey = "totals";
	json_object_set_member(pJsonObject, totalsKey, node);
	if (isprimitive("VpsTrafficUsageResponse")) {
		VpsTrafficUsageResponse obj = getUsage();
		node = converttoJson(&obj, "VpsTrafficUsageResponse", "");
	}
	else {
		
		VpsTrafficUsageResponse obj = static_cast<VpsTrafficUsageResponse> (getUsage());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *usageKey = "usage";
	json_object_set_member(pJsonObject, usageKey, node);
	if (isprimitive("VpsTrafficDataSectionResponse")) {
		list<VpsTrafficDataSectionResponse> new_list = static_cast<list <VpsTrafficDataSectionResponse> > (getData());
		node = converttoJson(&new_list, "VpsTrafficDataSectionResponse", "array");
	} else {
		node = json_node_alloc();
		list<VpsTrafficDataSectionResponse> new_list = static_cast<list <VpsTrafficDataSectionResponse> > (getData());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<VpsTrafficDataSectionResponse>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			VpsTrafficDataSectionResponse obj = *it;
			JsonNode *node_temp = json_from_string(obj.toJson(), &mygerror);
			json_array_add_element(json_array, node_temp);
			g_clear_error(&mygerror);
		}
		json_node_init_array(node, json_array);
		json_array_unref(json_array);
		
	}


	
	const gchar *dataKey = "data";
	json_object_set_member(pJsonObject, dataKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
VpsTrafficResponse::getName()
{
	return name;
}

void
VpsTrafficResponse::setName(std::string  name)
{
	this->name = name;
}

std::string
VpsTrafficResponse::getTarget()
{
	return target;
}

void
VpsTrafficResponse::setTarget(std::string  target)
{
	this->target = target;
}

int
VpsTrafficResponse::getInterval()
{
	return interval;
}

void
VpsTrafficResponse::setInterval(int  interval)
{
	this->interval = interval;
}

VpsTrafficHistoryResponse
VpsTrafficResponse::getHistory()
{
	return history;
}

void
VpsTrafficResponse::setHistory(VpsTrafficHistoryResponse  history)
{
	this->history = history;
}

std::string
VpsTrafficResponse::getLast()
{
	return last;
}

void
VpsTrafficResponse::setLast(std::string  last)
{
	this->last = last;
}

std::list<std::string>
VpsTrafficResponse::getTimes()
{
	return times;
}

void
VpsTrafficResponse::setTimes(std::list <std::string> times)
{
	this->times = times;
}

VpsTrafficTotalsResposne
VpsTrafficResponse::getTotals()
{
	return totals;
}

void
VpsTrafficResponse::setTotals(VpsTrafficTotalsResposne  totals)
{
	this->totals = totals;
}

VpsTrafficUsageResponse
VpsTrafficResponse::getUsage()
{
	return usage;
}

void
VpsTrafficResponse::setUsage(VpsTrafficUsageResponse  usage)
{
	this->usage = usage;
}

std::list<VpsTrafficDataSectionResponse>
VpsTrafficResponse::getData()
{
	return data;
}

void
VpsTrafficResponse::setData(std::list <VpsTrafficDataSectionResponse> data)
{
	this->data = data;
}


