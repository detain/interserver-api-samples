
#include "QuickserverBillingDetails.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_QuickserverBillingDetails_service_last_invoice_date_is_assigned_from_json()
{


    bourne::json input =
    {
        "service_last_invoice_date", "hello"
    };

    QuickserverBillingDetails obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getServiceLastInvoiceDate().c_str());






}


void test_QuickserverBillingDetails_service_payment_status_is_assigned_from_json()
{


    bourne::json input =
    {
        "service_payment_status", "hello"
    };

    QuickserverBillingDetails obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getServicePaymentStatus().c_str());






}


void test_QuickserverBillingDetails_service_frequency_is_assigned_from_json()
{


    bourne::json input =
    {
        "service_frequency", "hello"
    };

    QuickserverBillingDetails obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getServiceFrequency().c_str());






}


void test_QuickserverBillingDetails_next_date_is_assigned_from_json()
{


    bourne::json input =
    {
        "next_date", "hello"
    };

    QuickserverBillingDetails obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getNextDate().c_str());






}


void test_QuickserverBillingDetails_service_next_invoice_date_is_assigned_from_json()
{


    bourne::json input =
    {
        "service_next_invoice_date", "hello"
    };

    QuickserverBillingDetails obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getServiceNextInvoiceDate().c_str());






}


void test_QuickserverBillingDetails_service_currency_is_assigned_from_json()
{


    bourne::json input =
    {
        "service_currency", "hello"
    };

    QuickserverBillingDetails obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getServiceCurrency().c_str());






}


void test_QuickserverBillingDetails_service_currency_symbol_is_assigned_from_json()
{


    bourne::json input =
    {
        "service_currency_symbol", "hello"
    };

    QuickserverBillingDetails obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getServiceCurrencySymbol().c_str());






}


void test_QuickserverBillingDetails_service_cost_info_is_assigned_from_json()
{


    bourne::json input =
    {
        "service_cost_info", "hello"
    };

    QuickserverBillingDetails obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getServiceCostInfo().c_str());






}



void test_QuickserverBillingDetails_service_extra_json_is_assigned_from_json()
{


    bourne::json input =
    {
        "service_extra_json", "hello"
    };

    QuickserverBillingDetails obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getServiceExtraJson().c_str());






}



void test_QuickserverBillingDetails_service_last_invoice_date_is_converted_to_json()
{

    bourne::json input =
    {
        "service_last_invoice_date", "hello"
    };

    QuickserverBillingDetails obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["service_last_invoice_date"] == output["service_last_invoice_date"]);



}


void test_QuickserverBillingDetails_service_payment_status_is_converted_to_json()
{

    bourne::json input =
    {
        "service_payment_status", "hello"
    };

    QuickserverBillingDetails obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["service_payment_status"] == output["service_payment_status"]);



}


void test_QuickserverBillingDetails_service_frequency_is_converted_to_json()
{

    bourne::json input =
    {
        "service_frequency", "hello"
    };

    QuickserverBillingDetails obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["service_frequency"] == output["service_frequency"]);



}


void test_QuickserverBillingDetails_next_date_is_converted_to_json()
{

    bourne::json input =
    {
        "next_date", "hello"
    };

    QuickserverBillingDetails obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["next_date"] == output["next_date"]);



}


void test_QuickserverBillingDetails_service_next_invoice_date_is_converted_to_json()
{

    bourne::json input =
    {
        "service_next_invoice_date", "hello"
    };

    QuickserverBillingDetails obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["service_next_invoice_date"] == output["service_next_invoice_date"]);



}


void test_QuickserverBillingDetails_service_currency_is_converted_to_json()
{

    bourne::json input =
    {
        "service_currency", "hello"
    };

    QuickserverBillingDetails obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["service_currency"] == output["service_currency"]);



}


void test_QuickserverBillingDetails_service_currency_symbol_is_converted_to_json()
{

    bourne::json input =
    {
        "service_currency_symbol", "hello"
    };

    QuickserverBillingDetails obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["service_currency_symbol"] == output["service_currency_symbol"]);



}


void test_QuickserverBillingDetails_service_cost_info_is_converted_to_json()
{

    bourne::json input =
    {
        "service_cost_info", "hello"
    };

    QuickserverBillingDetails obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["service_cost_info"] == output["service_cost_info"]);



}



void test_QuickserverBillingDetails_service_extra_json_is_converted_to_json()
{

    bourne::json input =
    {
        "service_extra_json", "hello"
    };

    QuickserverBillingDetails obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["service_extra_json"] == output["service_extra_json"]);



}


