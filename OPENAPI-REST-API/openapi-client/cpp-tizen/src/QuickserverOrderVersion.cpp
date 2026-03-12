#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "QuickserverOrder_version.h"

using namespace std;
using namespace Tizen::ArtikCloud;

QuickserverOrder_version::QuickserverOrder_version()
{
	//__init();
}

QuickserverOrder_version::~QuickserverOrder_version()
{
	//__cleanup();
}

void
QuickserverOrder_version::__init()
{
	//centosstream8 = new QuickserverOrderVersionCentosstream8();
}

void
QuickserverOrder_version::__cleanup()
{
	//if(centosstream8 != NULL) {
	//
	//delete centosstream8;
	//centosstream8 = NULL;
	//}
	//
}

void
QuickserverOrder_version::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *centosstream8Key = "centosstream-8";
	node = json_object_get_member(pJsonObject, centosstream8Key);
	if (node !=NULL) {
	

		if (isprimitive("QuickserverOrderVersionCentosstream8")) {
			jsonToValue(&centosstream8, node, "QuickserverOrderVersionCentosstream8", "QuickserverOrderVersionCentosstream8");
		} else {
			
			QuickserverOrderVersionCentosstream8* obj = static_cast<QuickserverOrderVersionCentosstream8*> (&centosstream8);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
}

QuickserverOrder_version::QuickserverOrder_version(char* json)
{
	this->fromJson(json);
}

char*
QuickserverOrder_version::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("QuickserverOrderVersionCentosstream8")) {
		QuickserverOrderVersionCentosstream8 obj = getCentosstream8();
		node = converttoJson(&obj, "QuickserverOrderVersionCentosstream8", "");
	}
	else {
		
		QuickserverOrderVersionCentosstream8 obj = static_cast<QuickserverOrderVersionCentosstream8> (getCentosstream8());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *centosstream8Key = "centosstream-8";
	json_object_set_member(pJsonObject, centosstream8Key, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

QuickserverOrderVersionCentosstream8
QuickserverOrder_version::getCentosstream8()
{
	return centosstream8;
}

void
QuickserverOrder_version::setCentosstream8(QuickserverOrderVersionCentosstream8  centosstream8)
{
	this->centosstream8 = centosstream8;
}


