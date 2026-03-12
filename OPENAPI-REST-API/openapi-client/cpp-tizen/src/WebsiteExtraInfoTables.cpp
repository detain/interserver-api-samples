#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "WebsiteExtraInfoTables.h"

using namespace std;
using namespace Tizen::ArtikCloud;

WebsiteExtraInfoTables::WebsiteExtraInfoTables()
{
	//__init();
}

WebsiteExtraInfoTables::~WebsiteExtraInfoTables()
{
	//__cleanup();
}

void
WebsiteExtraInfoTables::__init()
{
	//links = new WebsiteTable();
	//preview = new WebsiteTable();
	//dns = new WebsiteTable();
}

void
WebsiteExtraInfoTables::__cleanup()
{
	//if(links != NULL) {
	//
	//delete links;
	//links = NULL;
	//}
	//if(preview != NULL) {
	//
	//delete preview;
	//preview = NULL;
	//}
	//if(dns != NULL) {
	//
	//delete dns;
	//dns = NULL;
	//}
	//
}

void
WebsiteExtraInfoTables::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *linksKey = "links";
	node = json_object_get_member(pJsonObject, linksKey);
	if (node !=NULL) {
	

		if (isprimitive("WebsiteTable")) {
			jsonToValue(&links, node, "WebsiteTable", "WebsiteTable");
		} else {
			
			WebsiteTable* obj = static_cast<WebsiteTable*> (&links);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *previewKey = "preview";
	node = json_object_get_member(pJsonObject, previewKey);
	if (node !=NULL) {
	

		if (isprimitive("WebsiteTable")) {
			jsonToValue(&preview, node, "WebsiteTable", "WebsiteTable");
		} else {
			
			WebsiteTable* obj = static_cast<WebsiteTable*> (&preview);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *dnsKey = "dns";
	node = json_object_get_member(pJsonObject, dnsKey);
	if (node !=NULL) {
	

		if (isprimitive("WebsiteTable")) {
			jsonToValue(&dns, node, "WebsiteTable", "WebsiteTable");
		} else {
			
			WebsiteTable* obj = static_cast<WebsiteTable*> (&dns);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
}

WebsiteExtraInfoTables::WebsiteExtraInfoTables(char* json)
{
	this->fromJson(json);
}

char*
WebsiteExtraInfoTables::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("WebsiteTable")) {
		WebsiteTable obj = getLinks();
		node = converttoJson(&obj, "WebsiteTable", "");
	}
	else {
		
		WebsiteTable obj = static_cast<WebsiteTable> (getLinks());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *linksKey = "links";
	json_object_set_member(pJsonObject, linksKey, node);
	if (isprimitive("WebsiteTable")) {
		WebsiteTable obj = getPreview();
		node = converttoJson(&obj, "WebsiteTable", "");
	}
	else {
		
		WebsiteTable obj = static_cast<WebsiteTable> (getPreview());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *previewKey = "preview";
	json_object_set_member(pJsonObject, previewKey, node);
	if (isprimitive("WebsiteTable")) {
		WebsiteTable obj = getDns();
		node = converttoJson(&obj, "WebsiteTable", "");
	}
	else {
		
		WebsiteTable obj = static_cast<WebsiteTable> (getDns());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *dnsKey = "dns";
	json_object_set_member(pJsonObject, dnsKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

WebsiteTable
WebsiteExtraInfoTables::getLinks()
{
	return links;
}

void
WebsiteExtraInfoTables::setLinks(WebsiteTable  links)
{
	this->links = links;
}

WebsiteTable
WebsiteExtraInfoTables::getPreview()
{
	return preview;
}

void
WebsiteExtraInfoTables::setPreview(WebsiteTable  preview)
{
	this->preview = preview;
}

WebsiteTable
WebsiteExtraInfoTables::getDns()
{
	return dns;
}

void
WebsiteExtraInfoTables::setDns(WebsiteTable  dns)
{
	this->dns = dns;
}


