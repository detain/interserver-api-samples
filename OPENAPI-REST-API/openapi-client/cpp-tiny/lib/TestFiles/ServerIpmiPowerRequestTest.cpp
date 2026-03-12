
#include "ServerIpmiPowerRequest.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_ServerIpmiPowerRequest_action_is_assigned_from_json()
{


    bourne::json input =
    {
        "action", "hello"
    };

    ServerIpmiPowerRequest obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getAction().c_str());






}


void test_ServerIpmiPowerRequest_asset_is_assigned_from_json()
{
    bourne::json input =
    {
        "asset", 1
    };

    ServerIpmiPowerRequest obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getAsset());








}



void test_ServerIpmiPowerRequest_action_is_converted_to_json()
{

    bourne::json input =
    {
        "action", "hello"
    };

    ServerIpmiPowerRequest obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["action"] == output["action"]);



}


void test_ServerIpmiPowerRequest_asset_is_converted_to_json()
{
    bourne::json input =
    {
        "asset", 1
    };

    ServerIpmiPowerRequest obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["asset"] == output["asset"]);




}


