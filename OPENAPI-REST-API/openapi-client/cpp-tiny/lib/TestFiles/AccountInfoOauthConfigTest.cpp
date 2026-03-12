
#include "AccountInfoOauthConfig.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_AccountInfoOauthConfig_callback_is_assigned_from_json()
{


    bourne::json input =
    {
        "callback", "hello"
    };

    AccountInfoOauthConfig obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCallback().c_str());






}




void test_AccountInfoOauthConfig_callback_is_converted_to_json()
{

    bourne::json input =
    {
        "callback", "hello"
    };

    AccountInfoOauthConfig obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["callback"] == output["callback"]);



}



