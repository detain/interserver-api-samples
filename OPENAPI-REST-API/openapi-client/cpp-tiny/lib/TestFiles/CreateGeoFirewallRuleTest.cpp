
#include "CreateGeoFirewallRule.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_CreateGeoFirewallRule_xdp_action_is_assigned_from_json()
{
    bourne::json input =
    {
        "xdp_action", 1
    };

    CreateGeoFirewallRule obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getXdpAction());








}


void test_CreateGeoFirewallRule_destination_port_is_assigned_from_json()
{
    bourne::json input =
    {
        "destination_port", 1
    };

    CreateGeoFirewallRule obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getDestinationPort());








}


void test_CreateGeoFirewallRule_country_code_is_assigned_from_json()
{
    bourne::json input =
    {
        "country_code", 1
    };

    CreateGeoFirewallRule obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getCountryCode());








}


void test_CreateGeoFirewallRule_asn_is_assigned_from_json()
{
    bourne::json input =
    {
        "asn", 1
    };

    CreateGeoFirewallRule obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getAsn());








}



void test_CreateGeoFirewallRule_xdp_action_is_converted_to_json()
{
    bourne::json input =
    {
        "xdp_action", 1
    };

    CreateGeoFirewallRule obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["xdp_action"] == output["xdp_action"]);




}


void test_CreateGeoFirewallRule_destination_port_is_converted_to_json()
{
    bourne::json input =
    {
        "destination_port", 1
    };

    CreateGeoFirewallRule obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["destination_port"] == output["destination_port"]);




}


void test_CreateGeoFirewallRule_country_code_is_converted_to_json()
{
    bourne::json input =
    {
        "country_code", 1
    };

    CreateGeoFirewallRule obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["country_code"] == output["country_code"]);




}


void test_CreateGeoFirewallRule_asn_is_converted_to_json()
{
    bourne::json input =
    {
        "asn", 1
    };

    CreateGeoFirewallRule obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["asn"] == output["asn"]);




}


