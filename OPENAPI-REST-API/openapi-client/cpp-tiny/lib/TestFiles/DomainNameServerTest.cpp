
#include "DomainNameServer.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_DomainNameServer_sortorder_is_assigned_from_json()
{


    bourne::json input =
    {
        "sortorder", "hello"
    };

    DomainNameServer obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getSortorder().c_str());






}


void test_DomainNameServer_name_is_assigned_from_json()
{


    bourne::json input =
    {
        "name", "hello"
    };

    DomainNameServer obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getName().c_str());






}


void test_DomainNameServer_ipaddress_is_assigned_from_json()
{


    bourne::json input =
    {
        "ipaddress", "hello"
    };

    DomainNameServer obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getIpaddress().c_str());






}



void test_DomainNameServer_sortorder_is_converted_to_json()
{

    bourne::json input =
    {
        "sortorder", "hello"
    };

    DomainNameServer obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["sortorder"] == output["sortorder"]);



}


void test_DomainNameServer_name_is_converted_to_json()
{

    bourne::json input =
    {
        "name", "hello"
    };

    DomainNameServer obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["name"] == output["name"]);



}


void test_DomainNameServer_ipaddress_is_converted_to_json()
{

    bourne::json input =
    {
        "ipaddress", "hello"
    };

    DomainNameServer obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["ipaddress"] == output["ipaddress"]);



}


