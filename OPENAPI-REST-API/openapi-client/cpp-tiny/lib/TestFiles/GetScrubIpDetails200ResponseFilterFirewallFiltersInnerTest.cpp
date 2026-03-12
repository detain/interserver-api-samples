
#include "GetScrubIpDetails_200_response_filter_firewall_filters_inner.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_GetScrubIpDetails_200_response_filter_firewall_filters_inner_daddr_is_assigned_from_json()
{


    bourne::json input =
    {
        "daddr", "hello"
    };

    GetScrubIpDetails_200_response_filter_firewall_filters_inner obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getDaddr().c_str());






}


void test_GetScrubIpDetails_200_response_filter_firewall_filters_inner_dest_is_assigned_from_json()
{


    bourne::json input =
    {
        "dest", "hello"
    };

    GetScrubIpDetails_200_response_filter_firewall_filters_inner obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getDest().c_str());






}


void test_GetScrubIpDetails_200_response_filter_firewall_filters_inner_filter_name_is_assigned_from_json()
{


    bourne::json input =
    {
        "filter_name", "hello"
    };

    GetScrubIpDetails_200_response_filter_firewall_filters_inner obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getFilterName().c_str());






}


void test_GetScrubIpDetails_200_response_filter_firewall_filters_inner_destination_ip_is_assigned_from_json()
{


    bourne::json input =
    {
        "destination_ip", "hello"
    };

    GetScrubIpDetails_200_response_filter_firewall_filters_inner obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getDestinationIp().c_str());






}


void test_GetScrubIpDetails_200_response_filter_firewall_filters_inner_filter_is_assigned_from_json()
{


    bourne::json input =
    {
        "filter", "hello"
    };

    GetScrubIpDetails_200_response_filter_firewall_filters_inner obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getFilter().c_str());






}



void test_GetScrubIpDetails_200_response_filter_firewall_filters_inner_daddr_is_converted_to_json()
{

    bourne::json input =
    {
        "daddr", "hello"
    };

    GetScrubIpDetails_200_response_filter_firewall_filters_inner obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["daddr"] == output["daddr"]);



}


void test_GetScrubIpDetails_200_response_filter_firewall_filters_inner_dest_is_converted_to_json()
{

    bourne::json input =
    {
        "dest", "hello"
    };

    GetScrubIpDetails_200_response_filter_firewall_filters_inner obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["dest"] == output["dest"]);



}


void test_GetScrubIpDetails_200_response_filter_firewall_filters_inner_filter_name_is_converted_to_json()
{

    bourne::json input =
    {
        "filter_name", "hello"
    };

    GetScrubIpDetails_200_response_filter_firewall_filters_inner obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["filter_name"] == output["filter_name"]);



}


void test_GetScrubIpDetails_200_response_filter_firewall_filters_inner_destination_ip_is_converted_to_json()
{

    bourne::json input =
    {
        "destination_ip", "hello"
    };

    GetScrubIpDetails_200_response_filter_firewall_filters_inner obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["destination_ip"] == output["destination_ip"]);



}


void test_GetScrubIpDetails_200_response_filter_firewall_filters_inner_filter_is_converted_to_json()
{

    bourne::json input =
    {
        "filter", "hello"
    };

    GetScrubIpDetails_200_response_filter_firewall_filters_inner obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["filter"] == output["filter"]);



}


