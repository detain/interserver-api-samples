
#include "UpdateTicketResponseSchema.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_UpdateTicketResponseSchema_success_is_assigned_from_json()
{




    bourne::json input =
    {
        "success", true
    };

    UpdateTicketResponseSchema obj(input.dump());

    TEST_ASSERT(true == obj.isSuccess());




}


void test_UpdateTicketResponseSchema_message_is_assigned_from_json()
{


    bourne::json input =
    {
        "message", "hello"
    };

    UpdateTicketResponseSchema obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getMessage().c_str());






}



void test_UpdateTicketResponseSchema_success_is_converted_to_json()
{


    bourne::json input =
    {
        "success", true
    };

    UpdateTicketResponseSchema obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["success"] == output["success"]);


}


void test_UpdateTicketResponseSchema_message_is_converted_to_json()
{

    bourne::json input =
    {
        "message", "hello"
    };

    UpdateTicketResponseSchema obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["message"] == output["message"]);



}


