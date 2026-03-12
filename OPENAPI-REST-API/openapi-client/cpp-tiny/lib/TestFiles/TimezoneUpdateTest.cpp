
#include "TimezoneUpdate.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_TimezoneUpdate_timezone_is_assigned_from_json()
{


    bourne::json input =
    {
        "timezone", "hello"
    };

    TimezoneUpdate obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getTimezone().c_str());






}



void test_TimezoneUpdate_timezone_is_converted_to_json()
{

    bourne::json input =
    {
        "timezone", "hello"
    };

    TimezoneUpdate obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["timezone"] == output["timezone"]);



}


