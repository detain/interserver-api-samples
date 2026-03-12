
#include "VpsTrafficResponse.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_VpsTrafficResponse_name_is_assigned_from_json()
{


    bourne::json input =
    {
        "name", "hello"
    };

    VpsTrafficResponse obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getName().c_str());






}


void test_VpsTrafficResponse_target_is_assigned_from_json()
{


    bourne::json input =
    {
        "target", "hello"
    };

    VpsTrafficResponse obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getTarget().c_str());






}


void test_VpsTrafficResponse_interval_is_assigned_from_json()
{
    bourne::json input =
    {
        "interval", 1
    };

    VpsTrafficResponse obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getInterval());








}



void test_VpsTrafficResponse_last_is_assigned_from_json()
{








}







void test_VpsTrafficResponse_name_is_converted_to_json()
{

    bourne::json input =
    {
        "name", "hello"
    };

    VpsTrafficResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["name"] == output["name"]);



}


void test_VpsTrafficResponse_target_is_converted_to_json()
{

    bourne::json input =
    {
        "target", "hello"
    };

    VpsTrafficResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["target"] == output["target"]);



}


void test_VpsTrafficResponse_interval_is_converted_to_json()
{
    bourne::json input =
    {
        "interval", 1
    };

    VpsTrafficResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["interval"] == output["interval"]);




}



void test_VpsTrafficResponse_last_is_converted_to_json()
{




}






