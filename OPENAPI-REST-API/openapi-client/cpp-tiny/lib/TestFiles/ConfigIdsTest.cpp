
#include "ConfigIds.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_ConfigIds_memory_is_assigned_from_json()
{
    bourne::json input =
    {
        "memory", 1
    };

    ConfigIds obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getMemory());








}


void test_ConfigIds_hd_is_assigned_from_json()
{
    bourne::json input =
    {
        "hd", 1
    };

    ConfigIds obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getHd());








}


void test_ConfigIds_bandwidth_is_assigned_from_json()
{
    bourne::json input =
    {
        "bandwidth", 1
    };

    ConfigIds obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getBandwidth());








}


void test_ConfigIds_ips_is_assigned_from_json()
{
    bourne::json input =
    {
        "ips", 1
    };

    ConfigIds obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getIps());








}


void test_ConfigIds_os_is_assigned_from_json()
{
    bourne::json input =
    {
        "os", 1
    };

    ConfigIds obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getOs());








}


void test_ConfigIds_cp_is_assigned_from_json()
{
    bourne::json input =
    {
        "cp", 1
    };

    ConfigIds obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getCp());








}


void test_ConfigIds_raid_is_assigned_from_json()
{
    bourne::json input =
    {
        "raid", 1
    };

    ConfigIds obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getRaid());








}



void test_ConfigIds_memory_is_converted_to_json()
{
    bourne::json input =
    {
        "memory", 1
    };

    ConfigIds obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["memory"] == output["memory"]);




}


void test_ConfigIds_hd_is_converted_to_json()
{
    bourne::json input =
    {
        "hd", 1
    };

    ConfigIds obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["hd"] == output["hd"]);




}


void test_ConfigIds_bandwidth_is_converted_to_json()
{
    bourne::json input =
    {
        "bandwidth", 1
    };

    ConfigIds obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["bandwidth"] == output["bandwidth"]);




}


void test_ConfigIds_ips_is_converted_to_json()
{
    bourne::json input =
    {
        "ips", 1
    };

    ConfigIds obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["ips"] == output["ips"]);




}


void test_ConfigIds_os_is_converted_to_json()
{
    bourne::json input =
    {
        "os", 1
    };

    ConfigIds obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["os"] == output["os"]);




}


void test_ConfigIds_cp_is_converted_to_json()
{
    bourne::json input =
    {
        "cp", 1
    };

    ConfigIds obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["cp"] == output["cp"]);




}


void test_ConfigIds_raid_is_converted_to_json()
{
    bourne::json input =
    {
        "raid", 1
    };

    ConfigIds obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["raid"] == output["raid"]);




}


