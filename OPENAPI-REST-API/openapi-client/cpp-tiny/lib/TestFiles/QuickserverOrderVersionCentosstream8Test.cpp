
#include "QuickserverOrderVersionCentosstream8.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_QuickserverOrderVersionCentosstream8_centosstream8_is_assigned_from_json()
{


    bourne::json input =
    {
        "centosstream8", "hello"
    };

    QuickserverOrderVersionCentosstream8 obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCentosstream8().c_str());






}



void test_QuickserverOrderVersionCentosstream8_centosstream8_is_converted_to_json()
{

    bourne::json input =
    {
        "centosstream8", "hello"
    };

    QuickserverOrderVersionCentosstream8 obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["centosstream8"] == output["centosstream8"]);



}


