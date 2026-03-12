#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "VpsTrafficHistorySectionResponse.h"

using namespace std;
using namespace Tizen::ArtikCloud;

VpsTrafficHistorySectionResponse::VpsTrafficHistorySectionResponse()
{
	//__init();
}

VpsTrafficHistorySectionResponse::~VpsTrafficHistorySectionResponse()
{
	//__cleanup();
}

void
VpsTrafficHistorySectionResponse::__init()
{
	//new std::list()std::list> data;
	//new std::list()std::list> times;
}

void
VpsTrafficHistorySectionResponse::__cleanup()
{
	//if(data != NULL) {
	//data.RemoveAll(true);
	//delete data;
	//data = NULL;
	//}
	//if(times != NULL) {
	//times.RemoveAll(true);
	//delete times;
	//times = NULL;
	//}
	//
}

void
VpsTrafficHistorySectionResponse::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *dataKey = "data";
	node = json_object_get_member(pJsonObject, dataKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<VpsTrafficHistorySectionDataResponse> new_list;
			VpsTrafficHistorySectionDataResponse inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("VpsTrafficHistorySectionDataResponse")) {
					jsonToValue(&inst, temp_json, "VpsTrafficHistorySectionDataResponse", "");
				} else {
					
					inst.fromJson(json_to_string(temp_json, false));
					
				}
				new_list.push_back(inst);
			}
			data = new_list;
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
}

VpsTrafficHistorySectionResponse::VpsTrafficHistorySectionResponse(char* json)
{
	this->fromJson(json);
}

char*
VpsTrafficHistorySectionResponse::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("VpsTrafficHistorySectionDataResponse")) {
		list<VpsTrafficHistorySectionDataResponse> new_list = static_cast<list <VpsTrafficHistorySectionDataResponse> > (getData());
		node = converttoJson(&new_list, "VpsTrafficHistorySectionDataResponse", "array");
	} else {
		node = json_node_alloc();
		list<VpsTrafficHistorySectionDataResponse> new_list = static_cast<list <VpsTrafficHistorySectionDataResponse> > (getData());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<VpsTrafficHistorySectionDataResponse>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			VpsTrafficHistorySectionDataResponse obj = *it;
			JsonNode *node_temp = json_from_string(obj.toJson(), &mygerror);
			json_array_add_element(json_array, node_temp);
			g_clear_error(&mygerror);
		}
		json_node_init_array(node, json_array);
		json_array_unref(json_array);
		
	}


	
	const gchar *dataKey = "data";
	json_object_set_member(pJsonObject, dataKey, node);
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
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::list<VpsTrafficHistorySectionDataResponse>
VpsTrafficHistorySectionResponse::getData()
{
	return data;
}

void
VpsTrafficHistorySectionResponse::setData(std::list <VpsTrafficHistorySectionDataResponse> data)
{
	this->data = data;
}

std::list<std::string>
VpsTrafficHistorySectionResponse::getTimes()
{
	return times;
}

void
VpsTrafficHistorySectionResponse::setTimes(std::list <std::string> times)
{
	this->times = times;
}


