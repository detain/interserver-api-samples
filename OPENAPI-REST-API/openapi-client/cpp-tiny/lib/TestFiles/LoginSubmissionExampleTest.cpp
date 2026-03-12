
#include "LoginSubmissionExample.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_LoginSubmissionExample_login_is_assigned_from_json()
{


    bourne::json input =
    {
        "login", "hello"
    };

    LoginSubmissionExample obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getLogin().c_str());






}


void test_LoginSubmissionExample_passwd_is_assigned_from_json()
{


    bourne::json input =
    {
        "passwd", "hello"
    };

    LoginSubmissionExample obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getPasswd().c_str());






}


void test_LoginSubmissionExample_remember_is_assigned_from_json()
{


    bourne::json input =
    {
        "remember", "hello"
    };

    LoginSubmissionExample obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getRemember().c_str());






}



void test_LoginSubmissionExample_tfa_is_assigned_from_json()
{


    bourne::json input =
    {
        "tfa", "hello"
    };

    LoginSubmissionExample obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getTfa().c_str());






}



void test_LoginSubmissionExample_login_is_converted_to_json()
{

    bourne::json input =
    {
        "login", "hello"
    };

    LoginSubmissionExample obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["login"] == output["login"]);



}


void test_LoginSubmissionExample_passwd_is_converted_to_json()
{

    bourne::json input =
    {
        "passwd", "hello"
    };

    LoginSubmissionExample obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["passwd"] == output["passwd"]);



}


void test_LoginSubmissionExample_remember_is_converted_to_json()
{

    bourne::json input =
    {
        "remember", "hello"
    };

    LoginSubmissionExample obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["remember"] == output["remember"]);



}



void test_LoginSubmissionExample_tfa_is_converted_to_json()
{

    bourne::json input =
    {
        "tfa", "hello"
    };

    LoginSubmissionExample obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["tfa"] == output["tfa"]);



}


