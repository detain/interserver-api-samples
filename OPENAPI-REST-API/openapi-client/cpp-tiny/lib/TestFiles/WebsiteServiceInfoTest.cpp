
#include "WebsiteServiceInfo.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_WebsiteServiceInfo_website_id_is_assigned_from_json()
{


    bourne::json input =
    {
        "website_id", "hello"
    };

    WebsiteServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getWebsiteId().c_str());






}


void test_WebsiteServiceInfo_website_server_is_assigned_from_json()
{


    bourne::json input =
    {
        "website_server", "hello"
    };

    WebsiteServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getWebsiteServer().c_str());






}


void test_WebsiteServiceInfo_website_type_is_assigned_from_json()
{


    bourne::json input =
    {
        "website_type", "hello"
    };

    WebsiteServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getWebsiteType().c_str());






}


void test_WebsiteServiceInfo_website_currency_is_assigned_from_json()
{


    bourne::json input =
    {
        "website_currency", "hello"
    };

    WebsiteServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getWebsiteCurrency().c_str());






}


void test_WebsiteServiceInfo_website_order_date_is_assigned_from_json()
{


    bourne::json input =
    {
        "website_order_date", "hello"
    };

    WebsiteServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getWebsiteOrderDate().c_str());






}


void test_WebsiteServiceInfo_website_custid_is_assigned_from_json()
{


    bourne::json input =
    {
        "website_custid", "hello"
    };

    WebsiteServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getWebsiteCustid().c_str());






}


void test_WebsiteServiceInfo_website_ip_is_assigned_from_json()
{


    bourne::json input =
    {
        "website_ip", "hello"
    };

    WebsiteServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getWebsiteIp().c_str());






}


void test_WebsiteServiceInfo_website_status_is_assigned_from_json()
{


    bourne::json input =
    {
        "website_status", "hello"
    };

    WebsiteServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getWebsiteStatus().c_str());






}


void test_WebsiteServiceInfo_website_invoice_is_assigned_from_json()
{


    bourne::json input =
    {
        "website_invoice", "hello"
    };

    WebsiteServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getWebsiteInvoice().c_str());






}


void test_WebsiteServiceInfo_website_coupon_is_assigned_from_json()
{


    bourne::json input =
    {
        "website_coupon", "hello"
    };

    WebsiteServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getWebsiteCoupon().c_str());






}


void test_WebsiteServiceInfo_website_extra_is_assigned_from_json()
{


    bourne::json input =
    {
        "website_extra", "hello"
    };

    WebsiteServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getWebsiteExtra().c_str());






}


void test_WebsiteServiceInfo_website_hostname_is_assigned_from_json()
{


    bourne::json input =
    {
        "website_hostname", "hello"
    };

    WebsiteServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getWebsiteHostname().c_str());






}


void test_WebsiteServiceInfo_website_comment_is_assigned_from_json()
{


    bourne::json input =
    {
        "website_comment", "hello"
    };

    WebsiteServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getWebsiteComment().c_str());






}


void test_WebsiteServiceInfo_website_username_is_assigned_from_json()
{


    bourne::json input =
    {
        "website_username", "hello"
    };

    WebsiteServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getWebsiteUsername().c_str());






}


void test_WebsiteServiceInfo_website_server_status_is_assigned_from_json()
{


    bourne::json input =
    {
        "website_server_status", "hello"
    };

    WebsiteServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getWebsiteServerStatus().c_str());






}



void test_WebsiteServiceInfo_website_id_is_converted_to_json()
{

    bourne::json input =
    {
        "website_id", "hello"
    };

    WebsiteServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["website_id"] == output["website_id"]);



}


void test_WebsiteServiceInfo_website_server_is_converted_to_json()
{

    bourne::json input =
    {
        "website_server", "hello"
    };

    WebsiteServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["website_server"] == output["website_server"]);



}


void test_WebsiteServiceInfo_website_type_is_converted_to_json()
{

    bourne::json input =
    {
        "website_type", "hello"
    };

    WebsiteServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["website_type"] == output["website_type"]);



}


void test_WebsiteServiceInfo_website_currency_is_converted_to_json()
{

    bourne::json input =
    {
        "website_currency", "hello"
    };

    WebsiteServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["website_currency"] == output["website_currency"]);



}


void test_WebsiteServiceInfo_website_order_date_is_converted_to_json()
{

    bourne::json input =
    {
        "website_order_date", "hello"
    };

    WebsiteServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["website_order_date"] == output["website_order_date"]);



}


void test_WebsiteServiceInfo_website_custid_is_converted_to_json()
{

    bourne::json input =
    {
        "website_custid", "hello"
    };

    WebsiteServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["website_custid"] == output["website_custid"]);



}


void test_WebsiteServiceInfo_website_ip_is_converted_to_json()
{

    bourne::json input =
    {
        "website_ip", "hello"
    };

    WebsiteServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["website_ip"] == output["website_ip"]);



}


void test_WebsiteServiceInfo_website_status_is_converted_to_json()
{

    bourne::json input =
    {
        "website_status", "hello"
    };

    WebsiteServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["website_status"] == output["website_status"]);



}


void test_WebsiteServiceInfo_website_invoice_is_converted_to_json()
{

    bourne::json input =
    {
        "website_invoice", "hello"
    };

    WebsiteServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["website_invoice"] == output["website_invoice"]);



}


void test_WebsiteServiceInfo_website_coupon_is_converted_to_json()
{

    bourne::json input =
    {
        "website_coupon", "hello"
    };

    WebsiteServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["website_coupon"] == output["website_coupon"]);



}


void test_WebsiteServiceInfo_website_extra_is_converted_to_json()
{

    bourne::json input =
    {
        "website_extra", "hello"
    };

    WebsiteServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["website_extra"] == output["website_extra"]);



}


void test_WebsiteServiceInfo_website_hostname_is_converted_to_json()
{

    bourne::json input =
    {
        "website_hostname", "hello"
    };

    WebsiteServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["website_hostname"] == output["website_hostname"]);



}


void test_WebsiteServiceInfo_website_comment_is_converted_to_json()
{

    bourne::json input =
    {
        "website_comment", "hello"
    };

    WebsiteServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["website_comment"] == output["website_comment"]);



}


void test_WebsiteServiceInfo_website_username_is_converted_to_json()
{

    bourne::json input =
    {
        "website_username", "hello"
    };

    WebsiteServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["website_username"] == output["website_username"]);



}


void test_WebsiteServiceInfo_website_server_status_is_converted_to_json()
{

    bourne::json input =
    {
        "website_server_status", "hello"
    };

    WebsiteServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["website_server_status"] == output["website_server_status"]);



}


