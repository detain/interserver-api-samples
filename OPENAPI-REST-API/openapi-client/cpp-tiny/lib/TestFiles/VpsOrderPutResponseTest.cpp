
#include "VpsOrderPutResponse.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_VpsOrderPutResponse_r_continue_is_assigned_from_json()
{




    bourne::json input =
    {
        "r_continue", true
    };

    VpsOrderPutResponse obj(input.dump());

    TEST_ASSERT(true == obj.isRContinue());




}



void test_VpsOrderPutResponse_coupon_code_is_assigned_from_json()
{
    bourne::json input =
    {
        "coupon_code", 1
    };

    VpsOrderPutResponse obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getCouponCode());








}


void test_VpsOrderPutResponse_service_cost_is_assigned_from_json()
{
    bourne::json input =
    {
        "service_cost", 1
    };

    VpsOrderPutResponse obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getServiceCost());








}


void test_VpsOrderPutResponse_slice_cost_is_assigned_from_json()
{
    bourne::json input =
    {
        "slice_cost", 1
    };

    VpsOrderPutResponse obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getSliceCost());








}


void test_VpsOrderPutResponse_service_type_is_assigned_from_json()
{
    bourne::json input =
    {
        "service_type", 1
    };

    VpsOrderPutResponse obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getServiceType());








}


void test_VpsOrderPutResponse_repeat_slice_cost_is_assigned_from_json()
{
    bourne::json input =
    {
        "repeat_slice_cost", 1
    };

    VpsOrderPutResponse obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getRepeatSliceCost());








}


void test_VpsOrderPutResponse_original_slice_cost_is_assigned_from_json()
{
    bourne::json input =
    {
        "original_slice_cost", 1
    };

    VpsOrderPutResponse obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getOriginalSliceCost());








}


void test_VpsOrderPutResponse_original_cost_is_assigned_from_json()
{
    bourne::json input =
    {
        "original_cost", 1
    };

    VpsOrderPutResponse obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getOriginalCost());








}


void test_VpsOrderPutResponse_repeat_service_cost_is_assigned_from_json()
{
    bourne::json input =
    {
        "repeat_service_cost", 1
    };

    VpsOrderPutResponse obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getRepeatServiceCost());








}


void test_VpsOrderPutResponse_monthly_service_cost_is_assigned_from_json()
{
    bourne::json input =
    {
        "monthly_service_cost", 1
    };

    VpsOrderPutResponse obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getMonthlyServiceCost());








}


void test_VpsOrderPutResponse_custid_is_assigned_from_json()
{


    bourne::json input =
    {
        "custid", "hello"
    };

    VpsOrderPutResponse obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCustid().c_str());






}


void test_VpsOrderPutResponse_os_is_assigned_from_json()
{


    bourne::json input =
    {
        "os", "hello"
    };

    VpsOrderPutResponse obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getOs().c_str());






}


void test_VpsOrderPutResponse_slices_is_assigned_from_json()
{


    bourne::json input =
    {
        "slices", "hello"
    };

    VpsOrderPutResponse obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getSlices().c_str());






}


void test_VpsOrderPutResponse_platform_is_assigned_from_json()
{


    bourne::json input =
    {
        "platform", "hello"
    };

    VpsOrderPutResponse obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getPlatform().c_str());






}


void test_VpsOrderPutResponse_controlpanel_is_assigned_from_json()
{


    bourne::json input =
    {
        "controlpanel", "hello"
    };

    VpsOrderPutResponse obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getControlpanel().c_str());






}


void test_VpsOrderPutResponse_period_is_assigned_from_json()
{
    bourne::json input =
    {
        "period", 1
    };

    VpsOrderPutResponse obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getPeriod());








}


void test_VpsOrderPutResponse_location_is_assigned_from_json()
{
    bourne::json input =
    {
        "location", 1
    };

    VpsOrderPutResponse obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getLocation());








}


void test_VpsOrderPutResponse_version_is_assigned_from_json()
{


    bourne::json input =
    {
        "version", "hello"
    };

    VpsOrderPutResponse obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getVersion().c_str());






}


void test_VpsOrderPutResponse_hostname_is_assigned_from_json()
{


    bourne::json input =
    {
        "hostname", "hello"
    };

    VpsOrderPutResponse obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getHostname().c_str());






}


void test_VpsOrderPutResponse_coupon_is_assigned_from_json()
{


    bourne::json input =
    {
        "coupon", "hello"
    };

    VpsOrderPutResponse obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCoupon().c_str());






}


void test_VpsOrderPutResponse_rootpass_is_assigned_from_json()
{


    bourne::json input =
    {
        "rootpass", "hello"
    };

    VpsOrderPutResponse obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getRootpass().c_str());






}



