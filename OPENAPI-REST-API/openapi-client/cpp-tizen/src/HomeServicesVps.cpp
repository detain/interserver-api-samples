#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "Home_services_vps.h"

using namespace std;
using namespace Tizen::ArtikCloud;

Home_services_vps::Home_services_vps()
{
	//__init();
}

Home_services_vps::~Home_services_vps()
{
	//__cleanup();
}

void
Home_services_vps::__init()
{
	//links = new HomeServicesVpsLinks();
	//count = int(0);
}

void
Home_services_vps::__cleanup()
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
Home_services_vps::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *linksKey = "links";
	node = json_object_get_member(pJsonObject, linksKey);
	if (node !=NULL) {
	

		if (isprimitive("HomeServicesVpsLinks")) {
			jsonToValue(&links, node, "HomeServicesVpsLinks", "HomeServicesVpsLinks");
		} else {
			
			HomeServicesVpsLinks* obj = static_cast<HomeServicesVpsLinks*> (&links);
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

Home_services_vps::Home_services_vps(char* json)
{
	this->fromJson(json);
}

char*
Home_services_vps::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("HomeServicesVpsLinks")) {
		HomeServicesVpsLinks obj = getLinks();
		node = converttoJson(&obj, "HomeServicesVpsLinks", "");
	}
	else {
		
		HomeServicesVpsLinks obj = static_cast<HomeServicesVpsLinks> (getLinks());
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

HomeServicesVpsLinks
Home_services_vps::getLinks()
{
	return links;
}

void
Home_services_vps::setLinks(HomeServicesVpsLinks  links)
{
	this->links = links;
}

int
Home_services_vps::getCount()
{
	return count;
}

void
Home_services_vps::setCount(int  count)
{
	this->count = count;
}


