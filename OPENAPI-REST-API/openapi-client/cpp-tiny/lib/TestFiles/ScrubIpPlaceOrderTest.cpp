
#include "ScrubIpPlaceOrder.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_ScrubIpPlaceOrder_service_type_is_assigned_from_json()
{
    bourne::json input =
    {
        "service_type", 1
    };

    ScrubIpPlaceOrder obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getServiceType());








}


void test_ScrubIpPlaceOrder_ip_is_assigned_from_json()
{


    bourne::json input =
    {
        "ip", "hello"
    };

    ScrubIpPlaceOrder obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getIp().c_str());






}



void test_ScrubIpPlaceOrder_service_type_is_converted_to_json()
{
    bourne::json input =
    {
        "service_type", 1
    };

    ScrubIpPlaceOrder obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["service_type"] == output["service_type"]);




}


void test_ScrubIpPlaceOrder_ip_is_converted_to_json()
{

    bourne::json input =
    {
        "ip", "hello"
    };

    ScrubIpPlaceOrder obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["ip"] == output["ip"]);



}


