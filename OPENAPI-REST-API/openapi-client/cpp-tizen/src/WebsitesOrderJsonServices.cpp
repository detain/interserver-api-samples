#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "WebsitesOrderJsonServices.h"

using namespace std;
using namespace Tizen::ArtikCloud;

WebsitesOrderJsonServices::WebsitesOrderJsonServices()
{
	//__init();
}

WebsitesOrderJsonServices::~WebsitesOrderJsonServices()
{
	//__cleanup();
}

void
WebsitesOrderJsonServices::__init()
{
	//11447 = std::string();
}

void
WebsitesOrderJsonServices::__cleanup()
{
	//if(11447 != NULL) {
	//
	//delete 11447;
	//11447 = NULL;
	//}
	//
}

void
WebsitesOrderJsonServices::fromJson(char* jsonStr)
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

WebsitesOrderJsonServices::WebsitesOrderJsonServices(char* json)
{
	this->fromJson(json);
}

char*
WebsitesOrderJsonServices::toJson()
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
WebsitesOrderJsonServices::get11447()
{
	return 11447;
}

void
WebsitesOrderJsonServices::set11447(std::string  11447)
{
	this->11447 = 11447;
}


