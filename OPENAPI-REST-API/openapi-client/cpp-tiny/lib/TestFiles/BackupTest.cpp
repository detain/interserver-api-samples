
#include "Backup.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"






void test_Backup_custCurrency_is_assigned_from_json()
{


    bourne::json input =
    {
        "custCurrency", "hello"
    };

    Backup obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCustCurrency().c_str());






}


void test_Backup_custCurrencySymbol_is_assigned_from_json()
{


    bourne::json input =
    {
        "custCurrencySymbol", "hello"
    };

    Backup obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCustCurrencySymbol().c_str());






}



void test_Backup_package_is_assigned_from_json()
{


    bourne::json input =
    {
        "package", "hello"
    };

    Backup obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getPackage().c_str());






}


void test_Backup_serviceExtra_is_assigned_from_json()
{


    bourne::json input =
    {
        "serviceExtra", "hello"
    };

    Backup obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getServiceExtra().c_str());






}







void test_Backup_custCurrency_is_converted_to_json()
{

    bourne::json input =
    {
        "custCurrency", "hello"
    };

    Backup obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["custCurrency"] == output["custCurrency"]);



}


void test_Backup_custCurrencySymbol_is_converted_to_json()
{

    bourne::json input =
    {
        "custCurrencySymbol", "hello"
    };

    Backup obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["custCurrencySymbol"] == output["custCurrencySymbol"]);



}



void test_Backup_package_is_converted_to_json()
{

    bourne::json input =
    {
        "package", "hello"
    };

    Backup obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["package"] == output["package"]);



}


void test_Backup_serviceExtra_is_converted_to_json()
{

    bourne::json input =
    {
        "serviceExtra", "hello"
    };

    Backup obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["serviceExtra"] == output["serviceExtra"]);



}



