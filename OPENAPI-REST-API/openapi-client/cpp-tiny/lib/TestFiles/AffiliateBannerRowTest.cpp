
#include "AffiliateBannerRow.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_AffiliateBannerRow_image_is_assigned_from_json()
{


    bourne::json input =
    {
        "image", "hello"
    };

    AffiliateBannerRow obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getImage().c_str());






}


void test_AffiliateBannerRow_width_is_assigned_from_json()
{


    bourne::json input =
    {
        "width", "hello"
    };

    AffiliateBannerRow obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getWidth().c_str());






}


void test_AffiliateBannerRow_height_is_assigned_from_json()
{


    bourne::json input =
    {
        "height", "hello"
    };

    AffiliateBannerRow obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getHeight().c_str());






}



void test_AffiliateBannerRow_image_is_converted_to_json()
{

    bourne::json input =
    {
        "image", "hello"
    };

    AffiliateBannerRow obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["image"] == output["image"]);



}


void test_AffiliateBannerRow_width_is_converted_to_json()
{

    bourne::json input =
    {
        "width", "hello"
    };

    AffiliateBannerRow obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["width"] == output["width"]);



}


void test_AffiliateBannerRow_height_is_converted_to_json()
{

    bourne::json input =
    {
        "height", "hello"
    };

    AffiliateBannerRow obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["height"] == output["height"]);



}


