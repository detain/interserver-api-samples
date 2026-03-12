
#include "BuyItNowServerOrder_200_response_ips_inner.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_BuyItNowServerOrder_200_response_ips_inner_id_is_assigned_from_json()
{


    bourne::json input =
    {
        "id", "hello"
    };

    BuyItNowServerOrder_200_response_ips_inner obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getId().c_str());






}


void test_BuyItNowServerOrder_200_response_ips_inner_short_desc_is_assigned_from_json()
{


    bourne::json input =
    {
        "short_desc", "hello"
    };

    BuyItNowServerOrder_200_response_ips_inner obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getShortDesc().c_str());






}


void test_BuyItNowServerOrder_200_response_ips_inner_long_desc_is_assigned_from_json()
{


    bourne::json input =
    {
        "long_desc", "hello"
    };

    BuyItNowServerOrder_200_response_ips_inner obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getLongDesc().c_str());






}


void test_BuyItNowServerOrder_200_response_ips_inner_monthly_price_is_assigned_from_json()
{


    bourne::json input =
    {
        "monthly_price", "hello"
    };

    BuyItNowServerOrder_200_response_ips_inner obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getMonthlyPrice().c_str());






}



void test_BuyItNowServerOrder_200_response_ips_inner_id_is_converted_to_json()
{

    bourne::json input =
    {
        "id", "hello"
    };

    BuyItNowServerOrder_200_response_ips_inner obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["id"] == output["id"]);



}


void test_BuyItNowServerOrder_200_response_ips_inner_short_desc_is_converted_to_json()
{

    bourne::json input =
    {
        "short_desc", "hello"
    };

    BuyItNowServerOrder_200_response_ips_inner obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["short_desc"] == output["short_desc"]);



}


void test_BuyItNowServerOrder_200_response_ips_inner_long_desc_is_converted_to_json()
{

    bourne::json input =
    {
        "long_desc", "hello"
    };

    BuyItNowServerOrder_200_response_ips_inner obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["long_desc"] == output["long_desc"]);



}


void test_BuyItNowServerOrder_200_response_ips_inner_monthly_price_is_converted_to_json()
{

    bourne::json input =
    {
        "monthly_price", "hello"
    };

    BuyItNowServerOrder_200_response_ips_inner obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["monthly_price"] == output["monthly_price"]);



}


