
#include "SendMail.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_SendMail_to_is_assigned_from_json()
{


    bourne::json input =
    {
        "to", "hello"
    };

    SendMail obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getTo().c_str());






}


void test_SendMail_from_is_assigned_from_json()
{


    bourne::json input =
    {
        "from", "hello"
    };

    SendMail obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getFrom().c_str());






}


void test_SendMail_subject_is_assigned_from_json()
{


    bourne::json input =
    {
        "subject", "hello"
    };

    SendMail obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getSubject().c_str());






}


void test_SendMail_body_is_assigned_from_json()
{


    bourne::json input =
    {
        "body", "hello"
    };

    SendMail obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getBody().c_str());






}



void test_SendMail_to_is_converted_to_json()
{

    bourne::json input =
    {
        "to", "hello"
    };

    SendMail obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["to"] == output["to"]);



}


void test_SendMail_from_is_converted_to_json()
{

    bourne::json input =
    {
        "from", "hello"
    };

    SendMail obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["from"] == output["from"]);



}


void test_SendMail_subject_is_converted_to_json()
{

    bourne::json input =
    {
        "subject", "hello"
    };

    SendMail obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["subject"] == output["subject"]);



}


void test_SendMail_body_is_converted_to_json()
{

    bourne::json input =
    {
        "body", "hello"
    };

    SendMail obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["body"] == output["body"]);



}


