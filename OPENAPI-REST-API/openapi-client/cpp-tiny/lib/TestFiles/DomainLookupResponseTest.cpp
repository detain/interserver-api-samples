
#include "DomainLookupResponse.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_DomainLookupResponse_available_is_assigned_from_json()
{




    bourne::json input =
    {
        "available", true
    };

    DomainLookupResponse obj(input.dump());

    TEST_ASSERT(true == obj.isAvailable());




}


void test_DomainLookupResponse_premium_is_assigned_from_json()
{




    bourne::json input =
    {
        "premium", true
    };

    DomainLookupResponse obj(input.dump());

    TEST_ASSERT(true == obj.isPremium());




}


void test_DomainLookupResponse_website_is_assigned_from_json()
{




    bourne::json input =
    {
        "website", true
    };

    DomainLookupResponse obj(input.dump());

    TEST_ASSERT(true == obj.isWebsite());




}


void test_DomainLookupResponse_domain_service_is_assigned_from_json()
{




    bourne::json input =
    {
        "domain_service", true
    };

    DomainLookupResponse obj(input.dump());

    TEST_ASSERT(true == obj.isDomainService());




}



void test_DomainLookupResponse_whois_privacy_is_assigned_from_json()
{




    bourne::json input =
    {
        "whois_privacy", true
    };

    DomainLookupResponse obj(input.dump());

    TEST_ASSERT(true == obj.isWhoisPrivacy());




}


void test_DomainLookupResponse_r_new_is_assigned_from_json()
{


    bourne::json input =
    {
        "r_new", "hello"
    };

    DomainLookupResponse obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getRNew().c_str());






}


void test_DomainLookupResponse_renewal_is_assigned_from_json()
{


    bourne::json input =
    {
        "renewal", "hello"
    };

    DomainLookupResponse obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getRenewal().c_str());






}


void test_DomainLookupResponse_transfer_is_assigned_from_json()
{


    bourne::json input =
    {
        "transfer", "hello"
    };

    DomainLookupResponse obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getTransfer().c_str());






}





void test_DomainLookupResponse_available_is_converted_to_json()
{


    bourne::json input =
    {
        "available", true
    };

    DomainLookupResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["available"] == output["available"]);


}


void test_DomainLookupResponse_premium_is_converted_to_json()
{


    bourne::json input =
    {
        "premium", true
    };

    DomainLookupResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["premium"] == output["premium"]);


}


void test_DomainLookupResponse_website_is_converted_to_json()
{


    bourne::json input =
    {
        "website", true
    };

    DomainLookupResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["website"] == output["website"]);


}


void test_DomainLookupResponse_domain_service_is_converted_to_json()
{


    bourne::json input =
    {
        "domain_service", true
    };

    DomainLookupResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["domain_service"] == output["domain_service"]);


}



void test_DomainLookupResponse_whois_privacy_is_converted_to_json()
{


    bourne::json input =
    {
        "whois_privacy", true
    };

    DomainLookupResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["whois_privacy"] == output["whois_privacy"]);


}


void test_DomainLookupResponse_r_new_is_converted_to_json()
{

    bourne::json input =
    {
        "r_new", "hello"
    };

    DomainLookupResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["r_new"] == output["r_new"]);



}


void test_DomainLookupResponse_renewal_is_converted_to_json()
{

    bourne::json input =
    {
        "renewal", "hello"
    };

    DomainLookupResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["renewal"] == output["renewal"]);



}


void test_DomainLookupResponse_transfer_is_converted_to_json()
{

    bourne::json input =
    {
        "transfer", "hello"
    };

    DomainLookupResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["transfer"] == output["transfer"]);



}




