
#include "BackupsOrderPackageCosts.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_BackupsOrderPackageCosts_11006_is_assigned_from_json()
{
    bourne::json input =
    {
        "11006", 1
    };

    BackupsOrderPackageCosts obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.get11006());








}



void test_BackupsOrderPackageCosts_11006_is_converted_to_json()
{
    bourne::json input =
    {
        "11006", 1
    };

    BackupsOrderPackageCosts obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["11006"] == output["11006"]);




}


