
#include "EmailAddress.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_EmailAddress_email_is_assigned_from_json()
{


    bourne::json input =
    {
        "email", "hello"
    };

    EmailAddress obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getEmail().c_str());






}



void test_EmailAddress_email_is_converted_to_json()
{

    bourne::json input =
    {
        "email", "hello"
    };

    EmailAddress obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["email"] == output["email"]);



}


