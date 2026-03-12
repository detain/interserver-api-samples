
#include "GetScrubIpDetails_200_response_serviceInfo.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_GetScrubIpDetails_200_response_serviceInfo_scrub_ip_id_is_assigned_from_json()
{


    bourne::json input =
    {
        "scrub_ip_id", "hello"
    };

    GetScrubIpDetails_200_response_serviceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getScrubIpId().c_str());






}


void test_GetScrubIpDetails_200_response_serviceInfo_scrub_ip_type_is_assigned_from_json()
{


    bourne::json input =
    {
        "scrub_ip_type", "hello"
    };

    GetScrubIpDetails_200_response_serviceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getScrubIpType().c_str());






}


void test_GetScrubIpDetails_200_response_serviceInfo_scrub_ip_custid_is_assigned_from_json()
{


    bourne::json input =
    {
        "scrub_ip_custid", "hello"
    };

    GetScrubIpDetails_200_response_serviceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getScrubIpCustid().c_str());






}


void test_GetScrubIpDetails_200_response_serviceInfo_scrub_ip_order_date_is_assigned_from_json()
{


    bourne::json input =
    {
        "scrub_ip_order_date", "hello"
    };

    GetScrubIpDetails_200_response_serviceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getScrubIpOrderDate().c_str());






}


void test_GetScrubIpDetails_200_response_serviceInfo_scrub_ip_ip_is_assigned_from_json()
{


    bourne::json input =
    {
        "scrub_ip_ip", "hello"
    };

    GetScrubIpDetails_200_response_serviceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getScrubIpIp().c_str());






}


void test_GetScrubIpDetails_200_response_serviceInfo_scrub_ip_service_id_is_assigned_from_json()
{


    bourne::json input =
    {
        "scrub_ip_service_id", "hello"
    };

    GetScrubIpDetails_200_response_serviceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getScrubIpServiceId().c_str());






}


void test_GetScrubIpDetails_200_response_serviceInfo_scrub_ip_service_module_is_assigned_from_json()
{


    bourne::json input =
    {
        "scrub_ip_service_module", "hello"
    };

    GetScrubIpDetails_200_response_serviceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getScrubIpServiceModule().c_str());






}


void test_GetScrubIpDetails_200_response_serviceInfo_scrub_ip_status_is_assigned_from_json()
{


    bourne::json input =
    {
        "scrub_ip_status", "hello"
    };

    GetScrubIpDetails_200_response_serviceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getScrubIpStatus().c_str());






}


void test_GetScrubIpDetails_200_response_serviceInfo_scrub_ip_invoice_is_assigned_from_json()
{


    bourne::json input =
    {
        "scrub_ip_invoice", "hello"
    };

    GetScrubIpDetails_200_response_serviceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getScrubIpInvoice().c_str());






}


void test_GetScrubIpDetails_200_response_serviceInfo_scrub_ip_currency_is_assigned_from_json()
{


    bourne::json input =
    {
        "scrub_ip_currency", "hello"
    };

    GetScrubIpDetails_200_response_serviceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getScrubIpCurrency().c_str());






}


void test_GetScrubIpDetails_200_response_serviceInfo_scrub_ip_coupon_is_assigned_from_json()
{


    bourne::json input =
    {
        "scrub_ip_coupon", "hello"
    };

    GetScrubIpDetails_200_response_serviceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getScrubIpCoupon().c_str());






}


void test_GetScrubIpDetails_200_response_serviceInfo_scrub_ip_comment_is_assigned_from_json()
{


    bourne::json input =
    {
        "scrub_ip_comment", "hello"
    };

    GetScrubIpDetails_200_response_serviceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getScrubIpComment().c_str());






}



void test_GetScrubIpDetails_200_response_serviceInfo_scrub_ip_id_is_converted_to_json()
{

    bourne::json input =
    {
        "scrub_ip_id", "hello"
    };

    GetScrubIpDetails_200_response_serviceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["scrub_ip_id"] == output["scrub_ip_id"]);



}


void test_GetScrubIpDetails_200_response_serviceInfo_scrub_ip_type_is_converted_to_json()
{

    bourne::json input =
    {
        "scrub_ip_type", "hello"
    };

    GetScrubIpDetails_200_response_serviceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["scrub_ip_type"] == output["scrub_ip_type"]);



}


void test_GetScrubIpDetails_200_response_serviceInfo_scrub_ip_custid_is_converted_to_json()
{

    bourne::json input =
    {
        "scrub_ip_custid", "hello"
    };

    GetScrubIpDetails_200_response_serviceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["scrub_ip_custid"] == output["scrub_ip_custid"]);



}


void test_GetScrubIpDetails_200_response_serviceInfo_scrub_ip_order_date_is_converted_to_json()
{

    bourne::json input =
    {
        "scrub_ip_order_date", "hello"
    };

    GetScrubIpDetails_200_response_serviceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["scrub_ip_order_date"] == output["scrub_ip_order_date"]);



}


void test_GetScrubIpDetails_200_response_serviceInfo_scrub_ip_ip_is_converted_to_json()
{

    bourne::json input =
    {
        "scrub_ip_ip", "hello"
    };

    GetScrubIpDetails_200_response_serviceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["scrub_ip_ip"] == output["scrub_ip_ip"]);



}


void test_GetScrubIpDetails_200_response_serviceInfo_scrub_ip_service_id_is_converted_to_json()
{

    bourne::json input =
    {
        "scrub_ip_service_id", "hello"
    };

    GetScrubIpDetails_200_response_serviceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["scrub_ip_service_id"] == output["scrub_ip_service_id"]);



}


void test_GetScrubIpDetails_200_response_serviceInfo_scrub_ip_service_module_is_converted_to_json()
{

    bourne::json input =
    {
        "scrub_ip_service_module", "hello"
    };

    GetScrubIpDetails_200_response_serviceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["scrub_ip_service_module"] == output["scrub_ip_service_module"]);



}


void test_GetScrubIpDetails_200_response_serviceInfo_scrub_ip_status_is_converted_to_json()
{

    bourne::json input =
    {
        "scrub_ip_status", "hello"
    };

    GetScrubIpDetails_200_response_serviceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["scrub_ip_status"] == output["scrub_ip_status"]);



}


void test_GetScrubIpDetails_200_response_serviceInfo_scrub_ip_invoice_is_converted_to_json()
{

    bourne::json input =
    {
        "scrub_ip_invoice", "hello"
    };

    GetScrubIpDetails_200_response_serviceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["scrub_ip_invoice"] == output["scrub_ip_invoice"]);



}


void test_GetScrubIpDetails_200_response_serviceInfo_scrub_ip_currency_is_converted_to_json()
{

    bourne::json input =
    {
        "scrub_ip_currency", "hello"
    };

    GetScrubIpDetails_200_response_serviceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["scrub_ip_currency"] == output["scrub_ip_currency"]);



}


void test_GetScrubIpDetails_200_response_serviceInfo_scrub_ip_coupon_is_converted_to_json()
{

    bourne::json input =
    {
        "scrub_ip_coupon", "hello"
    };

    GetScrubIpDetails_200_response_serviceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["scrub_ip_coupon"] == output["scrub_ip_coupon"]);



}


void test_GetScrubIpDetails_200_response_serviceInfo_scrub_ip_comment_is_converted_to_json()
{

    bourne::json input =
    {
        "scrub_ip_comment", "hello"
    };

    GetScrubIpDetails_200_response_serviceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["scrub_ip_comment"] == output["scrub_ip_comment"]);



}


