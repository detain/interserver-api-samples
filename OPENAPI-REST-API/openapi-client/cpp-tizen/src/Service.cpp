#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "Service.h"

using namespace std;
using namespace Tizen::ArtikCloud;

Service::Service()
{
	//__init();
}

Service::~Service()
{
	//__cleanup();
}

void
Service::__init()
{
	//services_id = int(0);
	//services_name = std::string();
	//services_cost = double(0);
	//services_currency = std::string();
	//services_category = int(0);
	//services_buyable = bool(false);
	//services_type = int(0);
	//services_field1 = std::string();
	//services_field2 = std::string();
	//services_module = std::string();
}

void
Service::__cleanup()
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
	//if(services_currency != NULL) {
	//
	//delete services_currency;
	//services_currency = NULL;
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
Service::fromJson(char* jsonStr)
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
	

		if (isprimitive("long long")) {
			jsonToValue(&services_cost, node, "long long", "");
		} else {
			
			long long* obj = static_cast<long long*> (&services_cost);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *services_currencyKey = "services_currency";
	node = json_object_get_member(pJsonObject, services_currencyKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&services_currency, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *services_categoryKey = "services_category";
	node = json_object_get_member(pJsonObject, services_categoryKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&services_category, node, "int", "");
		} else {
			
		}
	}
	const gchar *services_buyableKey = "services_buyable";
	node = json_object_get_member(pJsonObject, services_buyableKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&services_buyable, node, "bool", "");
		} else {
			
		}
	}
	const gchar *services_typeKey = "services_type";
	node = json_object_get_member(pJsonObject, services_typeKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&services_type, node, "int", "");
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

Service::Service(char* json)
{
	this->fromJson(json);
}

char*
Service::toJson()
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
	if (isprimitive("long long")) {
		long long obj = getServicesCost();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
		long long obj = static_cast<long long> (getServicesCost());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *services_costKey = "services_cost";
	json_object_set_member(pJsonObject, services_costKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getServicesCurrency();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *services_currencyKey = "services_currency";
	json_object_set_member(pJsonObject, services_currencyKey, node);
	if (isprimitive("int")) {
		int obj = getServicesCategory();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *services_categoryKey = "services_category";
	json_object_set_member(pJsonObject, services_categoryKey, node);
	if (isprimitive("bool")) {
		bool obj = getServicesBuyable();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *services_buyableKey = "services_buyable";
	json_object_set_member(pJsonObject, services_buyableKey, node);
	if (isprimitive("int")) {
		int obj = getServicesType();
		node = converttoJson(&obj, "int", "");
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

int
Service::getServicesId()
{
	return services_id;
}

void
Service::setServicesId(int  services_id)
{
	this->services_id = services_id;
}

std::string
Service::getServicesName()
{
	return services_name;
}

void
Service::setServicesName(std::string  services_name)
{
	this->services_name = services_name;
}

long long
Service::getServicesCost()
{
	return services_cost;
}

void
Service::setServicesCost(long long  services_cost)
{
	this->services_cost = services_cost;
}

std::string
Service::getServicesCurrency()
{
	return services_currency;
}

void
Service::setServicesCurrency(std::string  services_currency)
{
	this->services_currency = services_currency;
}

int
Service::getServicesCategory()
{
	return services_category;
}

void
Service::setServicesCategory(int  services_category)
{
	this->services_category = services_category;
}

bool
Service::getServicesBuyable()
{
	return services_buyable;
}

void
Service::setServicesBuyable(bool  services_buyable)
{
	this->services_buyable = services_buyable;
}

int
Service::getServicesType()
{
	return services_type;
}

void
Service::setServicesType(int  services_type)
{
	this->services_type = services_type;
}

std::string
Service::getServicesField1()
{
	return services_field1;
}

void
Service::setServicesField1(std::string  services_field1)
{
	this->services_field1 = services_field1;
}

std::string
Service::getServicesField2()
{
	return services_field2;
}

void
Service::setServicesField2(std::string  services_field2)
{
	this->services_field2 = services_field2;
}

std::string
Service::getServicesModule()
{
	return services_module;
}

void
Service::setServicesModule(std::string  services_module)
{
	this->services_module = services_module;
}


