
#include "Region.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_Region_region_id_is_assigned_from_json()
{
    bourne::json input =
    {
        "region_id", 1
    };

    Region obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getRegionId());








}


void test_Region_region_name_is_assigned_from_json()
{


    bourne::json input =
    {
        "region_name", "hello"
    };

    Region obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getRegionName().c_str());






}



void test_Region_region_id_is_converted_to_json()
{
    bourne::json input =
    {
        "region_id", 1
    };

    Region obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["region_id"] == output["region_id"]);




}


void test_Region_region_name_is_converted_to_json()
{

    bourne::json input =
    {
        "region_name", "hello"
    };

    Region obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["region_name"] == output["region_name"]);



}


