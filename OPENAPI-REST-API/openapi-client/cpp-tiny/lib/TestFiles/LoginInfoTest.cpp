
#include "LoginInfo.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_LoginInfo_captcha_is_assigned_from_json()
{


    bourne::json input =
    {
        "captcha", "hello"
    };

    LoginInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCaptcha().c_str());






}



void test_LoginInfo_logo_is_assigned_from_json()
{


    bourne::json input =
    {
        "logo", "hello"
    };

    LoginInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getLogo().c_str());






}


void test_LoginInfo_language_is_assigned_from_json()
{


    bourne::json input =
    {
        "language", "hello"
    };

    LoginInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getLanguage().c_str());






}



void test_LoginInfo_captcha_is_converted_to_json()
{

    bourne::json input =
    {
        "captcha", "hello"
    };

    LoginInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["captcha"] == output["captcha"]);



}



void test_LoginInfo_logo_is_converted_to_json()
{

    bourne::json input =
    {
        "logo", "hello"
    };

    LoginInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["logo"] == output["logo"]);



}


void test_LoginInfo_language_is_converted_to_json()
{

    bourne::json input =
    {
        "language", "hello"
    };

    LoginInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["language"] == output["language"]);



}


