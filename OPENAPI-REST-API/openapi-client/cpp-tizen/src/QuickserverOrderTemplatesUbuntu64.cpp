#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "QuickserverOrderTemplatesUbuntu64.h"

using namespace std;
using namespace Tizen::ArtikCloud;

QuickserverOrderTemplatesUbuntu64::QuickserverOrderTemplatesUbuntu64()
{
	//__init();
}

QuickserverOrderTemplatesUbuntu64::~QuickserverOrderTemplatesUbuntu64()
{
	//__cleanup();
}

void
QuickserverOrderTemplatesUbuntu64::__init()
{
}

void
QuickserverOrderTemplatesUbuntu64::__cleanup()
{
	//
}

void
QuickserverOrderTemplatesUbuntu64::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
}

QuickserverOrderTemplatesUbuntu64::QuickserverOrderTemplatesUbuntu64(char* json)
{
	this->fromJson(json);
}

char*
QuickserverOrderTemplatesUbuntu64::toJson()
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


