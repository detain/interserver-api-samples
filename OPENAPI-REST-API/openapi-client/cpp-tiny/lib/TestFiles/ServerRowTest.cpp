
#include "ServerRow.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_ServerRow_server_id_is_assigned_from_json()
{


    bourne::json input =
    {
        "server_id", "hello"
    };

    ServerRow obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getServerId().c_str());






}


void test_ServerRow_account_lid_is_assigned_from_json()
{


    bourne::json input =
    {
        "account_lid", "hello"
    };

    ServerRow obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getAccountLid().c_str());






}


void test_ServerRow_server_hostname_is_assigned_from_json()
{


    bourne::json input =
    {
        "server_hostname", "hello"
    };

    ServerRow obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getServerHostname().c_str());






}


void test_ServerRow_server_status_is_assigned_from_json()
{


    bourne::json input =
    {
        "server_status", "hello"
    };

    ServerRow obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getServerStatus().c_str());






}



void test_ServerRow_server_id_is_converted_to_json()
{

    bourne::json input =
    {
        "server_id", "hello"
    };

    ServerRow obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["server_id"] == output["server_id"]);



}


void test_ServerRow_account_lid_is_converted_to_json()
{

    bourne::json input =
    {
        "account_lid", "hello"
    };

    ServerRow obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["account_lid"] == output["account_lid"]);



}


void test_ServerRow_server_hostname_is_converted_to_json()
{

    bourne::json input =
    {
        "server_hostname", "hello"
    };

    ServerRow obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["server_hostname"] == output["server_hostname"]);



}


void test_ServerRow_server_status_is_converted_to_json()
{

    bourne::json input =
    {
        "server_status", "hello"
    };

    ServerRow obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["server_status"] == output["server_status"]);



}


