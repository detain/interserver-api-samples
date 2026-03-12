
#include "DomainSearchResponse.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_DomainSearchResponse_success_is_assigned_from_json()
{




    bourne::json input =
    {
        "success", true
    };

    DomainSearchResponse obj(input.dump());

    TEST_ASSERT(true == obj.isSuccess());




}


void test_DomainSearchResponse_response_text_is_assigned_from_json()
{


    bourne::json input =
    {
        "response_text", "hello"
    };

    DomainSearchResponse obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getResponseText().c_str());






}


void test_DomainSearchResponse_response_time_is_assigned_from_json()
{


    bourne::json input =
    {
        "response_time", "hello"
    };

    DomainSearchResponse obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getResponseTime().c_str());






}






void test_DomainSearchResponse_success_is_converted_to_json()
{


    bourne::json input =
    {
        "success", true
    };

    DomainSearchResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["success"] == output["success"]);


}


void test_DomainSearchResponse_response_text_is_converted_to_json()
{

    bourne::json input =
    {
        "response_text", "hello"
    };

    DomainSearchResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["response_text"] == output["response_text"]);



}


void test_DomainSearchResponse_response_time_is_converted_to_json()
{

    bourne::json input =
    {
        "response_time", "hello"
    };

    DomainSearchResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["response_time"] == output["response_time"]);



}





