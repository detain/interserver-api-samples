
#include "BackupOrderPutRequest.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_BackupOrderPutRequest_validateOnly_is_assigned_from_json()
{




    bourne::json input =
    {
        "validateOnly", true
    };

    BackupOrderPutRequest obj(input.dump());

    TEST_ASSERT(true == obj.isValidateOnly());




}


void test_BackupOrderPutRequest_serviceType_is_assigned_from_json()
{
    bourne::json input =
    {
        "serviceType", 1
    };

    BackupOrderPutRequest obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getServiceType());








}


void test_BackupOrderPutRequest_coupon_is_assigned_from_json()
{


    bourne::json input =
    {
        "coupon", "hello"
    };

    BackupOrderPutRequest obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCoupon().c_str());






}



void test_BackupOrderPutRequest_validateOnly_is_converted_to_json()
{


    bourne::json input =
    {
        "validateOnly", true
    };

    BackupOrderPutRequest obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["validateOnly"] == output["validateOnly"]);


}


void test_BackupOrderPutRequest_serviceType_is_converted_to_json()
{
    bourne::json input =
    {
        "serviceType", 1
    };

    BackupOrderPutRequest obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["serviceType"] == output["serviceType"]);




}


void test_BackupOrderPutRequest_coupon_is_converted_to_json()
{

    bourne::json input =
    {
        "coupon", "hello"
    };

    BackupOrderPutRequest obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["coupon"] == output["coupon"]);



}


