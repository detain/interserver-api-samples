
#include "VpsOrder_locationNames.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_VpsOrder_locationNames_3_is_assigned_from_json()
{


    bourne::json input =
    {
        "3", "hello"
    };

    VpsOrder_locationNames obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.get3().c_str());






}



void test_VpsOrder_locationNames_3_is_converted_to_json()
{

    bourne::json input =
    {
        "3", "hello"
    };

    VpsOrder_locationNames obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["3"] == output["3"]);



}


