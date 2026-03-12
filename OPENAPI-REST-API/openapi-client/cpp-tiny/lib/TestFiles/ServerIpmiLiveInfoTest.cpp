
#include "ServerIpmiLiveInfo.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_ServerIpmiLiveInfo_text_is_assigned_from_json()
{


    bourne::json input =
    {
        "text", "hello"
    };

    ServerIpmiLiveInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getText().c_str());






}


void test_ServerIpmiLiveInfo_public_ip_is_assigned_from_json()
{


    bourne::json input =
    {
        "public_ip", "hello"
    };

    ServerIpmiLiveInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getPublicIp().c_str());






}


void test_ServerIpmiLiveInfo_allowed_ip_is_assigned_from_json()
{


    bourne::json input =
    {
        "allowed_ip", "hello"
    };

    ServerIpmiLiveInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getAllowedIp().c_str());






}


void test_ServerIpmiLiveInfo_client_username_is_assigned_from_json()
{


    bourne::json input =
    {
        "client_username", "hello"
    };

    ServerIpmiLiveInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getClientUsername().c_str());






}


void test_ServerIpmiLiveInfo_client_password_is_assigned_from_json()
{


    bourne::json input =
    {
        "client_password", "hello"
    };

    ServerIpmiLiveInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getClientPassword().c_str());






}



void test_ServerIpmiLiveInfo_text_is_converted_to_json()
{

    bourne::json input =
    {
        "text", "hello"
    };

    ServerIpmiLiveInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["text"] == output["text"]);



}


void test_ServerIpmiLiveInfo_public_ip_is_converted_to_json()
{

    bourne::json input =
    {
        "public_ip", "hello"
    };

    ServerIpmiLiveInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["public_ip"] == output["public_ip"]);



}


void test_ServerIpmiLiveInfo_allowed_ip_is_converted_to_json()
{

    bourne::json input =
    {
        "allowed_ip", "hello"
    };

    ServerIpmiLiveInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["allowed_ip"] == output["allowed_ip"]);



}


void test_ServerIpmiLiveInfo_client_username_is_converted_to_json()
{

    bourne::json input =
    {
        "client_username", "hello"
    };

    ServerIpmiLiveInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["client_username"] == output["client_username"]);



}


void test_ServerIpmiLiveInfo_client_password_is_converted_to_json()
{

    bourne::json input =
    {
        "client_password", "hello"
    };

    ServerIpmiLiveInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["client_password"] == output["client_password"]);



}


