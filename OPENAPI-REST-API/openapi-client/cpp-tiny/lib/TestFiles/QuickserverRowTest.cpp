
#include "QuickserverRow.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_QuickserverRow_qs_id_is_assigned_from_json()
{


    bourne::json input =
    {
        "qs_id", "hello"
    };

    QuickserverRow obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getQsId().c_str());






}


void test_QuickserverRow_qs_name_is_assigned_from_json()
{


    bourne::json input =
    {
        "qs_name", "hello"
    };

    QuickserverRow obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getQsName().c_str());






}


void test_QuickserverRow_cost_is_assigned_from_json()
{


    bourne::json input =
    {
        "cost", "hello"
    };

    QuickserverRow obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCost().c_str());






}


void test_QuickserverRow_qs_hostname_is_assigned_from_json()
{


    bourne::json input =
    {
        "qs_hostname", "hello"
    };

    QuickserverRow obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getQsHostname().c_str());






}


void test_QuickserverRow_qs_status_is_assigned_from_json()
{


    bourne::json input =
    {
        "qs_status", "hello"
    };

    QuickserverRow obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getQsStatus().c_str());






}


void test_QuickserverRow_qs_comment_is_assigned_from_json()
{


    bourne::json input =
    {
        "qs_comment", "hello"
    };

    QuickserverRow obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getQsComment().c_str());






}



void test_QuickserverRow_qs_id_is_converted_to_json()
{

    bourne::json input =
    {
        "qs_id", "hello"
    };

    QuickserverRow obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["qs_id"] == output["qs_id"]);



}


void test_QuickserverRow_qs_name_is_converted_to_json()
{

    bourne::json input =
    {
        "qs_name", "hello"
    };

    QuickserverRow obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["qs_name"] == output["qs_name"]);



}


void test_QuickserverRow_cost_is_converted_to_json()
{

    bourne::json input =
    {
        "cost", "hello"
    };

    QuickserverRow obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["cost"] == output["cost"]);



}


void test_QuickserverRow_qs_hostname_is_converted_to_json()
{

    bourne::json input =
    {
        "qs_hostname", "hello"
    };

    QuickserverRow obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["qs_hostname"] == output["qs_hostname"]);



}


void test_QuickserverRow_qs_status_is_converted_to_json()
{

    bourne::json input =
    {
        "qs_status", "hello"
    };

    QuickserverRow obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["qs_status"] == output["qs_status"]);



}


void test_QuickserverRow_qs_comment_is_converted_to_json()
{

    bourne::json input =
    {
        "qs_comment", "hello"
    };

    QuickserverRow obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["qs_comment"] == output["qs_comment"]);



}


