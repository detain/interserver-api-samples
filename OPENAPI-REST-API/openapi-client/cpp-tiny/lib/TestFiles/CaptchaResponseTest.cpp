
#include "CaptchaResponse.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_CaptchaResponse_captcha_is_assigned_from_json()
{


    bourne::json input =
    {
        "captcha", "hello"
    };

    CaptchaResponse obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCaptcha().c_str());






}



void test_CaptchaResponse_captcha_is_converted_to_json()
{

    bourne::json input =
    {
        "captcha", "hello"
    };

    CaptchaResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["captcha"] == output["captcha"]);



}


