
#include "AccountInfoLimits_inner.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_AccountInfoLimits_inner_start_is_assigned_from_json()
{


    bourne::json input =
    {
        "start", "hello"
    };

    AccountInfoLimits_inner obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getStart().c_str());






}


void test_AccountInfoLimits_inner_end_is_assigned_from_json()
{


    bourne::json input =
    {
        "end", "hello"
    };

    AccountInfoLimits_inner obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getEnd().c_str());






}



void test_AccountInfoLimits_inner_start_is_converted_to_json()
{

    bourne::json input =
    {
        "start", "hello"
    };

    AccountInfoLimits_inner obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["start"] == output["start"]);



}


void test_AccountInfoLimits_inner_end_is_converted_to_json()
{

    bourne::json input =
    {
        "end", "hello"
    };

    AccountInfoLimits_inner obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["end"] == output["end"]);



}


