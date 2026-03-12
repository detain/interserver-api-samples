
#include "DnsUpdateRecord.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_DnsUpdateRecord_name_is_assigned_from_json()
{


    bourne::json input =
    {
        "name", "hello"
    };

    DnsUpdateRecord obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getName().c_str());






}



void test_DnsUpdateRecord_content_is_assigned_from_json()
{


    bourne::json input =
    {
        "content", "hello"
    };

    DnsUpdateRecord obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getContent().c_str());






}


void test_DnsUpdateRecord_ttl_is_assigned_from_json()
{


    bourne::json input =
    {
        "ttl", "hello"
    };

    DnsUpdateRecord obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getTtl().c_str());






}


void test_DnsUpdateRecord_prio_is_assigned_from_json()
{


    bourne::json input =
    {
        "prio", "hello"
    };

    DnsUpdateRecord obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getPrio().c_str());






}


void test_DnsUpdateRecord_disabled_is_assigned_from_json()
{


    bourne::json input =
    {
        "disabled", "hello"
    };

    DnsUpdateRecord obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getDisabled().c_str());






}


void test_DnsUpdateRecord_ordername_is_assigned_from_json()
{


    bourne::json input =
    {
        "ordername", "hello"
    };

    DnsUpdateRecord obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getOrdername().c_str());






}


void test_DnsUpdateRecord_auth_is_assigned_from_json()
{


    bourne::json input =
    {
        "auth", "hello"
    };

    DnsUpdateRecord obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getAuth().c_str());






}



void test_DnsUpdateRecord_name_is_converted_to_json()
{

    bourne::json input =
    {
        "name", "hello"
    };

    DnsUpdateRecord obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["name"] == output["name"]);



}



void test_DnsUpdateRecord_content_is_converted_to_json()
{

    bourne::json input =
    {
        "content", "hello"
    };

    DnsUpdateRecord obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["content"] == output["content"]);



}


void test_DnsUpdateRecord_ttl_is_converted_to_json()
{

    bourne::json input =
    {
        "ttl", "hello"
    };

    DnsUpdateRecord obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["ttl"] == output["ttl"]);



}


void test_DnsUpdateRecord_prio_is_converted_to_json()
{

    bourne::json input =
    {
        "prio", "hello"
    };

    DnsUpdateRecord obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["prio"] == output["prio"]);



}


void test_DnsUpdateRecord_disabled_is_converted_to_json()
{

    bourne::json input =
    {
        "disabled", "hello"
    };

    DnsUpdateRecord obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["disabled"] == output["disabled"]);



}


void test_DnsUpdateRecord_ordername_is_converted_to_json()
{

    bourne::json input =
    {
        "ordername", "hello"
    };

    DnsUpdateRecord obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["ordername"] == output["ordername"]);



}


void test_DnsUpdateRecord_auth_is_converted_to_json()
{

    bourne::json input =
    {
        "auth", "hello"
    };

    DnsUpdateRecord obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["auth"] == output["auth"]);



}


