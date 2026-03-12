
#include "Service.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_Service_services_id_is_assigned_from_json()
{
    bourne::json input =
    {
        "services_id", 1
    };

    Service obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getServicesId());








}


void test_Service_services_name_is_assigned_from_json()
{


    bourne::json input =
    {
        "services_name", "hello"
    };

    Service obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getServicesName().c_str());






}


void test_Service_services_cost_is_assigned_from_json()
{








}


void test_Service_services_currency_is_assigned_from_json()
{


    bourne::json input =
    {
        "services_currency", "hello"
    };

    Service obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getServicesCurrency().c_str());






}


void test_Service_services_category_is_assigned_from_json()
{
    bourne::json input =
    {
        "services_category", 1
    };

    Service obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getServicesCategory());








}


void test_Service_services_buyable_is_assigned_from_json()
{




    bourne::json input =
    {
        "services_buyable", true
    };

    Service obj(input.dump());

    TEST_ASSERT(true == obj.isServicesBuyable());




}


void test_Service_services_type_is_assigned_from_json()
{
    bourne::json input =
    {
        "services_type", 1
    };

    Service obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getServicesType());








}


void test_Service_services_field1_is_assigned_from_json()
{


    bourne::json input =
    {
        "services_field1", "hello"
    };

    Service obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getServicesField1().c_str());






}


void test_Service_services_field2_is_assigned_from_json()
{


    bourne::json input =
    {
        "services_field2", "hello"
    };

    Service obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getServicesField2().c_str());






}


void test_Service_services_module_is_assigned_from_json()
{


    bourne::json input =
    {
        "services_module", "hello"
    };

    Service obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getServicesModule().c_str());






}



void test_Service_services_id_is_converted_to_json()
{
    bourne::json input =
    {
        "services_id", 1
    };

    Service obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["services_id"] == output["services_id"]);




}


void test_Service_services_name_is_converted_to_json()
{

    bourne::json input =
    {
        "services_name", "hello"
    };

    Service obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["services_name"] == output["services_name"]);



}


void test_Service_services_cost_is_converted_to_json()
{




}


void test_Service_services_currency_is_converted_to_json()
{

    bourne::json input =
    {
        "services_currency", "hello"
    };

    Service obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["services_currency"] == output["services_currency"]);



}


void test_Service_services_category_is_converted_to_json()
{
    bourne::json input =
    {
        "services_category", 1
    };

    Service obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["services_category"] == output["services_category"]);




}


void test_Service_services_buyable_is_converted_to_json()
{


    bourne::json input =
    {
        "services_buyable", true
    };

    Service obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["services_buyable"] == output["services_buyable"]);


}


void test_Service_services_type_is_converted_to_json()
{
    bourne::json input =
    {
        "services_type", 1
    };

    Service obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["services_type"] == output["services_type"]);




}


void test_Service_services_field1_is_converted_to_json()
{

    bourne::json input =
    {
        "services_field1", "hello"
    };

    Service obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["services_field1"] == output["services_field1"]);



}


void test_Service_services_field2_is_converted_to_json()
{

    bourne::json input =
    {
        "services_field2", "hello"
    };

    Service obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["services_field2"] == output["services_field2"]);



}


void test_Service_services_module_is_converted_to_json()
{

    bourne::json input =
    {
        "services_module", "hello"
    };

    Service obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["services_module"] == output["services_module"]);



}


