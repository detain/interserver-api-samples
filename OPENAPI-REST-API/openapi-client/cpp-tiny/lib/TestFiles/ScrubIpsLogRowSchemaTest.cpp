
#include "ScrubIpsLogRowSchema.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_ScrubIpsLogRowSchema_date_is_assigned_from_json()
{


    bourne::json input =
    {
        "date", "hello"
    };

    ScrubIpsLogRowSchema obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getDate().c_str());






}


void test_ScrubIpsLogRowSchema_filter_is_assigned_from_json()
{


    bourne::json input =
    {
        "filter", "hello"
    };

    ScrubIpsLogRowSchema obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getFilter().c_str());






}


void test_ScrubIpsLogRowSchema_blocked_ip_is_assigned_from_json()
{


    bourne::json input =
    {
        "blocked_ip", "hello"
    };

    ScrubIpsLogRowSchema obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getBlockedIp().c_str());






}


void test_ScrubIpsLogRowSchema_target_ip_is_assigned_from_json()
{


    bourne::json input =
    {
        "target_ip", "hello"
    };

    ScrubIpsLogRowSchema obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getTargetIp().c_str());






}


void test_ScrubIpsLogRowSchema_target_port_is_assigned_from_json()
{








}


void test_ScrubIpsLogRowSchema_protocol_is_assigned_from_json()
{


    bourne::json input =
    {
        "protocol", "hello"
    };

    ScrubIpsLogRowSchema obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getProtocol().c_str());






}


void test_ScrubIpsLogRowSchema_byte_count_is_assigned_from_json()
{








}


void test_ScrubIpsLogRowSchema_xdp_action_is_assigned_from_json()
{


    bourne::json input =
    {
        "xdp_action", "hello"
    };

    ScrubIpsLogRowSchema obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getXdpAction().c_str());






}



void test_ScrubIpsLogRowSchema_date_is_converted_to_json()
{

    bourne::json input =
    {
        "date", "hello"
    };

    ScrubIpsLogRowSchema obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["date"] == output["date"]);



}


void test_ScrubIpsLogRowSchema_filter_is_converted_to_json()
{

    bourne::json input =
    {
        "filter", "hello"
    };

    ScrubIpsLogRowSchema obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["filter"] == output["filter"]);



}


void test_ScrubIpsLogRowSchema_blocked_ip_is_converted_to_json()
{

    bourne::json input =
    {
        "blocked_ip", "hello"
    };

    ScrubIpsLogRowSchema obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["blocked_ip"] == output["blocked_ip"]);



}


void test_ScrubIpsLogRowSchema_target_ip_is_converted_to_json()
{

    bourne::json input =
    {
        "target_ip", "hello"
    };

    ScrubIpsLogRowSchema obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["target_ip"] == output["target_ip"]);



}


void test_ScrubIpsLogRowSchema_target_port_is_converted_to_json()
{




}


void test_ScrubIpsLogRowSchema_protocol_is_converted_to_json()
{

    bourne::json input =
    {
        "protocol", "hello"
    };

    ScrubIpsLogRowSchema obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["protocol"] == output["protocol"]);



}


void test_ScrubIpsLogRowSchema_byte_count_is_converted_to_json()
{




}


void test_ScrubIpsLogRowSchema_xdp_action_is_converted_to_json()
{

    bourne::json input =
    {
        "xdp_action", "hello"
    };

    ScrubIpsLogRowSchema obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["xdp_action"] == output["xdp_action"]);



}