void test_VpsOrderPutResponse_r_continue_is_converted_to_json()
{


    bourne::json input =
    {
        "r_continue", true
    };

    VpsOrderPutResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["r_continue"] == output["r_continue"]);


}



void test_VpsOrderPutResponse_coupon_code_is_converted_to_json()
{
    bourne::json input =
    {
        "coupon_code", 1
    };

    VpsOrderPutResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["coupon_code"] == output["coupon_code"]);




}


void test_VpsOrderPutResponse_service_cost_is_converted_to_json()
{
    bourne::json input =
    {
        "service_cost", 1
    };

    VpsOrderPutResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["service_cost"] == output["service_cost"]);




}


void test_VpsOrderPutResponse_slice_cost_is_converted_to_json()
{
    bourne::json input =
    {
        "slice_cost", 1
    };

    VpsOrderPutResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["slice_cost"] == output["slice_cost"]);




}


void test_VpsOrderPutResponse_service_type_is_converted_to_json()
{
    bourne::json input =
    {
        "service_type", 1
    };

    VpsOrderPutResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["service_type"] == output["service_type"]);




}


void test_VpsOrderPutResponse_repeat_slice_cost_is_converted_to_json()
{
    bourne::json input =
    {
        "repeat_slice_cost", 1
    };

    VpsOrderPutResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["repeat_slice_cost"] == output["repeat_slice_cost"]);




}


void test_VpsOrderPutResponse_original_slice_cost_is_converted_to_json()
{
    bourne::json input =
    {
        "original_slice_cost", 1
    };

    VpsOrderPutResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["original_slice_cost"] == output["original_slice_cost"]);




}


void test_VpsOrderPutResponse_original_cost_is_converted_to_json()
{
    bourne::json input =
    {
        "original_cost", 1
    };

    VpsOrderPutResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["original_cost"] == output["original_cost"]);




}


void test_VpsOrderPutResponse_repeat_service_cost_is_converted_to_json()
{
    bourne::json input =
    {
        "repeat_service_cost", 1
    };

    VpsOrderPutResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["repeat_service_cost"] == output["repeat_service_cost"]);




}


void test_VpsOrderPutResponse_monthly_service_cost_is_converted_to_json()
{
    bourne::json input =
    {
        "monthly_service_cost", 1
    };

    VpsOrderPutResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["monthly_service_cost"] == output["monthly_service_cost"]);




}


void test_VpsOrderPutResponse_custid_is_converted_to_json()
{

    bourne::json input =
    {
        "custid", "hello"
    };

    VpsOrderPutResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["custid"] == output["custid"]);



}


void test_VpsOrderPutResponse_os_is_converted_to_json()
{

    bourne::json input =
    {
        "os", "hello"
    };

    VpsOrderPutResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["os"] == output["os"]);



}


void test_VpsOrderPutResponse_slices_is_converted_to_json()
{

    bourne::json input =
    {
        "slices", "hello"
    };

    VpsOrderPutResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["slices"] == output["slices"]);



}


void test_VpsOrderPutResponse_platform_is_converted_to_json()
{

    bourne::json input =
    {
        "platform", "hello"
    };

    VpsOrderPutResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["platform"] == output["platform"]);



}


void test_VpsOrderPutResponse_controlpanel_is_converted_to_json()
{

    bourne::json input =
    {
        "controlpanel", "hello"
    };

    VpsOrderPutResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["controlpanel"] == output["controlpanel"]);



}


void test_VpsOrderPutResponse_period_is_converted_to_json()
{
    bourne::json input =
    {
        "period", 1
    };

    VpsOrderPutResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["period"] == output["period"]);




}


void test_VpsOrderPutResponse_location_is_converted_to_json()
{
    bourne::json input =
    {
        "location", 1
    };

    VpsOrderPutResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["location"] == output["location"]);




}


void test_VpsOrderPutResponse_version_is_converted_to_json()
{

    bourne::json input =
    {
        "version", "hello"
    };

    VpsOrderPutResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["version"] == output["version"]);



}


void test_VpsOrderPutResponse_hostname_is_converted_to_json()
{

    bourne::json input =
    {
        "hostname", "hello"
    };

    VpsOrderPutResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["hostname"] == output["hostname"]);



}


void test_VpsOrderPutResponse_coupon_is_converted_to_json()
{

    bourne::json input =
    {
        "coupon", "hello"
    };

    VpsOrderPutResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["coupon"] == output["coupon"]);



}


void test_VpsOrderPutResponse_rootpass_is_converted_to_json()
{

    bourne::json input =
    {
        "rootpass", "hello"
    };

    VpsOrderPutResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["rootpass"] == output["rootpass"]);



}


