
#include "ServerOrderCPU.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_ServerOrderCPU_id_is_assigned_from_json()
{


    bourne::json input =
    {
        "id", "hello"
    };

    ServerOrderCPU obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getId().c_str());






}


void test_ServerOrderCPU_price_is_assigned_from_json()
{
    bourne::json input =
    {
        "price", 1
    };

    ServerOrderCPU obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getPrice());








}


void test_ServerOrderCPU_img_is_assigned_from_json()
{


    bourne::json input =
    {
        "img", "hello"
    };

    ServerOrderCPU obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getImg().c_str());






}


void test_ServerOrderCPU_short_desc_is_assigned_from_json()
{


    bourne::json input =
    {
        "short_desc", "hello"
    };

    ServerOrderCPU obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getShortDesc().c_str());






}


void test_ServerOrderCPU_long_desc_is_assigned_from_json()
{


    bourne::json input =
    {
        "long_desc", "hello"
    };

    ServerOrderCPU obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getLongDesc().c_str());






}


void test_ServerOrderCPU_location_is_assigned_from_json()
{


    bourne::json input =
    {
        "location", "hello"
    };

    ServerOrderCPU obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getLocation().c_str());






}


void test_ServerOrderCPU_fsb_is_assigned_from_json()
{


    bourne::json input =
    {
        "fsb", "hello"
    };

    ServerOrderCPU obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getFsb().c_str());






}


void test_ServerOrderCPU_manu_is_assigned_from_json()
{


    bourne::json input =
    {
        "manu", "hello"
    };

    ServerOrderCPU obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getManu().c_str());






}


void test_ServerOrderCPU_type_is_assigned_from_json()
{


    bourne::json input =
    {
        "type", "hello"
    };

    ServerOrderCPU obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getType().c_str());






}


void test_ServerOrderCPU_speed_is_assigned_from_json()
{


    bourne::json input =
    {
        "speed", "hello"
    };

    ServerOrderCPU obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getSpeed().c_str());






}


void test_ServerOrderCPU_cache_is_assigned_from_json()
{


    bourne::json input =
    {
        "cache", "hello"
    };

    ServerOrderCPU obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCache().c_str());






}


void test_ServerOrderCPU_active_is_assigned_from_json()
{


    bourne::json input =
    {
        "active", "hello"
    };

    ServerOrderCPU obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getActive().c_str());






}


void test_ServerOrderCPU_num_cores_is_assigned_from_json()
{


    bourne::json input =
    {
        "num_cores", "hello"
    };

    ServerOrderCPU obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getNumCores().c_str());






}


void test_ServerOrderCPU_num_cpus_is_assigned_from_json()
{


    bourne::json input =
    {
        "num_cpus", "hello"
    };

    ServerOrderCPU obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getNumCpus().c_str());






}


void test_ServerOrderCPU_benchmark_is_assigned_from_json()
{


    bourne::json input =
    {
        "benchmark", "hello"
    };

    ServerOrderCPU obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getBenchmark().c_str());






}


void test_ServerOrderCPU_monthly_price_is_assigned_from_json()
{
    bourne::json input =
    {
        "monthly_price", 1
    };

    ServerOrderCPU obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getMonthlyPrice());








}


void test_ServerOrderCPU_max_ram_is_assigned_from_json()
{


    bourne::json input =
    {
        "max_ram", "hello"
    };

    ServerOrderCPU obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getMaxRam().c_str());






}


void test_ServerOrderCPU_min_ram_is_assigned_from_json()
{


    bourne::json input =
    {
        "min_ram", "hello"
    };

    ServerOrderCPU obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getMinRam().c_str());






}


void test_ServerOrderCPU_max_lff_is_assigned_from_json()
{


    bourne::json input =
    {
        "max_lff", "hello"
    };

    ServerOrderCPU obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getMaxLff().c_str());






}


void test_ServerOrderCPU_max_sff_is_assigned_from_json()
{


    bourne::json input =
    {
        "max_sff", "hello"
    };

    ServerOrderCPU obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getMaxSff().c_str());






}


void test_ServerOrderCPU_max_nve_is_assigned_from_json()
{


    bourne::json input =
    {
        "max_nve", "hello"
    };

    ServerOrderCPU obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getMaxNve().c_str());






}


void test_ServerOrderCPU_visible_is_assigned_from_json()
{


    bourne::json input =
    {
        "visible", "hello"
    };

    ServerOrderCPU obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getVisible().c_str());






}


void test_ServerOrderCPU_hd_ids_is_assigned_from_json()
{


    bourne::json input =
    {
        "hd_ids", "hello"
    };

    ServerOrderCPU obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getHdIds().c_str());






}


void test_ServerOrderCPU_price_display_is_assigned_from_json()
{


    bourne::json input =
    {
        "price_display", "hello"
    };

    ServerOrderCPU obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getPriceDisplay().c_str());






}


void test_ServerOrderCPU_monthly_price_display_is_assigned_from_json()
{


    bourne::json input =
    {
        "monthly_price_display", "hello"
    };

    ServerOrderCPU obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getMonthlyPriceDisplay().c_str());






}



void test_ServerOrderCPU_id_is_converted_to_json()
{

    bourne::json input =
    {
        "id", "hello"
    };

    ServerOrderCPU obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["id"] == output["id"]);



}


