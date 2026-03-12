#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "BackupsOrder.h"

using namespace std;
using namespace Tizen::ArtikCloud;

BackupsOrder::BackupsOrder()
{
	//__init();
}

BackupsOrder::~BackupsOrder()
{
	//__cleanup();
}

void
BackupsOrder::__init()
{
	//packageCosts = new BackupsOrderPackageCosts();
	//serviceTypes = new BackupsOrder_serviceTypes();
}

void
BackupsOrder::__cleanup()
{
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
BackupsOrder::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *packageCostsKey = "packageCosts";
	node = json_object_get_member(pJsonObject, packageCostsKey);
	if (node !=NULL) {
	

		if (isprimitive("BackupsOrderPackageCosts")) {
			jsonToValue(&packageCosts, node, "BackupsOrderPackageCosts", "BackupsOrderPackageCosts");
		} else {
			
			BackupsOrderPackageCosts* obj = static_cast<BackupsOrderPackageCosts*> (&packageCosts);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *serviceTypesKey = "serviceTypes";
	node = json_object_get_member(pJsonObject, serviceTypesKey);
	if (node !=NULL) {
	

		if (isprimitive("BackupsOrder_serviceTypes")) {
			jsonToValue(&serviceTypes, node, "BackupsOrder_serviceTypes", "BackupsOrder_serviceTypes");
		} else {
			
			BackupsOrder_serviceTypes* obj = static_cast<BackupsOrder_serviceTypes*> (&serviceTypes);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
}

BackupsOrder::BackupsOrder(char* json)
{
	this->fromJson(json);
}

char*
BackupsOrder::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("BackupsOrderPackageCosts")) {
		BackupsOrderPackageCosts obj = getPackageCosts();
		node = converttoJson(&obj, "BackupsOrderPackageCosts", "");
	}
	else {
		
		BackupsOrderPackageCosts obj = static_cast<BackupsOrderPackageCosts> (getPackageCosts());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *packageCostsKey = "packageCosts";
	json_object_set_member(pJsonObject, packageCostsKey, node);
	if (isprimitive("BackupsOrder_serviceTypes")) {
		BackupsOrder_serviceTypes obj = getServiceTypes();
		node = converttoJson(&obj, "BackupsOrder_serviceTypes", "");
	}
	else {
		
		BackupsOrder_serviceTypes obj = static_cast<BackupsOrder_serviceTypes> (getServiceTypes());
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

BackupsOrderPackageCosts
BackupsOrder::getPackageCosts()
{
	return packageCosts;
}

void
BackupsOrder::setPackageCosts(BackupsOrderPackageCosts  packageCosts)
{
	this->packageCosts = packageCosts;
}

BackupsOrder_serviceTypes
BackupsOrder::getServiceTypes()
{
	return serviceTypes;
}

void
BackupsOrder::setServiceTypes(BackupsOrder_serviceTypes  serviceTypes)
{
	this->serviceTypes = serviceTypes;
}


