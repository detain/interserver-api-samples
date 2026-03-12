
#include "BackupServiceInfo.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_BackupServiceInfo_backup_id_is_assigned_from_json()
{


    bourne::json input =
    {
        "backup_id", "hello"
    };

    BackupServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getBackupId().c_str());






}


void test_BackupServiceInfo_backup_server_is_assigned_from_json()
{


    bourne::json input =
    {
        "backup_server", "hello"
    };

    BackupServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getBackupServer().c_str());






}


void test_BackupServiceInfo_backup_username_is_assigned_from_json()
{


    bourne::json input =
    {
        "backup_username", "hello"
    };

    BackupServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getBackupUsername().c_str());






}


void test_BackupServiceInfo_backup_type_is_assigned_from_json()
{


    bourne::json input =
    {
        "backup_type", "hello"
    };

    BackupServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getBackupType().c_str());






}


void test_BackupServiceInfo_backup_currency_is_assigned_from_json()
{


    bourne::json input =
    {
        "backup_currency", "hello"
    };

    BackupServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getBackupCurrency().c_str());






}


void test_BackupServiceInfo_backup_order_date_is_assigned_from_json()
{


    bourne::json input =
    {
        "backup_order_date", "hello"
    };

    BackupServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getBackupOrderDate().c_str());






}


void test_BackupServiceInfo_backup_custid_is_assigned_from_json()
{


    bourne::json input =
    {
        "backup_custid", "hello"
    };

    BackupServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getBackupCustid().c_str());






}


void test_BackupServiceInfo_backup_quota_is_assigned_from_json()
{


    bourne::json input =
    {
        "backup_quota", "hello"
    };

    BackupServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getBackupQuota().c_str());






}


void test_BackupServiceInfo_backup_ip_is_assigned_from_json()
{


    bourne::json input =
    {
        "backup_ip", "hello"
    };

    BackupServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getBackupIp().c_str());






}


void test_BackupServiceInfo_backup_status_is_assigned_from_json()
{


    bourne::json input =
    {
        "backup_status", "hello"
    };

    BackupServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getBackupStatus().c_str());






}


void test_BackupServiceInfo_backup_invoice_is_assigned_from_json()
{


    bourne::json input =
    {
        "backup_invoice", "hello"
    };

    BackupServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getBackupInvoice().c_str());






}


void test_BackupServiceInfo_backup_coupon_is_assigned_from_json()
{


    bourne::json input =
    {
        "backup_coupon", "hello"
    };

    BackupServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getBackupCoupon().c_str());






}


void test_BackupServiceInfo_backup_extra_is_assigned_from_json()
{


    bourne::json input =
    {
        "backup_extra", "hello"
    };

    BackupServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getBackupExtra().c_str());






}


void test_BackupServiceInfo_backup_server_status_is_assigned_from_json()
{


    bourne::json input =
    {
        "backup_server_status", "hello"
    };

    BackupServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getBackupServerStatus().c_str());






}


void test_BackupServiceInfo_backup_comment_is_assigned_from_json()
{


    bourne::json input =
    {
        "backup_comment", "hello"
    };

    BackupServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getBackupComment().c_str());






}



void test_BackupServiceInfo_backup_id_is_converted_to_json()
{

    bourne::json input =
    {
        "backup_id", "hello"
    };

    BackupServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["backup_id"] == output["backup_id"]);



}


void test_BackupServiceInfo_backup_server_is_converted_to_json()
{

    bourne::json input =
    {
        "backup_server", "hello"
    };

    BackupServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["backup_server"] == output["backup_server"]);



}


void test_BackupServiceInfo_backup_username_is_converted_to_json()
{

    bourne::json input =
    {
        "backup_username", "hello"
    };

    BackupServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["backup_username"] == output["backup_username"]);



}


void test_BackupServiceInfo_backup_type_is_converted_to_json()
{

    bourne::json input =
    {
        "backup_type", "hello"
    };

    BackupServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["backup_type"] == output["backup_type"]);



}


void test_BackupServiceInfo_backup_currency_is_converted_to_json()
{

    bourne::json input =
    {
        "backup_currency", "hello"
    };

    BackupServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["backup_currency"] == output["backup_currency"]);



}


void test_BackupServiceInfo_backup_order_date_is_converted_to_json()
{

    bourne::json input =
    {
        "backup_order_date", "hello"
    };

    BackupServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["backup_order_date"] == output["backup_order_date"]);



}


void test_BackupServiceInfo_backup_custid_is_converted_to_json()
{

    bourne::json input =
    {
        "backup_custid", "hello"
    };

    BackupServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["backup_custid"] == output["backup_custid"]);



}


void test_BackupServiceInfo_backup_quota_is_converted_to_json()
{

    bourne::json input =
    {
        "backup_quota", "hello"
    };

    BackupServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["backup_quota"] == output["backup_quota"]);



}


void test_BackupServiceInfo_backup_ip_is_converted_to_json()
{

    bourne::json input =
    {
        "backup_ip", "hello"
    };

    BackupServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["backup_ip"] == output["backup_ip"]);



}


void test_BackupServiceInfo_backup_status_is_converted_to_json()
{

    bourne::json input =
    {
        "backup_status", "hello"
    };

    BackupServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["backup_status"] == output["backup_status"]);



}


void test_BackupServiceInfo_backup_invoice_is_converted_to_json()
{

    bourne::json input =
    {
        "backup_invoice", "hello"
    };

    BackupServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["backup_invoice"] == output["backup_invoice"]);



}


void test_BackupServiceInfo_backup_coupon_is_converted_to_json()
{

    bourne::json input =
    {
        "backup_coupon", "hello"
    };

    BackupServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["backup_coupon"] == output["backup_coupon"]);



}


void test_BackupServiceInfo_backup_extra_is_converted_to_json()
{

    bourne::json input =
    {
        "backup_extra", "hello"
    };

    BackupServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["backup_extra"] == output["backup_extra"]);



}


void test_BackupServiceInfo_backup_server_status_is_converted_to_json()
{

    bourne::json input =
    {
        "backup_server_status", "hello"
    };

    BackupServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["backup_server_status"] == output["backup_server_status"]);



}


void test_BackupServiceInfo_backup_comment_is_converted_to_json()
{

    bourne::json input =
    {
        "backup_comment", "hello"
    };

    BackupServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["backup_comment"] == output["backup_comment"]);



}


