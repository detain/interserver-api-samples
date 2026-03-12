#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "AssetServer_CPU_inner.h"

using namespace std;
using namespace Tizen::ArtikCloud;

AssetServer_CPU_inner::AssetServer_CPU_inner()
{
	//__init();
}

AssetServer_CPU_inner::~AssetServer_CPU_inner()
{
	//__cleanup();
}

void
AssetServer_CPU_inner::__init()
{
}

void
AssetServer_CPU_inner::__cleanup()
{
	//
}

void
AssetServer_CPU_inner::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
}

AssetServer_CPU_inner::AssetServer_CPU_inner(char* json)
{
	this->fromJson(json);
}

char*
AssetServer_CPU_inner::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}


