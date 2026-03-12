
#include "MailDelistRequest.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_MailDelistRequest_unblock_is_assigned_from_json()
{


    bourne::json input =
    {
        "unblock", "hello"
    };

    MailDelistRequest obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getUnblock().c_str());






}



void test_MailDelistRequest_unblock_is_converted_to_json()
{

    bourne::json input =
    {
        "unblock", "hello"
    };

    MailDelistRequest obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["unblock"] == output["unblock"]);



}


