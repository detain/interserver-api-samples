#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "QuickserverOrder_templates.h"

using namespace std;
using namespace Tizen::ArtikCloud;

QuickserverOrder_templates::QuickserverOrder_templates()
{
	//__init();
}

QuickserverOrder_templates::~QuickserverOrder_templates()
{
	//__cleanup();
}

void
QuickserverOrder_templates::__init()
{
	//ubuntu = new QuickserverOrderTemplatesUbuntu64();
}

void
QuickserverOrder_templates::__cleanup()
{
	//if(ubuntu != NULL) {
	//
	//delete ubuntu;
	//ubuntu = NULL;
	//}
	//
}

void
QuickserverOrder_templates::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *ubuntuKey = "Ubuntu";
	node = json_object_get_member(pJsonObject, ubuntuKey);
	if (node !=NULL) {
	

		if (isprimitive("QuickserverOrderTemplatesUbuntu64")) {
			jsonToValue(&ubuntu, node, "QuickserverOrderTemplatesUbuntu64", "QuickserverOrderTemplatesUbuntu64");
		} else {
			
			QuickserverOrderTemplatesUbuntu64* obj = static_cast<QuickserverOrderTemplatesUbuntu64*> (&ubuntu);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
}

QuickserverOrder_templates::QuickserverOrder_templates(char* json)
{
	this->fromJson(json);
}

char*
QuickserverOrder_templates::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("QuickserverOrderTemplatesUbuntu64")) {
		QuickserverOrderTemplatesUbuntu64 obj = getUbuntu();
		node = converttoJson(&obj, "QuickserverOrderTemplatesUbuntu64", "");
	}
	else {
		
		QuickserverOrderTemplatesUbuntu64 obj = static_cast<QuickserverOrderTemplatesUbuntu64> (getUbuntu());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *ubuntuKey = "Ubuntu";
	json_object_set_member(pJsonObject, ubuntuKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

QuickserverOrderTemplatesUbuntu64
QuickserverOrder_templates::getUbuntu()
{
	return ubuntu;
}

void
QuickserverOrder_templates::setUbuntu(QuickserverOrderTemplatesUbuntu64  ubuntu)
{
	this->ubuntu = ubuntu;
}


