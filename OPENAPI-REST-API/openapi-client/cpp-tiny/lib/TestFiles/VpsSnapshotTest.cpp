
#include "VpsSnapshot.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_VpsSnapshot_name_is_assigned_from_json()
{


    bourne::json input =
    {
        "name", "hello"
    };

    VpsSnapshot obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getName().c_str());






}


void test_VpsSnapshot_used_is_assigned_from_json()
{
    bourne::json input =
    {
        "used", 1
    };

    VpsSnapshot obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getUsed());








}


void test_VpsSnapshot_date_is_assigned_from_json()
{
    bourne::json input =
    {
        "date", 1
    };

    VpsSnapshot obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getDate());








}



void test_VpsSnapshot_name_is_converted_to_json()
{

    bourne::json input =
    {
        "name", "hello"
    };

    VpsSnapshot obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["name"] == output["name"]);



}


void test_VpsSnapshot_used_is_converted_to_json()
{
    bourne::json input =
    {
        "used", 1
    };

    VpsSnapshot obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["used"] == output["used"]);




}


void test_VpsSnapshot_date_is_converted_to_json()
{
    bourne::json input =
    {
        "date", 1
    };

    VpsSnapshot obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["date"] == output["date"]);




}


