
#include "MailSchema.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"






void test_MailSchema_custCurrency_is_assigned_from_json()
{


    bourne::json input =
    {
        "custCurrency", "hello"
    };

    MailSchema obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCustCurrency().c_str());






}


void test_MailSchema_custCurrencySymbol_is_assigned_from_json()
{


    bourne::json input =
    {
        "custCurrencySymbol", "hello"
    };

    MailSchema obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCustCurrencySymbol().c_str());






}


void test_MailSchema_package_is_assigned_from_json()
{


    bourne::json input =
    {
        "package", "hello"
    };

    MailSchema obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getPackage().c_str());






}




void test_MailSchema_usage_count_is_assigned_from_json()
{


    bourne::json input =
    {
        "usage_count", "hello"
    };

    MailSchema obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getUsageCount().c_str());






}







void test_MailSchema_custCurrency_is_converted_to_json()
{

    bourne::json input =
    {
        "custCurrency", "hello"
    };

    MailSchema obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["custCurrency"] == output["custCurrency"]);



}


void test_MailSchema_custCurrencySymbol_is_converted_to_json()
{

    bourne::json input =
    {
        "custCurrencySymbol", "hello"
    };

    MailSchema obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["custCurrencySymbol"] == output["custCurrencySymbol"]);



}


void test_MailSchema_package_is_converted_to_json()
{

    bourne::json input =
    {
        "package", "hello"
    };

    MailSchema obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["package"] == output["package"]);



}




void test_MailSchema_usage_count_is_converted_to_json()
{

    bourne::json input =
    {
        "usage_count", "hello"
    };

    MailSchema obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["usage_count"] == output["usage_count"]);



}



