
#include "GetOrderDetail_200_response_serviceTypes_inner.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_GetOrderDetail_200_response_serviceTypes_inner_services_id_is_assigned_from_json()
{
    bourne::json input =
    {
        "services_id", 1
    };

    GetOrderDetail_200_response_serviceTypes_inner obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getServicesId());








}


void test_GetOrderDetail_200_response_serviceTypes_inner_services_name_is_assigned_from_json()
{


    bourne::json input =
    {
        "services_name", "hello"
    };

    GetOrderDetail_200_response_serviceTypes_inner obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getServicesName().c_str());






}


void test_GetOrderDetail_200_response_serviceTypes_inner_services_cost_is_assigned_from_json()
{
    bourne::json input =
    {
        "services_cost", 1
    };

    GetOrderDetail_200_response_serviceTypes_inner obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getServicesCost());








}


void test_GetOrderDetail_200_response_serviceTypes_inner_services_field1_is_assigned_from_json()
{


    bourne::json input =
    {
        "services_field1", "hello"
    };

    GetOrderDetail_200_response_serviceTypes_inner obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getServicesField1().c_str());






}


void test_GetOrderDetail_200_response_serviceTypes_inner_services_field2_is_assigned_from_json()
{


    bourne::json input =
    {
        "services_field2", "hello"
    };

    GetOrderDetail_200_response_serviceTypes_inner obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getServicesField2().c_str());






}


void test_GetOrderDetail_200_response_serviceTypes_inner_services_module_is_assigned_from_json()
{


    bourne::json input =
    {
        "services_module", "hello"
    };

    GetOrderDetail_200_response_serviceTypes_inner obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getServicesModule().c_str());






}



void test_GetOrderDetail_200_response_serviceTypes_inner_services_id_is_converted_to_json()
{
    bourne::json input =
    {
        "services_id", 1
    };

    GetOrderDetail_200_response_serviceTypes_inner obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["services_id"] == output["services_id"]);




}


void test_GetOrderDetail_200_response_serviceTypes_inner_services_name_is_converted_to_json()
{

    bourne::json input =
    {
        "services_name", "hello"
    };

    GetOrderDetail_200_response_serviceTypes_inner obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["services_name"] == output["services_name"]);



}


void test_GetOrderDetail_200_response_serviceTypes_inner_services_cost_is_converted_to_json()
{
    bourne::json input =
    {
        "services_cost", 1
    };

    GetOrderDetail_200_response_serviceTypes_inner obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["services_cost"] == output["services_cost"]);




}


void test_GetOrderDetail_200_response_serviceTypes_inner_services_field1_is_converted_to_json()
{

    bourne::json input =
    {
        "services_field1", "hello"
    };

    GetOrderDetail_200_response_serviceTypes_inner obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["services_field1"] == output["services_field1"]);



}


void test_GetOrderDetail_200_response_serviceTypes_inner_services_field2_is_converted_to_json()
{

    bourne::json input =
    {
        "services_field2", "hello"
    };

    GetOrderDetail_200_response_serviceTypes_inner obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["services_field2"] == output["services_field2"]);



}


void test_GetOrderDetail_200_response_serviceTypes_inner_services_module_is_converted_to_json()
{

    bourne::json input =
    {
        "services_module", "hello"
    };

    GetOrderDetail_200_response_serviceTypes_inner obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["services_module"] == output["services_module"]);



}


