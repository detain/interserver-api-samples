
#include "Tickets_countArray.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_Tickets_countArray_open_is_assigned_from_json()
{
    bourne::json input =
    {
        "open", 1
    };

    Tickets_countArray obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getOpen());








}


void test_Tickets_countArray_onHold_is_assigned_from_json()
{
    bourne::json input =
    {
        "onHold", 1
    };

    Tickets_countArray obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getOnHold());








}


void test_Tickets_countArray_closed_is_assigned_from_json()
{
    bourne::json input =
    {
        "closed", 1
    };

    Tickets_countArray obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getClosed());








}



void test_Tickets_countArray_open_is_converted_to_json()
{
    bourne::json input =
    {
        "open", 1
    };

    Tickets_countArray obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["open"] == output["open"]);




}


void test_Tickets_countArray_onHold_is_converted_to_json()
{
    bourne::json input =
    {
        "onHold", 1
    };

    Tickets_countArray obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["onHold"] == output["onHold"]);




}


void test_Tickets_countArray_closed_is_converted_to_json()
{
    bourne::json input =
    {
        "closed", 1
    };

    Tickets_countArray obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["closed"] == output["closed"]);




}


