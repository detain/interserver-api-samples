
#include "AccountInfoPost.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_AccountInfoPost_name_is_assigned_from_json()
{


    bourne::json input =
    {
        "name", "hello"
    };

    AccountInfoPost obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getName().c_str());






}


void test_AccountInfoPost_address_is_assigned_from_json()
{


    bourne::json input =
    {
        "address", "hello"
    };

    AccountInfoPost obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getAddress().c_str());






}


void test_AccountInfoPost_city_is_assigned_from_json()
{


    bourne::json input =
    {
        "city", "hello"
    };

    AccountInfoPost obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCity().c_str());






}


void test_AccountInfoPost_state_is_assigned_from_json()
{


    bourne::json input =
    {
        "state", "hello"
    };

    AccountInfoPost obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getState().c_str());






}


void test_AccountInfoPost_zip_is_assigned_from_json()
{


    bourne::json input =
    {
        "zip", "hello"
    };

    AccountInfoPost obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getZip().c_str());






}


void test_AccountInfoPost_country_is_assigned_from_json()
{


    bourne::json input =
    {
        "country", "hello"
    };

    AccountInfoPost obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCountry().c_str());






}


void test_AccountInfoPost_phone_is_assigned_from_json()
{


    bourne::json input =
    {
        "phone", "hello"
    };

    AccountInfoPost obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getPhone().c_str());






}


void test_AccountInfoPost_company_is_assigned_from_json()
{


    bourne::json input =
    {
        "company", "hello"
    };

    AccountInfoPost obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCompany().c_str());






}


void test_AccountInfoPost_address2_is_assigned_from_json()
{


    bourne::json input =
    {
        "address2", "hello"
    };

    AccountInfoPost obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getAddress2().c_str());






}


void test_AccountInfoPost_locale_is_assigned_from_json()
{


    bourne::json input =
    {
        "locale", "hello"
    };

    AccountInfoPost obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getLocale().c_str());






}


void test_AccountInfoPost_email_invoices_is_assigned_from_json()
{


    bourne::json input =
    {
        "email_invoices", "hello"
    };

    AccountInfoPost obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getEmailInvoices().c_str());






}


void test_AccountInfoPost_email_abuse_is_assigned_from_json()
{


    bourne::json input =
    {
        "email_abuse", "hello"
    };

    AccountInfoPost obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getEmailAbuse().c_str());






}


void test_AccountInfoPost_disable_reset_is_assigned_from_json()
{




    bourne::json input =
    {
        "disable_reset", true
    };

    AccountInfoPost obj(input.dump());

    TEST_ASSERT(true == obj.isDisableReset());




}


void test_AccountInfoPost_disable_reinstall_is_assigned_from_json()
{




    bourne::json input =
    {
        "disable_reinstall", true
    };

    AccountInfoPost obj(input.dump());

    TEST_ASSERT(true == obj.isDisableReinstall());




}


void test_AccountInfoPost_disable_server_notifications_is_assigned_from_json()
{




    bourne::json input =
    {
        "disable_server_notifications", true
    };

    AccountInfoPost obj(input.dump());

    TEST_ASSERT(true == obj.isDisableServerNotifications());




}


void test_AccountInfoPost_disable_email_notifications_is_assigned_from_json()
{




    bourne::json input =
    {
        "disable_email_notifications", true
    };

    AccountInfoPost obj(input.dump());

    TEST_ASSERT(true == obj.isDisableEmailNotifications());




}


void test_AccountInfoPost_gstin_is_assigned_from_json()
{


    bourne::json input =
    {
        "gstin", "hello"
    };

    AccountInfoPost obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getGstin().c_str());






}



void test_AccountInfoPost_name_is_converted_to_json()
{

    bourne::json input =
    {
        "name", "hello"
    };

    AccountInfoPost obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["name"] == output["name"]);



}


void test_AccountInfoPost_address_is_converted_to_json()
{

    bourne::json input =
    {
        "address", "hello"
    };

    AccountInfoPost obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["address"] == output["address"]);



}


void test_AccountInfoPost_city_is_converted_to_json()
{

    bourne::json input =
    {
        "city", "hello"
    };

    AccountInfoPost obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["city"] == output["city"]);



}


void test_AccountInfoPost_state_is_converted_to_json()
{

    bourne::json input =
    {
        "state", "hello"
    };

    AccountInfoPost obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["state"] == output["state"]);



}


void test_AccountInfoPost_zip_is_converted_to_json()
{

    bourne::json input =
    {
        "zip", "hello"
    };

    AccountInfoPost obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["zip"] == output["zip"]);



}


void test_AccountInfoPost_country_is_converted_to_json()
{

    bourne::json input =
    {
        "country", "hello"
    };

    AccountInfoPost obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["country"] == output["country"]);



}


void test_AccountInfoPost_phone_is_converted_to_json()
{

    bourne::json input =
    {
        "phone", "hello"
    };

    AccountInfoPost obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["phone"] == output["phone"]);



}


void test_AccountInfoPost_company_is_converted_to_json()
{

    bourne::json input =
    {
        "company", "hello"
    };

    AccountInfoPost obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["company"] == output["company"]);



}


void test_AccountInfoPost_address2_is_converted_to_json()
{

    bourne::json input =
    {
        "address2", "hello"
    };

    AccountInfoPost obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["address2"] == output["address2"]);



}


void test_AccountInfoPost_locale_is_converted_to_json()
{

    bourne::json input =
    {
        "locale", "hello"
    };

    AccountInfoPost obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["locale"] == output["locale"]);



}


void test_AccountInfoPost_email_invoices_is_converted_to_json()
{

    bourne::json input =
    {
        "email_invoices", "hello"
    };

    AccountInfoPost obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["email_invoices"] == output["email_invoices"]);



}


void test_AccountInfoPost_email_abuse_is_converted_to_json()
{

    bourne::json input =
    {
        "email_abuse", "hello"
    };

    AccountInfoPost obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["email_abuse"] == output["email_abuse"]);



}


void test_AccountInfoPost_disable_reset_is_converted_to_json()
{


    bourne::json input =
    {
        "disable_reset", true
    };

    AccountInfoPost obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["disable_reset"] == output["disable_reset"]);


}


void test_AccountInfoPost_disable_reinstall_is_converted_to_json()
{


    bourne::json input =
    {
        "disable_reinstall", true
    };

    AccountInfoPost obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["disable_reinstall"] == output["disable_reinstall"]);


}


void test_AccountInfoPost_disable_server_notifications_is_converted_to_json()
{


    bourne::json input =
    {
        "disable_server_notifications", true
    };

    AccountInfoPost obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["disable_server_notifications"] == output["disable_server_notifications"]);


}


void test_AccountInfoPost_disable_email_notifications_is_converted_to_json()
{


    bourne::json input =
    {
        "disable_email_notifications", true
    };

    AccountInfoPost obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["disable_email_notifications"] == output["disable_email_notifications"]);


}


void test_AccountInfoPost_gstin_is_converted_to_json()
{

    bourne::json input =
    {
        "gstin", "hello"
    };

    AccountInfoPost obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["gstin"] == output["gstin"]);



}


