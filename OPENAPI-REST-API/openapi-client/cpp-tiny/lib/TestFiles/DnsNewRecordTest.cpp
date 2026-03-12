
#include "DnsNewRecord.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_DnsNewRecord_name_is_assigned_from_json()
{


    bourne::json input =
    {
        "name", "hello"
    };

    DnsNewRecord obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getName().c_str());






}



void test_DnsNewRecord_content_is_assigned_from_json()
{


    bourne::json input =
    {
        "content", "hello"
    };

    DnsNewRecord obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getContent().c_str());






}


void test_DnsNewRecord_ttl_is_assigned_from_json()
{
    bourne::json input =
    {
        "ttl", 1
    };

    DnsNewRecord obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getTtl());








}


void test_DnsNewRecord_prio_is_assigned_from_json()
{
    bourne::json input =
    {
        "prio", 1
    };

    DnsNewRecord obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getPrio());








}



void test_DnsNewRecord_name_is_converted_to_json()
{

    bourne::json input =
    {
        "name", "hello"
    };

    DnsNewRecord obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["name"] == output["name"]);



}



void test_DnsNewRecord_content_is_converted_to_json()
{

    bourne::json input =
    {
        "content", "hello"
    };

    DnsNewRecord obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["content"] == output["content"]);



}


void test_DnsNewRecord_ttl_is_converted_to_json()
{
    bourne::json input =
    {
        "ttl", 1
    };

    DnsNewRecord obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["ttl"] == output["ttl"]);




}


void test_DnsNewRecord_prio_is_converted_to_json()
{
    bourne::json input =
    {
        "prio", 1
    };

    DnsNewRecord obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["prio"] == output["prio"]);




}


