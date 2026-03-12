
#include "CreateFirewallRule.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_CreateFirewallRule_protocol_id_is_assigned_from_json()
{
    bourne::json input =
    {
        "protocol_id", 1
    };

    CreateFirewallRule obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getProtocolId());








}


void test_CreateFirewallRule_xdp_action_is_assigned_from_json()
{
    bourne::json input =
    {
        "xdp_action", 1
    };

    CreateFirewallRule obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getXdpAction());








}


void test_CreateFirewallRule_destination_port_is_assigned_from_json()
{
    bourne::json input =
    {
        "destination_port", 1
    };

    CreateFirewallRule obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getDestinationPort());








}


void test_CreateFirewallRule_source_ip_is_assigned_from_json()
{


    bourne::json input =
    {
        "source_ip", "hello"
    };

    CreateFirewallRule obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getSourceIp().c_str());






}


void test_CreateFirewallRule_source_port_is_assigned_from_json()
{
    bourne::json input =
    {
        "source_port", 1
    };

    CreateFirewallRule obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getSourcePort());








}



void test_CreateFirewallRule_protocol_id_is_converted_to_json()
{
    bourne::json input =
    {
        "protocol_id", 1
    };

    CreateFirewallRule obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["protocol_id"] == output["protocol_id"]);




}


void test_CreateFirewallRule_xdp_action_is_converted_to_json()
{
    bourne::json input =
    {
        "xdp_action", 1
    };

    CreateFirewallRule obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["xdp_action"] == output["xdp_action"]);




}


void test_CreateFirewallRule_destination_port_is_converted_to_json()
{
    bourne::json input =
    {
        "destination_port", 1
    };

    CreateFirewallRule obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["destination_port"] == output["destination_port"]);




}


void test_CreateFirewallRule_source_ip_is_converted_to_json()
{

    bourne::json input =
    {
        "source_ip", "hello"
    };

    CreateFirewallRule obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["source_ip"] == output["source_ip"]);



}


void test_CreateFirewallRule_source_port_is_converted_to_json()
{
    bourne::json input =
    {
        "source_port", 1
    };

    CreateFirewallRule obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["source_port"] == output["source_port"]);




}


