
#include "GetAccountTfaSetup_200_response.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_GetAccountTfaSetup_200_response_2fa_google_key_is_assigned_from_json()
{


    bourne::json input =
    {
        "2fa_google_key", "hello"
    };

    GetAccountTfaSetup_200_response obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.get2faGoogleKey().c_str());






}


void test_GetAccountTfaSetup_200_response_2fa_google_split_is_assigned_from_json()
{


    bourne::json input =
    {
        "2fa_google_split", "hello"
    };

    GetAccountTfaSetup_200_response obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.get2faGoogleSplit().c_str());






}



void test_GetAccountTfaSetup_200_response_2fa_google_key_is_converted_to_json()
{

    bourne::json input =
    {
        "2fa_google_key", "hello"
    };

    GetAccountTfaSetup_200_response obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["2fa_google_key"] == output["2fa_google_key"]);



}


void test_GetAccountTfaSetup_200_response_2fa_google_split_is_converted_to_json()
{

    bourne::json input =
    {
        "2fa_google_split", "hello"
    };

    GetAccountTfaSetup_200_response obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["2fa_google_split"] == output["2fa_google_split"]);



}


