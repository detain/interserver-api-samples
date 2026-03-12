
#include "LoginSuccessResponse.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_LoginSuccessResponse_sessionId_is_assigned_from_json()
{


    bourne::json input =
    {
        "sessionId", "hello"
    };

    LoginSuccessResponse obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getSessionId().c_str());






}


void test_LoginSuccessResponse_account_id_is_assigned_from_json()
{
    bourne::json input =
    {
        "account_id", 1
    };

    LoginSuccessResponse obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getAccountId());








}


void test_LoginSuccessResponse_account_lid_is_assigned_from_json()
{


    bourne::json input =
    {
        "account_lid", "hello"
    };

    LoginSuccessResponse obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getAccountLid().c_str());






}


void test_LoginSuccessResponse_ima_is_assigned_from_json()
{


    bourne::json input =
    {
        "ima", "hello"
    };

    LoginSuccessResponse obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getIma().c_str());






}


void test_LoginSuccessResponse_gravatar_is_assigned_from_json()
{


    bourne::json input =
    {
        "gravatar", "hello"
    };

    LoginSuccessResponse obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getGravatar().c_str());






}



void test_LoginSuccessResponse_sessionId_is_converted_to_json()
{

    bourne::json input =
    {
        "sessionId", "hello"
    };

    LoginSuccessResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["sessionId"] == output["sessionId"]);



}


void test_LoginSuccessResponse_account_id_is_converted_to_json()
{
    bourne::json input =
    {
        "account_id", 1
    };

    LoginSuccessResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["account_id"] == output["account_id"]);




}


void test_LoginSuccessResponse_account_lid_is_converted_to_json()
{

    bourne::json input =
    {
        "account_lid", "hello"
    };

    LoginSuccessResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["account_lid"] == output["account_lid"]);



}


void test_LoginSuccessResponse_ima_is_converted_to_json()
{

    bourne::json input =
    {
        "ima", "hello"
    };

    LoginSuccessResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["ima"] == output["ima"]);



}


void test_LoginSuccessResponse_gravatar_is_converted_to_json()
{

    bourne::json input =
    {
        "gravatar", "hello"
    };

    LoginSuccessResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["gravatar"] == output["gravatar"]);



}


