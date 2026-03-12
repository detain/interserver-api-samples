
#include "MailAlertRequest.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_MailAlertRequest_type_is_assigned_from_json()
{


    bourne::json input =
    {
        "type", "hello"
    };

    MailAlertRequest obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getType().c_str());






}


void test_MailAlertRequest_value_is_assigned_from_json()
{


    bourne::json input =
    {
        "value", "hello"
    };

    MailAlertRequest obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getValue().c_str());






}


void test_MailAlertRequest_to_is_assigned_from_json()
{


    bourne::json input =
    {
        "to", "hello"
    };

    MailAlertRequest obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getTo().c_str());






}


void test_MailAlertRequest_enabled_is_assigned_from_json()
{


    bourne::json input =
    {
        "enabled", "hello"
    };

    MailAlertRequest obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getEnabled().c_str());






}



void test_MailAlertRequest_type_is_converted_to_json()
{

    bourne::json input =
    {
        "type", "hello"
    };

    MailAlertRequest obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["type"] == output["type"]);



}


void test_MailAlertRequest_value_is_converted_to_json()
{

    bourne::json input =
    {
        "value", "hello"
    };

    MailAlertRequest obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["value"] == output["value"]);



}


void test_MailAlertRequest_to_is_converted_to_json()
{

    bourne::json input =
    {
        "to", "hello"
    };

    MailAlertRequest obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["to"] == output["to"]);



}


void test_MailAlertRequest_enabled_is_converted_to_json()
{

    bourne::json input =
    {
        "enabled", "hello"
    };

    MailAlertRequest obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["enabled"] == output["enabled"]);



}


