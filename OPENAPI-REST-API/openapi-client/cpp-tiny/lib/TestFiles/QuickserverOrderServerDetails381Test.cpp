
#include "QuickserverOrderServerDetails381.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_QuickserverOrderServerDetails381_cpu_is_assigned_from_json()
{


    bourne::json input =
    {
        "cpu", "hello"
    };

    QuickserverOrderServerDetails381 obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCpu().c_str());






}


void test_QuickserverOrderServerDetails381_ram_is_assigned_from_json()
{


    bourne::json input =
    {
        "ram", "hello"
    };

    QuickserverOrderServerDetails381 obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getRam().c_str());






}


void test_QuickserverOrderServerDetails381_hd_is_assigned_from_json()
{


    bourne::json input =
    {
        "hd", "hello"
    };

    QuickserverOrderServerDetails381 obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getHd().c_str());






}


void test_QuickserverOrderServerDetails381_cores_is_assigned_from_json()
{
    bourne::json input =
    {
        "cores", 1
    };

    QuickserverOrderServerDetails381 obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getCores());








}


void test_QuickserverOrderServerDetails381_cost_is_assigned_from_json()
{


    bourne::json input =
    {
        "cost", "hello"
    };

    QuickserverOrderServerDetails381 obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCost().c_str());






}



void test_QuickserverOrderServerDetails381_cpu_is_converted_to_json()
{

    bourne::json input =
    {
        "cpu", "hello"
    };

    QuickserverOrderServerDetails381 obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["cpu"] == output["cpu"]);



}


void test_QuickserverOrderServerDetails381_ram_is_converted_to_json()
{

    bourne::json input =
    {
        "ram", "hello"
    };

    QuickserverOrderServerDetails381 obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["ram"] == output["ram"]);



}


void test_QuickserverOrderServerDetails381_hd_is_converted_to_json()
{

    bourne::json input =
    {
        "hd", "hello"
    };

    QuickserverOrderServerDetails381 obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["hd"] == output["hd"]);



}


void test_QuickserverOrderServerDetails381_cores_is_converted_to_json()
{
    bourne::json input =
    {
        "cores", 1
    };

    QuickserverOrderServerDetails381 obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["cores"] == output["cores"]);




}


void test_QuickserverOrderServerDetails381_cost_is_converted_to_json()
{

    bourne::json input =
    {
        "cost", "hello"
    };

    QuickserverOrderServerDetails381 obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["cost"] == output["cost"]);



}


