#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "BuyItNowList.h"

using namespace std;
using namespace Tizen::ArtikCloud;

BuyItNowList::BuyItNowList()
{
	//__init();
}

BuyItNowList::~BuyItNowList()
{
	//__cleanup();
}

void
BuyItNowList::__init()
{
}

void
BuyItNowList::__cleanup()
{
	//
}

void
BuyItNowList::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
}

BuyItNowList::BuyItNowList(char* json)
{
	this->fromJson(json);
}

char*
BuyItNowList::toJson()
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


