
#include "PatchOauthTwoFactor_200_response.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_PatchOauthTwoFactor_200_response_login_is_assigned_from_json()
{




    bourne::json input =
    {
        "login", true
    };

    PatchOauthTwoFactor_200_response obj(input.dump());

    TEST_ASSERT(true == obj.isLogin());




}



void test_PatchOauthTwoFactor_200_response_login_is_converted_to_json()
{


    bourne::json input =
    {
        "login", true
    };

    PatchOauthTwoFactor_200_response obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["login"] == output["login"]);


}


