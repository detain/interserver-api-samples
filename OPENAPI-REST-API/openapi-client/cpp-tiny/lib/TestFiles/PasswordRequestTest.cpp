
#include "PasswordRequest.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_PasswordRequest_password_is_assigned_from_json()
{


    bourne::json input =
    {
        "password", "hello"
    };

    PasswordRequest obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getPassword().c_str());






}



void test_PasswordRequest_password_is_converted_to_json()
{

    bourne::json input =
    {
        "password", "hello"
    };

    PasswordRequest obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["password"] == output["password"]);



}


