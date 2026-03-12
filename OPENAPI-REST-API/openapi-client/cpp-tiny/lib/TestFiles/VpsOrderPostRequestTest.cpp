
#include "VpsOrderPostRequest.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_VpsOrderPostRequest_osDistro_is_assigned_from_json()
{


    bourne::json input =
    {
        "osDistro", "hello"
    };

    VpsOrderPostRequest obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getOsDistro().c_str());






}


void test_VpsOrderPostRequest_slices_is_assigned_from_json()
{
    bourne::json input =
    {
        "slices", 1
    };

    VpsOrderPostRequest obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getSlices());








}


void test_VpsOrderPostRequest_vpsPlatform_is_assigned_from_json()
{


    bourne::json input =
    {
        "vpsPlatform", "hello"
    };

    VpsOrderPostRequest obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getVpsPlatform().c_str());






}


void test_VpsOrderPostRequest_period_is_assigned_from_json()
{
    bourne::json input =
    {
        "period", 1
    };

    VpsOrderPostRequest obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getPeriod());








}


void test_VpsOrderPostRequest_location_is_assigned_from_json()
{
    bourne::json input =
    {
        "location", 1
    };

    VpsOrderPostRequest obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getLocation());








}


void test_VpsOrderPostRequest_osVersion_is_assigned_from_json()
{


    bourne::json input =
    {
        "osVersion", "hello"
    };

    VpsOrderPostRequest obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getOsVersion().c_str());






}


void test_VpsOrderPostRequest_hostname_is_assigned_from_json()
{


    bourne::json input =
    {
        "hostname", "hello"
    };

    VpsOrderPostRequest obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getHostname().c_str());






}


void test_VpsOrderPostRequest_rootpass_is_assigned_from_json()
{


    bourne::json input =
    {
        "rootpass", "hello"
    };

    VpsOrderPostRequest obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getRootpass().c_str());






}


void test_VpsOrderPostRequest_controlpanel_is_assigned_from_json()
{


    bourne::json input =
    {
        "controlpanel", "hello"
    };

    VpsOrderPostRequest obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getControlpanel().c_str());






}


void test_VpsOrderPostRequest_coupon_is_assigned_from_json()
{


    bourne::json input =
    {
        "coupon", "hello"
    };

    VpsOrderPostRequest obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCoupon().c_str());






}


void test_VpsOrderPostRequest_comment_is_assigned_from_json()
{


    bourne::json input =
    {
        "comment", "hello"
    };

    VpsOrderPostRequest obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getComment().c_str());






}



void test_VpsOrderPostRequest_osDistro_is_converted_to_json()
{

    bourne::json input =
    {
        "osDistro", "hello"
    };

    VpsOrderPostRequest obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["osDistro"] == output["osDistro"]);



}


void test_VpsOrderPostRequest_slices_is_converted_to_json()
{
    bourne::json input =
    {
        "slices", 1
    };

    VpsOrderPostRequest obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["slices"] == output["slices"]);




}


void test_VpsOrderPostRequest_vpsPlatform_is_converted_to_json()
{

    bourne::json input =
    {
        "vpsPlatform", "hello"
    };

    VpsOrderPostRequest obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["vpsPlatform"] == output["vpsPlatform"]);



}


void test_VpsOrderPostRequest_period_is_converted_to_json()
{
    bourne::json input =
    {
        "period", 1
    };

    VpsOrderPostRequest obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["period"] == output["period"]);




}


void test_VpsOrderPostRequest_location_is_converted_to_json()
{
    bourne::json input =
    {
        "location", 1
    };

    VpsOrderPostRequest obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["location"] == output["location"]);




}


void test_VpsOrderPostRequest_osVersion_is_converted_to_json()
{

    bourne::json input =
    {
        "osVersion", "hello"
    };

    VpsOrderPostRequest obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["osVersion"] == output["osVersion"]);



}


void test_VpsOrderPostRequest_hostname_is_converted_to_json()
{

    bourne::json input =
    {
        "hostname", "hello"
    };

    VpsOrderPostRequest obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["hostname"] == output["hostname"]);



}


void test_VpsOrderPostRequest_rootpass_is_converted_to_json()
{

    bourne::json input =
    {
        "rootpass", "hello"
    };

    VpsOrderPostRequest obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["rootpass"] == output["rootpass"]);



}


void test_VpsOrderPostRequest_controlpanel_is_converted_to_json()
{

    bourne::json input =
    {
        "controlpanel", "hello"
    };

    VpsOrderPostRequest obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["controlpanel"] == output["controlpanel"]);



}


void test_VpsOrderPostRequest_coupon_is_converted_to_json()
{

    bourne::json input =
    {
        "coupon", "hello"
    };

    VpsOrderPostRequest obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["coupon"] == output["coupon"]);



}


void test_VpsOrderPostRequest_comment_is_converted_to_json()
{

    bourne::json input =
    {
        "comment", "hello"
    };

    VpsOrderPostRequest obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["comment"] == output["comment"]);



}


