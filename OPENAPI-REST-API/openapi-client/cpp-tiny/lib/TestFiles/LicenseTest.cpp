
#include "License.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"






void test_License_custCurrency_is_assigned_from_json()
{


    bourne::json input =
    {
        "custCurrency", "hello"
    };

    License obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCustCurrency().c_str());






}


void test_License_custCurrencySymbol_is_assigned_from_json()
{


    bourne::json input =
    {
        "custCurrencySymbol", "hello"
    };

    License obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCustCurrencySymbol().c_str());






}


void test_License_package_is_assigned_from_json()
{


    bourne::json input =
    {
        "package", "hello"
    };

    License obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getPackage().c_str());






}




void test_License_service_overview_extra_is_assigned_from_json()
{


    bourne::json input =
    {
        "service_overview_extra", "hello"
    };

    License obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getServiceOverviewExtra().c_str());






}



void test_License_license_key_is_assigned_from_json()
{


    bourne::json input =
    {
        "license_key", "hello"
    };

    License obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getLicenseKey().c_str());






}






void test_License_custCurrency_is_converted_to_json()
{

    bourne::json input =
    {
        "custCurrency", "hello"
    };

    License obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["custCurrency"] == output["custCurrency"]);



}


void test_License_custCurrencySymbol_is_converted_to_json()
{

    bourne::json input =
    {
        "custCurrencySymbol", "hello"
    };

    License obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["custCurrencySymbol"] == output["custCurrencySymbol"]);



}


void test_License_package_is_converted_to_json()
{

    bourne::json input =
    {
        "package", "hello"
    };

    License obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["package"] == output["package"]);



}




void test_License_service_overview_extra_is_converted_to_json()
{

    bourne::json input =
    {
        "service_overview_extra", "hello"
    };

    License obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["service_overview_extra"] == output["service_overview_extra"]);



}



void test_License_license_key_is_converted_to_json()
{

    bourne::json input =
    {
        "license_key", "hello"
    };

    License obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["license_key"] == output["license_key"]);



}


