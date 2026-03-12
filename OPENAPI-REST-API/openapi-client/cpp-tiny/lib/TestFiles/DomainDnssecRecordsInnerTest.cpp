
#include "DomainDnssecRecords_inner.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_DomainDnssecRecords_inner_algorithm_is_assigned_from_json()
{


    bourne::json input =
    {
        "algorithm", "hello"
    };

    DomainDnssecRecords_inner obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getAlgorithm().c_str());






}


void test_DomainDnssecRecords_inner_digest_type_is_assigned_from_json()
{


    bourne::json input =
    {
        "digest_type", "hello"
    };

    DomainDnssecRecords_inner obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getDigestType().c_str());






}


void test_DomainDnssecRecords_inner_digest_is_assigned_from_json()
{


    bourne::json input =
    {
        "digest", "hello"
    };

    DomainDnssecRecords_inner obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getDigest().c_str());






}


void test_DomainDnssecRecords_inner_key_tag_is_assigned_from_json()
{


    bourne::json input =
    {
        "key_tag", "hello"
    };

    DomainDnssecRecords_inner obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getKeyTag().c_str());






}



void test_DomainDnssecRecords_inner_algorithm_is_converted_to_json()
{

    bourne::json input =
    {
        "algorithm", "hello"
    };

    DomainDnssecRecords_inner obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["algorithm"] == output["algorithm"]);



}


void test_DomainDnssecRecords_inner_digest_type_is_converted_to_json()
{

    bourne::json input =
    {
        "digest_type", "hello"
    };

    DomainDnssecRecords_inner obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["digest_type"] == output["digest_type"]);



}


void test_DomainDnssecRecords_inner_digest_is_converted_to_json()
{

    bourne::json input =
    {
        "digest", "hello"
    };

    DomainDnssecRecords_inner obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["digest"] == output["digest"]);



}


void test_DomainDnssecRecords_inner_key_tag_is_converted_to_json()
{

    bourne::json input =
    {
        "key_tag", "hello"
    };

    DomainDnssecRecords_inner obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["key_tag"] == output["key_tag"]);



}


