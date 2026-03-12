
#include "ScrubIpFilterTypes_filters_value.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_ScrubIpFilterTypes_filters_value_name_is_assigned_from_json()
{


    bourne::json input =
    {
        "name", "hello"
    };

    ScrubIpFilterTypes_filters_value obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getName().c_str());






}


void test_ScrubIpFilterTypes_filters_value_desc_is_assigned_from_json()
{


    bourne::json input =
    {
        "desc", "hello"
    };

    ScrubIpFilterTypes_filters_value obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getDesc().c_str());






}



void test_ScrubIpFilterTypes_filters_value_name_is_converted_to_json()
{

    bourne::json input =
    {
        "name", "hello"
    };

    ScrubIpFilterTypes_filters_value obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["name"] == output["name"]);



}


void test_ScrubIpFilterTypes_filters_value_desc_is_converted_to_json()
{

    bourne::json input =
    {
        "desc", "hello"
    };

    ScrubIpFilterTypes_filters_value obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["desc"] == output["desc"]);



}


