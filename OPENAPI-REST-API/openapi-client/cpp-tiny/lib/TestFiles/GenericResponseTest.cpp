
#include "GenericResponse.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_GenericResponse_status_is_assigned_from_json()
{


    bourne::json input =
    {
        "status", "hello"
    };

    GenericResponse obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getStatus().c_str());






}


void test_GenericResponse_text_is_assigned_from_json()
{


    bourne::json input =
    {
        "text", "hello"
    };

    GenericResponse obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getText().c_str());






}



void test_GenericResponse_status_is_converted_to_json()
{

    bourne::json input =
    {
        "status", "hello"
    };

    GenericResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["status"] == output["status"]);



}


void test_GenericResponse_text_is_converted_to_json()
{

    bourne::json input =
    {
        "text", "hello"
    };

    GenericResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["text"] == output["text"]);



}


