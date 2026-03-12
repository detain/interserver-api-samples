#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "LicensesOrder.h"

using namespace std;
using namespace Tizen::ArtikCloud;

LicensesOrder::LicensesOrder()
{
	//__init();
}

LicensesOrder::~LicensesOrder()
{
	//__cleanup();
}

void
LicensesOrder::__init()
{
	//serviceCategories = new LicensesOrder_serviceCategories();
	//packageCosts = new LicensesOrder_packageCosts();
	//serviceTypes = new LicensesOrder_serviceTypes();
}

void
LicensesOrder::__cleanup()
{
	//if(serviceCategories != NULL) {
	//
	//delete serviceCategories;
	//serviceCategories = NULL;
	//}
	//if(packageCosts != NULL) {
	//
	//delete packageCosts;
	//packageCosts = NULL;
	//}
	//if(serviceTypes != NULL) {
	//
	//delete serviceTypes;
	//serviceTypes = NULL;
	//}
	//
}

void
LicensesOrder::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *serviceCategoriesKey = "serviceCategories";
	node = json_object_get_member(pJsonObject, serviceCategoriesKey);
	if (node !=NULL) {
	

		if (isprimitive("LicensesOrder_serviceCategories")) {
			jsonToValue(&serviceCategories, node, "LicensesOrder_serviceCategories", "LicensesOrder_serviceCategories");
		} else {
			
			LicensesOrder_serviceCategories* obj = static_cast<LicensesOrder_serviceCategories*> (&serviceCategories);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *packageCostsKey = "packageCosts";
	node = json_object_get_member(pJsonObject, packageCostsKey);
	if (node !=NULL) {
	

		if (isprimitive("LicensesOrder_packageCosts")) {
			jsonToValue(&packageCosts, node, "LicensesOrder_packageCosts", "LicensesOrder_packageCosts");
		} else {
			
			LicensesOrder_packageCosts* obj = static_cast<LicensesOrder_packageCosts*> (&packageCosts);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *serviceTypesKey = "serviceTypes";
	node = json_object_get_member(pJsonObject, serviceTypesKey);
	if (node !=NULL) {
	

		if (isprimitive("LicensesOrder_serviceTypes")) {
			jsonToValue(&serviceTypes, node, "LicensesOrder_serviceTypes", "LicensesOrder_serviceTypes");
		} else {
			
			LicensesOrder_serviceTypes* obj = static_cast<LicensesOrder_serviceTypes*> (&serviceTypes);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
}

LicensesOrder::LicensesOrder(char* json)
{
	this->fromJson(json);
}

char*
LicensesOrder::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("LicensesOrder_serviceCategories")) {
		LicensesOrder_serviceCategories obj = getServiceCategories();
		node = converttoJson(&obj, "LicensesOrder_serviceCategories", "");
	}
	else {
		
		LicensesOrder_serviceCategories obj = static_cast<LicensesOrder_serviceCategories> (getServiceCategories());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *serviceCategoriesKey = "serviceCategories";
	json_object_set_member(pJsonObject, serviceCategoriesKey, node);
	if (isprimitive("LicensesOrder_packageCosts")) {
		LicensesOrder_packageCosts obj = getPackageCosts();
		node = converttoJson(&obj, "LicensesOrder_packageCosts", "");
	}
	else {
		
		LicensesOrder_packageCosts obj = static_cast<LicensesOrder_packageCosts> (getPackageCosts());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *packageCostsKey = "packageCosts";
	json_object_set_member(pJsonObject, packageCostsKey, node);
	if (isprimitive("LicensesOrder_serviceTypes")) {
		LicensesOrder_serviceTypes obj = getServiceTypes();
		node = converttoJson(&obj, "LicensesOrder_serviceTypes", "");
	}
	else {
		
		LicensesOrder_serviceTypes obj = static_cast<LicensesOrder_serviceTypes> (getServiceTypes());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *serviceTypesKey = "serviceTypes";
	json_object_set_member(pJsonObject, serviceTypesKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

LicensesOrder_serviceCategories
LicensesOrder::getServiceCategories()
{
	return serviceCategories;
}

void
LicensesOrder::setServiceCategories(LicensesOrder_serviceCategories  serviceCategories)
{
	this->serviceCategories = serviceCategories;
}

LicensesOrder_packageCosts
LicensesOrder::getPackageCosts()
{
	return packageCosts;
}

void
LicensesOrder::setPackageCosts(LicensesOrder_packageCosts  packageCosts)
{
	this->packageCosts = packageCosts;
}

LicensesOrder_serviceTypes
LicensesOrder::getServiceTypes()
{
	return serviceTypes;
}

void
LicensesOrder::setServiceTypes(LicensesOrder_serviceTypes  serviceTypes)
{
	this->serviceTypes = serviceTypes;
}


