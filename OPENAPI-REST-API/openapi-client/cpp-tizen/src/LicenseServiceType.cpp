#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "LicenseServiceType.h"

using namespace std;
using namespace Tizen::ArtikCloud;

LicenseServiceType::LicenseServiceType()
{
	//__init();
}

LicenseServiceType::~LicenseServiceType()
{
	//__cleanup();
}

void
LicenseServiceType::__init()
{
	//services_id = std::string();
	//services_name = std::string();
	//services_cost = std::string();
	//services_category = std::string();
	//services_buyable = std::string();
	//services_type = std::string();
	//services_field1 = std::string();
	//services_field2 = std::string();
	//services_module = std::string();
}

void
LicenseServiceType::__cleanup()
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
	//if(services_category != NULL) {
	//
	//delete services_category;
	//services_category = NULL;
	//}
	//if(services_buyable != NULL) {
	//
	//delete services_buyable;
	//services_buyable = NULL;
	//}
	//if(services_type != NULL) {
	//
	//delete services_type;
	//services_type = NULL;
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
LicenseServiceType::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *services_idKey = "services_id";
	node = json_object_get_member(pJsonObject, services_idKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&services_id, node, "std::string", "");
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
	

		if (isprimitive("std::string")) {
			jsonToValue(&services_cost, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *services_categoryKey = "services_category";
	node = json_object_get_member(pJsonObject, services_categoryKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&services_category, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *services_buyableKey = "services_buyable";
	node = json_object_get_member(pJsonObject, services_buyableKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&services_buyable, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *services_typeKey = "services_type";
	node = json_object_get_member(pJsonObject, services_typeKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&services_type, node, "std::string", "");
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

LicenseServiceType::LicenseServiceType(char* json)
{
	this->fromJson(json);
}

char*
LicenseServiceType::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getServicesId();
		node = converttoJson(&obj, "std::string", "");
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
	if (isprimitive("std::string")) {
		std::string obj = getServicesCost();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *services_costKey = "services_cost";
	json_object_set_member(pJsonObject, services_costKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getServicesCategory();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *services_categoryKey = "services_category";
	json_object_set_member(pJsonObject, services_categoryKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getServicesBuyable();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *services_buyableKey = "services_buyable";
	json_object_set_member(pJsonObject, services_buyableKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getServicesType();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *services_typeKey = "services_type";
	json_object_set_member(pJsonObject, services_typeKey, node);
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

std::string
LicenseServiceType::getServicesId()
{
	return services_id;
}

void
LicenseServiceType::setServicesId(std::string  services_id)
{
	this->services_id = services_id;
}

std::string
LicenseServiceType::getServicesName()
{
	return services_name;
}

void
LicenseServiceType::setServicesName(std::string  services_name)
{
	this->services_name = services_name;
}

std::string
LicenseServiceType::getServicesCost()
{
	return services_cost;
}

void
LicenseServiceType::setServicesCost(std::string  services_cost)
{
	this->services_cost = services_cost;
}

std::string
LicenseServiceType::getServicesCategory()
{
	return services_category;
}

void
LicenseServiceType::setServicesCategory(std::string  services_category)
{
	this->services_category = services_category;
}

std::string
LicenseServiceType::getServicesBuyable()
{
	return services_buyable;
}

void
LicenseServiceType::setServicesBuyable(std::string  services_buyable)
{
	this->services_buyable = services_buyable;
}

std::string
LicenseServiceType::getServicesType()
{
	return services_type;
}

void
LicenseServiceType::setServicesType(std::string  services_type)
{
	this->services_type = services_type;
}

std::string
LicenseServiceType::getServicesField1()
{
	return services_field1;
}

void
LicenseServiceType::setServicesField1(std::string  services_field1)
{
	this->services_field1 = services_field1;
}

std::string
LicenseServiceType::getServicesField2()
{
	return services_field2;
}

void
LicenseServiceType::setServicesField2(std::string  services_field2)
{
	this->services_field2 = services_field2;
}

std::string
LicenseServiceType::getServicesModule()
{
	return services_module;
}

void
LicenseServiceType::setServicesModule(std::string  services_module)
{
	this->services_module = services_module;
}


