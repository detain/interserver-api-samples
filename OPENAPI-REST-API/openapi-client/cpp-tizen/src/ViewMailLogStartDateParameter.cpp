#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "ViewMailLog_startDate_parameter.h"

using namespace std;
using namespace Tizen::ArtikCloud;

ViewMailLog_startDate_parameter::ViewMailLog_startDate_parameter()
{
	//__init();
}

ViewMailLog_startDate_parameter::~ViewMailLog_startDate_parameter()
{
	//__cleanup();
}

void
ViewMailLog_startDate_parameter::__init()
{
}

void
ViewMailLog_startDate_parameter::__cleanup()
{
	//
}

void
ViewMailLog_startDate_parameter::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
}

ViewMailLog_startDate_parameter::ViewMailLog_startDate_parameter(char* json)
{
	this->fromJson(json);
}

char*
ViewMailLog_startDate_parameter::toJson()
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


