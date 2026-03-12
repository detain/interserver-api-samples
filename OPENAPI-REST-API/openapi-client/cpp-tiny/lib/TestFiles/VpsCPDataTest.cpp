
#include "VpsCPData.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_VpsCPData_name_is_assigned_from_json()
{


    bourne::json input =
    {
        "name", "hello"
    };

    VpsCPData obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getName().c_str());






}


void test_VpsCPData_cost_is_assigned_from_json()
{
    bourne::json input =
    {
        "cost", 1
    };

    VpsCPData obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getCost());








}



void test_VpsCPData_name_is_converted_to_json()
{

    bourne::json input =
    {
        "name", "hello"
    };

    VpsCPData obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["name"] == output["name"]);



}


void test_VpsCPData_cost_is_converted_to_json()
{
    bourne::json input =
    {
        "cost", 1
    };

    VpsCPData obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["cost"] == output["cost"]);




}


