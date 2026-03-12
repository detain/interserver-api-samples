#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "ServerExtraInfoTables.h"

using namespace std;
using namespace Tizen::ArtikCloud;

ServerExtraInfoTables::ServerExtraInfoTables()
{
	//__init();
}

ServerExtraInfoTables::~ServerExtraInfoTables()
{
	//__cleanup();
}

void
ServerExtraInfoTables::__init()
{
	//assets = new ServerAssets();
}

void
ServerExtraInfoTables::__cleanup()
{
	//if(assets != NULL) {
	//
	//delete assets;
	//assets = NULL;
	//}
	//
}

void
ServerExtraInfoTables::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *assetsKey = "assets";
	node = json_object_get_member(pJsonObject, assetsKey);
	if (node !=NULL) {
	

		if (isprimitive("ServerAssets")) {
			jsonToValue(&assets, node, "ServerAssets", "ServerAssets");
		} else {
			
			ServerAssets* obj = static_cast<ServerAssets*> (&assets);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
}

ServerExtraInfoTables::ServerExtraInfoTables(char* json)
{
	this->fromJson(json);
}

char*
ServerExtraInfoTables::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("ServerAssets")) {
		ServerAssets obj = getAssets();
		node = converttoJson(&obj, "ServerAssets", "");
	}
	else {
		
		ServerAssets obj = static_cast<ServerAssets> (getAssets());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *assetsKey = "assets";
	json_object_set_member(pJsonObject, assetsKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

ServerAssets
ServerExtraInfoTables::getAssets()
{
	return assets;
}

void
ServerExtraInfoTables::setAssets(ServerAssets  assets)
{
	this->assets = assets;
}


