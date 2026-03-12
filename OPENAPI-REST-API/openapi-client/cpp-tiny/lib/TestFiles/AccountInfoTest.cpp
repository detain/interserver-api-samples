
#include "AccountInfo.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_AccountInfo_custid_is_assigned_from_json()
{


    bourne::json input =
    {
        "custid", "hello"
    };

    AccountInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCustid().c_str());






}


void test_AccountInfo_ima_is_assigned_from_json()
{


    bourne::json input =
    {
        "ima", "hello"
    };

    AccountInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getIma().c_str());






}



void test_AccountInfo_ip_is_assigned_from_json()
{


    bourne::json input =
    {
        "ip", "hello"
    };

    AccountInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getIp().c_str());






}






void test_AccountInfo_language_is_assigned_from_json()
{


    bourne::json input =
    {
        "language", "hello"
    };

    AccountInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getLanguage().c_str());






}



void test_AccountInfo_enableLocales_is_assigned_from_json()
{




    bourne::json input =
    {
        "enableLocales", true
    };

    AccountInfo obj(input.dump());

    TEST_ASSERT(true == obj.isEnableLocales());




}


void test_AccountInfo_enableCurrencies_is_assigned_from_json()
{




    bourne::json input =
    {
        "enableCurrencies", true
    };

    AccountInfo obj(input.dump());

    TEST_ASSERT(true == obj.isEnableCurrencies());




}


void test_AccountInfo_gravatar_is_assigned_from_json()
{


    bourne::json input =
    {
        "gravatar", "hello"
    };

    AccountInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getGravatar().c_str());






}



void test_AccountInfo_custid_is_converted_to_json()
{

    bourne::json input =
    {
        "custid", "hello"
    };

    AccountInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["custid"] == output["custid"]);



}


void test_AccountInfo_ima_is_converted_to_json()
{

    bourne::json input =
    {
        "ima", "hello"
    };

    AccountInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["ima"] == output["ima"]);



}



void test_AccountInfo_ip_is_converted_to_json()
{

    bourne::json input =
    {
        "ip", "hello"
    };

    AccountInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["ip"] == output["ip"]);



}






void test_AccountInfo_language_is_converted_to_json()
{

    bourne::json input =
    {
        "language", "hello"
    };

    AccountInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["language"] == output["language"]);



}



void test_AccountInfo_enableLocales_is_converted_to_json()
{


    bourne::json input =
    {
        "enableLocales", true
    };

    AccountInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["enableLocales"] == output["enableLocales"]);


}


void test_AccountInfo_enableCurrencies_is_converted_to_json()
{


    bourne::json input =
    {
        "enableCurrencies", true
    };

    AccountInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["enableCurrencies"] == output["enableCurrencies"]);


}


void test_AccountInfo_gravatar_is_converted_to_json()
{

    bourne::json input =
    {
        "gravatar", "hello"
    };

    AccountInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["gravatar"] == output["gravatar"]);



}


