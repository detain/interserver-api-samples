
#include "HomeServicesLicensesLinks.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_HomeServicesLicensesLinks_386522_is_assigned_from_json()
{


    bourne::json input =
    {
        "386522", "hello"
    };

    HomeServicesLicensesLinks obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.get386522().c_str());






}



void test_HomeServicesLicensesLinks_386522_is_converted_to_json()
{

    bourne::json input =
    {
        "386522", "hello"
    };

    HomeServicesLicensesLinks obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["386522"] == output["386522"]);



}


