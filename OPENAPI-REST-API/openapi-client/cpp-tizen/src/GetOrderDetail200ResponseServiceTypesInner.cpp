#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "GetOrderDetail_200_response_serviceTypes_inner.h"

using namespace std;
using namespace Tizen::ArtikCloud;

GetOrderDetail_200_response_serviceTypes_inner::GetOrderDetail_200_response_serviceTypes_inner()
{
	//__init();
}

GetOrderDetail_200_response_serviceTypes_inner::~GetOrderDetail_200_response_serviceTypes_inner()
{
	//__cleanup();
}

void
GetOrderDetail_200_response_serviceTypes_inner::__init()
{
	//services_id = int(0);
	//services_name = std::string();
	//services_cost = int(0);
	//services_field1 = std::string();
	//services_field2 = std::string();
	//services_module = std::string();
}

void
GetOrderDetail_200_response_serviceTypes_inner::__cleanup()
{
	//if(services_id != NULL) {
	//
	//delete services_id;
	//services_id = NULL;
	//}
	//if(services_name != NULL) {
	//
	//delete services_name;
	//services_name = NULL;
	//}
	//if(services_cost != NULL) {
	//
	//delete services_cost;
	//services_cost = NULL;
	//}
	//if(services_field1 != NULL) {
	//
	//delete services_field1;
	//services_field1 = NULL;
	//}
	//if(services_field2 != NULL) {
	//
	//delete services_field2;
	//services_field2 = NULL;
	//}
	//if(services_module != NULL) {
	//
	//delete services_module;
	//services_module = NULL;
	//}
	//
}

void
GetOrderDetail_200_response_serviceTypes_inner::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *services_idKey = "services_id";
	node = json_object_get_member(pJsonObject, services_idKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&services_id, node, "int", "");
		} else {
			
		}
	}
	const gchar *services_nameKey = "services_name";
	node = json_object_get_member(pJsonObject, services_nameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&services_name, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *services_costKey = "services_cost";
	node = json_object_get_member(pJsonObject, services_costKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&services_cost, node, "int", "");
		} else {
			
		}
	}
	const gchar *services_field1Key = "services_field1";
	node = json_object_get_member(pJsonObject, services_field1Key);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&services_field1, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *services_field2Key = "services_field2";
	node = json_object_get_member(pJsonObject, services_field2Key);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&services_field2, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *services_moduleKey = "services_module";
	node = json_object_get_member(pJsonObject, services_moduleKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&services_module, node, "std::string", "");
		} else {
			
		}
	}
}

GetOrderDetail_200_response_serviceTypes_inner::GetOrderDetail_200_response_serviceTypes_inner(char* json)
{
	this->fromJson(json);
}

char*
GetOrderDetail_200_response_serviceTypes_inner::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("int")) {
		int obj = getServicesId();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *services_idKey = "services_id";
	json_object_set_member(pJsonObject, services_idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getServicesName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *services_nameKey = "services_name";
	json_object_set_member(pJsonObject, services_nameKey, node);
	if (isprimitive("int")) {
		int obj = getServicesCost();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *services_costKey = "services_cost";
	json_object_set_member(pJsonObject, services_costKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getServicesField1();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *services_field1Key = "services_field1";
	json_object_set_member(pJsonObject, services_field1Key, node);
	if (isprimitive("std::string")) {
		std::string obj = getServicesField2();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *services_field2Key = "services_field2";
	json_object_set_member(pJsonObject, services_field2Key, node);
	if (isprimitive("std::string")) {
		std::string obj = getServicesModule();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *services_moduleKey = "services_module";
	json_object_set_member(pJsonObject, services_moduleKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

int
GetOrderDetail_200_response_serviceTypes_inner::getServicesId()
{
	return services_id;
}

void
GetOrderDetail_200_response_serviceTypes_inner::setServicesId(int  services_id)
{
	this->services_id = services_id;
}

std::string
GetOrderDetail_200_response_serviceTypes_inner::getServicesName()
{
	return services_name;
}

void
GetOrderDetail_200_response_serviceTypes_inner::setServicesName(std::string  services_name)
{
	this->services_name = services_name;
}

int
GetOrderDetail_200_response_serviceTypes_inner::getServicesCost()
{
	return services_cost;
}

void
GetOrderDetail_200_response_serviceTypes_inner::setServicesCost(int  services_cost)
{
	this->services_cost = services_cost;
}

std::string
GetOrderDetail_200_response_serviceTypes_inner::getServicesField1()
{
	return services_field1;
}

void
GetOrderDetail_200_response_serviceTypes_inner::setServicesField1(std::string  services_field1)
{
	this->services_field1 = services_field1;
}

std::string
GetOrderDetail_200_response_serviceTypes_inner::getServicesField2()
{
	return services_field2;
}

void
GetOrderDetail_200_response_serviceTypes_inner::setServicesField2(std::string  services_field2)
{
	this->services_field2 = services_field2;
}

std::string
GetOrderDetail_200_response_serviceTypes_inner::getServicesModule()
{
	return services_module;
}

void
GetOrderDetail_200_response_serviceTypes_inner::setServicesModule(std::string  services_module)
{
	this->services_module = services_module;
}


