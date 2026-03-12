
#include "HomeServicesVpsLinks.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_HomeServicesVpsLinks_465503_is_assigned_from_json()
{


    bourne::json input =
    {
        "465503", "hello"
    };

    HomeServicesVpsLinks obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.get465503().c_str());






}


void test_HomeServicesVpsLinks_2500081_is_assigned_from_json()
{


    bourne::json input =
    {
        "2500081", "hello"
    };

    HomeServicesVpsLinks obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.get2500081().c_str());






}


void test_HomeServicesVpsLinks_2578866_is_assigned_from_json()
{


    bourne::json input =
    {
        "2578866", "hello"
    };

    HomeServicesVpsLinks obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.get2578866().c_str());






}



void test_HomeServicesVpsLinks_465503_is_converted_to_json()
{

    bourne::json input =
    {
        "465503", "hello"
    };

    HomeServicesVpsLinks obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["465503"] == output["465503"]);



}


void test_HomeServicesVpsLinks_2500081_is_converted_to_json()
{

    bourne::json input =
    {
        "2500081", "hello"
    };

    HomeServicesVpsLinks obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["2500081"] == output["2500081"]);



}


void test_HomeServicesVpsLinks_2578866_is_converted_to_json()
{

    bourne::json input =
    {
        "2578866", "hello"
    };

    HomeServicesVpsLinks obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["2578866"] == output["2578866"]);



}


