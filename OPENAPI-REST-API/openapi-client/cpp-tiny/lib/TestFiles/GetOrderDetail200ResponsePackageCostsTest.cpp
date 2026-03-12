
#include "GetOrderDetail_200_response_packageCosts.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_GetOrderDetail_200_response_packageCosts_package_id_is_assigned_from_json()
{








}


void test_GetOrderDetail_200_response_packageCosts_package_cost_is_assigned_from_json()
{








}


void test_GetOrderDetail_200_response_packageCosts_currency_is_assigned_from_json()
{


    bourne::json input =
    {
        "currency", "hello"
    };

    GetOrderDetail_200_response_packageCosts obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCurrency().c_str());






}


void test_GetOrderDetail_200_response_packageCosts_currencySymbol_is_assigned_from_json()
{


    bourne::json input =
    {
        "currencySymbol", "hello"
    };

    GetOrderDetail_200_response_packageCosts obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCurrencySymbol().c_str());






}



void test_GetOrderDetail_200_response_packageCosts_package_id_is_converted_to_json()
{




}


void test_GetOrderDetail_200_response_packageCosts_package_cost_is_converted_to_json()
{




}


void test_GetOrderDetail_200_response_packageCosts_currency_is_converted_to_json()
{

    bourne::json input =
    {
        "currency", "hello"
    };

    GetOrderDetail_200_response_packageCosts obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["currency"] == output["currency"]);



}


void test_GetOrderDetail_200_response_packageCosts_currencySymbol_is_converted_to_json()
{

    bourne::json input =
    {
        "currencySymbol", "hello"
    };

    GetOrderDetail_200_response_packageCosts obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["currencySymbol"] == output["currencySymbol"]);



}


