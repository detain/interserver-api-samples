
#include "DenyRuleNew.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_DenyRuleNew_type_is_assigned_from_json()
{


    bourne::json input =
    {
        "type", "hello"
    };

    DenyRuleNew obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getType().c_str());






}


void test_DenyRuleNew_data_is_assigned_from_json()
{


    bourne::json input =
    {
        "data", "hello"
    };

    DenyRuleNew obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getData().c_str());






}


void test_DenyRuleNew_user_is_assigned_from_json()
{


    bourne::json input =
    {
        "user", "hello"
    };

    DenyRuleNew obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getUser().c_str());






}



void test_DenyRuleNew_type_is_converted_to_json()
{

    bourne::json input =
    {
        "type", "hello"
    };

    DenyRuleNew obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["type"] == output["type"]);



}


void test_DenyRuleNew_data_is_converted_to_json()
{

    bourne::json input =
    {
        "data", "hello"
    };

    DenyRuleNew obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["data"] == output["data"]);



}


void test_DenyRuleNew_user_is_converted_to_json()
{

    bourne::json input =
    {
        "user", "hello"
    };

    DenyRuleNew obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["user"] == output["user"]);



}


