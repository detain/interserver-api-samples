
#include "ServerLocation1.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_ServerLocation1_location_id_is_assigned_from_json()
{
    bourne::json input =
    {
        "location_id", 1
    };

    ServerLocation1 obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getLocationId());








}


void test_ServerLocation1_location_name_is_assigned_from_json()
{


    bourne::json input =
    {
        "location_name", "hello"
    };

    ServerLocation1 obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getLocationName().c_str());






}


void test_ServerLocation1_location_lat_is_assigned_from_json()
{


    bourne::json input =
    {
        "location_lat", "hello"
    };

    ServerLocation1 obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getLocationLat().c_str());






}


void test_ServerLocation1_location_long_is_assigned_from_json()
{


    bourne::json input =
    {
        "location_long", "hello"
    };

    ServerLocation1 obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getLocationLong().c_str());






}


void test_ServerLocation1_location_description_is_assigned_from_json()
{


    bourne::json input =
    {
        "location_description", "hello"
    };

    ServerLocation1 obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getLocationDescription().c_str());






}


void test_ServerLocation1_location_ipmi_group_is_assigned_from_json()
{
    bourne::json input =
    {
        "location_ipmi_group", 1
    };

    ServerLocation1 obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getLocationIpmiGroup());








}



void test_ServerLocation1_location_id_is_converted_to_json()
{
    bourne::json input =
    {
        "location_id", 1
    };

    ServerLocation1 obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["location_id"] == output["location_id"]);




}


void test_ServerLocation1_location_name_is_converted_to_json()
{

    bourne::json input =
    {
        "location_name", "hello"
    };

    ServerLocation1 obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["location_name"] == output["location_name"]);



}


void test_ServerLocation1_location_lat_is_converted_to_json()
{

    bourne::json input =
    {
        "location_lat", "hello"
    };

    ServerLocation1 obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["location_lat"] == output["location_lat"]);



}


void test_ServerLocation1_location_long_is_converted_to_json()
{

    bourne::json input =
    {
        "location_long", "hello"
    };

    ServerLocation1 obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["location_long"] == output["location_long"]);



}


void test_ServerLocation1_location_description_is_converted_to_json()
{

    bourne::json input =
    {
        "location_description", "hello"
    };

    ServerLocation1 obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["location_description"] == output["location_description"]);



}


void test_ServerLocation1_location_ipmi_group_is_converted_to_json()
{
    bourne::json input =
    {
        "location_ipmi_group", 1
    };

    ServerLocation1 obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["location_ipmi_group"] == output["location_ipmi_group"]);




}


