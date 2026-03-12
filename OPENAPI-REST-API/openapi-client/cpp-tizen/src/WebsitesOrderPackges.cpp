#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "WebsitesOrder_packges.h"

using namespace std;
using namespace Tizen::ArtikCloud;

WebsitesOrder_packges::WebsitesOrder_packges()
{
	//__init();
}

WebsitesOrder_packges::~WebsitesOrder_packges()
{
	//__cleanup();
}

void
WebsitesOrder_packges::__init()
{
	//11440 = new WebsitesOrderPackagesInfo();
}

void
WebsitesOrder_packges::__cleanup()
{
	//if(11440 != NULL) {
	//
	//delete 11440;
	//11440 = NULL;
	//}
	//
}

void
WebsitesOrder_packges::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *11440Key = "11440";
	node = json_object_get_member(pJsonObject, 11440Key);
	if (node !=NULL) {
	

		if (isprimitive("WebsitesOrderPackagesInfo")) {
			jsonToValue(&11440, node, "WebsitesOrderPackagesInfo", "WebsitesOrderPackagesInfo");
		} else {
			
			WebsitesOrderPackagesInfo* obj = static_cast<WebsitesOrderPackagesInfo*> (&11440);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
}

WebsitesOrder_packges::WebsitesOrder_packges(char* json)
{
	this->fromJson(json);
}

char*
WebsitesOrder_packges::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("WebsitesOrderPackagesInfo")) {
		WebsitesOrderPackagesInfo obj = get11440();
		node = converttoJson(&obj, "WebsitesOrderPackagesInfo", "");
	}
	else {
		
		WebsitesOrderPackagesInfo obj = static_cast<WebsitesOrderPackagesInfo> (get11440());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *11440Key = "11440";
	json_object_set_member(pJsonObject, 11440Key, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

WebsitesOrderPackagesInfo
WebsitesOrder_packges::get11440()
{
	return 11440;
}

void
WebsitesOrder_packges::set11440(WebsitesOrderPackagesInfo  11440)
{
	this->11440 = 11440;
}


