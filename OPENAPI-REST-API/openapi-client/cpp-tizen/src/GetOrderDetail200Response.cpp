#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "GetOrderDetail_200_response.h"

using namespace std;
using namespace Tizen::ArtikCloud;

GetOrderDetail_200_response::GetOrderDetail_200_response()
{
	//__init();
}

GetOrderDetail_200_response::~GetOrderDetail_200_response()
{
	//__cleanup();
}

void
GetOrderDetail_200_response::__init()
{
	//packageCosts = new GetOrderDetail_200_response_packageCosts();
	//new std::list()std::list> serviceTypes;
	//new std::list()std::list> ips;
}

void
GetOrderDetail_200_response::__cleanup()
{
	//if(packageCosts != NULL) {
	//
	//delete packageCosts;
	//packageCosts = NULL;
	//}
	//if(serviceTypes != NULL) {
	//serviceTypes.RemoveAll(true);
	//delete serviceTypes;
	//serviceTypes = NULL;
	//}
	//if(ips != NULL) {
	//ips.RemoveAll(true);
	//delete ips;
	//ips = NULL;
	//}
	//
}

void
GetOrderDetail_200_response::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *packageCostsKey = "packageCosts";
	node = json_object_get_member(pJsonObject, packageCostsKey);
	if (node !=NULL) {
	

		if (isprimitive("GetOrderDetail_200_response_packageCosts")) {
			jsonToValue(&packageCosts, node, "GetOrderDetail_200_response_packageCosts", "GetOrderDetail_200_response_packageCosts");
		} else {
			
			GetOrderDetail_200_response_packageCosts* obj = static_cast<GetOrderDetail_200_response_packageCosts*> (&packageCosts);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *serviceTypesKey = "serviceTypes";
	node = json_object_get_member(pJsonObject, serviceTypesKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<GetOrderDetail_200_response_serviceTypes_inner> new_list;
			GetOrderDetail_200_response_serviceTypes_inner inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("GetOrderDetail_200_response_serviceTypes_inner")) {
					jsonToValue(&inst, temp_json, "GetOrderDetail_200_response_serviceTypes_inner", "");
				} else {
					
					inst.fromJson(json_to_string(temp_json, false));
					
				}
				new_list.push_back(inst);
			}
			serviceTypes = new_list;
		}
		
	}
	const gchar *ipsKey = "ips";
	node = json_object_get_member(pJsonObject, ipsKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<GetOrderDetail_200_response_ips_inner> new_list;
			GetOrderDetail_200_response_ips_inner inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("GetOrderDetail_200_response_ips_inner")) {
					jsonToValue(&inst, temp_json, "GetOrderDetail_200_response_ips_inner", "");
				} else {
					
					inst.fromJson(json_to_string(temp_json, false));
					
				}
				new_list.push_back(inst);
			}
			ips = new_list;
		}
		
	}
}

GetOrderDetail_200_response::GetOrderDetail_200_response(char* json)
{
	this->fromJson(json);
}

char*
GetOrderDetail_200_response::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("GetOrderDetail_200_response_packageCosts")) {
		GetOrderDetail_200_response_packageCosts obj = getPackageCosts();
		node = converttoJson(&obj, "GetOrderDetail_200_response_packageCosts", "");
	}
	else {
		
		GetOrderDetail_200_response_packageCosts obj = static_cast<GetOrderDetail_200_response_packageCosts> (getPackageCosts());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *packageCostsKey = "packageCosts";
	json_object_set_member(pJsonObject, packageCostsKey, node);
	if (isprimitive("GetOrderDetail_200_response_serviceTypes_inner")) {
		list<GetOrderDetail_200_response_serviceTypes_inner> new_list = static_cast<list <GetOrderDetail_200_response_serviceTypes_inner> > (getServiceTypes());
		node = converttoJson(&new_list, "GetOrderDetail_200_response_serviceTypes_inner", "array");
	} else {
		node = json_node_alloc();
		list<GetOrderDetail_200_response_serviceTypes_inner> new_list = static_cast<list <GetOrderDetail_200_response_serviceTypes_inner> > (getServiceTypes());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<GetOrderDetail_200_response_serviceTypes_inner>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			GetOrderDetail_200_response_serviceTypes_inner obj = *it;
			JsonNode *node_temp = json_from_string(obj.toJson(), &mygerror);
			json_array_add_element(json_array, node_temp);
			g_clear_error(&mygerror);
		}
		json_node_init_array(node, json_array);
		json_array_unref(json_array);
		
	}


	
	const gchar *serviceTypesKey = "serviceTypes";
	json_object_set_member(pJsonObject, serviceTypesKey, node);
	if (isprimitive("GetOrderDetail_200_response_ips_inner")) {
		list<GetOrderDetail_200_response_ips_inner> new_list = static_cast<list <GetOrderDetail_200_response_ips_inner> > (getIps());
		node = converttoJson(&new_list, "GetOrderDetail_200_response_ips_inner", "array");
	} else {
		node = json_node_alloc();
		list<GetOrderDetail_200_response_ips_inner> new_list = static_cast<list <GetOrderDetail_200_response_ips_inner> > (getIps());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<GetOrderDetail_200_response_ips_inner>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			GetOrderDetail_200_response_ips_inner obj = *it;
			JsonNode *node_temp = json_from_string(obj.toJson(), &mygerror);
			json_array_add_element(json_array, node_temp);
			g_clear_error(&mygerror);
		}
		json_node_init_array(node, json_array);
		json_array_unref(json_array);
		
	}


	
	const gchar *ipsKey = "ips";
	json_object_set_member(pJsonObject, ipsKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

GetOrderDetail_200_response_packageCosts
GetOrderDetail_200_response::getPackageCosts()
{
	return packageCosts;
}

void
GetOrderDetail_200_response::setPackageCosts(GetOrderDetail_200_response_packageCosts  packageCosts)
{
	this->packageCosts = packageCosts;
}

std::list<GetOrderDetail_200_response_serviceTypes_inner>
GetOrderDetail_200_response::getServiceTypes()
{
	return serviceTypes;
}

void
GetOrderDetail_200_response::setServiceTypes(std::list <GetOrderDetail_200_response_serviceTypes_inner> serviceTypes)
{
	this->serviceTypes = serviceTypes;
}

std::list<GetOrderDetail_200_response_ips_inner>
GetOrderDetail_200_response::getIps()
{
	return ips;
}

void
GetOrderDetail_200_response::setIps(std::list <GetOrderDetail_200_response_ips_inner> ips)
{
	this->ips = ips;
}


