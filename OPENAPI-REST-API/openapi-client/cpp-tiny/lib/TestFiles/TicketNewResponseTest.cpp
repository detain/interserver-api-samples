
#include "TicketNewResponse.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_TicketNewResponse_text_is_assigned_from_json()
{


    bourne::json input =
    {
        "text", "hello"
    };

    TicketNewResponse obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getText().c_str());






}


void test_TicketNewResponse_success_is_assigned_from_json()
{




    bourne::json input =
    {
        "success", true
    };

    TicketNewResponse obj(input.dump());

    TEST_ASSERT(true == obj.isSuccess());




}


void test_TicketNewResponse_ticket_id_is_assigned_from_json()
{
    bourne::json input =
    {
        "ticket_id", 1
    };

    TicketNewResponse obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getTicketId());








}



void test_TicketNewResponse_text_is_converted_to_json()
{

    bourne::json input =
    {
        "text", "hello"
    };

    TicketNewResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["text"] == output["text"]);



}


void test_TicketNewResponse_success_is_converted_to_json()
{


    bourne::json input =
    {
        "success", true
    };

    TicketNewResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["success"] == output["success"]);


}


void test_TicketNewResponse_ticket_id_is_converted_to_json()
{
    bourne::json input =
    {
        "ticket_id", 1
    };

    TicketNewResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["ticket_id"] == output["ticket_id"]);




}


