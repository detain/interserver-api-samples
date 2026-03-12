
#include "CreateFilter.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_CreateFilter_filter_type_is_assigned_from_json()
{


    bourne::json input =
    {
        "filter_type", "hello"
    };

    CreateFilter obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getFilterType().c_str());






}


void test_CreateFilter_port_is_assigned_from_json()
{
    bourne::json input =
    {
        "port", 1
    };

    CreateFilter obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getPort());








}



void test_CreateFilter_filter_type_is_converted_to_json()
{

    bourne::json input =
    {
        "filter_type", "hello"
    };

    CreateFilter obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["filter_type"] == output["filter_type"]);



}


void test_CreateFilter_port_is_converted_to_json()
{
    bourne::json input =
    {
        "port", 1
    };

    CreateFilter obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["port"] == output["port"]);




}


