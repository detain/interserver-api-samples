
#include "InitiatePayment_200_response.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_InitiatePayment_200_response_type_is_assigned_from_json()
{


    bourne::json input =
    {
        "type", "hello"
    };

    InitiatePayment_200_response obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getType().c_str());






}


void test_InitiatePayment_200_response_redirect_is_assigned_from_json()
{


    bourne::json input =
    {
        "redirect", "hello"
    };

    InitiatePayment_200_response obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getRedirect().c_str());






}


void test_InitiatePayment_200_response_action_is_assigned_from_json()
{


    bourne::json input =
    {
        "action", "hello"
    };

    InitiatePayment_200_response obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getAction().c_str());






}


void test_InitiatePayment_200_response_method_is_assigned_from_json()
{


    bourne::json input =
    {
        "method", "hello"
    };

    InitiatePayment_200_response obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getMethod().c_str());






}



void test_InitiatePayment_200_response_text_is_assigned_from_json()
{


    bourne::json input =
    {
        "text", "hello"
    };

    InitiatePayment_200_response obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getText().c_str());






}



void test_InitiatePayment_200_response_type_is_converted_to_json()
{

    bourne::json input =
    {
        "type", "hello"
    };

    InitiatePayment_200_response obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["type"] == output["type"]);



}


void test_InitiatePayment_200_response_redirect_is_converted_to_json()
{

    bourne::json input =
    {
        "redirect", "hello"
    };

    InitiatePayment_200_response obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["redirect"] == output["redirect"]);



}


void test_InitiatePayment_200_response_action_is_converted_to_json()
{

    bourne::json input =
    {
        "action", "hello"
    };

    InitiatePayment_200_response obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["action"] == output["action"]);



}


void test_InitiatePayment_200_response_method_is_converted_to_json()
{

    bourne::json input =
    {
        "method", "hello"
    };

    InitiatePayment_200_response obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["method"] == output["method"]);



}



void test_InitiatePayment_200_response_text_is_converted_to_json()
{

    bourne::json input =
    {
        "text", "hello"
    };

    InitiatePayment_200_response obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["text"] == output["text"]);



}


