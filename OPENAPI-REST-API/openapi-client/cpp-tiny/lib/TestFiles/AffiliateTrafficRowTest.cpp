
#include "AffiliateTrafficRow.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_AffiliateTrafficRow_traffic_id_is_assigned_from_json()
{


    bourne::json input =
    {
        "traffic_id", "hello"
    };

    AffiliateTrafficRow obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getTrafficId().c_str());






}


void test_AffiliateTrafficRow_traffic_ip_is_assigned_from_json()
{


    bourne::json input =
    {
        "traffic_ip", "hello"
    };

    AffiliateTrafficRow obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getTrafficIp().c_str());






}


void test_AffiliateTrafficRow_traffic_url_is_assigned_from_json()
{


    bourne::json input =
    {
        "traffic_url", "hello"
    };

    AffiliateTrafficRow obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getTrafficUrl().c_str());






}


void test_AffiliateTrafficRow_traffic_affiliate_is_assigned_from_json()
{


    bourne::json input =
    {
        "traffic_affiliate", "hello"
    };

    AffiliateTrafficRow obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getTrafficAffiliate().c_str());






}


void test_AffiliateTrafficRow_traffic_referrer_is_assigned_from_json()
{


    bourne::json input =
    {
        "traffic_referrer", "hello"
    };

    AffiliateTrafficRow obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getTrafficReferrer().c_str());






}


void test_AffiliateTrafficRow_traffic_timestamp_is_assigned_from_json()
{


    bourne::json input =
    {
        "traffic_timestamp", "hello"
    };

    AffiliateTrafficRow obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getTrafficTimestamp().c_str());






}



void test_AffiliateTrafficRow_traffic_id_is_converted_to_json()
{

    bourne::json input =
    {
        "traffic_id", "hello"
    };

    AffiliateTrafficRow obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["traffic_id"] == output["traffic_id"]);



}


void test_AffiliateTrafficRow_traffic_ip_is_converted_to_json()
{

    bourne::json input =
    {
        "traffic_ip", "hello"
    };

    AffiliateTrafficRow obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["traffic_ip"] == output["traffic_ip"]);



}


void test_AffiliateTrafficRow_traffic_url_is_converted_to_json()
{

    bourne::json input =
    {
        "traffic_url", "hello"
    };

    AffiliateTrafficRow obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["traffic_url"] == output["traffic_url"]);



}


void test_AffiliateTrafficRow_traffic_affiliate_is_converted_to_json()
{

    bourne::json input =
    {
        "traffic_affiliate", "hello"
    };

    AffiliateTrafficRow obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["traffic_affiliate"] == output["traffic_affiliate"]);



}


void test_AffiliateTrafficRow_traffic_referrer_is_converted_to_json()
{

    bourne::json input =
    {
        "traffic_referrer", "hello"
    };

    AffiliateTrafficRow obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["traffic_referrer"] == output["traffic_referrer"]);



}


void test_AffiliateTrafficRow_traffic_timestamp_is_converted_to_json()
{

    bourne::json input =
    {
        "traffic_timestamp", "hello"
    };

    AffiliateTrafficRow obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["traffic_timestamp"] == output["traffic_timestamp"]);



}