void test_ServerOrderCPU_price_is_converted_to_json()
{
    bourne::json input =
    {
        "price", 1
    };

    ServerOrderCPU obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["price"] == output["price"]);




}


void test_ServerOrderCPU_img_is_converted_to_json()
{

    bourne::json input =
    {
        "img", "hello"
    };

    ServerOrderCPU obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["img"] == output["img"]);



}


void test_ServerOrderCPU_short_desc_is_converted_to_json()
{

    bourne::json input =
    {
        "short_desc", "hello"
    };

    ServerOrderCPU obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["short_desc"] == output["short_desc"]);



}


void test_ServerOrderCPU_long_desc_is_converted_to_json()
{

    bourne::json input =
    {
        "long_desc", "hello"
    };

    ServerOrderCPU obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["long_desc"] == output["long_desc"]);



}


void test_ServerOrderCPU_location_is_converted_to_json()
{

    bourne::json input =
    {
        "location", "hello"
    };

    ServerOrderCPU obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["location"] == output["location"]);



}


void test_ServerOrderCPU_fsb_is_converted_to_json()
{

    bourne::json input =
    {
        "fsb", "hello"
    };

    ServerOrderCPU obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["fsb"] == output["fsb"]);



}


void test_ServerOrderCPU_manu_is_converted_to_json()
{

    bourne::json input =
    {
        "manu", "hello"
    };

    ServerOrderCPU obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["manu"] == output["manu"]);



}


void test_ServerOrderCPU_type_is_converted_to_json()
{

    bourne::json input =
    {
        "type", "hello"
    };

    ServerOrderCPU obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["type"] == output["type"]);



}


void test_ServerOrderCPU_speed_is_converted_to_json()
{

    bourne::json input =
    {
        "speed", "hello"
    };

    ServerOrderCPU obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["speed"] == output["speed"]);



}


void test_ServerOrderCPU_cache_is_converted_to_json()
{

    bourne::json input =
    {
        "cache", "hello"
    };

    ServerOrderCPU obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["cache"] == output["cache"]);



}


void test_ServerOrderCPU_active_is_converted_to_json()
{

    bourne::json input =
    {
        "active", "hello"
    };

    ServerOrderCPU obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["active"] == output["active"]);



}


void test_ServerOrderCPU_num_cores_is_converted_to_json()
{

    bourne::json input =
    {
        "num_cores", "hello"
    };

    ServerOrderCPU obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["num_cores"] == output["num_cores"]);



}


void test_ServerOrderCPU_num_cpus_is_converted_to_json()
{

    bourne::json input =
    {
        "num_cpus", "hello"
    };

    ServerOrderCPU obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["num_cpus"] == output["num_cpus"]);



}


void test_ServerOrderCPU_benchmark_is_converted_to_json()
{

    bourne::json input =
    {
        "benchmark", "hello"
    };

    ServerOrderCPU obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["benchmark"] == output["benchmark"]);



}


void test_ServerOrderCPU_monthly_price_is_converted_to_json()
{
    bourne::json input =
    {
        "monthly_price", 1
    };

    ServerOrderCPU obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["monthly_price"] == output["monthly_price"]);




}


void test_ServerOrderCPU_max_ram_is_converted_to_json()
{

    bourne::json input =
    {
        "max_ram", "hello"
    };

    ServerOrderCPU obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["max_ram"] == output["max_ram"]);



}


void test_ServerOrderCPU_min_ram_is_converted_to_json()
{

    bourne::json input =
    {
        "min_ram", "hello"
    };

    ServerOrderCPU obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["min_ram"] == output["min_ram"]);



}


void test_ServerOrderCPU_max_lff_is_converted_to_json()
{

    bourne::json input =
    {
        "max_lff", "hello"
    };

    ServerOrderCPU obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["max_lff"] == output["max_lff"]);



}


void test_ServerOrderCPU_max_sff_is_converted_to_json()
{

    bourne::json input =
    {
        "max_sff", "hello"
    };

    ServerOrderCPU obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["max_sff"] == output["max_sff"]);



}


void test_ServerOrderCPU_max_nve_is_converted_to_json()
{

    bourne::json input =
    {
        "max_nve", "hello"
    };

    ServerOrderCPU obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["max_nve"] == output["max_nve"]);



}


void test_ServerOrderCPU_visible_is_converted_to_json()
{

    bourne::json input =
    {
        "visible", "hello"
    };

    ServerOrderCPU obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["visible"] == output["visible"]);



}


void test_ServerOrderCPU_hd_ids_is_converted_to_json()
{

    bourne::json input =
    {
        "hd_ids", "hello"
    };

    ServerOrderCPU obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["hd_ids"] == output["hd_ids"]);



}


void test_ServerOrderCPU_price_display_is_converted_to_json()
{

    bourne::json input =
    {
        "price_display", "hello"
    };

    ServerOrderCPU obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["price_display"] == output["price_display"]);



}


void test_ServerOrderCPU_monthly_price_display_is_converted_to_json()
{

    bourne::json input =
    {
        "monthly_price_display", "hello"
    };

    ServerOrderCPU obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["monthly_price_display"] == output["monthly_price_display"]);



}


