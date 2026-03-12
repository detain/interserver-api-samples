
#include "DomainOrder.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_DomainOrder_whoisPrivacyCost_is_assigned_from_json()
{


    bourne::json input =
    {
        "whoisPrivacyCost", "hello"
    };

    DomainOrder obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getWhoisPrivacyCost().c_str());






}





void test_DomainOrder_whoisPrivacyCost_is_converted_to_json()
{

    bourne::json input =
    {
        "whoisPrivacyCost", "hello"
    };

    DomainOrder obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["whoisPrivacyCost"] == output["whoisPrivacyCost"]);



}




