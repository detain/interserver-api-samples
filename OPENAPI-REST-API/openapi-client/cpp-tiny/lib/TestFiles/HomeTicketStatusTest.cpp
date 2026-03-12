
#include "Home_ticketStatus.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_Home_ticketStatus_open_is_assigned_from_json()
{
    bourne::json input =
    {
        "open", 1
    };

    Home_ticketStatus obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getOpen());








}


void test_Home_ticketStatus_onHold_is_assigned_from_json()
{
    bourne::json input =
    {
        "onHold", 1
    };

    Home_ticketStatus obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getOnHold());








}



void test_Home_ticketStatus_open_is_converted_to_json()
{
    bourne::json input =
    {
        "open", 1
    };

    Home_ticketStatus obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["open"] == output["open"]);




}


void test_Home_ticketStatus_onHold_is_converted_to_json()
{
    bourne::json input =
    {
        "onHold", 1
    };

    Home_ticketStatus obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["onHold"] == output["onHold"]);




}


