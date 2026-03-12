#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "QuickserverOrder_server_details.h"

using namespace std;
using namespace Tizen::ArtikCloud;

QuickserverOrder_server_details::QuickserverOrder_server_details()
{
	//__init();
}

QuickserverOrder_server_details::~QuickserverOrder_server_details()
{
	//__cleanup();
}

void
QuickserverOrder_server_details::__init()
{
	//381 = new QuickserverOrderServerDetails381();
}

void
QuickserverOrder_server_details::__cleanup()
{
	//if(381 != NULL) {
	//
	//delete 381;
	//381 = NULL;
	//}
	//
}

void
QuickserverOrder_server_details::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *381Key = "381";
	node = json_object_get_member(pJsonObject, 381Key);
	if (node !=NULL) {
	

		if (isprimitive("QuickserverOrderServerDetails381")) {
			jsonToValue(&381, node, "QuickserverOrderServerDetails381", "QuickserverOrderServerDetails381");
		} else {
			
			QuickserverOrderServerDetails381* obj = static_cast<QuickserverOrderServerDetails381*> (&381);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
}

QuickserverOrder_server_details::QuickserverOrder_server_details(char* json)
{
	this->fromJson(json);
}

char*
QuickserverOrder_server_details::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("QuickserverOrderServerDetails381")) {
		QuickserverOrderServerDetails381 obj = get381();
		node = converttoJson(&obj, "QuickserverOrderServerDetails381", "");
	}
	else {
		
		QuickserverOrderServerDetails381 obj = static_cast<QuickserverOrderServerDetails381> (get381());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *381Key = "381";
	json_object_set_member(pJsonObject, 381Key, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

QuickserverOrderServerDetails381
QuickserverOrder_server_details::get381()
{
	return 381;
}

void
QuickserverOrder_server_details::set381(QuickserverOrderServerDetails381  381)
{
	this->381 = 381;
}


