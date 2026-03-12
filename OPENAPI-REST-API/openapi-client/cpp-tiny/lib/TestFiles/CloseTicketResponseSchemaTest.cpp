
#include "CloseTicketResponseSchema.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_CloseTicketResponseSchema_success_is_assigned_from_json()
{




    bourne::json input =
    {
        "success", true
    };

    CloseTicketResponseSchema obj(input.dump());

    TEST_ASSERT(true == obj.isSuccess());




}


void test_CloseTicketResponseSchema_text_is_assigned_from_json()
{


    bourne::json input =
    {
        "text", "hello"
    };

    CloseTicketResponseSchema obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getText().c_str());






}



void test_CloseTicketResponseSchema_success_is_converted_to_json()
{


    bourne::json input =
    {
        "success", true
    };

    CloseTicketResponseSchema obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["success"] == output["success"]);


}


void test_CloseTicketResponseSchema_text_is_converted_to_json()
{

    bourne::json input =
    {
        "text", "hello"
    };

    CloseTicketResponseSchema obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["text"] == output["text"]);



}


