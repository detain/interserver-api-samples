
#include "HomeServicesWebhostingLinks.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_HomeServicesWebhostingLinks_376359_is_assigned_from_json()
{


    bourne::json input =
    {
        "376359", "hello"
    };

    HomeServicesWebhostingLinks obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.get376359().c_str());






}


void test_HomeServicesWebhostingLinks_376473_is_assigned_from_json()
{


    bourne::json input =
    {
        "376473", "hello"
    };

    HomeServicesWebhostingLinks obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.get376473().c_str());






}


void test_HomeServicesWebhostingLinks_386218_is_assigned_from_json()
{


    bourne::json input =
    {
        "386218", "hello"
    };

    HomeServicesWebhostingLinks obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.get386218().c_str());






}



void test_HomeServicesWebhostingLinks_376359_is_converted_to_json()
{

    bourne::json input =
    {
        "376359", "hello"
    };

    HomeServicesWebhostingLinks obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["376359"] == output["376359"]);



}


void test_HomeServicesWebhostingLinks_376473_is_converted_to_json()
{

    bourne::json input =
    {
        "376473", "hello"
    };

    HomeServicesWebhostingLinks obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["376473"] == output["376473"]);



}


void test_HomeServicesWebhostingLinks_386218_is_converted_to_json()
{

    bourne::json input =
    {
        "386218", "hello"
    };

    HomeServicesWebhostingLinks obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["386218"] == output["386218"]);



}


