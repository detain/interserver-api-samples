
#include "BuyItNowRow.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_BuyItNowRow_server_id_is_assigned_from_json()
{


    bourne::json input =
    {
        "server_id", "hello"
    };

    BuyItNowRow obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getServerId().c_str());






}



void test_BuyItNowRow_memory_is_assigned_from_json()
{


    bourne::json input =
    {
        "memory", "hello"
    };

    BuyItNowRow obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getMemory().c_str());






}


void test_BuyItNowRow_disk_is_assigned_from_json()
{








}


void test_BuyItNowRow_bandwidth_is_assigned_from_json()
{


    bourne::json input =
    {
        "bandwidth", "hello"
    };

    BuyItNowRow obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getBandwidth().c_str());






}


void test_BuyItNowRow_ips_is_assigned_from_json()
{


    bourne::json input =
    {
        "ips", "hello"
    };

    BuyItNowRow obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getIps().c_str());






}


void test_BuyItNowRow_location_is_assigned_from_json()
{


    bourne::json input =
    {
        "location", "hello"
    };

    BuyItNowRow obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getLocation().c_str());






}


void test_BuyItNowRow_price_is_assigned_from_json()
{
    bourne::json input =
    {
        "price", 1
    };

    BuyItNowRow obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getPrice());








}



void test_BuyItNowRow_server_id_is_converted_to_json()
{

    bourne::json input =
    {
        "server_id", "hello"
    };

    BuyItNowRow obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["server_id"] == output["server_id"]);



}



void test_BuyItNowRow_memory_is_converted_to_json()
{

    bourne::json input =
    {
        "memory", "hello"
    };

    BuyItNowRow obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["memory"] == output["memory"]);



}


void test_BuyItNowRow_disk_is_converted_to_json()
{




}


void test_BuyItNowRow_bandwidth_is_converted_to_json()
{

    bourne::json input =
    {
        "bandwidth", "hello"
    };

    BuyItNowRow obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["bandwidth"] == output["bandwidth"]);



}


void test_BuyItNowRow_ips_is_converted_to_json()
{

    bourne::json input =
    {
        "ips", "hello"
    };

    BuyItNowRow obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["ips"] == output["ips"]);



}


void test_BuyItNowRow_location_is_converted_to_json()
{

    bourne::json input =
    {
        "location", "hello"
    };

    BuyItNowRow obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["location"] == output["location"]);



}


void test_BuyItNowRow_price_is_converted_to_json()
{
    bourne::json input =
    {
        "price", 1
    };

    BuyItNowRow obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["price"] == output["price"]);




}


