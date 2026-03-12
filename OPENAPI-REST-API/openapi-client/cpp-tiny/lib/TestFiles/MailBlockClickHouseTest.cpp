
#include "MailBlockClickHouse.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"




void test_MailBlockClickHouse_from_is_assigned_from_json()
{


    bourne::json input =
    {
        "from", "hello"
    };

    MailBlockClickHouse obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getFrom().c_str());






}


void test_MailBlockClickHouse_messageId_is_assigned_from_json()
{


    bourne::json input =
    {
        "messageId", "hello"
    };

    MailBlockClickHouse obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getMessageId().c_str());






}


void test_MailBlockClickHouse_subject_is_assigned_from_json()
{


    bourne::json input =
    {
        "subject", "hello"
    };

    MailBlockClickHouse obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getSubject().c_str());






}


void test_MailBlockClickHouse_to_is_assigned_from_json()
{


    bourne::json input =
    {
        "to", "hello"
    };

    MailBlockClickHouse obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getTo().c_str());






}




void test_MailBlockClickHouse_from_is_converted_to_json()
{

    bourne::json input =
    {
        "from", "hello"
    };

    MailBlockClickHouse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["from"] == output["from"]);



}


void test_MailBlockClickHouse_messageId_is_converted_to_json()
{

    bourne::json input =
    {
        "messageId", "hello"
    };

    MailBlockClickHouse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["messageId"] == output["messageId"]);



}


void test_MailBlockClickHouse_subject_is_converted_to_json()
{

    bourne::json input =
    {
        "subject", "hello"
    };

    MailBlockClickHouse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["subject"] == output["subject"]);



}


void test_MailBlockClickHouse_to_is_converted_to_json()
{

    bourne::json input =
    {
        "to", "hello"
    };

    MailBlockClickHouse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["to"] == output["to"]);



}


