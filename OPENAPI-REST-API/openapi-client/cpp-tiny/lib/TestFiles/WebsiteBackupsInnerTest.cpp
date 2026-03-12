
#include "WebsiteBackups_inner.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_WebsiteBackups_inner_name_is_assigned_from_json()
{


    bourne::json input =
    {
        "name", "hello"
    };

    WebsiteBackups_inner obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getName().c_str());






}


void test_WebsiteBackups_inner_size_is_assigned_from_json()
{
    bourne::json input =
    {
        "size", 1
    };

    WebsiteBackups_inner obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getSize());








}



void test_WebsiteBackups_inner_name_is_converted_to_json()
{

    bourne::json input =
    {
        "name", "hello"
    };

    WebsiteBackups_inner obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["name"] == output["name"]);



}


void test_WebsiteBackups_inner_size_is_converted_to_json()
{
    bourne::json input =
    {
        "size", 1
    };

    WebsiteBackups_inner obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["size"] == output["size"]);




}


