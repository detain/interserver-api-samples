
#include "CpuWithDefaults.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_CpuWithDefaults_id_is_assigned_from_json()
{
    bourne::json input =
    {
        "id", 1
    };

    CpuWithDefaults obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getId());








}


void test_CpuWithDefaults_short_desc_is_assigned_from_json()
{


    bourne::json input =
    {
        "short_desc", "hello"
    };

    CpuWithDefaults obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getShortDesc().c_str());






}


void test_CpuWithDefaults_long_desc_is_assigned_from_json()
{


    bourne::json input =
    {
        "long_desc", "hello"
    };

    CpuWithDefaults obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getLongDesc().c_str());






}


void test_CpuWithDefaults_type_is_assigned_from_json()
{


    bourne::json input =
    {
        "type", "hello"
    };

    CpuWithDefaults obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getType().c_str());






}


void test_CpuWithDefaults_speed_is_assigned_from_json()
{


    bourne::json input =
    {
        "speed", "hello"
    };

    CpuWithDefaults obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getSpeed().c_str());






}


void test_CpuWithDefaults_num_cores_is_assigned_from_json()
{


    bourne::json input =
    {
        "num_cores", "hello"
    };

    CpuWithDefaults obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getNumCores().c_str());






}


void test_CpuWithDefaults_num_cpus_is_assigned_from_json()
{


    bourne::json input =
    {
        "num_cpus", "hello"
    };

    CpuWithDefaults obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getNumCpus().c_str());






}


void test_CpuWithDefaults_benchmark_is_assigned_from_json()
{


    bourne::json input =
    {
        "benchmark", "hello"
    };

    CpuWithDefaults obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getBenchmark().c_str());






}


void test_CpuWithDefaults_monthly_price_is_assigned_from_json()
{








}


void test_CpuWithDefaults_monthly_price_display_is_assigned_from_json()
{


    bourne::json input =
    {
        "monthly_price_display", "hello"
    };

    CpuWithDefaults obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getMonthlyPriceDisplay().c_str());






}


void test_CpuWithDefaults_max_ram_is_assigned_from_json()
{


    bourne::json input =
    {
        "max_ram", "hello"
    };

    CpuWithDefaults obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getMaxRam().c_str());






}


void test_CpuWithDefaults_min_ram_is_assigned_from_json()
{


    bourne::json input =
    {
        "min_ram", "hello"
    };

    CpuWithDefaults obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getMinRam().c_str());






}


void test_CpuWithDefaults_max_lff_is_assigned_from_json()
{


    bourne::json input =
    {
        "max_lff", "hello"
    };

    CpuWithDefaults obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getMaxLff().c_str());






}


void test_CpuWithDefaults_max_sff_is_assigned_from_json()
{


    bourne::json input =
    {
        "max_sff", "hello"
    };

    CpuWithDefaults obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getMaxSff().c_str());






}


void test_CpuWithDefaults_max_nve_is_assigned_from_json()
{


    bourne::json input =
    {
        "max_nve", "hello"
    };

    CpuWithDefaults obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getMaxNve().c_str());






}


void test_CpuWithDefaults_visible_is_assigned_from_json()
{


    bourne::json input =
    {
        "visible", "hello"
    };

    CpuWithDefaults obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getVisible().c_str());






}


void test_CpuWithDefaults_active_is_assigned_from_json()
{


    bourne::json input =
    {
        "active", "hello"
    };

    CpuWithDefaults obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getActive().c_str());






}




void test_CpuWithDefaults_monthly_fee_is_assigned_from_json()
{


    bourne::json input =
    {
        "monthly_fee", "hello"
    };

    CpuWithDefaults obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getMonthlyFee().c_str());






}



void test_CpuWithDefaults_id_is_converted_to_json()
{
    bourne::json input =
    {
        "id", 1
    };

    CpuWithDefaults obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["id"] == output["id"]);




}


void test_CpuWithDefaults_short_desc_is_converted_to_json()
{

    bourne::json input =
    {
        "short_desc", "hello"
    };

    CpuWithDefaults obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["short_desc"] == output["short_desc"]);



}


void test_CpuWithDefaults_long_desc_is_converted_to_json()
{

    bourne::json input =
    {
        "long_desc", "hello"
    };

    CpuWithDefaults obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["long_desc"] == output["long_desc"]);



}


void test_CpuWithDefaults_type_is_converted_to_json()
{

    bourne::json input =
    {
        "type", "hello"
    };

    CpuWithDefaults obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["type"] == output["type"]);



}


void test_CpuWithDefaults_speed_is_converted_to_json()
{

    bourne::json input =
    {
        "speed", "hello"
    };

    CpuWithDefaults obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["speed"] == output["speed"]);



}


void test_CpuWithDefaults_num_cores_is_converted_to_json()
{

    bourne::json input =
    {
        "num_cores", "hello"
    };

    CpuWithDefaults obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["num_cores"] == output["num_cores"]);



}


void test_CpuWithDefaults_num_cpus_is_converted_to_json()
{

    bourne::json input =
    {
        "num_cpus", "hello"
    };

    CpuWithDefaults obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["num_cpus"] == output["num_cpus"]);



}


void test_CpuWithDefaults_benchmark_is_converted_to_json()
{

    bourne::json input =
    {
        "benchmark", "hello"
    };

    CpuWithDefaults obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["benchmark"] == output["benchmark"]);



}


void test_CpuWithDefaults_monthly_price_is_converted_to_json()
{




}


void test_CpuWithDefaults_monthly_price_display_is_converted_to_json()
{

    bourne::json input =
    {
        "monthly_price_display", "hello"
    };

    CpuWithDefaults obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["monthly_price_display"] == output["monthly_price_display"]);



}


void test_CpuWithDefaults_max_ram_is_converted_to_json()
{

    bourne::json input =
    {
        "max_ram", "hello"
    };

    CpuWithDefaults obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["max_ram"] == output["max_ram"]);



}


void test_CpuWithDefaults_min_ram_is_converted_to_json()
{

    bourne::json input =
    {
        "min_ram", "hello"
    };

    CpuWithDefaults obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["min_ram"] == output["min_ram"]);



}


void test_CpuWithDefaults_max_lff_is_converted_to_json()
{

    bourne::json input =
    {
        "max_lff", "hello"
    };

    CpuWithDefaults obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["max_lff"] == output["max_lff"]);



}


void test_CpuWithDefaults_max_sff_is_converted_to_json()
{

    bourne::json input =
    {
        "max_sff", "hello"
    };

    CpuWithDefaults obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["max_sff"] == output["max_sff"]);



}


void test_CpuWithDefaults_max_nve_is_converted_to_json()
{

    bourne::json input =
    {
        "max_nve", "hello"
    };

    CpuWithDefaults obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["max_nve"] == output["max_nve"]);



}


void test_CpuWithDefaults_visible_is_converted_to_json()
{

    bourne::json input =
    {
        "visible", "hello"
    };

    CpuWithDefaults obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["visible"] == output["visible"]);



}


void test_CpuWithDefaults_active_is_converted_to_json()
{

    bourne::json input =
    {
        "active", "hello"
    };

    CpuWithDefaults obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["active"] == output["active"]);



}




void test_CpuWithDefaults_monthly_fee_is_converted_to_json()
{

    bourne::json input =
    {
        "monthly_fee", "hello"
    };

    CpuWithDefaults obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["monthly_fee"] == output["monthly_fee"]);



}


