
#include "BackupOrderPutResponse.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_BackupOrderPutResponse_r_continue_is_assigned_from_json()
{




    bourne::json input =
    {
        "r_continue", true
    };

    BackupOrderPutResponse obj(input.dump());

    TEST_ASSERT(true == obj.isRContinue());




}



void test_BackupOrderPutResponse_serviceType_is_assigned_from_json()
{
    bourne::json input =
    {
        "serviceType", 1
    };

    BackupOrderPutResponse obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getServiceType());








}


void test_BackupOrderPutResponse_serviceCost_is_assigned_from_json()
{


    bourne::json input =
    {
        "serviceCost", "hello"
    };

    BackupOrderPutResponse obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getServiceCost().c_str());






}


void test_BackupOrderPutResponse_originalCost_is_assigned_from_json()
{


    bourne::json input =
    {
        "originalCost", "hello"
    };

    BackupOrderPutResponse obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getOriginalCost().c_str());






}


void test_BackupOrderPutResponse_repeatServiceCost_is_assigned_from_json()
{


    bourne::json input =
    {
        "repeatServiceCost", "hello"
    };

    BackupOrderPutResponse obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getRepeatServiceCost().c_str());






}


void test_BackupOrderPutResponse_hostname_is_assigned_from_json()
{


    bourne::json input =
    {
        "hostname", "hello"
    };

    BackupOrderPutResponse obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getHostname().c_str());






}


void test_BackupOrderPutResponse_password_is_assigned_from_json()
{


    bourne::json input =
    {
        "password", "hello"
    };

    BackupOrderPutResponse obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getPassword().c_str());






}


void test_BackupOrderPutResponse_coupon_is_assigned_from_json()
{


    bourne::json input =
    {
        "coupon", "hello"
    };

    BackupOrderPutResponse obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCoupon().c_str());






}


void test_BackupOrderPutResponse_couponCode_is_assigned_from_json()
{
    bourne::json input =
    {
        "couponCode", 1
    };

    BackupOrderPutResponse obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getCouponCode());








}



void test_BackupOrderPutResponse_r_continue_is_converted_to_json()
{


    bourne::json input =
    {
        "r_continue", true
    };

    BackupOrderPutResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["r_continue"] == output["r_continue"]);


}



void test_BackupOrderPutResponse_serviceType_is_converted_to_json()
{
    bourne::json input =
    {
        "serviceType", 1
    };

    BackupOrderPutResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["serviceType"] == output["serviceType"]);




}


void test_BackupOrderPutResponse_serviceCost_is_converted_to_json()
{

    bourne::json input =
    {
        "serviceCost", "hello"
    };

    BackupOrderPutResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["serviceCost"] == output["serviceCost"]);



}


void test_BackupOrderPutResponse_originalCost_is_converted_to_json()
{

    bourne::json input =
    {
        "originalCost", "hello"
    };

    BackupOrderPutResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["originalCost"] == output["originalCost"]);



}


void test_BackupOrderPutResponse_repeatServiceCost_is_converted_to_json()
{

    bourne::json input =
    {
        "repeatServiceCost", "hello"
    };

    BackupOrderPutResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["repeatServiceCost"] == output["repeatServiceCost"]);



}


void test_BackupOrderPutResponse_hostname_is_converted_to_json()
{

    bourne::json input =
    {
        "hostname", "hello"
    };

    BackupOrderPutResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["hostname"] == output["hostname"]);



}


void test_BackupOrderPutResponse_password_is_converted_to_json()
{

    bourne::json input =
    {
        "password", "hello"
    };

    BackupOrderPutResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["password"] == output["password"]);



}


void test_BackupOrderPutResponse_coupon_is_converted_to_json()
{

    bourne::json input =
    {
        "coupon", "hello"
    };

    BackupOrderPutResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["coupon"] == output["coupon"]);



}


void test_BackupOrderPutResponse_couponCode_is_converted_to_json()
{
    bourne::json input =
    {
        "couponCode", 1
    };

    BackupOrderPutResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["couponCode"] == output["couponCode"]);




}


