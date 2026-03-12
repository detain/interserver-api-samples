
#include "DnsRecord.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_DnsRecord_id_is_assigned_from_json()
{


    bourne::json input =
    {
        "id", "hello"
    };

    DnsRecord obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getId().c_str());






}


void test_DnsRecord_domain_id_is_assigned_from_json()
{


    bourne::json input =
    {
        "domain_id", "hello"
    };

    DnsRecord obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getDomainId().c_str());






}


void test_DnsRecord_name_is_assigned_from_json()
{


    bourne::json input =
    {
        "name", "hello"
    };

    DnsRecord obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getName().c_str());






}



void test_DnsRecord_content_is_assigned_from_json()
{


    bourne::json input =
    {
        "content", "hello"
    };

    DnsRecord obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getContent().c_str());






}


void test_DnsRecord_ttl_is_assigned_from_json()
{


    bourne::json input =
    {
        "ttl", "hello"
    };

    DnsRecord obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getTtl().c_str());






}


void test_DnsRecord_prio_is_assigned_from_json()
{


    bourne::json input =
    {
        "prio", "hello"
    };

    DnsRecord obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getPrio().c_str());






}


void test_DnsRecord_disabled_is_assigned_from_json()
{


    bourne::json input =
    {
        "disabled", "hello"
    };

    DnsRecord obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getDisabled().c_str());






}


void test_DnsRecord_ordername_is_assigned_from_json()
{


    bourne::json input =
    {
        "ordername", "hello"
    };

    DnsRecord obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getOrdername().c_str());






}


void test_DnsRecord_auth_is_assigned_from_json()
{


    bourne::json input =
    {
        "auth", "hello"
    };

    DnsRecord obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getAuth().c_str());






}



void test_DnsRecord_id_is_converted_to_json()
{

    bourne::json input =
    {
        "id", "hello"
    };

    DnsRecord obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["id"] == output["id"]);



}


void test_DnsRecord_domain_id_is_converted_to_json()
{

    bourne::json input =
    {
        "domain_id", "hello"
    };

    DnsRecord obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["domain_id"] == output["domain_id"]);



}


void test_DnsRecord_name_is_converted_to_json()
{

    bourne::json input =
    {
        "name", "hello"
    };

    DnsRecord obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["name"] == output["name"]);



}



void test_DnsRecord_content_is_converted_to_json()
{

    bourne::json input =
    {
        "content", "hello"
    };

    DnsRecord obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["content"] == output["content"]);



}


void test_DnsRecord_ttl_is_converted_to_json()
{

    bourne::json input =
    {
        "ttl", "hello"
    };

    DnsRecord obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["ttl"] == output["ttl"]);



}


void test_DnsRecord_prio_is_converted_to_json()
{

    bourne::json input =
    {
        "prio", "hello"
    };

    DnsRecord obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["prio"] == output["prio"]);



}


void test_DnsRecord_disabled_is_converted_to_json()
{

    bourne::json input =
    {
        "disabled", "hello"
    };

    DnsRecord obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["disabled"] == output["disabled"]);



}


void test_DnsRecord_ordername_is_converted_to_json()
{

    bourne::json input =
    {
        "ordername", "hello"
    };

    DnsRecord obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["ordername"] == output["ordername"]);



}


void test_DnsRecord_auth_is_converted_to_json()
{

    bourne::json input =
    {
        "auth", "hello"
    };

    DnsRecord obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["auth"] == output["auth"]);



}


