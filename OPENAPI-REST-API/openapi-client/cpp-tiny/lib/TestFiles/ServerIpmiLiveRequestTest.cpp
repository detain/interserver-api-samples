
#include "ServerIpmiLiveRequest.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_ServerIpmiLiveRequest_ip_is_assigned_from_json()
{


    bourne::json input =
    {
        "ip", "hello"
    };

    ServerIpmiLiveRequest obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getIp().c_str());






}


void test_ServerIpmiLiveRequest_asset_is_assigned_from_json()
{
    bourne::json input =
    {
        "asset", 1
    };

    ServerIpmiLiveRequest obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getAsset());








}



void test_ServerIpmiLiveRequest_ip_is_converted_to_json()
{

    bourne::json input =
    {
        "ip", "hello"
    };

    ServerIpmiLiveRequest obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["ip"] == output["ip"]);



}


void test_ServerIpmiLiveRequest_asset_is_converted_to_json()
{
    bourne::json input =
    {
        "asset", 1
    };

    ServerIpmiLiveRequest obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["asset"] == output["asset"]);




}


