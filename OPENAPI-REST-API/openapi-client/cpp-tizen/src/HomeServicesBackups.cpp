#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "Home_services_backups.h"

using namespace std;
using namespace Tizen::ArtikCloud;

Home_services_backups::Home_services_backups()
{
	//__init();
}

Home_services_backups::~Home_services_backups()
{
	//__cleanup();
}

void
Home_services_backups::__init()
{
	//new std::list()std::list> links;
	//count = int(0);
}

void
Home_services_backups::__cleanup()
{
	//if(links != NULL) {
	//links.RemoveAll(true);
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
Home_services_backups::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *linksKey = "links";
	node = json_object_get_member(pJsonObject, linksKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<std::string> new_list;
			std::string inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("std::string")) {
					jsonToValue(&inst, temp_json, "std::string", "");
				} else {
					
				}
				new_list.push_back(inst);
			}
			links = new_list;
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

Home_services_backups::Home_services_backups(char* json)
{
	this->fromJson(json);
}

char*
Home_services_backups::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		list<std::string> new_list = static_cast<list <std::string> > (getLinks());
		node = converttoJson(&new_list, "std::string", "array");
	} else {
		node = json_node_alloc();
		list<std::string> new_list = static_cast<list <std::string> > (getLinks());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
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

std::list<std::string>
Home_services_backups::getLinks()
{
	return links;
}

void
Home_services_backups::setLinks(std::list <std::string> links)
{
	this->links = links;
}

int
Home_services_backups::getCount()
{
	return count;
}

void
Home_services_backups::setCount(int  count)
{
	this->count = count;
}


