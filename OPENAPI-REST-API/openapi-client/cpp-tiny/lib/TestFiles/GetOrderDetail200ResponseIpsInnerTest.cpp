
#include "GetOrderDetail_200_response_ips_inner.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_GetOrderDetail_200_response_ips_inner_service_id_is_assigned_from_json()
{








}


void test_GetOrderDetail_200_response_ips_inner_service_module_is_assigned_from_json()
{


    bourne::json input =
    {
        "service_module", "hello"
    };

    GetOrderDetail_200_response_ips_inner obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getServiceModule().c_str());






}


void test_GetOrderDetail_200_response_ips_inner_service_hostname_is_assigned_from_json()
{


    bourne::json input =
    {
        "service_hostname", "hello"
    };

    GetOrderDetail_200_response_ips_inner obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getServiceHostname().c_str());






}



void test_GetOrderDetail_200_response_ips_inner_service_id_is_converted_to_json()
{




}


void test_GetOrderDetail_200_response_ips_inner_service_module_is_converted_to_json()
{

    bourne::json input =
    {
        "service_module", "hello"
    };

    GetOrderDetail_200_response_ips_inner obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["service_module"] == output["service_module"]);



}


void test_GetOrderDetail_200_response_ips_inner_service_hostname_is_converted_to_json()
{

    bourne::json input =
    {
        "service_hostname", "hello"
    };

    GetOrderDetail_200_response_ips_inner obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["service_hostname"] == output["service_hostname"]);



}


