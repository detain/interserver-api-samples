
#include "VpsServiceExtra.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_VpsServiceExtra_spice_is_assigned_from_json()
{
    bourne::json input =
    {
        "spice", 1
    };

    VpsServiceExtra obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getSpice());








}




void test_VpsServiceExtra_spice_is_converted_to_json()
{
    bourne::json input =
    {
        "spice", 1
    };

    VpsServiceExtra obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["spice"] == output["spice"]);




}



