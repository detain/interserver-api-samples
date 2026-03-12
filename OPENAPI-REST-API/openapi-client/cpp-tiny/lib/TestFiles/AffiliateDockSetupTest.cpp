
#include "AffiliateDockSetup.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_AffiliateDockSetup_affiliate_dock_title_is_assigned_from_json()
{


    bourne::json input =
    {
        "affiliate_dock_title", "hello"
    };

    AffiliateDockSetup obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getAffiliateDockTitle().c_str());






}


void test_AffiliateDockSetup_affiliate_dock_description_is_assigned_from_json()
{


    bourne::json input =
    {
        "affiliate_dock_description", "hello"
    };

    AffiliateDockSetup obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getAffiliateDockDescription().c_str());






}


void test_AffiliateDockSetup_referrer_coupon_is_assigned_from_json()
{


    bourne::json input =
    {
        "referrer_coupon", "hello"
    };

    AffiliateDockSetup obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getReferrerCoupon().c_str());






}



void test_AffiliateDockSetup_affiliate_dock_title_is_converted_to_json()
{

    bourne::json input =
    {
        "affiliate_dock_title", "hello"
    };

    AffiliateDockSetup obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["affiliate_dock_title"] == output["affiliate_dock_title"]);



}


void test_AffiliateDockSetup_affiliate_dock_description_is_converted_to_json()
{

    bourne::json input =
    {
        "affiliate_dock_description", "hello"
    };

    AffiliateDockSetup obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["affiliate_dock_description"] == output["affiliate_dock_description"]);



}


void test_AffiliateDockSetup_referrer_coupon_is_converted_to_json()
{

    bourne::json input =
    {
        "referrer_coupon", "hello"
    };

    AffiliateDockSetup obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["referrer_coupon"] == output["referrer_coupon"]);



}


