
#include "QueueResponse.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_QueueResponse_text_is_assigned_from_json()
{


    bourne::json input =
    {
        "text", "hello"
    };

    QueueResponse obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getText().c_str());






}


void test_QueueResponse_queueId_is_assigned_from_json()
{
    bourne::json input =
    {
        "queueId", 1
    };

    QueueResponse obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getQueueId());








}



void test_QueueResponse_text_is_converted_to_json()
{

    bourne::json input =
    {
        "text", "hello"
    };

    QueueResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["text"] == output["text"]);



}


void test_QueueResponse_queueId_is_converted_to_json()
{
    bourne::json input =
    {
        "queueId", 1
    };

    QueueResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["queueId"] == output["queueId"]);




}


