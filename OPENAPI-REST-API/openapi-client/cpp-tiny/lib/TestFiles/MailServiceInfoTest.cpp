
#include "MailServiceInfo.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_MailServiceInfo_mail_id_is_assigned_from_json()
{


    bourne::json input =
    {
        "mail_id", "hello"
    };

    MailServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getMailId().c_str());






}


void test_MailServiceInfo_mail_type_is_assigned_from_json()
{


    bourne::json input =
    {
        "mail_type", "hello"
    };

    MailServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getMailType().c_str());






}


void test_MailServiceInfo_mail_currency_is_assigned_from_json()
{


    bourne::json input =
    {
        "mail_currency", "hello"
    };

    MailServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getMailCurrency().c_str());






}


void test_MailServiceInfo_mail_order_date_is_assigned_from_json()
{


    bourne::json input =
    {
        "mail_order_date", "hello"
    };

    MailServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getMailOrderDate().c_str());






}


void test_MailServiceInfo_mail_custid_is_assigned_from_json()
{


    bourne::json input =
    {
        "mail_custid", "hello"
    };

    MailServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getMailCustid().c_str());






}


void test_MailServiceInfo_mail_quota_is_assigned_from_json()
{


    bourne::json input =
    {
        "mail_quota", "hello"
    };

    MailServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getMailQuota().c_str());






}


void test_MailServiceInfo_mail_status_is_assigned_from_json()
{


    bourne::json input =
    {
        "mail_status", "hello"
    };

    MailServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getMailStatus().c_str());






}


void test_MailServiceInfo_mail_invoice_is_assigned_from_json()
{


    bourne::json input =
    {
        "mail_invoice", "hello"
    };

    MailServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getMailInvoice().c_str());






}


void test_MailServiceInfo_mail_username_is_assigned_from_json()
{


    bourne::json input =
    {
        "mail_username", "hello"
    };

    MailServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getMailUsername().c_str());






}


void test_MailServiceInfo_mail_ip_is_assigned_from_json()
{


    bourne::json input =
    {
        "mail_ip", "hello"
    };

    MailServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getMailIp().c_str());






}


void test_MailServiceInfo_mail_coupon_is_assigned_from_json()
{


    bourne::json input =
    {
        "mail_coupon", "hello"
    };

    MailServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getMailCoupon().c_str());






}


void test_MailServiceInfo_mail_extra_is_assigned_from_json()
{


    bourne::json input =
    {
        "mail_extra", "hello"
    };

    MailServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getMailExtra().c_str());






}


void test_MailServiceInfo_mail_server_status_is_assigned_from_json()
{


    bourne::json input =
    {
        "mail_server_status", "hello"
    };

    MailServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getMailServerStatus().c_str());






}


void test_MailServiceInfo_mail_comment_is_assigned_from_json()
{


    bourne::json input =
    {
        "mail_comment", "hello"
    };

    MailServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getMailComment().c_str());






}



void test_MailServiceInfo_mail_id_is_converted_to_json()
{

    bourne::json input =
    {
        "mail_id", "hello"
    };

    MailServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["mail_id"] == output["mail_id"]);



}


void test_MailServiceInfo_mail_type_is_converted_to_json()
{

    bourne::json input =
    {
        "mail_type", "hello"
    };

    MailServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["mail_type"] == output["mail_type"]);



}


void test_MailServiceInfo_mail_currency_is_converted_to_json()
{

    bourne::json input =
    {
        "mail_currency", "hello"
    };

    MailServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["mail_currency"] == output["mail_currency"]);



}


void test_MailServiceInfo_mail_order_date_is_converted_to_json()
{

    bourne::json input =
    {
        "mail_order_date", "hello"
    };

    MailServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["mail_order_date"] == output["mail_order_date"]);



}


void test_MailServiceInfo_mail_custid_is_converted_to_json()
{

    bourne::json input =
    {
        "mail_custid", "hello"
    };

    MailServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["mail_custid"] == output["mail_custid"]);



}


void test_MailServiceInfo_mail_quota_is_converted_to_json()
{

    bourne::json input =
    {
        "mail_quota", "hello"
    };

    MailServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["mail_quota"] == output["mail_quota"]);



}


void test_MailServiceInfo_mail_status_is_converted_to_json()
{

    bourne::json input =
    {
        "mail_status", "hello"
    };

    MailServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["mail_status"] == output["mail_status"]);



}


void test_MailServiceInfo_mail_invoice_is_converted_to_json()
{

    bourne::json input =
    {
        "mail_invoice", "hello"
    };

    MailServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["mail_invoice"] == output["mail_invoice"]);



}


void test_MailServiceInfo_mail_username_is_converted_to_json()
{

    bourne::json input =
    {
        "mail_username", "hello"
    };

    MailServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["mail_username"] == output["mail_username"]);



}


void test_MailServiceInfo_mail_ip_is_converted_to_json()
{

    bourne::json input =
    {
        "mail_ip", "hello"
    };

    MailServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["mail_ip"] == output["mail_ip"]);



}


void test_MailServiceInfo_mail_coupon_is_converted_to_json()
{

    bourne::json input =
    {
        "mail_coupon", "hello"
    };

    MailServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["mail_coupon"] == output["mail_coupon"]);



}


void test_MailServiceInfo_mail_extra_is_converted_to_json()
{

    bourne::json input =
    {
        "mail_extra", "hello"
    };

    MailServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["mail_extra"] == output["mail_extra"]);



}


void test_MailServiceInfo_mail_server_status_is_converted_to_json()
{

    bourne::json input =
    {
        "mail_server_status", "hello"
    };

    MailServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["mail_server_status"] == output["mail_server_status"]);



}


void test_MailServiceInfo_mail_comment_is_converted_to_json()
{

    bourne::json input =
    {
        "mail_comment", "hello"
    };

    MailServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["mail_comment"] == output["mail_comment"]);



}


