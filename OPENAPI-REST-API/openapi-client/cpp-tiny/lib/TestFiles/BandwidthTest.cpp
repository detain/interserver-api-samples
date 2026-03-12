
#include "Bandwidth.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_Bandwidth_id_is_assigned_from_json()
{
    bourne::json input =
    {
        "id", 1
    };

    Bandwidth obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getId());








}


void test_Bandwidth_short_desc_is_assigned_from_json()
{


    bourne::json input =
    {
        "short_desc", "hello"
    };

    Bandwidth obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getShortDesc().c_str());






}


void test_Bandwidth_monthly_price_is_assigned_from_json()
{








}


void test_Bandwidth_monthly_price_display_is_assigned_from_json()
{


    bourne::json input =
    {
        "monthly_price_display", "hello"
    };

    Bandwidth obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getMonthlyPriceDisplay().c_str());






}



void test_Bandwidth_id_is_converted_to_json()
{
    bourne::json input =
    {
        "id", 1
    };

    Bandwidth obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["id"] == output["id"]);




}


void test_Bandwidth_short_desc_is_converted_to_json()
{

    bourne::json input =
    {
        "short_desc", "hello"
    };

    Bandwidth obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["short_desc"] == output["short_desc"]);



}


void test_Bandwidth_monthly_price_is_converted_to_json()
{




}


void test_Bandwidth_monthly_price_display_is_converted_to_json()
{

    bourne::json input =
    {
        "monthly_price_display", "hello"
    };

    Bandwidth obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["monthly_price_display"] == output["monthly_price_display"]);



}


