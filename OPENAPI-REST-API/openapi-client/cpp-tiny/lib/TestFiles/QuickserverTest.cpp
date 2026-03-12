
#include "Quickserver.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"






void test_Quickserver_custCurrency_is_assigned_from_json()
{


    bourne::json input =
    {
        "custCurrency", "hello"
    };

    Quickserver obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCustCurrency().c_str());






}


void test_Quickserver_custCurrencySymbol_is_assigned_from_json()
{


    bourne::json input =
    {
        "custCurrencySymbol", "hello"
    };

    Quickserver obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCustCurrencySymbol().c_str());






}



void test_Quickserver_package_is_assigned_from_json()
{


    bourne::json input =
    {
        "package", "hello"
    };

    Quickserver obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getPackage().c_str());






}


void test_Quickserver_os_template_is_assigned_from_json()
{


    bourne::json input =
    {
        "os_template", "hello"
    };

    Quickserver obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getOsTemplate().c_str());






}




void test_Quickserver_cpu_graph_data_is_assigned_from_json()
{


    bourne::json input =
    {
        "cpu_graph_data", "hello"
    };

    Quickserver obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCpuGraphData().c_str());






}


void test_Quickserver_bandwidth_xaxis_is_assigned_from_json()
{


    bourne::json input =
    {
        "bandwidth_xaxis", "hello"
    };

    Quickserver obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getBandwidthXaxis().c_str());






}


void test_Quickserver_bandwidth_yaxis_is_assigned_from_json()
{


    bourne::json input =
    {
        "bandwidth_yaxis", "hello"
    };

    Quickserver obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getBandwidthYaxis().c_str());






}


void test_Quickserver_module_is_assigned_from_json()
{


    bourne::json input =
    {
        "module", "hello"
    };

    Quickserver obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getModule().c_str());






}


void test_Quickserver_token_is_assigned_from_json()
{


    bourne::json input =
    {
        "token", "hello"
    };

    Quickserver obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getToken().c_str());






}


void test_Quickserver_service_disk_used_is_assigned_from_json()
{


    bourne::json input =
    {
        "service_disk_used", "hello"
    };

    Quickserver obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getServiceDiskUsed().c_str());






}


void test_Quickserver_service_disk_total_is_assigned_from_json()
{


    bourne::json input =
    {
        "service_disk_total", "hello"
    };

    Quickserver obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getServiceDiskTotal().c_str());






}


void test_Quickserver_disk_percentage_is_assigned_from_json()
{








}


void test_Quickserver_memory_is_assigned_from_json()
{


    bourne::json input =
    {
        "memory", "hello"
    };

    Quickserver obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getMemory().c_str());






}


void test_Quickserver_hdd_is_assigned_from_json()
{


    bourne::json input =
    {
        "hdd", "hello"
    };

    Quickserver obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getHdd().c_str());






}







void test_Quickserver_custCurrency_is_converted_to_json()
{

    bourne::json input =
    {
        "custCurrency", "hello"
    };

    Quickserver obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["custCurrency"] == output["custCurrency"]);



}


void test_Quickserver_custCurrencySymbol_is_converted_to_json()
{

    bourne::json input =
    {
        "custCurrencySymbol", "hello"
    };

    Quickserver obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["custCurrencySymbol"] == output["custCurrencySymbol"]);



}



void test_Quickserver_package_is_converted_to_json()
{

    bourne::json input =
    {
        "package", "hello"
    };

    Quickserver obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["package"] == output["package"]);



}


void test_Quickserver_os_template_is_converted_to_json()
{

    bourne::json input =
    {
        "os_template", "hello"
    };

    Quickserver obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["os_template"] == output["os_template"]);



}




void test_Quickserver_cpu_graph_data_is_converted_to_json()
{

    bourne::json input =
    {
        "cpu_graph_data", "hello"
    };

    Quickserver obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["cpu_graph_data"] == output["cpu_graph_data"]);



}


void test_Quickserver_bandwidth_xaxis_is_converted_to_json()
{

    bourne::json input =
    {
        "bandwidth_xaxis", "hello"
    };

    Quickserver obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["bandwidth_xaxis"] == output["bandwidth_xaxis"]);



}


void test_Quickserver_bandwidth_yaxis_is_converted_to_json()
{

    bourne::json input =
    {
        "bandwidth_yaxis", "hello"
    };

    Quickserver obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["bandwidth_yaxis"] == output["bandwidth_yaxis"]);



}


void test_Quickserver_module_is_converted_to_json()
{

    bourne::json input =
    {
        "module", "hello"
    };

    Quickserver obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["module"] == output["module"]);



}


void test_Quickserver_token_is_converted_to_json()
{

    bourne::json input =
    {
        "token", "hello"
    };

    Quickserver obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["token"] == output["token"]);



}


void test_Quickserver_service_disk_used_is_converted_to_json()
{

    bourne::json input =
    {
        "service_disk_used", "hello"
    };

    Quickserver obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["service_disk_used"] == output["service_disk_used"]);



}


void test_Quickserver_service_disk_total_is_converted_to_json()
{

    bourne::json input =
    {
        "service_disk_total", "hello"
    };

    Quickserver obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["service_disk_total"] == output["service_disk_total"]);



}


void test_Quickserver_disk_percentage_is_converted_to_json()
{




}


void test_Quickserver_memory_is_converted_to_json()
{

    bourne::json input =
    {
        "memory", "hello"
    };

    Quickserver obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["memory"] == output["memory"]);



}


void test_Quickserver_hdd_is_converted_to_json()
{

    bourne::json input =
    {
        "hdd", "hello"
    };

    Quickserver obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["hdd"] == output["hdd"]);



}



