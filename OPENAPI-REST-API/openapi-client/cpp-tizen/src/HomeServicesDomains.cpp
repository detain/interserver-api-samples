#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "Home_services_domains.h"

using namespace std;
using namespace Tizen::ArtikCloud;

Home_services_domains::Home_services_domains()
{
	//__init();
}

Home_services_domains::~Home_services_domains()
{
	//__cleanup();
}

void
Home_services_domains::__init()
{
	//links = new HomeServicesDomainsLinks();
	//count = int(0);
}

void
Home_services_domains::__cleanup()
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
Home_services_domains::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *linksKey = "links";
	node = json_object_get_member(pJsonObject, linksKey);
	if (node !=NULL) {
	

		if (isprimitive("HomeServicesDomainsLinks")) {
			jsonToValue(&links, node, "HomeServicesDomainsLinks", "HomeServicesDomainsLinks");
		} else {
			
			HomeServicesDomainsLinks* obj = static_cast<HomeServicesDomainsLinks*> (&links);
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

Home_services_domains::Home_services_domains(char* json)
{
	this->fromJson(json);
}

char*
Home_services_domains::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("HomeServicesDomainsLinks")) {
		HomeServicesDomainsLinks obj = getLinks();
		node = converttoJson(&obj, "HomeServicesDomainsLinks", "");
	}
	else {
		
		HomeServicesDomainsLinks obj = static_cast<HomeServicesDomainsLinks> (getLinks());
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

HomeServicesDomainsLinks
Home_services_domains::getLinks()
{
	return links;
}

void
Home_services_domains::setLinks(HomeServicesDomainsLinks  links)
{
	this->links = links;
}

int
Home_services_domains::getCount()
{
	return count;
}

void
Home_services_domains::setCount(int  count)
{
	this->count = count;
}


