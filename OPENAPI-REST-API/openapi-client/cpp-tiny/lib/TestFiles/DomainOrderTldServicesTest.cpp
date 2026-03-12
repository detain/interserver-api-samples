
#include "DomainOrderTldServices.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_DomainOrderTldServices_asia_is_assigned_from_json()
{
    bourne::json input =
    {
        "asia", 1
    };

    DomainOrderTldServices obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getAsia());








}


void test_DomainOrderTldServices_be_is_assigned_from_json()
{
    bourne::json input =
    {
        "be", 1
    };

    DomainOrderTldServices obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getBe());








}


void test_DomainOrderTldServices_biz_is_assigned_from_json()
{
    bourne::json input =
    {
        "biz", 1
    };

    DomainOrderTldServices obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getBiz());








}


void test_DomainOrderTldServices_ca_is_assigned_from_json()
{
    bourne::json input =
    {
        "ca", 1
    };

    DomainOrderTldServices obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getCa());








}



void test_DomainOrderTldServices_asia_is_converted_to_json()
{
    bourne::json input =
    {
        "asia", 1
    };

    DomainOrderTldServices obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["asia"] == output["asia"]);




}


void test_DomainOrderTldServices_be_is_converted_to_json()
{
    bourne::json input =
    {
        "be", 1
    };

    DomainOrderTldServices obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["be"] == output["be"]);




}


void test_DomainOrderTldServices_biz_is_converted_to_json()
{
    bourne::json input =
    {
        "biz", 1
    };

    DomainOrderTldServices obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["biz"] == output["biz"]);




}


void test_DomainOrderTldServices_ca_is_converted_to_json()
{
    bourne::json input =
    {
        "ca", 1
    };

    DomainOrderTldServices obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["ca"] == output["ca"]);




}


