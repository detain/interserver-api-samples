#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "GetOrderDetail_200_response_packageCosts.h"

using namespace std;
using namespace Tizen::ArtikCloud;

GetOrderDetail_200_response_packageCosts::GetOrderDetail_200_response_packageCosts()
{
	//__init();
}

GetOrderDetail_200_response_packageCosts::~GetOrderDetail_200_response_packageCosts()
{
	//__cleanup();
}

void
GetOrderDetail_200_response_packageCosts::__init()
{
	//package_id = double(0);
	//package_cost = double(0);
	//currency = std::string();
	//currencySymbol = std::string();
}

void
GetOrderDetail_200_response_packageCosts::__cleanup()
{
	//if(package_id != NULL) {
	//
	//delete package_id;
	//package_id = NULL;
	//}
	//if(package_cost != NULL) {
	//
	//delete package_cost;
	//package_cost = NULL;
	//}
	//if(currency != NULL) {
	//
	//delete currency;
	//currency = NULL;
	//}
	//if(currencySymbol != NULL) {
	//
	//delete currencySymbol;
	//currencySymbol = NULL;
	//}
	//
}

void
GetOrderDetail_200_response_packageCosts::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *package_idKey = "package_id";
	node = json_object_get_member(pJsonObject, package_idKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&package_id, node, "long long", "");
		} else {
			
			long long* obj = static_cast<long long*> (&package_id);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *package_costKey = "package_cost";
	node = json_object_get_member(pJsonObject, package_costKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&package_cost, node, "long long", "");
		} else {
			
			long long* obj = static_cast<long long*> (&package_cost);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *currencyKey = "currency";
	node = json_object_get_member(pJsonObject, currencyKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&currency, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *currencySymbolKey = "currencySymbol";
	node = json_object_get_member(pJsonObject, currencySymbolKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&currencySymbol, node, "std::string", "");
		} else {
			
		}
	}
}

GetOrderDetail_200_response_packageCosts::GetOrderDetail_200_response_packageCosts(char* json)
{
	this->fromJson(json);
}

char*
GetOrderDetail_200_response_packageCosts::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("long long")) {
		long long obj = getPackageId();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
		long long obj = static_cast<long long> (getPackageId());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *package_idKey = "package_id";
	json_object_set_member(pJsonObject, package_idKey, node);
	if (isprimitive("long long")) {
		long long obj = getPackageCost();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
		long long obj = static_cast<long long> (getPackageCost());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *package_costKey = "package_cost";
	json_object_set_member(pJsonObject, package_costKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getCurrency();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *currencyKey = "currency";
	json_object_set_member(pJsonObject, currencyKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getCurrencySymbol();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *currencySymbolKey = "currencySymbol";
	json_object_set_member(pJsonObject, currencySymbolKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

long long
GetOrderDetail_200_response_packageCosts::getPackageId()
{
	return package_id;
}

void
GetOrderDetail_200_response_packageCosts::setPackageId(long long  package_id)
{
	this->package_id = package_id;
}

long long
GetOrderDetail_200_response_packageCosts::getPackageCost()
{
	return package_cost;
}

void
GetOrderDetail_200_response_packageCosts::setPackageCost(long long  package_cost)
{
	this->package_cost = package_cost;
}

std::string
GetOrderDetail_200_response_packageCosts::getCurrency()
{
	return currency;
}

void
GetOrderDetail_200_response_packageCosts::setCurrency(std::string  currency)
{
	this->currency = currency;
}

std::string
GetOrderDetail_200_response_packageCosts::getCurrencySymbol()
{
	return currencySymbol;
}

void
GetOrderDetail_200_response_packageCosts::setCurrencySymbol(std::string  currencySymbol)
{
	this->currencySymbol = currencySymbol;
}


