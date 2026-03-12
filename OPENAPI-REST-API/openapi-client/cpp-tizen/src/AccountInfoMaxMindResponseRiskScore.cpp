#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "AccountInfoMaxMindResponse_riskScore.h"

using namespace std;
using namespace Tizen::ArtikCloud;

AccountInfoMaxMindResponse_riskScore::AccountInfoMaxMindResponse_riskScore()
{
	//__init();
}

AccountInfoMaxMindResponse_riskScore::~AccountInfoMaxMindResponse_riskScore()
{
	//__cleanup();
}

void
AccountInfoMaxMindResponse_riskScore::__init()
{
}

void
AccountInfoMaxMindResponse_riskScore::__cleanup()
{
	//
}

void
AccountInfoMaxMindResponse_riskScore::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
}

AccountInfoMaxMindResponse_riskScore::AccountInfoMaxMindResponse_riskScore(char* json)
{
	this->fromJson(json);
}

char*
AccountInfoMaxMindResponse_riskScore::toJson()
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


