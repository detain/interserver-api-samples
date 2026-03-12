#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "WebsitesOrder_serviceOffers.h"

using namespace std;
using namespace Tizen::ArtikCloud;

WebsitesOrder_serviceOffers::WebsitesOrder_serviceOffers()
{
	//__init();
}

WebsitesOrder_serviceOffers::~WebsitesOrder_serviceOffers()
{
	//__cleanup();
}

void
WebsitesOrder_serviceOffers::__init()
{
	//new std::list()std::list> 1026;
}

void
WebsitesOrder_serviceOffers::__cleanup()
{
	//if(1026 != NULL) {
	//1026.RemoveAll(true);
	//delete 1026;
	//1026 = NULL;
	//}
	//
}

void
WebsitesOrder_serviceOffers::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *1026Key = "1026";
	node = json_object_get_member(pJsonObject, 1026Key);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<WebsitesOrderServiceOffer> new_list;
			WebsitesOrderServiceOffer inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("WebsitesOrderServiceOffer")) {
					jsonToValue(&inst, temp_json, "WebsitesOrderServiceOffer", "");
				} else {
					
					inst.fromJson(json_to_string(temp_json, false));
					
				}
				new_list.push_back(inst);
			}
			1026 = new_list;
		}
		
	}
}

WebsitesOrder_serviceOffers::WebsitesOrder_serviceOffers(char* json)
{
	this->fromJson(json);
}

char*
WebsitesOrder_serviceOffers::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("WebsitesOrderServiceOffer")) {
		list<WebsitesOrderServiceOffer> new_list = static_cast<list <WebsitesOrderServiceOffer> > (get1026());
		node = converttoJson(&new_list, "WebsitesOrderServiceOffer", "array");
	} else {
		node = json_node_alloc();
		list<WebsitesOrderServiceOffer> new_list = static_cast<list <WebsitesOrderServiceOffer> > (get1026());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<WebsitesOrderServiceOffer>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			WebsitesOrderServiceOffer obj = *it;
			JsonNode *node_temp = json_from_string(obj.toJson(), &mygerror);
			json_array_add_element(json_array, node_temp);
			g_clear_error(&mygerror);
		}
		json_node_init_array(node, json_array);
		json_array_unref(json_array);
		
	}


	
	const gchar *1026Key = "1026";
	json_object_set_member(pJsonObject, 1026Key, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::list<WebsitesOrderServiceOffer>
WebsitesOrder_serviceOffers::get1026()
{
	return 1026;
}

void
WebsitesOrder_serviceOffers::set1026(std::list <WebsitesOrderServiceOffer> 1026)
{
	this->1026 = 1026;
}


