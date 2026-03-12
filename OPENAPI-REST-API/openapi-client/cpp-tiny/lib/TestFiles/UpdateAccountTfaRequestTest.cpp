
#include "UpdateAccountTfa_request.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_UpdateAccountTfa_request_2fa_google_code_is_assigned_from_json()
{


    bourne::json input =
    {
        "2fa_google_code", "hello"
    };

    UpdateAccountTfa_request obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.get2faGoogleCode().c_str());






}



void test_UpdateAccountTfa_request_2fa_google_code_is_converted_to_json()
{

    bourne::json input =
    {
        "2fa_google_code", "hello"
    };

    UpdateAccountTfa_request obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["2fa_google_code"] == output["2fa_google_code"]);



}


