
#include "ChargeInvoiceRows_invoices_value_paid_invoices_value.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_ChargeInvoiceRows_invoices_value_paid_invoices_value_invoices_id_is_assigned_from_json()
{


    bourne::json input =
    {
        "invoices_id", "hello"
    };

    ChargeInvoiceRows_invoices_value_paid_invoices_value obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getInvoicesId().c_str());






}


void test_ChargeInvoiceRows_invoices_value_paid_invoices_value_invoices_description_is_assigned_from_json()
{


    bourne::json input =
    {
        "invoices_description", "hello"
    };

    ChargeInvoiceRows_invoices_value_paid_invoices_value obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getInvoicesDescription().c_str());






}


void test_ChargeInvoiceRows_invoices_value_paid_invoices_value_invoices_amount_is_assigned_from_json()
{








}


void test_ChargeInvoiceRows_invoices_value_paid_invoices_value_invoices_date_is_assigned_from_json()
{


    bourne::json input =
    {
        "invoices_date", "hello"
    };

    ChargeInvoiceRows_invoices_value_paid_invoices_value obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getInvoicesDate().c_str());






}


void test_ChargeInvoiceRows_invoices_value_paid_invoices_value_invoices_currency_is_assigned_from_json()
{


    bourne::json input =
    {
        "invoices_currency", "hello"
    };

    ChargeInvoiceRows_invoices_value_paid_invoices_value obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getInvoicesCurrency().c_str());






}


void test_ChargeInvoiceRows_invoices_value_paid_invoices_value_currency_symbol_is_assigned_from_json()
{


    bourne::json input =
    {
        "currency_symbol", "hello"
    };

    ChargeInvoiceRows_invoices_value_paid_invoices_value obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCurrencySymbol().c_str());






}


void test_ChargeInvoiceRows_invoices_value_paid_invoices_value_invoices_date_formatted_is_assigned_from_json()
{


    bourne::json input =
    {
        "invoices_date_formatted", "hello"
    };

    ChargeInvoiceRows_invoices_value_paid_invoices_value obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getInvoicesDateFormatted().c_str());






}


void test_ChargeInvoiceRows_invoices_value_paid_invoices_value_payment_type_is_assigned_from_json()
{


    bourne::json input =
    {
        "payment_type", "hello"
    };

    ChargeInvoiceRows_invoices_value_paid_invoices_value obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getPaymentType().c_str());






}




void test_ChargeInvoiceRows_invoices_value_paid_invoices_value_invoices_id_is_converted_to_json()
{

    bourne::json input =
    {
        "invoices_id", "hello"
    };

    ChargeInvoiceRows_invoices_value_paid_invoices_value obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["invoices_id"] == output["invoices_id"]);



}


void test_ChargeInvoiceRows_invoices_value_paid_invoices_value_invoices_description_is_converted_to_json()
{

    bourne::json input =
    {
        "invoices_description", "hello"
    };

    ChargeInvoiceRows_invoices_value_paid_invoices_value obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["invoices_description"] == output["invoices_description"]);



}


void test_ChargeInvoiceRows_invoices_value_paid_invoices_value_invoices_amount_is_converted_to_json()
{




}


void test_ChargeInvoiceRows_invoices_value_paid_invoices_value_invoices_date_is_converted_to_json()
{

    bourne::json input =
    {
        "invoices_date", "hello"
    };

    ChargeInvoiceRows_invoices_value_paid_invoices_value obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["invoices_date"] == output["invoices_date"]);



}


void test_ChargeInvoiceRows_invoices_value_paid_invoices_value_invoices_currency_is_converted_to_json()
{

    bourne::json input =
    {
        "invoices_currency", "hello"
    };

    ChargeInvoiceRows_invoices_value_paid_invoices_value obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["invoices_currency"] == output["invoices_currency"]);



}


void test_ChargeInvoiceRows_invoices_value_paid_invoices_value_currency_symbol_is_converted_to_json()
{

    bourne::json input =
    {
        "currency_symbol", "hello"
    };

    ChargeInvoiceRows_invoices_value_paid_invoices_value obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["currency_symbol"] == output["currency_symbol"]);



}


void test_ChargeInvoiceRows_invoices_value_paid_invoices_value_invoices_date_formatted_is_converted_to_json()
{

    bourne::json input =
    {
        "invoices_date_formatted", "hello"
    };

    ChargeInvoiceRows_invoices_value_paid_invoices_value obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["invoices_date_formatted"] == output["invoices_date_formatted"]);



}


void test_ChargeInvoiceRows_invoices_value_paid_invoices_value_payment_type_is_converted_to_json()
{

    bourne::json input =
    {
        "payment_type", "hello"
    };

    ChargeInvoiceRows_invoices_value_paid_invoices_value obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["payment_type"] == output["payment_type"]);



}



