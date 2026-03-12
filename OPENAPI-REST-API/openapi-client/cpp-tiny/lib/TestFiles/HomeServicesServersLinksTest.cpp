
#include "HomeServicesServersLinks.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_HomeServicesServersLinks_16058_is_assigned_from_json()
{


    bourne::json input =
    {
        "16058", "hello"
    };

    HomeServicesServersLinks obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.get16058().c_str());






}



void test_HomeServicesServersLinks_16058_is_converted_to_json()
{

    bourne::json input =
    {
        "16058", "hello"
    };

    HomeServicesServersLinks obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["16058"] == output["16058"]);



}


