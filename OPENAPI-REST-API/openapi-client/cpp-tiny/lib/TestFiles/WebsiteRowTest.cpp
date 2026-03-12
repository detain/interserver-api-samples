
#include "WebsiteRow.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_WebsiteRow_website_id_is_assigned_from_json()
{


    bourne::json input =
    {
        "website_id", "hello"
    };

    WebsiteRow obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getWebsiteId().c_str());






}


void test_WebsiteRow_website_hostname_is_assigned_from_json()
{


    bourne::json input =
    {
        "website_hostname", "hello"
    };

    WebsiteRow obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getWebsiteHostname().c_str());






}


void test_WebsiteRow_repeat_invoices_cost_is_assigned_from_json()
{


    bourne::json input =
    {
        "repeat_invoices_cost", "hello"
    };

    WebsiteRow obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getRepeatInvoicesCost().c_str());






}


void test_WebsiteRow_website_status_is_assigned_from_json()
{


    bourne::json input =
    {
        "website_status", "hello"
    };

    WebsiteRow obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getWebsiteStatus().c_str());






}


void test_WebsiteRow_services_name_is_assigned_from_json()
{


    bourne::json input =
    {
        "services_name", "hello"
    };

    WebsiteRow obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getServicesName().c_str());






}


void test_WebsiteRow_website_comment_is_assigned_from_json()
{


    bourne::json input =
    {
        "website_comment", "hello"
    };

    WebsiteRow obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getWebsiteComment().c_str());






}



void test_WebsiteRow_website_id_is_converted_to_json()
{

    bourne::json input =
    {
        "website_id", "hello"
    };

    WebsiteRow obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["website_id"] == output["website_id"]);



}


void test_WebsiteRow_website_hostname_is_converted_to_json()
{

    bourne::json input =
    {
        "website_hostname", "hello"
    };

    WebsiteRow obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["website_hostname"] == output["website_hostname"]);



}


void test_WebsiteRow_repeat_invoices_cost_is_converted_to_json()
{

    bourne::json input =
    {
        "repeat_invoices_cost", "hello"
    };

    WebsiteRow obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["repeat_invoices_cost"] == output["repeat_invoices_cost"]);



}


void test_WebsiteRow_website_status_is_converted_to_json()
{

    bourne::json input =
    {
        "website_status", "hello"
    };

    WebsiteRow obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["website_status"] == output["website_status"]);



}


void test_WebsiteRow_services_name_is_converted_to_json()
{

    bourne::json input =
    {
        "services_name", "hello"
    };

    WebsiteRow obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["services_name"] == output["services_name"]);



}


void test_WebsiteRow_website_comment_is_converted_to_json()
{

    bourne::json input =
    {
        "website_comment", "hello"
    };

    WebsiteRow obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["website_comment"] == output["website_comment"]);



}


