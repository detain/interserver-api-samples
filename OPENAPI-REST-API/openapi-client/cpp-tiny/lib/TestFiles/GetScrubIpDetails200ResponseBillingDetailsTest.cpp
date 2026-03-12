
#include "GetScrubIpDetails_200_response_billingDetails.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_GetScrubIpDetails_200_response_billingDetails_service_last_invoice_date_is_assigned_from_json()
{


    bourne::json input =
    {
        "service_last_invoice_date", "hello"
    };

    GetScrubIpDetails_200_response_billingDetails obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getServiceLastInvoiceDate().c_str());






}


void test_GetScrubIpDetails_200_response_billingDetails_service_payment_status_is_assigned_from_json()
{


    bourne::json input =
    {
        "service_payment_status", "hello"
    };

    GetScrubIpDetails_200_response_billingDetails obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getServicePaymentStatus().c_str());






}


void test_GetScrubIpDetails_200_response_billingDetails_service_frequency_is_assigned_from_json()
{


    bourne::json input =
    {
        "service_frequency", "hello"
    };

    GetScrubIpDetails_200_response_billingDetails obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getServiceFrequency().c_str());






}


void test_GetScrubIpDetails_200_response_billingDetails_next_date_is_assigned_from_json()
{


    bourne::json input =
    {
        "next_date", "hello"
    };

    GetScrubIpDetails_200_response_billingDetails obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getNextDate().c_str());






}


void test_GetScrubIpDetails_200_response_billingDetails_service_next_invoice_date_is_assigned_from_json()
{


    bourne::json input =
    {
        "service_next_invoice_date", "hello"
    };

    GetScrubIpDetails_200_response_billingDetails obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getServiceNextInvoiceDate().c_str());






}


void test_GetScrubIpDetails_200_response_billingDetails_service_currency_is_assigned_from_json()
{


    bourne::json input =
    {
        "service_currency", "hello"
    };

    GetScrubIpDetails_200_response_billingDetails obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getServiceCurrency().c_str());






}


void test_GetScrubIpDetails_200_response_billingDetails_service_currency_symbol_is_assigned_from_json()
{


    bourne::json input =
    {
        "service_currency_symbol", "hello"
    };

    GetScrubIpDetails_200_response_billingDetails obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getServiceCurrencySymbol().c_str());






}


void test_GetScrubIpDetails_200_response_billingDetails_service_cost_info_is_assigned_from_json()
{


    bourne::json input =
    {
        "service_cost_info", "hello"
    };

    GetScrubIpDetails_200_response_billingDetails obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getServiceCostInfo().c_str());






}



void test_GetScrubIpDetails_200_response_billingDetails_service_last_invoice_date_is_converted_to_json()
{

    bourne::json input =
    {
        "service_last_invoice_date", "hello"
    };

    GetScrubIpDetails_200_response_billingDetails obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["service_last_invoice_date"] == output["service_last_invoice_date"]);



}


void test_GetScrubIpDetails_200_response_billingDetails_service_payment_status_is_converted_to_json()
{

    bourne::json input =
    {
        "service_payment_status", "hello"
    };

    GetScrubIpDetails_200_response_billingDetails obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["service_payment_status"] == output["service_payment_status"]);



}


void test_GetScrubIpDetails_200_response_billingDetails_service_frequency_is_converted_to_json()
{

    bourne::json input =
    {
        "service_frequency", "hello"
    };

    GetScrubIpDetails_200_response_billingDetails obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["service_frequency"] == output["service_frequency"]);



}


void test_GetScrubIpDetails_200_response_billingDetails_next_date_is_converted_to_json()
{

    bourne::json input =
    {
        "next_date", "hello"
    };

    GetScrubIpDetails_200_response_billingDetails obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["next_date"] == output["next_date"]);



}


void test_GetScrubIpDetails_200_response_billingDetails_service_next_invoice_date_is_converted_to_json()
{

    bourne::json input =
    {
        "service_next_invoice_date", "hello"
    };

    GetScrubIpDetails_200_response_billingDetails obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["service_next_invoice_date"] == output["service_next_invoice_date"]);



}


void test_GetScrubIpDetails_200_response_billingDetails_service_currency_is_converted_to_json()
{

    bourne::json input =
    {
        "service_currency", "hello"
    };

    GetScrubIpDetails_200_response_billingDetails obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["service_currency"] == output["service_currency"]);



}


void test_GetScrubIpDetails_200_response_billingDetails_service_currency_symbol_is_converted_to_json()
{

    bourne::json input =
    {
        "service_currency_symbol", "hello"
    };

    GetScrubIpDetails_200_response_billingDetails obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["service_currency_symbol"] == output["service_currency_symbol"]);



}


void test_GetScrubIpDetails_200_response_billingDetails_service_cost_info_is_converted_to_json()
{

    bourne::json input =
    {
        "service_cost_info", "hello"
    };

    GetScrubIpDetails_200_response_billingDetails obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["service_cost_info"] == output["service_cost_info"]);



}


