
#include "ServiceType.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_ServiceType_st_id_is_assigned_from_json()
{
    bourne::json input =
    {
        "st_id", 1
    };

    ServiceType obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getStId());








}


void test_ServiceType_st_name_is_assigned_from_json()
{


    bourne::json input =
    {
        "st_name", "hello"
    };

    ServiceType obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getStName().c_str());






}


void test_ServiceType_st_category_is_assigned_from_json()
{
    bourne::json input =
    {
        "st_category", 1
    };

    ServiceType obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getStCategory());








}


void test_ServiceType_st_module_is_assigned_from_json()
{


    bourne::json input =
    {
        "st_module", "hello"
    };

    ServiceType obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getStModule().c_str());






}



void test_ServiceType_st_id_is_converted_to_json()
{
    bourne::json input =
    {
        "st_id", 1
    };

    ServiceType obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["st_id"] == output["st_id"]);




}


void test_ServiceType_st_name_is_converted_to_json()
{

    bourne::json input =
    {
        "st_name", "hello"
    };

    ServiceType obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["st_name"] == output["st_name"]);



}


void test_ServiceType_st_category_is_converted_to_json()
{
    bourne::json input =
    {
        "st_category", 1
    };

    ServiceType obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["st_category"] == output["st_category"]);




}


void test_ServiceType_st_module_is_converted_to_json()
{

    bourne::json input =
    {
        "st_module", "hello"
    };

    ServiceType obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["st_module"] == output["st_module"]);



}


