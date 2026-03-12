
#include "WebsiteLoginResponse.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_WebsiteLoginResponse_type_is_assigned_from_json()
{


    bourne::json input =
    {
        "type", "hello"
    };

    WebsiteLoginResponse obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getType().c_str());






}


void test_WebsiteLoginResponse_location_is_assigned_from_json()
{


    bourne::json input =
    {
        "location", "hello"
    };

    WebsiteLoginResponse obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getLocation().c_str());






}



void test_WebsiteLoginResponse_type_is_converted_to_json()
{

    bourne::json input =
    {
        "type", "hello"
    };

    WebsiteLoginResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["type"] == output["type"]);



}


void test_WebsiteLoginResponse_location_is_converted_to_json()
{

    bourne::json input =
    {
        "location", "hello"
    };

    WebsiteLoginResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["location"] == output["location"]);



}


