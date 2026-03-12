
#include "AccountInfoData_extra.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_AccountInfoData_extra_private_whois_is_assigned_from_json()
{


    bourne::json input =
    {
        "private_whois", "hello"
    };

    AccountInfoData_extra obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getPrivateWhois().c_str());






}



void test_AccountInfoData_extra_private_whois_is_converted_to_json()
{

    bourne::json input =
    {
        "private_whois", "hello"
    };

    AccountInfoData_extra obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["private_whois"] == output["private_whois"]);



}


