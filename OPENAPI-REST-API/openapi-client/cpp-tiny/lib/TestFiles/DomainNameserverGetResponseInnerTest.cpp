
#include "DomainNameserverGetResponse_inner.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_DomainNameserverGetResponse_inner_name_is_assigned_from_json()
{


    bourne::json input =
    {
        "name", "hello"
    };

    DomainNameserverGetResponse_inner obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getName().c_str());






}


void test_DomainNameserverGetResponse_inner_ipaddress_is_assigned_from_json()
{


    bourne::json input =
    {
        "ipaddress", "hello"
    };

    DomainNameserverGetResponse_inner obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getIpaddress().c_str());






}


void test_DomainNameserverGetResponse_inner_can_delete_is_assigned_from_json()
{


    bourne::json input =
    {
        "can_delete", "hello"
    };

    DomainNameserverGetResponse_inner obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCanDelete().c_str());






}



void test_DomainNameserverGetResponse_inner_name_is_converted_to_json()
{

    bourne::json input =
    {
        "name", "hello"
    };

    DomainNameserverGetResponse_inner obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["name"] == output["name"]);



}


void test_DomainNameserverGetResponse_inner_ipaddress_is_converted_to_json()
{

    bourne::json input =
    {
        "ipaddress", "hello"
    };

    DomainNameserverGetResponse_inner obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["ipaddress"] == output["ipaddress"]);



}


void test_DomainNameserverGetResponse_inner_can_delete_is_converted_to_json()
{

    bourne::json input =
    {
        "can_delete", "hello"
    };

    DomainNameserverGetResponse_inner obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["can_delete"] == output["can_delete"]);



}


