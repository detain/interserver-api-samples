
#include "GetScrubIpDetails_200_response_filter_firewall_rules_inner.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_GetScrubIpDetails_200_response_filter_firewall_rules_inner_id_is_assigned_from_json()
{


    bourne::json input =
    {
        "id", "hello"
    };

    GetScrubIpDetails_200_response_filter_firewall_rules_inner obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getId().c_str());






}


void test_GetScrubIpDetails_200_response_filter_firewall_rules_inner_source_ip_is_assigned_from_json()
{


    bourne::json input =
    {
        "source_ip", "hello"
    };

    GetScrubIpDetails_200_response_filter_firewall_rules_inner obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getSourceIp().c_str());






}


void test_GetScrubIpDetails_200_response_filter_firewall_rules_inner_destination_ip_is_assigned_from_json()
{


    bourne::json input =
    {
        "destination_ip", "hello"
    };

    GetScrubIpDetails_200_response_filter_firewall_rules_inner obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getDestinationIp().c_str());






}


void test_GetScrubIpDetails_200_response_filter_firewall_rules_inner_protocol_id_is_assigned_from_json()
{


    bourne::json input =
    {
        "protocol_id", "hello"
    };

    GetScrubIpDetails_200_response_filter_firewall_rules_inner obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getProtocolId().c_str());






}


void test_GetScrubIpDetails_200_response_filter_firewall_rules_inner_source_port_is_assigned_from_json()
{


    bourne::json input =
    {
        "source_port", "hello"
    };

    GetScrubIpDetails_200_response_filter_firewall_rules_inner obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getSourcePort().c_str());






}


void test_GetScrubIpDetails_200_response_filter_firewall_rules_inner_destination_port_is_assigned_from_json()
{


    bourne::json input =
    {
        "destination_port", "hello"
    };

    GetScrubIpDetails_200_response_filter_firewall_rules_inner obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getDestinationPort().c_str());






}


void test_GetScrubIpDetails_200_response_filter_firewall_rules_inner_xdp_action_is_assigned_from_json()
{


    bourne::json input =
    {
        "xdp_action", "hello"
    };

    GetScrubIpDetails_200_response_filter_firewall_rules_inner obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getXdpAction().c_str());






}


void test_GetScrubIpDetails_200_response_filter_firewall_rules_inner_global_drop_is_assigned_from_json()
{


    bourne::json input =
    {
        "global_drop", "hello"
    };

    GetScrubIpDetails_200_response_filter_firewall_rules_inner obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getGlobalDrop().c_str());






}



void test_GetScrubIpDetails_200_response_filter_firewall_rules_inner_id_is_converted_to_json()
{

    bourne::json input =
    {
        "id", "hello"
    };

    GetScrubIpDetails_200_response_filter_firewall_rules_inner obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["id"] == output["id"]);



}


void test_GetScrubIpDetails_200_response_filter_firewall_rules_inner_source_ip_is_converted_to_json()
{

    bourne::json input =
    {
        "source_ip", "hello"
    };

    GetScrubIpDetails_200_response_filter_firewall_rules_inner obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["source_ip"] == output["source_ip"]);



}


void test_GetScrubIpDetails_200_response_filter_firewall_rules_inner_destination_ip_is_converted_to_json()
{

    bourne::json input =
    {
        "destination_ip", "hello"
    };

    GetScrubIpDetails_200_response_filter_firewall_rules_inner obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["destination_ip"] == output["destination_ip"]);



}


void test_GetScrubIpDetails_200_response_filter_firewall_rules_inner_protocol_id_is_converted_to_json()
{

    bourne::json input =
    {
        "protocol_id", "hello"
    };

    GetScrubIpDetails_200_response_filter_firewall_rules_inner obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["protocol_id"] == output["protocol_id"]);



}


void test_GetScrubIpDetails_200_response_filter_firewall_rules_inner_source_port_is_converted_to_json()
{

    bourne::json input =
    {
        "source_port", "hello"
    };

    GetScrubIpDetails_200_response_filter_firewall_rules_inner obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["source_port"] == output["source_port"]);



}


void test_GetScrubIpDetails_200_response_filter_firewall_rules_inner_destination_port_is_converted_to_json()
{

    bourne::json input =
    {
        "destination_port", "hello"
    };

    GetScrubIpDetails_200_response_filter_firewall_rules_inner obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["destination_port"] == output["destination_port"]);



}


void test_GetScrubIpDetails_200_response_filter_firewall_rules_inner_xdp_action_is_converted_to_json()
{

    bourne::json input =
    {
        "xdp_action", "hello"
    };

    GetScrubIpDetails_200_response_filter_firewall_rules_inner obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["xdp_action"] == output["xdp_action"]);



}


void test_GetScrubIpDetails_200_response_filter_firewall_rules_inner_global_drop_is_converted_to_json()
{

    bourne::json input =
    {
        "global_drop", "hello"
    };

    GetScrubIpDetails_200_response_filter_firewall_rules_inner obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["global_drop"] == output["global_drop"]);



}


