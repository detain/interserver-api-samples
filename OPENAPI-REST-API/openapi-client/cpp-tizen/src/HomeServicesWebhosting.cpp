#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "Home_services_webhosting.h"

using namespace std;
using namespace Tizen::ArtikCloud;

Home_services_webhosting::Home_services_webhosting()
{
	//__init();
}

Home_services_webhosting::~Home_services_webhosting()
{
	//__cleanup();
}

void
Home_services_webhosting::__init()
{
	//links = new HomeServicesWebhostingLinks();
	//count = int(0);
}

void
Home_services_webhosting::__cleanup()
{
	//if(links != NULL) {
	//
	//delete links;
	//links = NULL;
	//}
	//if(count != NULL) {
	//
	//delete count;
	//count = NULL;
	//}
	//
}

void
Home_services_webhosting::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *linksKey = "links";
	node = json_object_get_member(pJsonObject, linksKey);
	if (node !=NULL) {
	

		if (isprimitive("HomeServicesWebhostingLinks")) {
			jsonToValue(&links, node, "HomeServicesWebhostingLinks", "HomeServicesWebhostingLinks");
		} else {
			
			HomeServicesWebhostingLinks* obj = static_cast<HomeServicesWebhostingLinks*> (&links);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *countKey = "count";
	node = json_object_get_member(pJsonObject, countKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&count, node, "int", "");
		} else {
			
		}
	}
}

Home_services_webhosting::Home_services_webhosting(char* json)
{
	this->fromJson(json);
}

char*
Home_services_webhosting::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("HomeServicesWebhostingLinks")) {
		HomeServicesWebhostingLinks obj = getLinks();
		node = converttoJson(&obj, "HomeServicesWebhostingLinks", "");
	}
	else {
		
		HomeServicesWebhostingLinks obj = static_cast<HomeServicesWebhostingLinks> (getLinks());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *linksKey = "links";
	json_object_set_member(pJsonObject, linksKey, node);
	if (isprimitive("int")) {
		int obj = getCount();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *countKey = "count";
	json_object_set_member(pJsonObject, countKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

HomeServicesWebhostingLinks
Home_services_webhosting::getLinks()
{
	return links;
}

void
Home_services_webhosting::setLinks(HomeServicesWebhostingLinks  links)
{
	this->links = links;
}

int
Home_services_webhosting::getCount()
{
	return count;
}

void
Home_services_webhosting::setCount(int  count)
{
	this->count = count;
}


