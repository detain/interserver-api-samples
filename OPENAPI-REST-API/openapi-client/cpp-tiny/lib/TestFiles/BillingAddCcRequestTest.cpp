
#include "BillingAddCcRequest.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_BillingAddCcRequest_name_is_assigned_from_json()
{


    bourne::json input =
    {
        "name", "hello"
    };

    BillingAddCcRequest obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getName().c_str());






}


void test_BillingAddCcRequest_address_is_assigned_from_json()
{


    bourne::json input =
    {
        "address", "hello"
    };

    BillingAddCcRequest obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getAddress().c_str());






}


void test_BillingAddCcRequest_city_is_assigned_from_json()
{


    bourne::json input =
    {
        "city", "hello"
    };

    BillingAddCcRequest obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCity().c_str());






}


void test_BillingAddCcRequest_state_is_assigned_from_json()
{


    bourne::json input =
    {
        "state", "hello"
    };

    BillingAddCcRequest obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getState().c_str());






}


void test_BillingAddCcRequest_country_is_assigned_from_json()
{


    bourne::json input =
    {
        "country", "hello"
    };

    BillingAddCcRequest obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCountry().c_str());






}


void test_BillingAddCcRequest_zip_is_assigned_from_json()
{


    bourne::json input =
    {
        "zip", "hello"
    };

    BillingAddCcRequest obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getZip().c_str());






}


void test_BillingAddCcRequest_cc_is_assigned_from_json()
{


    bourne::json input =
    {
        "cc", "hello"
    };

    BillingAddCcRequest obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCc().c_str());






}


void test_BillingAddCcRequest_cc_exp_is_assigned_from_json()
{


    bourne::json input =
    {
        "cc_exp", "hello"
    };

    BillingAddCcRequest obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCcExp().c_str());






}


void test_BillingAddCcRequest_cc_ccv2_is_assigned_from_json()
{


    bourne::json input =
    {
        "cc_ccv2", "hello"
    };

    BillingAddCcRequest obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCcCcv2().c_str());






}



void test_BillingAddCcRequest_name_is_converted_to_json()
{

    bourne::json input =
    {
        "name", "hello"
    };

    BillingAddCcRequest obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["name"] == output["name"]);



}


void test_BillingAddCcRequest_address_is_converted_to_json()
{

    bourne::json input =
    {
        "address", "hello"
    };

    BillingAddCcRequest obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["address"] == output["address"]);



}


void test_BillingAddCcRequest_city_is_converted_to_json()
{

    bourne::json input =
    {
        "city", "hello"
    };

    BillingAddCcRequest obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["city"] == output["city"]);



}


void test_BillingAddCcRequest_state_is_converted_to_json()
{

    bourne::json input =
    {
        "state", "hello"
    };

    BillingAddCcRequest obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["state"] == output["state"]);



}


void test_BillingAddCcRequest_country_is_converted_to_json()
{

    bourne::json input =
    {
        "country", "hello"
    };

    BillingAddCcRequest obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["country"] == output["country"]);



}


void test_BillingAddCcRequest_zip_is_converted_to_json()
{

    bourne::json input =
    {
        "zip", "hello"
    };

    BillingAddCcRequest obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["zip"] == output["zip"]);



}


void test_BillingAddCcRequest_cc_is_converted_to_json()
{

    bourne::json input =
    {
        "cc", "hello"
    };

    BillingAddCcRequest obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["cc"] == output["cc"]);



}


void test_BillingAddCcRequest_cc_exp_is_converted_to_json()
{

    bourne::json input =
    {
        "cc_exp", "hello"
    };

    BillingAddCcRequest obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["cc_exp"] == output["cc_exp"]);



}


void test_BillingAddCcRequest_cc_ccv2_is_converted_to_json()
{

    bourne::json input =
    {
        "cc_ccv2", "hello"
    };

    BillingAddCcRequest obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["cc_ccv2"] == output["cc_ccv2"]);



}


