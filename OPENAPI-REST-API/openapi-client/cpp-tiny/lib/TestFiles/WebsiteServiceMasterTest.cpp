
#include "WebsiteServiceMaster.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_WebsiteServiceMaster_website_id_is_assigned_from_json()
{


    bourne::json input =
    {
        "website_id", "hello"
    };

    WebsiteServiceMaster obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getWebsiteId().c_str());






}


void test_WebsiteServiceMaster_website_name_is_assigned_from_json()
{


    bourne::json input =
    {
        "website_name", "hello"
    };

    WebsiteServiceMaster obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getWebsiteName().c_str());






}


void test_WebsiteServiceMaster_website_ip_is_assigned_from_json()
{


    bourne::json input =
    {
        "website_ip", "hello"
    };

    WebsiteServiceMaster obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getWebsiteIp().c_str());






}


void test_WebsiteServiceMaster_website_type_is_assigned_from_json()
{


    bourne::json input =
    {
        "website_type", "hello"
    };

    WebsiteServiceMaster obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getWebsiteType().c_str());






}


void test_WebsiteServiceMaster_website_available_is_assigned_from_json()
{


    bourne::json input =
    {
        "website_available", "hello"
    };

    WebsiteServiceMaster obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getWebsiteAvailable().c_str());






}


void test_WebsiteServiceMaster_website_hdsize_is_assigned_from_json()
{


    bourne::json input =
    {
        "website_hdsize", "hello"
    };

    WebsiteServiceMaster obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getWebsiteHdsize().c_str());






}


void test_WebsiteServiceMaster_website_hdfree_is_assigned_from_json()
{


    bourne::json input =
    {
        "website_hdfree", "hello"
    };

    WebsiteServiceMaster obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getWebsiteHdfree().c_str());






}


void test_WebsiteServiceMaster_website_load_is_assigned_from_json()
{


    bourne::json input =
    {
        "website_load", "hello"
    };

    WebsiteServiceMaster obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getWebsiteLoad().c_str());






}


void test_WebsiteServiceMaster_website_last_update_is_assigned_from_json()
{


    bourne::json input =
    {
        "website_last_update", "hello"
    };

    WebsiteServiceMaster obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getWebsiteLastUpdate().c_str());






}


void test_WebsiteServiceMaster_website_max_sites_is_assigned_from_json()
{


    bourne::json input =
    {
        "website_max_sites", "hello"
    };

    WebsiteServiceMaster obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getWebsiteMaxSites().c_str());






}


void test_WebsiteServiceMaster_website_order_is_assigned_from_json()
{


    bourne::json input =
    {
        "website_order", "hello"
    };

    WebsiteServiceMaster obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getWebsiteOrder().c_str());






}


void test_WebsiteServiceMaster_website_partitions_is_assigned_from_json()
{


    bourne::json input =
    {
        "website_partitions", "hello"
    };

    WebsiteServiceMaster obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getWebsitePartitions().c_str());






}


void test_WebsiteServiceMaster_website_dns1_is_assigned_from_json()
{


    bourne::json input =
    {
        "website_dns1", "hello"
    };

    WebsiteServiceMaster obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getWebsiteDns1().c_str());






}


void test_WebsiteServiceMaster_website_dns2_is_assigned_from_json()
{


    bourne::json input =
    {
        "website_dns2", "hello"
    };

    WebsiteServiceMaster obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getWebsiteDns2().c_str());






}



void test_WebsiteServiceMaster_website_id_is_converted_to_json()
{

    bourne::json input =
    {
        "website_id", "hello"
    };

    WebsiteServiceMaster obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["website_id"] == output["website_id"]);



}


void test_WebsiteServiceMaster_website_name_is_converted_to_json()
{

    bourne::json input =
    {
        "website_name", "hello"
    };

    WebsiteServiceMaster obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["website_name"] == output["website_name"]);



}


void test_WebsiteServiceMaster_website_ip_is_converted_to_json()
{

    bourne::json input =
    {
        "website_ip", "hello"
    };

    WebsiteServiceMaster obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["website_ip"] == output["website_ip"]);



}


void test_WebsiteServiceMaster_website_type_is_converted_to_json()
{

    bourne::json input =
    {
        "website_type", "hello"
    };

    WebsiteServiceMaster obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["website_type"] == output["website_type"]);



}


void test_WebsiteServiceMaster_website_available_is_converted_to_json()
{

    bourne::json input =
    {
        "website_available", "hello"
    };

    WebsiteServiceMaster obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["website_available"] == output["website_available"]);



}


void test_WebsiteServiceMaster_website_hdsize_is_converted_to_json()
{

    bourne::json input =
    {
        "website_hdsize", "hello"
    };

    WebsiteServiceMaster obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["website_hdsize"] == output["website_hdsize"]);



}


void test_WebsiteServiceMaster_website_hdfree_is_converted_to_json()
{

    bourne::json input =
    {
        "website_hdfree", "hello"
    };

    WebsiteServiceMaster obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["website_hdfree"] == output["website_hdfree"]);



}


void test_WebsiteServiceMaster_website_load_is_converted_to_json()
{

    bourne::json input =
    {
        "website_load", "hello"
    };

    WebsiteServiceMaster obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["website_load"] == output["website_load"]);



}


void test_WebsiteServiceMaster_website_last_update_is_converted_to_json()
{

    bourne::json input =
    {
        "website_last_update", "hello"
    };

    WebsiteServiceMaster obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["website_last_update"] == output["website_last_update"]);



}


void test_WebsiteServiceMaster_website_max_sites_is_converted_to_json()
{

    bourne::json input =
    {
        "website_max_sites", "hello"
    };

    WebsiteServiceMaster obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["website_max_sites"] == output["website_max_sites"]);



}


void test_WebsiteServiceMaster_website_order_is_converted_to_json()
{

    bourne::json input =
    {
        "website_order", "hello"
    };

    WebsiteServiceMaster obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["website_order"] == output["website_order"]);



}


void test_WebsiteServiceMaster_website_partitions_is_converted_to_json()
{

    bourne::json input =
    {
        "website_partitions", "hello"
    };

    WebsiteServiceMaster obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["website_partitions"] == output["website_partitions"]);



}


void test_WebsiteServiceMaster_website_dns1_is_converted_to_json()
{

    bourne::json input =
    {
        "website_dns1", "hello"
    };

    WebsiteServiceMaster obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["website_dns1"] == output["website_dns1"]);



}


void test_WebsiteServiceMaster_website_dns2_is_converted_to_json()
{

    bourne::json input =
    {
        "website_dns2", "hello"
    };

    WebsiteServiceMaster obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["website_dns2"] == output["website_dns2"]);



}


