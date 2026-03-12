#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "VpsTrafficDataSectionResponse.h"

using namespace std;
using namespace Tizen::ArtikCloud;

VpsTrafficDataSectionResponse::VpsTrafficDataSectionResponse()
{
	//__init();
}

VpsTrafficDataSectionResponse::~VpsTrafficDataSectionResponse()
{
	//__cleanup();
}

void
VpsTrafficDataSectionResponse::__init()
{
	//name = std::string();
	//new std::list()std::list> data;
}

void
VpsTrafficDataSectionResponse::__cleanup()
{
	//if(name != NULL) {
	//
	//delete name;
	//name = NULL;
	//}
	//if(data != NULL) {
	//data.RemoveAll(true);
	//delete data;
	//data = NULL;
	//}
	//
}

void
VpsTrafficDataSectionResponse::fromJson(char* jsonStr)
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
	const gchar *dataKey = "data";
	node = json_object_get_member(pJsonObject, dataKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<VPSTrafficDataDataSectionResponse> new_list;
			VPSTrafficDataDataSectionResponse inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("VPSTrafficDataDataSectionResponse")) {
					jsonToValue(&inst, temp_json, "VPSTrafficDataDataSectionResponse", "");
				} else {
					
					inst.fromJson(json_to_string(temp_json, false));
					
				}
				new_list.push_back(inst);
			}
			data = new_list;
		}
		
	}
}

VpsTrafficDataSectionResponse::VpsTrafficDataSectionResponse(char* json)
{
	this->fromJson(json);
}

char*
VpsTrafficDataSectionResponse::toJson()
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
	if (isprimitive("VPSTrafficDataDataSectionResponse")) {
		list<VPSTrafficDataDataSectionResponse> new_list = static_cast<list <VPSTrafficDataDataSectionResponse> > (getData());
		node = converttoJson(&new_list, "VPSTrafficDataDataSectionResponse", "array");
	} else {
		node = json_node_alloc();
		list<VPSTrafficDataDataSectionResponse> new_list = static_cast<list <VPSTrafficDataDataSectionResponse> > (getData());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<VPSTrafficDataDataSectionResponse>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			VPSTrafficDataDataSectionResponse obj = *it;
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
VpsTrafficDataSectionResponse::getName()
{
	return name;
}

void
VpsTrafficDataSectionResponse::setName(std::string  name)
{
	this->name = name;
}

std::list<VPSTrafficDataDataSectionResponse>
VpsTrafficDataSectionResponse::getData()
{
	return data;
}

void
VpsTrafficDataSectionResponse::setData(std::list <VPSTrafficDataDataSectionResponse> data)
{
	this->data = data;
}


