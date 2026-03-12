
#include "DnsListItem.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_DnsListItem_id_is_assigned_from_json()
{
    bourne::json input =
    {
        "id", 1
    };

    DnsListItem obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getId());








}


void test_DnsListItem_name_is_assigned_from_json()
{


    bourne::json input =
    {
        "name", "hello"
    };

    DnsListItem obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getName().c_str());






}


void test_DnsListItem_content_is_assigned_from_json()
{


    bourne::json input =
    {
        "content", "hello"
    };

    DnsListItem obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getContent().c_str());






}



void test_DnsListItem_id_is_converted_to_json()
{
    bourne::json input =
    {
        "id", 1
    };

    DnsListItem obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["id"] == output["id"]);




}


void test_DnsListItem_name_is_converted_to_json()
{

    bourne::json input =
    {
        "name", "hello"
    };

    DnsListItem obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["name"] == output["name"]);



}


void test_DnsListItem_content_is_converted_to_json()
{

    bourne::json input =
    {
        "content", "hello"
    };

    DnsListItem obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["content"] == output["content"]);



}


