
#include "AccountSshKey.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_AccountSshKey_ssh_key_is_assigned_from_json()
{


    bourne::json input =
    {
        "ssh_key", "hello"
    };

    AccountSshKey obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getSshKey().c_str());






}



void test_AccountSshKey_ssh_key_is_converted_to_json()
{

    bourne::json input =
    {
        "ssh_key", "hello"
    };

    AccountSshKey obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["ssh_key"] == output["ssh_key"]);



}


