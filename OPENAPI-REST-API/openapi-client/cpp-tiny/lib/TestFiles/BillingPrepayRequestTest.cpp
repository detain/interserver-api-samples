
#include "BillingPrepayRequest.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_BillingPrepayRequest_module_is_assigned_from_json()
{


    bourne::json input =
    {
        "module", "hello"
    };

    BillingPrepayRequest obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getModule().c_str());






}


void test_BillingPrepayRequest_amount_is_assigned_from_json()
{








}


void test_BillingPrepayRequest_automatic_use_is_assigned_from_json()
{


    bourne::json input =
    {
        "automatic_use", "hello"
    };

    BillingPrepayRequest obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getAutomaticUse().c_str());






}



void test_BillingPrepayRequest_module_is_converted_to_json()
{

    bourne::json input =
    {
        "module", "hello"
    };

    BillingPrepayRequest obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["module"] == output["module"]);



}


void test_BillingPrepayRequest_amount_is_converted_to_json()
{




}


void test_BillingPrepayRequest_automatic_use_is_converted_to_json()
{

    bourne::json input =
    {
        "automatic_use", "hello"
    };

    BillingPrepayRequest obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["automatic_use"] == output["automatic_use"]);



}


