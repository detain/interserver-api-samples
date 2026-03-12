#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "LicensesOrder_serviceCategories.h"

using namespace std;
using namespace Tizen::ArtikCloud;

LicensesOrder_serviceCategories::LicensesOrder_serviceCategories()
{
	//__init();
}

LicensesOrder_serviceCategories::~LicensesOrder_serviceCategories()
{
	//__cleanup();
}

void
LicensesOrder_serviceCategories::__init()
{
	//licensesOrderServiceCategories509 = new LicensesOrderServiceCategories509();
}

void
LicensesOrder_serviceCategories::__cleanup()
{
	//if(licensesOrderServiceCategories509 != NULL) {
	//
	//delete licensesOrderServiceCategories509;
	//licensesOrderServiceCategories509 = NULL;
	//}
	//
}

void
LicensesOrder_serviceCategories::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *licensesOrderServiceCategories509Key = "LicensesOrderServiceCategories509";
	node = json_object_get_member(pJsonObject, licensesOrderServiceCategories509Key);
	if (node !=NULL) {
	

		if (isprimitive("LicensesOrderServiceCategories509")) {
			jsonToValue(&licensesOrderServiceCategories509, node, "LicensesOrderServiceCategories509", "LicensesOrderServiceCategories509");
		} else {
			
			LicensesOrderServiceCategories509* obj = static_cast<LicensesOrderServiceCategories509*> (&licensesOrderServiceCategories509);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
}

LicensesOrder_serviceCategories::LicensesOrder_serviceCategories(char* json)
{
	this->fromJson(json);
}

char*
LicensesOrder_serviceCategories::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("LicensesOrderServiceCategories509")) {
		LicensesOrderServiceCategories509 obj = getLicensesOrderServiceCategories509();
		node = converttoJson(&obj, "LicensesOrderServiceCategories509", "");
	}
	else {
		
		LicensesOrderServiceCategories509 obj = static_cast<LicensesOrderServiceCategories509> (getLicensesOrderServiceCategories509());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *licensesOrderServiceCategories509Key = "LicensesOrderServiceCategories509";
	json_object_set_member(pJsonObject, licensesOrderServiceCategories509Key, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

LicensesOrderServiceCategories509
LicensesOrder_serviceCategories::getLicensesOrderServiceCategories509()
{
	return licensesOrderServiceCategories509;
}

void
LicensesOrder_serviceCategories::setLicensesOrderServiceCategories509(LicensesOrderServiceCategories509  licensesOrderServiceCategories509)
{
	this->licensesOrderServiceCategories509 = licensesOrderServiceCategories509;
}


