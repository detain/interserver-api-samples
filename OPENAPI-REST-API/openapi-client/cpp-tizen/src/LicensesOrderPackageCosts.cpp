#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "LicensesOrder_packageCosts.h"

using namespace std;
using namespace Tizen::ArtikCloud;

LicensesOrder_packageCosts::LicensesOrder_packageCosts()
{
	//__init();
}

LicensesOrder_packageCosts::~LicensesOrder_packageCosts()
{
	//__cleanup();
}

void
LicensesOrder_packageCosts::__init()
{
	//licensesOrderPackageCosts11468 = double(0);
}

void
LicensesOrder_packageCosts::__cleanup()
{
	//if(licensesOrderPackageCosts11468 != NULL) {
	//
	//delete licensesOrderPackageCosts11468;
	//licensesOrderPackageCosts11468 = NULL;
	//}
	//
}

void
LicensesOrder_packageCosts::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *licensesOrderPackageCosts11468Key = "LicensesOrderPackageCosts11468";
	node = json_object_get_member(pJsonObject, licensesOrderPackageCosts11468Key);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&licensesOrderPackageCosts11468, node, "long long", "");
		} else {
			
			long long* obj = static_cast<long long*> (&licensesOrderPackageCosts11468);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
}

LicensesOrder_packageCosts::LicensesOrder_packageCosts(char* json)
{
	this->fromJson(json);
}

char*
LicensesOrder_packageCosts::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("long long")) {
		long long obj = getLicensesOrderPackageCosts11468();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
		long long obj = static_cast<long long> (getLicensesOrderPackageCosts11468());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *licensesOrderPackageCosts11468Key = "LicensesOrderPackageCosts11468";
	json_object_set_member(pJsonObject, licensesOrderPackageCosts11468Key, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

long long
LicensesOrder_packageCosts::getLicensesOrderPackageCosts11468()
{
	return licensesOrderPackageCosts11468;
}

void
LicensesOrder_packageCosts::setLicensesOrderPackageCosts11468(long long  licensesOrderPackageCosts11468)
{
	this->licensesOrderPackageCosts11468 = licensesOrderPackageCosts11468;
}


