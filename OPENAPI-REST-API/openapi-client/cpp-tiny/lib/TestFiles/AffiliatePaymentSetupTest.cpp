
#include "AffiliatePaymentSetup.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_AffiliatePaymentSetup_affiliate_paypal_is_assigned_from_json()
{


    bourne::json input =
    {
        "affiliate_paypal", "hello"
    };

    AffiliatePaymentSetup obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getAffiliatePaypal().c_str());






}


void test_AffiliatePaymentSetup_affiliate_payment_method_is_assigned_from_json()
{


    bourne::json input =
    {
        "affiliate_payment_method", "hello"
    };

    AffiliatePaymentSetup obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getAffiliatePaymentMethod().c_str());






}



void test_AffiliatePaymentSetup_affiliate_paypal_is_converted_to_json()
{

    bourne::json input =
    {
        "affiliate_paypal", "hello"
    };

    AffiliatePaymentSetup obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["affiliate_paypal"] == output["affiliate_paypal"]);



}


void test_AffiliatePaymentSetup_affiliate_payment_method_is_converted_to_json()
{

    bourne::json input =
    {
        "affiliate_payment_method", "hello"
    };

    AffiliatePaymentSetup obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["affiliate_payment_method"] == output["affiliate_payment_method"]);



}


