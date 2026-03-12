#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "GetOrderDetail_200_response_ips_inner.h"

using namespace std;
using namespace Tizen::ArtikCloud;

GetOrderDetail_200_response_ips_inner::GetOrderDetail_200_response_ips_inner()
{
	//__init();
}

GetOrderDetail_200_response_ips_inner::~GetOrderDetail_200_response_ips_inner()
{
	//__cleanup();
}

void
GetOrderDetail_200_response_ips_inner::__init()
{
	//service_id = double(0);
	//service_module = std::string();
	//service_hostname = std::string();
}

void
GetOrderDetail_200_response_ips_inner::__cleanup()
{
	//if(service_id != NULL) {
	//
	//delete service_id;
	//service_id = NULL;
	//}
	//if(service_module != NULL) {
	//
	//delete service_module;
	//service_module = NULL;
	//}
	//if(service_hostname != NULL) {
	//
	//delete service_hostname;
	//service_hostname = NULL;
	//}
	//
}

void
GetOrderDetail_200_response_ips_inner::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *service_idKey = "service_id";
	node = json_object_get_member(pJsonObject, service_idKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&service_id, node, "long long", "");
		} else {
			
			long long* obj = static_cast<long long*> (&service_id);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *service_moduleKey = "service_module";
	node = json_object_get_member(pJsonObject, service_moduleKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&service_module, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *service_hostnameKey = "service_hostname";
	node = json_object_get_member(pJsonObject, service_hostnameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&service_hostname, node, "std::string", "");
		} else {
			
		}
	}
}

GetOrderDetail_200_response_ips_inner::GetOrderDetail_200_response_ips_inner(char* json)
{
	this->fromJson(json);
}

char*
GetOrderDetail_200_response_ips_inner::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("long long")) {
		long long obj = getServiceId();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
		long long obj = static_cast<long long> (getServiceId());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *service_idKey = "service_id";
	json_object_set_member(pJsonObject, service_idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getServiceModule();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *service_moduleKey = "service_module";
	json_object_set_member(pJsonObject, service_moduleKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getServiceHostname();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *service_hostnameKey = "service_hostname";
	json_object_set_member(pJsonObject, service_hostnameKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

long long
GetOrderDetail_200_response_ips_inner::getServiceId()
{
	return service_id;
}

void
GetOrderDetail_200_response_ips_inner::setServiceId(long long  service_id)
{
	this->service_id = service_id;
}

std::string
GetOrderDetail_200_response_ips_inner::getServiceModule()
{
	return service_module;
}

void
GetOrderDetail_200_response_ips_inner::setServiceModule(std::string  service_module)
{
	this->service_module = service_module;
}

std::string
GetOrderDetail_200_response_ips_inner::getServiceHostname()
{
	return service_hostname;
}

void
GetOrderDetail_200_response_ips_inner::setServiceHostname(std::string  service_hostname)
{
	this->service_hostname = service_hostname;
}


