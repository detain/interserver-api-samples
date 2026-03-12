
#include "Domain.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"







void test_Domain_custCurrency_is_assigned_from_json()
{


    bourne::json input =
    {
        "custCurrency", "hello"
    };

    Domain obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCustCurrency().c_str());






}


void test_Domain_custCurrencySymbol_is_assigned_from_json()
{


    bourne::json input =
    {
        "custCurrencySymbol", "hello"
    };

    Domain obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCustCurrencySymbol().c_str());






}






void test_Domain_pwarning_is_assigned_from_json()
{


    bourne::json input =
    {
        "pwarning", "hello"
    };

    Domain obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getPwarning().c_str());






}


void test_Domain_transfer_info_is_assigned_from_json()
{


    bourne::json input =
    {
        "transfer_info", "hello"
    };

    Domain obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getTransferInfo().c_str());






}


void test_Domain_errors_is_assigned_from_json()
{




    bourne::json input =
    {
        "errors", true
    };

    Domain obj(input.dump());

    TEST_ASSERT(true == obj.isErrors());




}




void test_Domain_registrarStatus_is_assigned_from_json()
{


    bourne::json input =
    {
        "registrarStatus", "hello"
    };

    Domain obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getRegistrarStatus().c_str());






}


void test_Domain_locked_is_assigned_from_json()
{


    bourne::json input =
    {
        "locked", "hello"
    };

    Domain obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getLocked().c_str());






}


void test_Domain_whoisPrivacy_is_assigned_from_json()
{


    bourne::json input =
    {
        "whoisPrivacy", "hello"
    };

    Domain obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getWhoisPrivacy().c_str());






}


void test_Domain_autoRenew_is_assigned_from_json()
{


    bourne::json input =
    {
        "autoRenew", "hello"
    };

    Domain obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getAutoRenew().c_str());






}







void test_Domain_custCurrency_is_converted_to_json()
{

    bourne::json input =
    {
        "custCurrency", "hello"
    };

    Domain obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["custCurrency"] == output["custCurrency"]);



}


void test_Domain_custCurrencySymbol_is_converted_to_json()
{

    bourne::json input =
    {
        "custCurrencySymbol", "hello"
    };

    Domain obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["custCurrencySymbol"] == output["custCurrencySymbol"]);



}






void test_Domain_pwarning_is_converted_to_json()
{

    bourne::json input =
    {
        "pwarning", "hello"
    };

    Domain obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["pwarning"] == output["pwarning"]);



}


void test_Domain_transfer_info_is_converted_to_json()
{

    bourne::json input =
    {
        "transfer_info", "hello"
    };

    Domain obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["transfer_info"] == output["transfer_info"]);



}


void test_Domain_errors_is_converted_to_json()
{


    bourne::json input =
    {
        "errors", true
    };

    Domain obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["errors"] == output["errors"]);


}




void test_Domain_registrarStatus_is_converted_to_json()
{

    bourne::json input =
    {
        "registrarStatus", "hello"
    };

    Domain obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["registrarStatus"] == output["registrarStatus"]);



}


void test_Domain_locked_is_converted_to_json()
{

    bourne::json input =
    {
        "locked", "hello"
    };

    Domain obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["locked"] == output["locked"]);



}


void test_Domain_whoisPrivacy_is_converted_to_json()
{

    bourne::json input =
    {
        "whoisPrivacy", "hello"
    };

    Domain obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["whoisPrivacy"] == output["whoisPrivacy"]);



}


void test_Domain_autoRenew_is_converted_to_json()
{

    bourne::json input =
    {
        "autoRenew", "hello"
    };

    Domain obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["autoRenew"] == output["autoRenew"]);



}


