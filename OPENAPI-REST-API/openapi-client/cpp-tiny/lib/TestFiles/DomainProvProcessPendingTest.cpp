
#include "DomainProvProcessPending.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_DomainProvProcessPending__OPS_version_is_assigned_from_json()
{


    bourne::json input =
    {
        "_OPS_version", "hello"
    };

    DomainProvProcessPending obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getOPSVersion().c_str());






}


void test_DomainProvProcessPending_response_text_is_assigned_from_json()
{


    bourne::json input =
    {
        "response_text", "hello"
    };

    DomainProvProcessPending obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getResponseText().c_str());






}


void test_DomainProvProcessPending_protocol_is_assigned_from_json()
{


    bourne::json input =
    {
        "protocol", "hello"
    };

    DomainProvProcessPending obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getProtocol().c_str());






}


void test_DomainProvProcessPending_response_code_is_assigned_from_json()
{


    bourne::json input =
    {
        "response_code", "hello"
    };

    DomainProvProcessPending obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getResponseCode().c_str());






}


void test_DomainProvProcessPending_action_is_assigned_from_json()
{


    bourne::json input =
    {
        "action", "hello"
    };

    DomainProvProcessPending obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getAction().c_str());






}


void test_DomainProvProcessPending_object_is_assigned_from_json()
{


    bourne::json input =
    {
        "object", "hello"
    };

    DomainProvProcessPending obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getObject().c_str());






}


void test_DomainProvProcessPending_is_success_is_assigned_from_json()
{


    bourne::json input =
    {
        "is_success", "hello"
    };

    DomainProvProcessPending obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getIsSuccess().c_str());






}




void test_DomainProvProcessPending__OPS_version_is_converted_to_json()
{

    bourne::json input =
    {
        "_OPS_version", "hello"
    };

    DomainProvProcessPending obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["_OPS_version"] == output["_OPS_version"]);



}


void test_DomainProvProcessPending_response_text_is_converted_to_json()
{

    bourne::json input =
    {
        "response_text", "hello"
    };

    DomainProvProcessPending obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["response_text"] == output["response_text"]);



}


void test_DomainProvProcessPending_protocol_is_converted_to_json()
{

    bourne::json input =
    {
        "protocol", "hello"
    };

    DomainProvProcessPending obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["protocol"] == output["protocol"]);



}


void test_DomainProvProcessPending_response_code_is_converted_to_json()
{

    bourne::json input =
    {
        "response_code", "hello"
    };

    DomainProvProcessPending obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["response_code"] == output["response_code"]);



}


void test_DomainProvProcessPending_action_is_converted_to_json()
{

    bourne::json input =
    {
        "action", "hello"
    };

    DomainProvProcessPending obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["action"] == output["action"]);



}


void test_DomainProvProcessPending_object_is_converted_to_json()
{

    bourne::json input =
    {
        "object", "hello"
    };

    DomainProvProcessPending obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["object"] == output["object"]);



}


void test_DomainProvProcessPending_is_success_is_converted_to_json()
{

    bourne::json input =
    {
        "is_success", "hello"
    };

    DomainProvProcessPending obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["is_success"] == output["is_success"]);



}



