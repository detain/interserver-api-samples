
#include "SuccessTextResponse.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_SuccessTextResponse_success_is_assigned_from_json()
{




    bourne::json input =
    {
        "success", true
    };

    SuccessTextResponse obj(input.dump());

    TEST_ASSERT(true == obj.isSuccess());




}


void test_SuccessTextResponse_text_is_assigned_from_json()
{


    bourne::json input =
    {
        "text", "hello"
    };

    SuccessTextResponse obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getText().c_str());






}


void test_SuccessTextResponse_action_is_assigned_from_json()
{


    bourne::json input =
    {
        "action", "hello"
    };

    SuccessTextResponse obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getAction().c_str());






}



void test_SuccessTextResponse_success_is_converted_to_json()
{


    bourne::json input =
    {
        "success", true
    };

    SuccessTextResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["success"] == output["success"]);


}


void test_SuccessTextResponse_text_is_converted_to_json()
{

    bourne::json input =
    {
        "text", "hello"
    };

    SuccessTextResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["text"] == output["text"]);



}


void test_SuccessTextResponse_action_is_converted_to_json()
{

    bourne::json input =
    {
        "action", "hello"
    };

    SuccessTextResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["action"] == output["action"]);



}


