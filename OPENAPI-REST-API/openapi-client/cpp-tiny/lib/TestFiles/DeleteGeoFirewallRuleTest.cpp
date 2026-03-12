
#include "Delete_Geo_Firewall_Rule.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_Delete_Geo_Firewall_Rule_rule_id_is_assigned_from_json()
{
    bourne::json input =
    {
        "rule_id", 1
    };

    Delete_Geo_Firewall_Rule obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getRuleId());








}



void test_Delete_Geo_Firewall_Rule_rule_id_is_converted_to_json()
{
    bourne::json input =
    {
        "rule_id", 1
    };

    Delete_Geo_Firewall_Rule obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["rule_id"] == output["rule_id"]);




}


