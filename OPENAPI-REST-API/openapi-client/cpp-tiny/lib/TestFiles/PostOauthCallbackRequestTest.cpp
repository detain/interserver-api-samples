
#include "PostOauthCallback_request.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_PostOauthCallback_request_provider_is_assigned_from_json()
{


    bourne::json input =
    {
        "provider", "hello"
    };

    PostOauthCallback_request obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getProvider().c_str());






}



void test_PostOauthCallback_request_provider_is_converted_to_json()
{

    bourne::json input =
    {
        "provider", "hello"
    };

    PostOauthCallback_request obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["provider"] == output["provider"]);



}


