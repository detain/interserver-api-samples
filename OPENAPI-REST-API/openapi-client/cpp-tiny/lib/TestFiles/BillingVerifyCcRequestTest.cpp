
#include "BillingVerifyCcRequest.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_BillingVerifyCcRequest_idx_is_assigned_from_json()
{
    bourne::json input =
    {
        "idx", 1
    };

    BillingVerifyCcRequest obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getIdx());








}


void test_BillingVerifyCcRequest_cc_ccv2_is_assigned_from_json()
{


    bourne::json input =
    {
        "cc_ccv2", "hello"
    };

    BillingVerifyCcRequest obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCcCcv2().c_str());






}


void test_BillingVerifyCcRequest_cc_amount1_is_assigned_from_json()
{


    bourne::json input =
    {
        "cc_amount1", "hello"
    };

    BillingVerifyCcRequest obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCcAmount1().c_str());






}


void test_BillingVerifyCcRequest_cc_amount2_is_assigned_from_json()
{


    bourne::json input =
    {
        "cc_amount2", "hello"
    };

    BillingVerifyCcRequest obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCcAmount2().c_str());






}


void test_BillingVerifyCcRequest_terms_is_assigned_from_json()
{




    bourne::json input =
    {
        "terms", true
    };

    BillingVerifyCcRequest obj(input.dump());

    TEST_ASSERT(true == obj.isTerms());




}



void test_BillingVerifyCcRequest_idx_is_converted_to_json()
{
    bourne::json input =
    {
        "idx", 1
    };

    BillingVerifyCcRequest obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["idx"] == output["idx"]);




}


void test_BillingVerifyCcRequest_cc_ccv2_is_converted_to_json()
{

    bourne::json input =
    {
        "cc_ccv2", "hello"
    };

    BillingVerifyCcRequest obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["cc_ccv2"] == output["cc_ccv2"]);



}


void test_BillingVerifyCcRequest_cc_amount1_is_converted_to_json()
{

    bourne::json input =
    {
        "cc_amount1", "hello"
    };

    BillingVerifyCcRequest obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["cc_amount1"] == output["cc_amount1"]);



}


void test_BillingVerifyCcRequest_cc_amount2_is_converted_to_json()
{

    bourne::json input =
    {
        "cc_amount2", "hello"
    };

    BillingVerifyCcRequest obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["cc_amount2"] == output["cc_amount2"]);



}


void test_BillingVerifyCcRequest_terms_is_converted_to_json()
{


    bourne::json input =
    {
        "terms", true
    };

    BillingVerifyCcRequest obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["terms"] == output["terms"]);


}


