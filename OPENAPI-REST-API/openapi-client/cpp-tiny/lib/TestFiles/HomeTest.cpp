
#include "Home.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_Home_last_login_ip_is_assigned_from_json()
{


    bourne::json input =
    {
        "last_login_ip", "hello"
    };

    Home obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getLastLoginIp().c_str());






}


void test_Home_last_login_is_assigned_from_json()
{


    bourne::json input =
    {
        "last_login", "hello"
    };

    Home obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getLastLogin().c_str());






}


void test_Home_currency_is_assigned_from_json()
{


    bourne::json input =
    {
        "currency", "hello"
    };

    Home obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCurrency().c_str());






}


void test_Home_amount_is_assigned_from_json()
{


    bourne::json input =
    {
        "amount", "hello"
    };

    Home obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getAmount().c_str());






}


void test_Home_invoice_list_is_assigned_from_json()
{
    bourne::json input =
    {
        "invoice_list", 1
    };

    Home obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getInvoiceList());








}


void test_Home_balance_is_assigned_from_json()
{


    bourne::json input =
    {
        "balance", "hello"
    };

    Home obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getBalance().c_str());






}


void test_Home_full_name_is_assigned_from_json()
{


    bourne::json input =
    {
        "full_name", "hello"
    };

    Home obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getFullName().c_str());






}


void test_Home_email_is_assigned_from_json()
{


    bourne::json input =
    {
        "email", "hello"
    };

    Home obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getEmail().c_str());






}







void test_Home_aFFILIATE_AMOUNT_is_assigned_from_json()
{


    bourne::json input =
    {
        "aFFILIATE_AMOUNT", "hello"
    };

    Home obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getAFFILIATEAMOUNT().c_str());






}



void test_Home_last_login_ip_is_converted_to_json()
{

    bourne::json input =
    {
        "last_login_ip", "hello"
    };

    Home obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["last_login_ip"] == output["last_login_ip"]);



}


void test_Home_last_login_is_converted_to_json()
{

    bourne::json input =
    {
        "last_login", "hello"
    };

    Home obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["last_login"] == output["last_login"]);



}


void test_Home_currency_is_converted_to_json()
{

    bourne::json input =
    {
        "currency", "hello"
    };

    Home obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["currency"] == output["currency"]);



}


void test_Home_amount_is_converted_to_json()
{

    bourne::json input =
    {
        "amount", "hello"
    };

    Home obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["amount"] == output["amount"]);



}


void test_Home_invoice_list_is_converted_to_json()
{
    bourne::json input =
    {
        "invoice_list", 1
    };

    Home obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["invoice_list"] == output["invoice_list"]);




}


void test_Home_balance_is_converted_to_json()
{

    bourne::json input =
    {
        "balance", "hello"
    };

    Home obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["balance"] == output["balance"]);



}


void test_Home_full_name_is_converted_to_json()
{

    bourne::json input =
    {
        "full_name", "hello"
    };

    Home obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["full_name"] == output["full_name"]);



}


void test_Home_email_is_converted_to_json()
{

    bourne::json input =
    {
        "email", "hello"
    };

    Home obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["email"] == output["email"]);



}







void test_Home_aFFILIATE_AMOUNT_is_converted_to_json()
{

    bourne::json input =
    {
        "aFFILIATE_AMOUNT", "hello"
    };

    Home obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["aFFILIATE_AMOUNT"] == output["aFFILIATE_AMOUNT"]);



}


