
#include "WebsitesOrderPackages.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_WebsitesOrderPackages_11447_is_assigned_from_json()
{


    bourne::json input =
    {
        "11447", "hello"
    };

    WebsitesOrderPackages obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.get11447().c_str());






}



void test_WebsitesOrderPackages_11447_is_converted_to_json()
{

    bourne::json input =
    {
        "11447", "hello"
    };

    WebsitesOrderPackages obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["11447"] == output["11447"]);



}


