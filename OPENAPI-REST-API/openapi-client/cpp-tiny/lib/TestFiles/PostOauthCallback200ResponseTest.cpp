
#include "PostOauthCallback_200_response.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_PostOauthCallback_200_response_login_is_assigned_from_json()
{




    bourne::json input =
    {
        "login", true
    };

    PostOauthCallback_200_response obj(input.dump());

    TEST_ASSERT(true == obj.isLogin());




}


void test_PostOauthCallback_200_response_signup_is_assigned_from_json()
{




    bourne::json input =
    {
        "signup", true
    };

    PostOauthCallback_200_response obj(input.dump());

    TEST_ASSERT(true == obj.isSignup());




}


void test_PostOauthCallback_200_response_linked_is_assigned_from_json()
{




    bourne::json input =
    {
        "linked", true
    };

    PostOauthCallback_200_response obj(input.dump());

    TEST_ASSERT(true == obj.isLinked());




}


void test_PostOauthCallback_200_response_account_id_is_assigned_from_json()
{
    bourne::json input =
    {
        "account_id", 1
    };

    PostOauthCallback_200_response obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getAccountId());








}


void test_PostOauthCallback_200_response_error_code_is_assigned_from_json()
{


    bourne::json input =
    {
        "error_code", "hello"
    };

    PostOauthCallback_200_response obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getErrorCode().c_str());






}



void test_PostOauthCallback_200_response_login_is_converted_to_json()
{


    bourne::json input =
    {
        "login", true
    };

    PostOauthCallback_200_response obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["login"] == output["login"]);


}


void test_PostOauthCallback_200_response_signup_is_converted_to_json()
{


    bourne::json input =
    {
        "signup", true
    };

    PostOauthCallback_200_response obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["signup"] == output["signup"]);


}


void test_PostOauthCallback_200_response_linked_is_converted_to_json()
{


    bourne::json input =
    {
        "linked", true
    };

    PostOauthCallback_200_response obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["linked"] == output["linked"]);


}


void test_PostOauthCallback_200_response_account_id_is_converted_to_json()
{
    bourne::json input =
    {
        "account_id", 1
    };

    PostOauthCallback_200_response obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["account_id"] == output["account_id"]);




}


void test_PostOauthCallback_200_response_error_code_is_converted_to_json()
{

    bourne::json input =
    {
        "error_code", "hello"
    };

    PostOauthCallback_200_response obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["error_code"] == output["error_code"]);



}


