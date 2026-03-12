
#include "PostWebsiteMigration_200_response.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_PostWebsiteMigration_200_response_text_is_assigned_from_json()
{


    bourne::json input =
    {
        "text", "hello"
    };

    PostWebsiteMigration_200_response obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getText().c_str());






}


void test_PostWebsiteMigration_200_response_ticket_is_assigned_from_json()
{
    bourne::json input =
    {
        "ticket", 1
    };

    PostWebsiteMigration_200_response obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getTicket());








}



void test_PostWebsiteMigration_200_response_text_is_converted_to_json()
{

    bourne::json input =
    {
        "text", "hello"
    };

    PostWebsiteMigration_200_response obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["text"] == output["text"]);



}


void test_PostWebsiteMigration_200_response_ticket_is_converted_to_json()
{
    bourne::json input =
    {
        "ticket", 1
    };

    PostWebsiteMigration_200_response obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["ticket"] == output["ticket"]);




}


