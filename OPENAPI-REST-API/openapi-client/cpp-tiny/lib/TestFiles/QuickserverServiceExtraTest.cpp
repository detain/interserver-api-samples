
#include "QuickserverServiceExtra.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_QuickserverServiceExtra_platform_is_assigned_from_json()
{


    bourne::json input =
    {
        "platform", "hello"
    };

    QuickserverServiceExtra obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getPlatform().c_str());






}



void test_QuickserverServiceExtra_platform_is_converted_to_json()
{

    bourne::json input =
    {
        "platform", "hello"
    };

    QuickserverServiceExtra obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["platform"] == output["platform"]);



}


