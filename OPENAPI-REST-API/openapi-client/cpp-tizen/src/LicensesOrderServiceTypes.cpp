#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "LicensesOrder_serviceTypes.h"

using namespace std;
using namespace Tizen::ArtikCloud;

LicensesOrder_serviceTypes::LicensesOrder_serviceTypes()
{
	//__init();
}

LicensesOrder_serviceTypes::~LicensesOrder_serviceTypes()
{
	//__cleanup();
}

void
LicensesOrder_serviceTypes::__init()
{
	//licensesOrderServiceTypes11482 = new LicensesOrderServiceTypes11482();
}

void
LicensesOrder_serviceTypes::__cleanup()
{
	//if(licensesOrderServiceTypes11482 != NULL) {
	//
	//delete licensesOrderServiceTypes11482;
	//licensesOrderServiceTypes11482 = NULL;
	//}
	//
}

void
LicensesOrder_serviceTypes::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *licensesOrderServiceTypes11482Key = "LicensesOrderServiceTypes11482";
	node = json_object_get_member(pJsonObject, licensesOrderServiceTypes11482Key);
	if (node !=NULL) {
	

		if (isprimitive("LicensesOrderServiceTypes11482")) {
			jsonToValue(&licensesOrderServiceTypes11482, node, "LicensesOrderServiceTypes11482", "LicensesOrderServiceTypes11482");
		} else {
			
			LicensesOrderServiceTypes11482* obj = static_cast<LicensesOrderServiceTypes11482*> (&licensesOrderServiceTypes11482);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
}

LicensesOrder_serviceTypes::LicensesOrder_serviceTypes(char* json)
{
	this->fromJson(json);
}

char*
LicensesOrder_serviceTypes::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("LicensesOrderServiceTypes11482")) {
		LicensesOrderServiceTypes11482 obj = getLicensesOrderServiceTypes11482();
		node = converttoJson(&obj, "LicensesOrderServiceTypes11482", "");
	}
	else {
		
		LicensesOrderServiceTypes11482 obj = static_cast<LicensesOrderServiceTypes11482> (getLicensesOrderServiceTypes11482());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *licensesOrderServiceTypes11482Key = "LicensesOrderServiceTypes11482";
	json_object_set_member(pJsonObject, licensesOrderServiceTypes11482Key, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

LicensesOrderServiceTypes11482
LicensesOrder_serviceTypes::getLicensesOrderServiceTypes11482()
{
	return licensesOrderServiceTypes11482;
}

void
LicensesOrder_serviceTypes::setLicensesOrderServiceTypes11482(LicensesOrderServiceTypes11482  licensesOrderServiceTypes11482)
{
	this->licensesOrderServiceTypes11482 = licensesOrderServiceTypes11482;
}


