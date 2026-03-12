
#include "AccountInfoData_fraudrecord.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_AccountInfoData_fraudrecord_score_is_assigned_from_json()
{


    bourne::json input =
    {
        "score", "hello"
    };

    AccountInfoData_fraudrecord obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getScore().c_str());






}


void test_AccountInfoData_fraudrecord_count_is_assigned_from_json()
{


    bourne::json input =
    {
        "count", "hello"
    };

    AccountInfoData_fraudrecord obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCount().c_str());






}


void test_AccountInfoData_fraudrecord_reliability_is_assigned_from_json()
{


    bourne::json input =
    {
        "reliability", "hello"
    };

    AccountInfoData_fraudrecord obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getReliability().c_str());






}


void test_AccountInfoData_fraudrecord_code_is_assigned_from_json()
{


    bourne::json input =
    {
        "code", "hello"
    };

    AccountInfoData_fraudrecord obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCode().c_str());






}



void test_AccountInfoData_fraudrecord_score_is_converted_to_json()
{

    bourne::json input =
    {
        "score", "hello"
    };

    AccountInfoData_fraudrecord obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["score"] == output["score"]);



}


void test_AccountInfoData_fraudrecord_count_is_converted_to_json()
{

    bourne::json input =
    {
        "count", "hello"
    };

    AccountInfoData_fraudrecord obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["count"] == output["count"]);



}


void test_AccountInfoData_fraudrecord_reliability_is_converted_to_json()
{

    bourne::json input =
    {
        "reliability", "hello"
    };

    AccountInfoData_fraudrecord obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["reliability"] == output["reliability"]);



}


void test_AccountInfoData_fraudrecord_code_is_converted_to_json()
{

    bourne::json input =
    {
        "code", "hello"
    };

    AccountInfoData_fraudrecord obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["code"] == output["code"]);



}


