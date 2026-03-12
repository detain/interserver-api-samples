
#include "ServerSwitchport.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_ServerSwitchport_switchport_id_is_assigned_from_json()
{
    bourne::json input =
    {
        "switchport_id", 1
    };

    ServerSwitchport obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getSwitchportId());








}


void test_ServerSwitchport_switch_id_is_assigned_from_json()
{


    bourne::json input =
    {
        "switch_id", "hello"
    };

    ServerSwitchport obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getSwitchId().c_str());






}


void test_ServerSwitchport_r_switch_is_assigned_from_json()
{


    bourne::json input =
    {
        "r_switch", "hello"
    };

    ServerSwitchport obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getRSwitch().c_str());






}


void test_ServerSwitchport_port_is_assigned_from_json()
{


    bourne::json input =
    {
        "port", "hello"
    };

    ServerSwitchport obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getPort().c_str());






}


void test_ServerSwitchport_blade_is_assigned_from_json()
{


    bourne::json input =
    {
        "blade", "hello"
    };

    ServerSwitchport obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getBlade().c_str());






}


void test_ServerSwitchport_justport_is_assigned_from_json()
{


    bourne::json input =
    {
        "justport", "hello"
    };

    ServerSwitchport obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getJustport().c_str());






}


void test_ServerSwitchport_graph_id_is_assigned_from_json()
{


    bourne::json input =
    {
        "graph_id", "hello"
    };

    ServerSwitchport obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getGraphId().c_str());






}


void test_ServerSwitchport_asset_id_is_assigned_from_json()
{
    bourne::json input =
    {
        "asset_id", 1
    };

    ServerSwitchport obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getAssetId());








}





void test_ServerSwitchport_switchport_id_is_converted_to_json()
{
    bourne::json input =
    {
        "switchport_id", 1
    };

    ServerSwitchport obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["switchport_id"] == output["switchport_id"]);




}


void test_ServerSwitchport_switch_id_is_converted_to_json()
{

    bourne::json input =
    {
        "switch_id", "hello"
    };

    ServerSwitchport obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["switch_id"] == output["switch_id"]);



}


void test_ServerSwitchport_r_switch_is_converted_to_json()
{

    bourne::json input =
    {
        "r_switch", "hello"
    };

    ServerSwitchport obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["r_switch"] == output["r_switch"]);



}


void test_ServerSwitchport_port_is_converted_to_json()
{

    bourne::json input =
    {
        "port", "hello"
    };

    ServerSwitchport obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["port"] == output["port"]);



}


void test_ServerSwitchport_blade_is_converted_to_json()
{

    bourne::json input =
    {
        "blade", "hello"
    };

    ServerSwitchport obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["blade"] == output["blade"]);



}


void test_ServerSwitchport_justport_is_converted_to_json()
{

    bourne::json input =
    {
        "justport", "hello"
    };

    ServerSwitchport obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["justport"] == output["justport"]);



}


void test_ServerSwitchport_graph_id_is_converted_to_json()
{

    bourne::json input =
    {
        "graph_id", "hello"
    };

    ServerSwitchport obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["graph_id"] == output["graph_id"]);



}


void test_ServerSwitchport_asset_id_is_converted_to_json()
{
    bourne::json input =
    {
        "asset_id", 1
    };

    ServerSwitchport obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["asset_id"] == output["asset_id"]);




}




