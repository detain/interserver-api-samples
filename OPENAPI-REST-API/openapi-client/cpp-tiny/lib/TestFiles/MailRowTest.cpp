
#include "MailRow.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_MailRow_mail_id_is_assigned_from_json()
{


    bourne::json input =
    {
        "mail_id", "hello"
    };

    MailRow obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getMailId().c_str());






}


void test_MailRow_repeat_invoices_cost_is_assigned_from_json()
{


    bourne::json input =
    {
        "repeat_invoices_cost", "hello"
    };

    MailRow obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getRepeatInvoicesCost().c_str());






}


void test_MailRow_mail_username_is_assigned_from_json()
{


    bourne::json input =
    {
        "mail_username", "hello"
    };

    MailRow obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getMailUsername().c_str());






}


void test_MailRow_mail_status_is_assigned_from_json()
{


    bourne::json input =
    {
        "mail_status", "hello"
    };

    MailRow obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getMailStatus().c_str());






}


void test_MailRow_services_name_is_assigned_from_json()
{


    bourne::json input =
    {
        "services_name", "hello"
    };

    MailRow obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getServicesName().c_str());






}



void test_MailRow_mail_id_is_converted_to_json()
{

    bourne::json input =
    {
        "mail_id", "hello"
    };

    MailRow obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["mail_id"] == output["mail_id"]);



}


void test_MailRow_repeat_invoices_cost_is_converted_to_json()
{

    bourne::json input =
    {
        "repeat_invoices_cost", "hello"
    };

    MailRow obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["repeat_invoices_cost"] == output["repeat_invoices_cost"]);



}


void test_MailRow_mail_username_is_converted_to_json()
{

    bourne::json input =
    {
        "mail_username", "hello"
    };

    MailRow obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["mail_username"] == output["mail_username"]);



}


void test_MailRow_mail_status_is_converted_to_json()
{

    bourne::json input =
    {
        "mail_status", "hello"
    };

    MailRow obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["mail_status"] == output["mail_status"]);



}


void test_MailRow_services_name_is_converted_to_json()
{

    bourne::json input =
    {
        "services_name", "hello"
    };

    MailRow obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["services_name"] == output["services_name"]);



}


