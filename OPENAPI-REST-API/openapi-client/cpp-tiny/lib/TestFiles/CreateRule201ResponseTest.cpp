
#include "CreateRule_201_response.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_CreateRule_201_response_success_is_assigned_from_json()
{




    bourne::json input =
    {
        "success", true
    };

    CreateRule_201_response obj(input.dump());

    TEST_ASSERT(true == obj.isSuccess());




}


void test_CreateRule_201_response_text_is_assigned_from_json()
{


    bourne::json input =
    {
        "text", "hello"
    };

    CreateRule_201_response obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getText().c_str());






}



void test_CreateRule_201_response_success_is_converted_to_json()
{


    bourne::json input =
    {
        "success", true
    };

    CreateRule_201_response obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["success"] == output["success"]);


}


void test_CreateRule_201_response_text_is_converted_to_json()
{

    bourne::json input =
    {
        "text", "hello"
    };

    CreateRule_201_response obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["text"] == output["text"]);



}


