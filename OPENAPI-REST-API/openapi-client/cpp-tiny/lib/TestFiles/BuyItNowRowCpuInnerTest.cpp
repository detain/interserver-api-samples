
#include "BuyItNowRow_cpu_inner.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_BuyItNowRow_cpu_inner_img_is_assigned_from_json()
{


    bourne::json input =
    {
        "img", "hello"
    };

    BuyItNowRow_cpu_inner obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getImg().c_str());






}


void test_BuyItNowRow_cpu_inner_type_is_assigned_from_json()
{


    bourne::json input =
    {
        "type", "hello"
    };

    BuyItNowRow_cpu_inner obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getType().c_str());






}


void test_BuyItNowRow_cpu_inner_speed_is_assigned_from_json()
{


    bourne::json input =
    {
        "speed", "hello"
    };

    BuyItNowRow_cpu_inner obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getSpeed().c_str());






}


void test_BuyItNowRow_cpu_inner_num_cpus_is_assigned_from_json()
{


    bourne::json input =
    {
        "num_cpus", "hello"
    };

    BuyItNowRow_cpu_inner obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getNumCpus().c_str());






}


void test_BuyItNowRow_cpu_inner_num_cores_is_assigned_from_json()
{


    bourne::json input =
    {
        "num_cores", "hello"
    };

    BuyItNowRow_cpu_inner obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getNumCores().c_str());






}



void test_BuyItNowRow_cpu_inner_img_is_converted_to_json()
{

    bourne::json input =
    {
        "img", "hello"
    };

    BuyItNowRow_cpu_inner obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["img"] == output["img"]);



}


void test_BuyItNowRow_cpu_inner_type_is_converted_to_json()
{

    bourne::json input =
    {
        "type", "hello"
    };

    BuyItNowRow_cpu_inner obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["type"] == output["type"]);



}


void test_BuyItNowRow_cpu_inner_speed_is_converted_to_json()
{

    bourne::json input =
    {
        "speed", "hello"
    };

    BuyItNowRow_cpu_inner obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["speed"] == output["speed"]);



}


void test_BuyItNowRow_cpu_inner_num_cpus_is_converted_to_json()
{

    bourne::json input =
    {
        "num_cpus", "hello"
    };

    BuyItNowRow_cpu_inner obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["num_cpus"] == output["num_cpus"]);



}


void test_BuyItNowRow_cpu_inner_num_cores_is_converted_to_json()
{

    bourne::json input =
    {
        "num_cores", "hello"
    };

    BuyItNowRow_cpu_inner obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["num_cores"] == output["num_cores"]);



}


