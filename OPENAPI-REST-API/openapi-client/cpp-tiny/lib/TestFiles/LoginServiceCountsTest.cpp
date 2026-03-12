
#include "LoginServiceCounts.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_LoginServiceCounts_vps_is_assigned_from_json()
{
    bourne::json input =
    {
        "vps", 1
    };

    LoginServiceCounts obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getVps());








}


void test_LoginServiceCounts_websites_is_assigned_from_json()
{
    bourne::json input =
    {
        "websites", 1
    };

    LoginServiceCounts obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getWebsites());








}


void test_LoginServiceCounts_servers_is_assigned_from_json()
{
    bourne::json input =
    {
        "servers", 1
    };

    LoginServiceCounts obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getServers());








}



void test_LoginServiceCounts_vps_is_converted_to_json()
{
    bourne::json input =
    {
        "vps", 1
    };

    LoginServiceCounts obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["vps"] == output["vps"]);




}


void test_LoginServiceCounts_websites_is_converted_to_json()
{
    bourne::json input =
    {
        "websites", 1
    };

    LoginServiceCounts obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["websites"] == output["websites"]);




}


void test_LoginServiceCounts_servers_is_converted_to_json()
{
    bourne::json input =
    {
        "servers", 1
    };

    LoginServiceCounts obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["servers"] == output["servers"]);




}


