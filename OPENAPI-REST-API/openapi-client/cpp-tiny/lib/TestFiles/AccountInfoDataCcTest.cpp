
#include "AccountInfoDataCc.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_AccountInfoDataCc_cc_is_assigned_from_json()
{


    bourne::json input =
    {
        "cc", "hello"
    };

    AccountInfoDataCc obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCc().c_str());






}


void test_AccountInfoDataCc_cc_exp_is_assigned_from_json()
{


    bourne::json input =
    {
        "cc_exp", "hello"
    };

    AccountInfoDataCc obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCcExp().c_str());






}


void test_AccountInfoDataCc_name_is_assigned_from_json()
{


    bourne::json input =
    {
        "name", "hello"
    };

    AccountInfoDataCc obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getName().c_str());






}


void test_AccountInfoDataCc_address_is_assigned_from_json()
{


    bourne::json input =
    {
        "address", "hello"
    };

    AccountInfoDataCc obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getAddress().c_str());






}


void test_AccountInfoDataCc_city_is_assigned_from_json()
{


    bourne::json input =
    {
        "city", "hello"
    };

    AccountInfoDataCc obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCity().c_str());






}


void test_AccountInfoDataCc_state_is_assigned_from_json()
{


    bourne::json input =
    {
        "state", "hello"
    };

    AccountInfoDataCc obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getState().c_str());






}


void test_AccountInfoDataCc_zip_is_assigned_from_json()
{


    bourne::json input =
    {
        "zip", "hello"
    };

    AccountInfoDataCc obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getZip().c_str());






}


void test_AccountInfoDataCc_country_is_assigned_from_json()
{


    bourne::json input =
    {
        "country", "hello"
    };

    AccountInfoDataCc obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCountry().c_str());






}


void test_AccountInfoDataCc_maxmind_riskscore_is_assigned_from_json()
{


    bourne::json input =
    {
        "maxmind_riskscore", "hello"
    };

    AccountInfoDataCc obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getMaxmindRiskscore().c_str());






}



void test_AccountInfoDataCc_verified_is_assigned_from_json()
{




    bourne::json input =
    {
        "verified", true
    };

    AccountInfoDataCc obj(input.dump());

    TEST_ASSERT(true == obj.isVerified());




}



void test_AccountInfoDataCc_cc_is_converted_to_json()
{

    bourne::json input =
    {
        "cc", "hello"
    };

    AccountInfoDataCc obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["cc"] == output["cc"]);



}


void test_AccountInfoDataCc_cc_exp_is_converted_to_json()
{

    bourne::json input =
    {
        "cc_exp", "hello"
    };

    AccountInfoDataCc obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["cc_exp"] == output["cc_exp"]);



}


void test_AccountInfoDataCc_name_is_converted_to_json()
{

    bourne::json input =
    {
        "name", "hello"
    };

    AccountInfoDataCc obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["name"] == output["name"]);



}


void test_AccountInfoDataCc_address_is_converted_to_json()
{

    bourne::json input =
    {
        "address", "hello"
    };

    AccountInfoDataCc obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["address"] == output["address"]);



}


void test_AccountInfoDataCc_city_is_converted_to_json()
{

    bourne::json input =
    {
        "city", "hello"
    };

    AccountInfoDataCc obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["city"] == output["city"]);



}


void test_AccountInfoDataCc_state_is_converted_to_json()
{

    bourne::json input =
    {
        "state", "hello"
    };

    AccountInfoDataCc obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["state"] == output["state"]);



}


void test_AccountInfoDataCc_zip_is_converted_to_json()
{

    bourne::json input =
    {
        "zip", "hello"
    };

    AccountInfoDataCc obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["zip"] == output["zip"]);



}


void test_AccountInfoDataCc_country_is_converted_to_json()
{

    bourne::json input =
    {
        "country", "hello"
    };

    AccountInfoDataCc obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["country"] == output["country"]);



}


void test_AccountInfoDataCc_maxmind_riskscore_is_converted_to_json()
{

    bourne::json input =
    {
        "maxmind_riskscore", "hello"
    };

    AccountInfoDataCc obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["maxmind_riskscore"] == output["maxmind_riskscore"]);



}



void test_AccountInfoDataCc_verified_is_converted_to_json()
{


    bourne::json input =
    {
        "verified", true
    };

    AccountInfoDataCc obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["verified"] == output["verified"]);


}


