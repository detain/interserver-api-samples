
#include "Home_ticketStatusView.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_Home_ticketStatusView_4_is_assigned_from_json()
{


    bourne::json input =
    {
        "4", "hello"
    };

    Home_ticketStatusView obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.get4().c_str());






}


void test_Home_ticketStatusView_5_is_assigned_from_json()
{


    bourne::json input =
    {
        "5", "hello"
    };

    Home_ticketStatusView obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.get5().c_str());






}


void test_Home_ticketStatusView_6_is_assigned_from_json()
{


    bourne::json input =
    {
        "6", "hello"
    };

    Home_ticketStatusView obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.get6().c_str());






}



void test_Home_ticketStatusView_4_is_converted_to_json()
{

    bourne::json input =
    {
        "4", "hello"
    };

    Home_ticketStatusView obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["4"] == output["4"]);



}


void test_Home_ticketStatusView_5_is_converted_to_json()
{

    bourne::json input =
    {
        "5", "hello"
    };

    Home_ticketStatusView obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["5"] == output["5"]);



}


void test_Home_ticketStatusView_6_is_converted_to_json()
{

    bourne::json input =
    {
        "6", "hello"
    };

    Home_ticketStatusView obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["6"] == output["6"]);



}


