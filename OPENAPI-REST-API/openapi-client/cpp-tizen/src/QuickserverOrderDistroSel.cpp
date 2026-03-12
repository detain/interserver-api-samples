#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "QuickserverOrder_distro_sel.h"

using namespace std;
using namespace Tizen::ArtikCloud;

QuickserverOrder_distro_sel::QuickserverOrder_distro_sel()
{
	//__init();
}

QuickserverOrder_distro_sel::~QuickserverOrder_distro_sel()
{
	//__cleanup();
}

void
QuickserverOrder_distro_sel::__init()
{
	//ubuntu = new QuickserverOrderDistroSelUbuntu();
}

void
QuickserverOrder_distro_sel::__cleanup()
{
	//if(ubuntu != NULL) {
	//
	//delete ubuntu;
	//ubuntu = NULL;
	//}
	//
}

void
QuickserverOrder_distro_sel::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *ubuntuKey = "Ubuntu";
	node = json_object_get_member(pJsonObject, ubuntuKey);
	if (node !=NULL) {
	

		if (isprimitive("QuickserverOrderDistroSelUbuntu")) {
			jsonToValue(&ubuntu, node, "QuickserverOrderDistroSelUbuntu", "QuickserverOrderDistroSelUbuntu");
		} else {
			
			QuickserverOrderDistroSelUbuntu* obj = static_cast<QuickserverOrderDistroSelUbuntu*> (&ubuntu);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
}

QuickserverOrder_distro_sel::QuickserverOrder_distro_sel(char* json)
{
	this->fromJson(json);
}

char*
QuickserverOrder_distro_sel::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("QuickserverOrderDistroSelUbuntu")) {
		QuickserverOrderDistroSelUbuntu obj = getUbuntu();
		node = converttoJson(&obj, "QuickserverOrderDistroSelUbuntu", "");
	}
	else {
		
		QuickserverOrderDistroSelUbuntu obj = static_cast<QuickserverOrderDistroSelUbuntu> (getUbuntu());
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

QuickserverOrderDistroSelUbuntu
QuickserverOrder_distro_sel::getUbuntu()
{
	return ubuntu;
}

void
QuickserverOrder_distro_sel::setUbuntu(QuickserverOrderDistroSelUbuntu  ubuntu)
{
	this->ubuntu = ubuntu;
}


