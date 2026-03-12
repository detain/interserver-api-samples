
#include "LoginSubmissionExample_g_recaptcha_response.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_LoginSubmissionExample_g_recaptcha_response___v_isShallow_is_assigned_from_json()
{




    bourne::json input =
    {
        "__v_isShallow", true
    };

    LoginSubmissionExample_g_recaptcha_response obj(input.dump());

    TEST_ASSERT(true == obj.isVIsShallow());




}



void test_LoginSubmissionExample_g_recaptcha_response___v_isRef_is_assigned_from_json()
{




    bourne::json input =
    {
        "__v_isRef", true
    };

    LoginSubmissionExample_g_recaptcha_response obj(input.dump());

    TEST_ASSERT(true == obj.isVIsRef());




}


void test_LoginSubmissionExample_g_recaptcha_response__rawValue_is_assigned_from_json()
{


    bourne::json input =
    {
        "_rawValue", "hello"
    };

    LoginSubmissionExample_g_recaptcha_response obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getRawValue().c_str());






}


void test_LoginSubmissionExample_g_recaptcha_response__value_is_assigned_from_json()
{


    bourne::json input =
    {
        "_value", "hello"
    };

    LoginSubmissionExample_g_recaptcha_response obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getValue().c_str());






}



void test_LoginSubmissionExample_g_recaptcha_response___v_isShallow_is_converted_to_json()
{


    bourne::json input =
    {
        "__v_isShallow", true
    };

    LoginSubmissionExample_g_recaptcha_response obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["__v_isShallow"] == output["__v_isShallow"]);


}



void test_LoginSubmissionExample_g_recaptcha_response___v_isRef_is_converted_to_json()
{


    bourne::json input =
    {
        "__v_isRef", true
    };

    LoginSubmissionExample_g_recaptcha_response obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["__v_isRef"] == output["__v_isRef"]);


}


void test_LoginSubmissionExample_g_recaptcha_response__rawValue_is_converted_to_json()
{

    bourne::json input =
    {
        "_rawValue", "hello"
    };

    LoginSubmissionExample_g_recaptcha_response obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["_rawValue"] == output["_rawValue"]);



}


void test_LoginSubmissionExample_g_recaptcha_response__value_is_converted_to_json()
{

    bourne::json input =
    {
        "_value", "hello"
    };

    LoginSubmissionExample_g_recaptcha_response obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["_value"] == output["_value"]);



}


