#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "ServerNetworkInfo_assets.h"

using namespace std;
using namespace Tizen::ArtikCloud;

ServerNetworkInfo_assets::ServerNetworkInfo_assets()
{
	//__init();
}

ServerNetworkInfo_assets::~ServerNetworkInfo_assets()
{
	//__cleanup();
}

void
ServerNetworkInfo_assets::__init()
{
	//3497 = new ServerAsset();
}

void
ServerNetworkInfo_assets::__cleanup()
{
	//if(3497 != NULL) {
	//
	//delete 3497;
	//3497 = NULL;
	//}
	//
}

void
ServerNetworkInfo_assets::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *3497Key = "3497";
	node = json_object_get_member(pJsonObject, 3497Key);
	if (node !=NULL) {
	

		if (isprimitive("ServerAsset")) {
			jsonToValue(&3497, node, "ServerAsset", "ServerAsset");
		} else {
			
			ServerAsset* obj = static_cast<ServerAsset*> (&3497);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
}

ServerNetworkInfo_assets::ServerNetworkInfo_assets(char* json)
{
	this->fromJson(json);
}

char*
ServerNetworkInfo_assets::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("ServerAsset")) {
		ServerAsset obj = get3497();
		node = converttoJson(&obj, "ServerAsset", "");
	}
	else {
		
		ServerAsset obj = static_cast<ServerAsset> (get3497());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *3497Key = "3497";
	json_object_set_member(pJsonObject, 3497Key, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

ServerAsset
ServerNetworkInfo_assets::get3497()
{
	return 3497;
}

void
ServerNetworkInfo_assets::set3497(ServerAsset  3497)
{
	this->3497 = 3497;
}


