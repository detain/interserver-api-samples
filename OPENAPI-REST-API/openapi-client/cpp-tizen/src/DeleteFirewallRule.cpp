#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "Delete_Firewall_Rule.h"

using namespace std;
using namespace Tizen::ArtikCloud;

Delete_Firewall_Rule::Delete_Firewall_Rule()
{
	//__init();
}

Delete_Firewall_Rule::~Delete_Firewall_Rule()
{
	//__cleanup();
}

void
Delete_Firewall_Rule::__init()
{
	//rule_id = int(0);
}

void
Delete_Firewall_Rule::__cleanup()
{
	//if(rule_id != NULL) {
	//
	//delete rule_id;
	//rule_id = NULL;
	//}
	//
}

void
Delete_Firewall_Rule::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *rule_idKey = "rule_id";
	node = json_object_get_member(pJsonObject, rule_idKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&rule_id, node, "int", "");
		} else {
			
		}
	}
}

Delete_Firewall_Rule::Delete_Firewall_Rule(char* json)
{
	this->fromJson(json);
}

char*
Delete_Firewall_Rule::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("int")) {
		int obj = getRuleId();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *rule_idKey = "rule_id";
	json_object_set_member(pJsonObject, rule_idKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

int
Delete_Firewall_Rule::getRuleId()
{
	return rule_id;
}

void
Delete_Firewall_Rule::setRuleId(int  rule_id)
{
	this->rule_id = rule_id;
}


