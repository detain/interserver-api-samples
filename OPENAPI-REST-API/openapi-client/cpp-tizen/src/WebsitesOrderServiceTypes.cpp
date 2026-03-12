#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "WebsitesOrder_serviceTypes.h"

using namespace std;
using namespace Tizen::ArtikCloud;

WebsitesOrder_serviceTypes::WebsitesOrder_serviceTypes()
{
	//__init();
}

WebsitesOrder_serviceTypes::~WebsitesOrder_serviceTypes()
{
	//__cleanup();
}

void
WebsitesOrder_serviceTypes::__init()
{
	//11447 = new WebsitesOrderServiceTypes();
}

void
WebsitesOrder_serviceTypes::__cleanup()
{
	//if(11447 != NULL) {
	//
	//delete 11447;
	//11447 = NULL;
	//}
	//
}

void
WebsitesOrder_serviceTypes::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *11447Key = "11447";
	node = json_object_get_member(pJsonObject, 11447Key);
	if (node !=NULL) {
	

		if (isprimitive("WebsitesOrderServiceTypes")) {
			jsonToValue(&11447, node, "WebsitesOrderServiceTypes", "WebsitesOrderServiceTypes");
		} else {
			
			WebsitesOrderServiceTypes* obj = static_cast<WebsitesOrderServiceTypes*> (&11447);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
}

WebsitesOrder_serviceTypes::WebsitesOrder_serviceTypes(char* json)
{
	this->fromJson(json);
}

char*
WebsitesOrder_serviceTypes::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("WebsitesOrderServiceTypes")) {
		WebsitesOrderServiceTypes obj = get11447();
		node = converttoJson(&obj, "WebsitesOrderServiceTypes", "");
	}
	else {
		
		WebsitesOrderServiceTypes obj = static_cast<WebsitesOrderServiceTypes> (get11447());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *11447Key = "11447";
	json_object_set_member(pJsonObject, 11447Key, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

WebsitesOrderServiceTypes
WebsitesOrder_serviceTypes::get11447()
{
	return 11447;
}

void
WebsitesOrder_serviceTypes::set11447(WebsitesOrderServiceTypes  11447)
{
	this->11447 = 11447;
}


