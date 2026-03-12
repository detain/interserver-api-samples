
#include "DenyRuleRecord.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_DenyRuleRecord_type_is_assigned_from_json()
{


    bourne::json input =
    {
        "type", "hello"
    };

    DenyRuleRecord obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getType().c_str());






}


void test_DenyRuleRecord_data_is_assigned_from_json()
{


    bourne::json input =
    {
        "data", "hello"
    };

    DenyRuleRecord obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getData().c_str());






}


void test_DenyRuleRecord_id_is_assigned_from_json()
{
    bourne::json input =
    {
        "id", 1
    };

    DenyRuleRecord obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getId());








}


void test_DenyRuleRecord_created_is_assigned_from_json()
{


    bourne::json input =
    {
        "created", "hello"
    };

    DenyRuleRecord obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCreated().c_str());






}


void test_DenyRuleRecord_user_is_assigned_from_json()
{


    bourne::json input =
    {
        "user", "hello"
    };

    DenyRuleRecord obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getUser().c_str());






}



void test_DenyRuleRecord_type_is_converted_to_json()
{

    bourne::json input =
    {
        "type", "hello"
    };

    DenyRuleRecord obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["type"] == output["type"]);



}


void test_DenyRuleRecord_data_is_converted_to_json()
{

    bourne::json input =
    {
        "data", "hello"
    };

    DenyRuleRecord obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["data"] == output["data"]);



}


void test_DenyRuleRecord_id_is_converted_to_json()
{
    bourne::json input =
    {
        "id", 1
    };

    DenyRuleRecord obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["id"] == output["id"]);




}


void test_DenyRuleRecord_created_is_converted_to_json()
{

    bourne::json input =
    {
        "created", "hello"
    };

    DenyRuleRecord obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["created"] == output["created"]);



}


void test_DenyRuleRecord_user_is_converted_to_json()
{

    bourne::json input =
    {
        "user", "hello"
    };

    DenyRuleRecord obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["user"] == output["user"]);



}


