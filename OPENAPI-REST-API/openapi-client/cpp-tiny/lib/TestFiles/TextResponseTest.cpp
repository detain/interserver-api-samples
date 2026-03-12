
#include "TextResponse.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_TextResponse_text_is_assigned_from_json()
{


    bourne::json input =
    {
        "text", "hello"
    };

    TextResponse obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getText().c_str());






}


void test_TextResponse_message_is_assigned_from_json()
{


    bourne::json input =
    {
        "message", "hello"
    };

    TextResponse obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getMessage().c_str());






}



void test_TextResponse_text_is_converted_to_json()
{

    bourne::json input =
    {
        "text", "hello"
    };

    TextResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["text"] == output["text"]);



}


void test_TextResponse_message_is_converted_to_json()
{

    bourne::json input =
    {
        "message", "hello"
    };

    TextResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["message"] == output["message"]);



}


