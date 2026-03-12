
#include "BackupsOrderServiceTypes.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_BackupsOrderServiceTypes_services_id_is_assigned_from_json()
{


    bourne::json input =
    {
        "services_id", "hello"
    };

    BackupsOrderServiceTypes obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getServicesId().c_str());






}


void test_BackupsOrderServiceTypes_services_name_is_assigned_from_json()
{


    bourne::json input =
    {
        "services_name", "hello"
    };

    BackupsOrderServiceTypes obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getServicesName().c_str());






}


void test_BackupsOrderServiceTypes_services_cost_is_assigned_from_json()
{


    bourne::json input =
    {
        "services_cost", "hello"
    };

    BackupsOrderServiceTypes obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getServicesCost().c_str());






}


void test_BackupsOrderServiceTypes_services_category_is_assigned_from_json()
{


    bourne::json input =
    {
        "services_category", "hello"
    };

    BackupsOrderServiceTypes obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getServicesCategory().c_str());






}


void test_BackupsOrderServiceTypes_services_buyable_is_assigned_from_json()
{


    bourne::json input =
    {
        "services_buyable", "hello"
    };

    BackupsOrderServiceTypes obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getServicesBuyable().c_str());






}


void test_BackupsOrderServiceTypes_services_type_is_assigned_from_json()
{


    bourne::json input =
    {
        "services_type", "hello"
    };

    BackupsOrderServiceTypes obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getServicesType().c_str());






}


void test_BackupsOrderServiceTypes_services_field1_is_assigned_from_json()
{


    bourne::json input =
    {
        "services_field1", "hello"
    };

    BackupsOrderServiceTypes obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getServicesField1().c_str());






}


void test_BackupsOrderServiceTypes_services_field2_is_assigned_from_json()
{


    bourne::json input =
    {
        "services_field2", "hello"
    };

    BackupsOrderServiceTypes obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getServicesField2().c_str());






}


void test_BackupsOrderServiceTypes_services_module_is_assigned_from_json()
{


    bourne::json input =
    {
        "services_module", "hello"
    };

    BackupsOrderServiceTypes obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getServicesModule().c_str());






}



void test_BackupsOrderServiceTypes_services_id_is_converted_to_json()
{

    bourne::json input =
    {
        "services_id", "hello"
    };

    BackupsOrderServiceTypes obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["services_id"] == output["services_id"]);



}


void test_BackupsOrderServiceTypes_services_name_is_converted_to_json()
{

    bourne::json input =
    {
        "services_name", "hello"
    };

    BackupsOrderServiceTypes obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["services_name"] == output["services_name"]);



}


void test_BackupsOrderServiceTypes_services_cost_is_converted_to_json()
{

    bourne::json input =
    {
        "services_cost", "hello"
    };

    BackupsOrderServiceTypes obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["services_cost"] == output["services_cost"]);



}


void test_BackupsOrderServiceTypes_services_category_is_converted_to_json()
{

    bourne::json input =
    {
        "services_category", "hello"
    };

    BackupsOrderServiceTypes obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["services_category"] == output["services_category"]);



}


void test_BackupsOrderServiceTypes_services_buyable_is_converted_to_json()
{

    bourne::json input =
    {
        "services_buyable", "hello"
    };

    BackupsOrderServiceTypes obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["services_buyable"] == output["services_buyable"]);



}


void test_BackupsOrderServiceTypes_services_type_is_converted_to_json()
{

    bourne::json input =
    {
        "services_type", "hello"
    };

    BackupsOrderServiceTypes obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["services_type"] == output["services_type"]);



}


void test_BackupsOrderServiceTypes_services_field1_is_converted_to_json()
{

    bourne::json input =
    {
        "services_field1", "hello"
    };

    BackupsOrderServiceTypes obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["services_field1"] == output["services_field1"]);



}


void test_BackupsOrderServiceTypes_services_field2_is_converted_to_json()
{

    bourne::json input =
    {
        "services_field2", "hello"
    };

    BackupsOrderServiceTypes obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["services_field2"] == output["services_field2"]);



}


void test_BackupsOrderServiceTypes_services_module_is_converted_to_json()
{

    bourne::json input =
    {
        "services_module", "hello"
    };

    BackupsOrderServiceTypes obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["services_module"] == output["services_module"]);



}


