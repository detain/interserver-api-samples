
#include "MailStatsType.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_MailStatsType_time_is_assigned_from_json()
{


    bourne::json input =
    {
        "time", "hello"
    };

    MailStatsType obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getTime().c_str());






}


void test_MailStatsType_usage_is_assigned_from_json()
{
    bourne::json input =
    {
        "usage", 1
    };

    MailStatsType obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getUsage());








}


void test_MailStatsType_currency_is_assigned_from_json()
{


    bourne::json input =
    {
        "currency", "hello"
    };

    MailStatsType obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCurrency().c_str());






}


void test_MailStatsType_currencySymbol_is_assigned_from_json()
{


    bourne::json input =
    {
        "currencySymbol", "hello"
    };

    MailStatsType obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCurrencySymbol().c_str());






}


void test_MailStatsType_cost_is_assigned_from_json()
{








}


void test_MailStatsType_received_is_assigned_from_json()
{
    bourne::json input =
    {
        "received", 1
    };

    MailStatsType obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getReceived());








}


void test_MailStatsType_sent_is_assigned_from_json()
{
    bourne::json input =
    {
        "sent", 1
    };

    MailStatsType obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getSent());








}




void test_MailStatsType_time_is_converted_to_json()
{

    bourne::json input =
    {
        "time", "hello"
    };

    MailStatsType obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["time"] == output["time"]);



}


void test_MailStatsType_usage_is_converted_to_json()
{
    bourne::json input =
    {
        "usage", 1
    };

    MailStatsType obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["usage"] == output["usage"]);




}


void test_MailStatsType_currency_is_converted_to_json()
{

    bourne::json input =
    {
        "currency", "hello"
    };

    MailStatsType obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["currency"] == output["currency"]);



}


void test_MailStatsType_currencySymbol_is_converted_to_json()
{

    bourne::json input =
    {
        "currencySymbol", "hello"
    };

    MailStatsType obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["currencySymbol"] == output["currencySymbol"]);



}


void test_MailStatsType_cost_is_converted_to_json()
{




}


void test_MailStatsType_received_is_converted_to_json()
{
    bourne::json input =
    {
        "received", 1
    };

    MailStatsType obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["received"] == output["received"]);




}


void test_MailStatsType_sent_is_converted_to_json()
{
    bourne::json input =
    {
        "sent", 1
    };

    MailStatsType obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["sent"] == output["sent"]);




}



