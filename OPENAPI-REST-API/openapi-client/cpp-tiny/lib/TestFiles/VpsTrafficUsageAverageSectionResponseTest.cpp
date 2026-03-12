
#include "VpsTrafficUsageAverageSectionResponse.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_VpsTrafficUsageAverageSectionResponse_total_is_assigned_from_json()
{
    bourne::json input =
    {
        "total", 1
    };

    VpsTrafficUsageAverageSectionResponse obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getTotal());








}


void test_VpsTrafficUsageAverageSectionResponse_count_is_assigned_from_json()
{
    bourne::json input =
    {
        "count", 1
    };

    VpsTrafficUsageAverageSectionResponse obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getCount());








}


void test_VpsTrafficUsageAverageSectionResponse_value_is_assigned_from_json()
{
    bourne::json input =
    {
        "value", 1
    };

    VpsTrafficUsageAverageSectionResponse obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getValue());








}



void test_VpsTrafficUsageAverageSectionResponse_total_is_converted_to_json()
{
    bourne::json input =
    {
        "total", 1
    };

    VpsTrafficUsageAverageSectionResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["total"] == output["total"]);




}


void test_VpsTrafficUsageAverageSectionResponse_count_is_converted_to_json()
{
    bourne::json input =
    {
        "count", 1
    };

    VpsTrafficUsageAverageSectionResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["count"] == output["count"]);




}


void test_VpsTrafficUsageAverageSectionResponse_value_is_converted_to_json()
{
    bourne::json input =
    {
        "value", 1
    };

    VpsTrafficUsageAverageSectionResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["value"] == output["value"]);




}


