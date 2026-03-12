
#include "ServerLease.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_ServerLease_mac_is_assigned_from_json()
{


    bourne::json input =
    {
        "mac", "hello"
    };

    ServerLease obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getMac().c_str());






}


void test_ServerLease_authenticated_is_assigned_from_json()
{




    bourne::json input =
    {
        "authenticated", true
    };

    ServerLease obj(input.dump());

    TEST_ASSERT(true == obj.isAuthenticated());




}


void test_ServerLease_group_is_assigned_from_json()
{


    bourne::json input =
    {
        "group", "hello"
    };

    ServerLease obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getGroup().c_str());






}



void test_ServerLease_mac_is_converted_to_json()
{

    bourne::json input =
    {
        "mac", "hello"
    };

    ServerLease obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["mac"] == output["mac"]);



}


void test_ServerLease_authenticated_is_converted_to_json()
{


    bourne::json input =
    {
        "authenticated", true
    };

    ServerLease obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["authenticated"] == output["authenticated"]);


}


void test_ServerLease_group_is_converted_to_json()
{

    bourne::json input =
    {
        "group", "hello"
    };

    ServerLease obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["group"] == output["group"]);



}


