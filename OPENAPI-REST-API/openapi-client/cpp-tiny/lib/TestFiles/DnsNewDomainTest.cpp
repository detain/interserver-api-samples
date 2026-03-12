
#include "DnsNewDomain.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_DnsNewDomain_domain_is_assigned_from_json()
{


    bourne::json input =
    {
        "domain", "hello"
    };

    DnsNewDomain obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getDomain().c_str());






}


void test_DnsNewDomain_ip_is_assigned_from_json()
{


    bourne::json input =
    {
        "ip", "hello"
    };

    DnsNewDomain obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getIp().c_str());






}



void test_DnsNewDomain_domain_is_converted_to_json()
{

    bourne::json input =
    {
        "domain", "hello"
    };

    DnsNewDomain obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["domain"] == output["domain"]);



}


void test_DnsNewDomain_ip_is_converted_to_json()
{

    bourne::json input =
    {
        "ip", "hello"
    };

    DnsNewDomain obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["ip"] == output["ip"]);



}


