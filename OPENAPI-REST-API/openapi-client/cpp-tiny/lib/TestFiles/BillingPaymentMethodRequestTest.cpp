
#include "BillingPaymentMethodRequest.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_BillingPaymentMethodRequest_payment_method_is_assigned_from_json()
{


    bourne::json input =
    {
        "payment_method", "hello"
    };

    BillingPaymentMethodRequest obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getPaymentMethod().c_str());






}


void test_BillingPaymentMethodRequest_cc_auto_is_assigned_from_json()
{


    bourne::json input =
    {
        "cc_auto", "hello"
    };

    BillingPaymentMethodRequest obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCcAuto().c_str());






}



void test_BillingPaymentMethodRequest_payment_method_is_converted_to_json()
{

    bourne::json input =
    {
        "payment_method", "hello"
    };

    BillingPaymentMethodRequest obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["payment_method"] == output["payment_method"]);



}


void test_BillingPaymentMethodRequest_cc_auto_is_converted_to_json()
{

    bourne::json input =
    {
        "cc_auto", "hello"
    };

    BillingPaymentMethodRequest obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["cc_auto"] == output["cc_auto"]);



}


