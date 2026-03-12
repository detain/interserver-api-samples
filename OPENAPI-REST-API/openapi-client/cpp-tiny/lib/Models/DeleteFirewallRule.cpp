

#include "Delete_Firewall_Rule.h"

using namespace Tiny;

Delete_Firewall_Rule::Delete_Firewall_Rule()
{
	rule_id = int(0);
}

Delete_Firewall_Rule::Delete_Firewall_Rule(std::string jsonString)
{
	this->fromJson(jsonString);
}

Delete_Firewall_Rule::~Delete_Firewall_Rule()
{

}

void
Delete_Firewall_Rule::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *rule_idKey = "rule_id";

    if(object.has_key(rule_idKey))
    {
        bourne::json value = object[rule_idKey];



        jsonToValue(&rule_id, value, "int");


    }


}

bourne::json
Delete_Firewall_Rule::toJson()
{
    bourne::json object = bourne::json::object();





    object["rule_id"] = getRuleId();



    return object;

}

int
Delete_Firewall_Rule::getRuleId()
{
	return rule_id;
}

void
Delete_Firewall_Rule::setRuleId(int rule_id)
{
	this->rule_id = rule_id;
}



