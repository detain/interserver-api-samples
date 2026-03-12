
#include "ReplyTicketResponseSchema.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_ReplyTicketResponseSchema_success_is_assigned_from_json()
{




    bourne::json input =
    {
        "success", true
    };

    ReplyTicketResponseSchema obj(input.dump());

    TEST_ASSERT(true == obj.isSuccess());




}


void test_ReplyTicketResponseSchema_post_id_is_assigned_from_json()
{
    bourne::json input =
    {
        "post_id", 1
    };

    ReplyTicketResponseSchema obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getPostId());








}



void test_ReplyTicketResponseSchema_success_is_converted_to_json()
{


    bourne::json input =
    {
        "success", true
    };

    ReplyTicketResponseSchema obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["success"] == output["success"]);


}


void test_ReplyTicketResponseSchema_post_id_is_converted_to_json()
{
    bourne::json input =
    {
        "post_id", 1
    };

    ReplyTicketResponseSchema obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["post_id"] == output["post_id"]);




}


