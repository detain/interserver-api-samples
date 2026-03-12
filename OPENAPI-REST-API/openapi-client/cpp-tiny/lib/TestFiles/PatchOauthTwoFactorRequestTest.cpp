
#include "PatchOauthTwoFactor_request.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_PatchOauthTwoFactor_request_account_id_is_assigned_from_json()
{
    bourne::json input =
    {
        "account_id", 1
    };

    PatchOauthTwoFactor_request obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getAccountId());








}


void test_PatchOauthTwoFactor_request_code_is_assigned_from_json()
{


    bourne::json input =
    {
        "code", "hello"
    };

    PatchOauthTwoFactor_request obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCode().c_str());






}



void test_PatchOauthTwoFactor_request_account_id_is_converted_to_json()
{
    bourne::json input =
    {
        "account_id", 1
    };

    PatchOauthTwoFactor_request obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["account_id"] == output["account_id"]);




}


void test_PatchOauthTwoFactor_request_code_is_converted_to_json()
{

    bourne::json input =
    {
        "code", "hello"
    };

    PatchOauthTwoFactor_request obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["code"] == output["code"]);



}


