
#include "ServerOrderFormValues.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_ServerOrderFormValues_memory_is_assigned_from_json()
{
    bourne::json input =
    {
        "memory", 1
    };

    ServerOrderFormValues obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getMemory());








}


void test_ServerOrderFormValues_bandwidth_is_assigned_from_json()
{


    bourne::json input =
    {
        "bandwidth", "hello"
    };

    ServerOrderFormValues obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getBandwidth().c_str());






}


void test_ServerOrderFormValues_ips_is_assigned_from_json()
{


    bourne::json input =
    {
        "ips", "hello"
    };

    ServerOrderFormValues obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getIps().c_str());






}


void test_ServerOrderFormValues_os_is_assigned_from_json()
{


    bourne::json input =
    {
        "os", "hello"
    };

    ServerOrderFormValues obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getOs().c_str());






}


void test_ServerOrderFormValues_cp_is_assigned_from_json()
{
    bourne::json input =
    {
        "cp", 1
    };

    ServerOrderFormValues obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getCp());








}


void test_ServerOrderFormValues_raid_is_assigned_from_json()
{


    bourne::json input =
    {
        "raid", "hello"
    };

    ServerOrderFormValues obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getRaid().c_str());






}


void test_ServerOrderFormValues_hd_is_assigned_from_json()
{


    bourne::json input =
    {
        "hd", "hello"
    };

    ServerOrderFormValues obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getHd().c_str());






}



void test_ServerOrderFormValues_memory_is_converted_to_json()
{
    bourne::json input =
    {
        "memory", 1
    };

    ServerOrderFormValues obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["memory"] == output["memory"]);




}


void test_ServerOrderFormValues_bandwidth_is_converted_to_json()
{

    bourne::json input =
    {
        "bandwidth", "hello"
    };

    ServerOrderFormValues obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["bandwidth"] == output["bandwidth"]);



}


void test_ServerOrderFormValues_ips_is_converted_to_json()
{

    bourne::json input =
    {
        "ips", "hello"
    };

    ServerOrderFormValues obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["ips"] == output["ips"]);



}


void test_ServerOrderFormValues_os_is_converted_to_json()
{

    bourne::json input =
    {
        "os", "hello"
    };

    ServerOrderFormValues obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["os"] == output["os"]);



}


void test_ServerOrderFormValues_cp_is_converted_to_json()
{
    bourne::json input =
    {
        "cp", 1
    };

    ServerOrderFormValues obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["cp"] == output["cp"]);




}


void test_ServerOrderFormValues_raid_is_converted_to_json()
{

    bourne::json input =
    {
        "raid", "hello"
    };

    ServerOrderFormValues obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["raid"] == output["raid"]);



}


void test_ServerOrderFormValues_hd_is_converted_to_json()
{

    bourne::json input =
    {
        "hd", "hello"
    };

    ServerOrderFormValues obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["hd"] == output["hd"]);



}


