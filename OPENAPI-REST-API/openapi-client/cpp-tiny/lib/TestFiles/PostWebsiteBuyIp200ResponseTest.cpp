
#include "PostWebsiteBuyIp_200_response.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_PostWebsiteBuyIp_200_response_message_is_assigned_from_json()
{


    bourne::json input =
    {
        "message", "hello"
    };

    PostWebsiteBuyIp_200_response obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getMessage().c_str());






}


void test_PostWebsiteBuyIp_200_response_success_is_assigned_from_json()
{




    bourne::json input =
    {
        "success", true
    };

    PostWebsiteBuyIp_200_response obj(input.dump());

    TEST_ASSERT(true == obj.isSuccess());




}



void test_PostWebsiteBuyIp_200_response_message_is_converted_to_json()
{

    bourne::json input =
    {
        "message", "hello"
    };

    PostWebsiteBuyIp_200_response obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["message"] == output["message"]);



}


void test_PostWebsiteBuyIp_200_response_success_is_converted_to_json()
{


    bourne::json input =
    {
        "success", true
    };

    PostWebsiteBuyIp_200_response obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["success"] == output["success"]);


}


