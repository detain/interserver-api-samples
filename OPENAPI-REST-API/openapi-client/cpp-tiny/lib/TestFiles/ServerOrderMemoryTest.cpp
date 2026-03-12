
#include "ServerOrderMemory.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_ServerOrderMemory_id_is_assigned_from_json()
{


    bourne::json input =
    {
        "id", "hello"
    };

    ServerOrderMemory obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getId().c_str());






}


void test_ServerOrderMemory_price_is_assigned_from_json()
{


    bourne::json input =
    {
        "price", "hello"
    };

    ServerOrderMemory obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getPrice().c_str());






}


void test_ServerOrderMemory_img_is_assigned_from_json()
{


    bourne::json input =
    {
        "img", "hello"
    };

    ServerOrderMemory obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getImg().c_str());






}


void test_ServerOrderMemory_short_desc_is_assigned_from_json()
{


    bourne::json input =
    {
        "short_desc", "hello"
    };

    ServerOrderMemory obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getShortDesc().c_str());






}


void test_ServerOrderMemory_long_desc_is_assigned_from_json()
{


    bourne::json input =
    {
        "long_desc", "hello"
    };

    ServerOrderMemory obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getLongDesc().c_str());






}


void test_ServerOrderMemory_manu_is_assigned_from_json()
{


    bourne::json input =
    {
        "manu", "hello"
    };

    ServerOrderMemory obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getManu().c_str());






}


void test_ServerOrderMemory_size_is_assigned_from_json()
{


    bourne::json input =
    {
        "size", "hello"
    };

    ServerOrderMemory obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getSize().c_str());






}


void test_ServerOrderMemory_type_is_assigned_from_json()
{


    bourne::json input =
    {
        "type", "hello"
    };

    ServerOrderMemory obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getType().c_str());






}


void test_ServerOrderMemory_hidden_is_assigned_from_json()
{


    bourne::json input =
    {
        "hidden", "hello"
    };

    ServerOrderMemory obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getHidden().c_str());






}


void test_ServerOrderMemory_monthly_price_is_assigned_from_json()
{
    bourne::json input =
    {
        "monthly_price", 1
    };

    ServerOrderMemory obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getMonthlyPrice());








}


void test_ServerOrderMemory_drive_type_is_assigned_from_json()
{


    bourne::json input =
    {
        "drive_type", "hello"
    };

    ServerOrderMemory obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getDriveType().c_str());






}


void test_ServerOrderMemory_monthly_price_display_is_assigned_from_json()
{


    bourne::json input =
    {
        "monthly_price_display", "hello"
    };

    ServerOrderMemory obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getMonthlyPriceDisplay().c_str());






}



void test_ServerOrderMemory_id_is_converted_to_json()
{

    bourne::json input =
    {
        "id", "hello"
    };

    ServerOrderMemory obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["id"] == output["id"]);



}


void test_ServerOrderMemory_price_is_converted_to_json()
{

    bourne::json input =
    {
        "price", "hello"
    };

    ServerOrderMemory obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["price"] == output["price"]);



}


void test_ServerOrderMemory_img_is_converted_to_json()
{

    bourne::json input =
    {
        "img", "hello"
    };

    ServerOrderMemory obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["img"] == output["img"]);



}


void test_ServerOrderMemory_short_desc_is_converted_to_json()
{

    bourne::json input =
    {
        "short_desc", "hello"
    };

    ServerOrderMemory obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["short_desc"] == output["short_desc"]);



}


void test_ServerOrderMemory_long_desc_is_converted_to_json()
{

    bourne::json input =
    {
        "long_desc", "hello"
    };

    ServerOrderMemory obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["long_desc"] == output["long_desc"]);



}


void test_ServerOrderMemory_manu_is_converted_to_json()
{

    bourne::json input =
    {
        "manu", "hello"
    };

    ServerOrderMemory obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["manu"] == output["manu"]);



}


void test_ServerOrderMemory_size_is_converted_to_json()
{

    bourne::json input =
    {
        "size", "hello"
    };

    ServerOrderMemory obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["size"] == output["size"]);



}


void test_ServerOrderMemory_type_is_converted_to_json()
{

    bourne::json input =
    {
        "type", "hello"
    };

    ServerOrderMemory obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["type"] == output["type"]);



}


void test_ServerOrderMemory_hidden_is_converted_to_json()
{

    bourne::json input =
    {
        "hidden", "hello"
    };

    ServerOrderMemory obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["hidden"] == output["hidden"]);



}


void test_ServerOrderMemory_monthly_price_is_converted_to_json()
{
    bourne::json input =
    {
        "monthly_price", 1
    };

    ServerOrderMemory obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["monthly_price"] == output["monthly_price"]);




}


void test_ServerOrderMemory_drive_type_is_converted_to_json()
{

    bourne::json input =
    {
        "drive_type", "hello"
    };

    ServerOrderMemory obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["drive_type"] == output["drive_type"]);



}


void test_ServerOrderMemory_monthly_price_display_is_converted_to_json()
{

    bourne::json input =
    {
        "monthly_price_display", "hello"
    };

    ServerOrderMemory obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["monthly_price_display"] == output["monthly_price_display"]);



}


