
#include "MailAlertsResponse_inner.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_MailAlertsResponse_inner_alert_id_is_assigned_from_json()
{
    bourne::json input =
    {
        "alert_id", 1
    };

    MailAlertsResponse_inner obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getAlertId());








}


void test_MailAlertsResponse_inner_alert_type_is_assigned_from_json()
{


    bourne::json input =
    {
        "alert_type", "hello"
    };

    MailAlertsResponse_inner obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getAlertType().c_str());






}


void test_MailAlertsResponse_inner_alert_value_is_assigned_from_json()
{


    bourne::json input =
    {
        "alert_value", "hello"
    };

    MailAlertsResponse_inner obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getAlertValue().c_str());






}


void test_MailAlertsResponse_inner_alert_to_is_assigned_from_json()
{


    bourne::json input =
    {
        "alert_to", "hello"
    };

    MailAlertsResponse_inner obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getAlertTo().c_str());






}


void test_MailAlertsResponse_inner_alert_enabled_is_assigned_from_json()
{


    bourne::json input =
    {
        "alert_enabled", "hello"
    };

    MailAlertsResponse_inner obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getAlertEnabled().c_str());






}



void test_MailAlertsResponse_inner_alert_id_is_converted_to_json()
{
    bourne::json input =
    {
        "alert_id", 1
    };

    MailAlertsResponse_inner obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["alert_id"] == output["alert_id"]);




}


void test_MailAlertsResponse_inner_alert_type_is_converted_to_json()
{

    bourne::json input =
    {
        "alert_type", "hello"
    };

    MailAlertsResponse_inner obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["alert_type"] == output["alert_type"]);



}


void test_MailAlertsResponse_inner_alert_value_is_converted_to_json()
{

    bourne::json input =
    {
        "alert_value", "hello"
    };

    MailAlertsResponse_inner obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["alert_value"] == output["alert_value"]);



}


void test_MailAlertsResponse_inner_alert_to_is_converted_to_json()
{

    bourne::json input =
    {
        "alert_to", "hello"
    };

    MailAlertsResponse_inner obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["alert_to"] == output["alert_to"]);



}


void test_MailAlertsResponse_inner_alert_enabled_is_converted_to_json()
{

    bourne::json input =
    {
        "alert_enabled", "hello"
    };

    MailAlertsResponse_inner obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["alert_enabled"] == output["alert_enabled"]);



}


