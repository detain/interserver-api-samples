
#include "HomeServicesDomainsLinks.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_HomeServicesDomainsLinks_376114_is_assigned_from_json()
{


    bourne::json input =
    {
        "376114", "hello"
    };

    HomeServicesDomainsLinks obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.get376114().c_str());






}


void test_HomeServicesDomainsLinks_376503_is_assigned_from_json()
{


    bourne::json input =
    {
        "376503", "hello"
    };

    HomeServicesDomainsLinks obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.get376503().c_str());






}


void test_HomeServicesDomainsLinks_592337_is_assigned_from_json()
{


    bourne::json input =
    {
        "592337", "hello"
    };

    HomeServicesDomainsLinks obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.get592337().c_str());






}



void test_HomeServicesDomainsLinks_376114_is_converted_to_json()
{

    bourne::json input =
    {
        "376114", "hello"
    };

    HomeServicesDomainsLinks obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["376114"] == output["376114"]);



}


void test_HomeServicesDomainsLinks_376503_is_converted_to_json()
{

    bourne::json input =
    {
        "376503", "hello"
    };

    HomeServicesDomainsLinks obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["376503"] == output["376503"]);



}


void test_HomeServicesDomainsLinks_592337_is_converted_to_json()
{

    bourne::json input =
    {
        "592337", "hello"
    };

    HomeServicesDomainsLinks obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["592337"] == output["592337"]);



}


