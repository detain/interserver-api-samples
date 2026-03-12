
#include "ServerAssets.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_ServerAssets_title_is_assigned_from_json()
{


    bourne::json input =
    {
        "title", "hello"
    };

    ServerAssets obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getTitle().c_str());






}


void test_ServerAssets_size_is_assigned_from_json()
{
    bourne::json input =
    {
        "size", 1
    };

    ServerAssets obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getSize());








}


void test_ServerAssets_type_is_assigned_from_json()
{


    bourne::json input =
    {
        "type", "hello"
    };

    ServerAssets obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getType().c_str());






}





void test_ServerAssets_title_is_converted_to_json()
{

    bourne::json input =
    {
        "title", "hello"
    };

    ServerAssets obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["title"] == output["title"]);



}


void test_ServerAssets_size_is_converted_to_json()
{
    bourne::json input =
    {
        "size", 1
    };

    ServerAssets obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["size"] == output["size"]);




}


void test_ServerAssets_type_is_converted_to_json()
{

    bourne::json input =
    {
        "type", "hello"
    };

    ServerAssets obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["type"] == output["type"]);



}




