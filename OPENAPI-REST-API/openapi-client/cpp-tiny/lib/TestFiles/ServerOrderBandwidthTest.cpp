
#include "ServerOrderBandwidth.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_ServerOrderBandwidth_id_is_assigned_from_json()
{


    bourne::json input =
    {
        "id", "hello"
    };

    ServerOrderBandwidth obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getId().c_str());






}


void test_ServerOrderBandwidth_price_is_assigned_from_json()
{
    bourne::json input =
    {
        "price", 1
    };

    ServerOrderBandwidth obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getPrice());








}


void test_ServerOrderBandwidth_img_is_assigned_from_json()
{


    bourne::json input =
    {
        "img", "hello"
    };

    ServerOrderBandwidth obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getImg().c_str());






}


void test_ServerOrderBandwidth_short_desc_is_assigned_from_json()
{


    bourne::json input =
    {
        "short_desc", "hello"
    };

    ServerOrderBandwidth obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getShortDesc().c_str());






}


void test_ServerOrderBandwidth_long_desc_is_assigned_from_json()
{


    bourne::json input =
    {
        "long_desc", "hello"
    };

    ServerOrderBandwidth obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getLongDesc().c_str());






}


void test_ServerOrderBandwidth_type_is_assigned_from_json()
{


    bourne::json input =
    {
        "type", "hello"
    };

    ServerOrderBandwidth obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getType().c_str());






}


void test_ServerOrderBandwidth_qty_is_assigned_from_json()
{


    bourne::json input =
    {
        "qty", "hello"
    };

    ServerOrderBandwidth obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getQty().c_str());






}


void test_ServerOrderBandwidth_active_is_assigned_from_json()
{


    bourne::json input =
    {
        "active", "hello"
    };

    ServerOrderBandwidth obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getActive().c_str());






}


void test_ServerOrderBandwidth_monthly_price_is_assigned_from_json()
{
    bourne::json input =
    {
        "monthly_price", 1
    };

    ServerOrderBandwidth obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getMonthlyPrice());








}


void test_ServerOrderBandwidth_price_display_is_assigned_from_json()
{


    bourne::json input =
    {
        "price_display", "hello"
    };

    ServerOrderBandwidth obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getPriceDisplay().c_str());






}


void test_ServerOrderBandwidth_monthly_price_display_is_assigned_from_json()
{


    bourne::json input =
    {
        "monthly_price_display", "hello"
    };

    ServerOrderBandwidth obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getMonthlyPriceDisplay().c_str());






}



void test_ServerOrderBandwidth_id_is_converted_to_json()
{

    bourne::json input =
    {
        "id", "hello"
    };

    ServerOrderBandwidth obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["id"] == output["id"]);



}


void test_ServerOrderBandwidth_price_is_converted_to_json()
{
    bourne::json input =
    {
        "price", 1
    };

    ServerOrderBandwidth obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["price"] == output["price"]);




}


void test_ServerOrderBandwidth_img_is_converted_to_json()
{

    bourne::json input =
    {
        "img", "hello"
    };

    ServerOrderBandwidth obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["img"] == output["img"]);



}


void test_ServerOrderBandwidth_short_desc_is_converted_to_json()
{

    bourne::json input =
    {
        "short_desc", "hello"
    };

    ServerOrderBandwidth obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["short_desc"] == output["short_desc"]);



}


void test_ServerOrderBandwidth_long_desc_is_converted_to_json()
{

    bourne::json input =
    {
        "long_desc", "hello"
    };

    ServerOrderBandwidth obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["long_desc"] == output["long_desc"]);



}


void test_ServerOrderBandwidth_type_is_converted_to_json()
{

    bourne::json input =
    {
        "type", "hello"
    };

    ServerOrderBandwidth obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["type"] == output["type"]);



}


void test_ServerOrderBandwidth_qty_is_converted_to_json()
{

    bourne::json input =
    {
        "qty", "hello"
    };

    ServerOrderBandwidth obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["qty"] == output["qty"]);



}


void test_ServerOrderBandwidth_active_is_converted_to_json()
{

    bourne::json input =
    {
        "active", "hello"
    };

    ServerOrderBandwidth obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["active"] == output["active"]);



}


void test_ServerOrderBandwidth_monthly_price_is_converted_to_json()
{
    bourne::json input =
    {
        "monthly_price", 1
    };

    ServerOrderBandwidth obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["monthly_price"] == output["monthly_price"]);




}


void test_ServerOrderBandwidth_price_display_is_converted_to_json()
{

    bourne::json input =
    {
        "price_display", "hello"
    };

    ServerOrderBandwidth obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["price_display"] == output["price_display"]);



}


void test_ServerOrderBandwidth_monthly_price_display_is_converted_to_json()
{

    bourne::json input =
    {
        "monthly_price_display", "hello"
    };

    ServerOrderBandwidth obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["monthly_price_display"] == output["monthly_price_display"]);



}


