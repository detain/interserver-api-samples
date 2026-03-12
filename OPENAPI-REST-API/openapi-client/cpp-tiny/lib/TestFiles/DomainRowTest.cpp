
#include "DomainRow.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_DomainRow_domain_id_is_assigned_from_json()
{


    bourne::json input =
    {
        "domain_id", "hello"
    };

    DomainRow obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getDomainId().c_str());






}


void test_DomainRow_domain_hostname_is_assigned_from_json()
{


    bourne::json input =
    {
        "domain_hostname", "hello"
    };

    DomainRow obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getDomainHostname().c_str());






}


void test_DomainRow_domain_expire_date_is_assigned_from_json()
{


    bourne::json input =
    {
        "domain_expire_date", "hello"
    };

    DomainRow obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getDomainExpireDate().c_str());






}


void test_DomainRow_cost_is_assigned_from_json()
{


    bourne::json input =
    {
        "cost", "hello"
    };

    DomainRow obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCost().c_str());






}


void test_DomainRow_domain_status_is_assigned_from_json()
{


    bourne::json input =
    {
        "domain_status", "hello"
    };

    DomainRow obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getDomainStatus().c_str());






}



void test_DomainRow_domain_id_is_converted_to_json()
{

    bourne::json input =
    {
        "domain_id", "hello"
    };

    DomainRow obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["domain_id"] == output["domain_id"]);



}


void test_DomainRow_domain_hostname_is_converted_to_json()
{

    bourne::json input =
    {
        "domain_hostname", "hello"
    };

    DomainRow obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["domain_hostname"] == output["domain_hostname"]);



}


void test_DomainRow_domain_expire_date_is_converted_to_json()
{

    bourne::json input =
    {
        "domain_expire_date", "hello"
    };

    DomainRow obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["domain_expire_date"] == output["domain_expire_date"]);



}


void test_DomainRow_cost_is_converted_to_json()
{

    bourne::json input =
    {
        "cost", "hello"
    };

    DomainRow obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["cost"] == output["cost"]);



}


void test_DomainRow_domain_status_is_converted_to_json()
{

    bourne::json input =
    {
        "domain_status", "hello"
    };

    DomainRow obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["domain_status"] == output["domain_status"]);



}


