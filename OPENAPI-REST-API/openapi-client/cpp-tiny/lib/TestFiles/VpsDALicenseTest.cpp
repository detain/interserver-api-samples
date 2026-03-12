
#include "VpsDALicense.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_VpsDALicense_name_is_assigned_from_json()
{


    bourne::json input =
    {
        "name", "hello"
    };

    VpsDALicense obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getName().c_str());






}


void test_VpsDALicense_sub_name_is_assigned_from_json()
{


    bourne::json input =
    {
        "sub_name", "hello"
    };

    VpsDALicense obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getSubName().c_str());






}


void test_VpsDALicense_cost_is_assigned_from_json()
{
    bourne::json input =
    {
        "cost", 1
    };

    VpsDALicense obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getCost());








}


void test_VpsDALicense_img_disabled_is_assigned_from_json()
{


    bourne::json input =
    {
        "img_disabled", "hello"
    };

    VpsDALicense obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getImgDisabled().c_str());






}


void test_VpsDALicense_img_active_is_assigned_from_json()
{


    bourne::json input =
    {
        "img_active", "hello"
    };

    VpsDALicense obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getImgActive().c_str());






}



void test_VpsDALicense_name_is_converted_to_json()
{

    bourne::json input =
    {
        "name", "hello"
    };

    VpsDALicense obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["name"] == output["name"]);



}


void test_VpsDALicense_sub_name_is_converted_to_json()
{

    bourne::json input =
    {
        "sub_name", "hello"
    };

    VpsDALicense obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["sub_name"] == output["sub_name"]);



}


void test_VpsDALicense_cost_is_converted_to_json()
{
    bourne::json input =
    {
        "cost", 1
    };

    VpsDALicense obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["cost"] == output["cost"]);




}


void test_VpsDALicense_img_disabled_is_converted_to_json()
{

    bourne::json input =
    {
        "img_disabled", "hello"
    };

    VpsDALicense obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["img_disabled"] == output["img_disabled"]);



}


void test_VpsDALicense_img_active_is_converted_to_json()
{

    bourne::json input =
    {
        "img_active", "hello"
    };

    VpsDALicense obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["img_active"] == output["img_active"]);



}


