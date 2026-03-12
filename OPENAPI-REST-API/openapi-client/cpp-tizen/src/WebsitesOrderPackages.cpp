#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "WebsitesOrderPackages.h"

using namespace std;
using namespace Tizen::ArtikCloud;

WebsitesOrderPackages::WebsitesOrderPackages()
{
	//__init();
}

WebsitesOrderPackages::~WebsitesOrderPackages()
{
	//__cleanup();
}

void
WebsitesOrderPackages::__init()
{
	//11447 = std::string();
}

void
WebsitesOrderPackages::__cleanup()
{
	//if(11447 != NULL) {
	//
	//delete 11447;
	//11447 = NULL;
	//}
	//
}

void
WebsitesOrderPackages::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *11447Key = "11447";
	node = json_object_get_member(pJsonObject, 11447Key);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&11447, node, "std::string", "");
		} else {
			
		}
	}
}

WebsitesOrderPackages::WebsitesOrderPackages(char* json)
{
	this->fromJson(json);
}

char*
WebsitesOrderPackages::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = get11447();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
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

std::string
WebsitesOrderPackages::get11447()
{
	return 11447;
}

void
WebsitesOrderPackages::set11447(std::string  11447)
{
	this->11447 = 11447;
}


