
#include "LicenseServiceInfo.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_LicenseServiceInfo_license_id_is_assigned_from_json()
{


    bourne::json input =
    {
        "license_id", "hello"
    };

    LicenseServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getLicenseId().c_str());






}


void test_LicenseServiceInfo_license_type_is_assigned_from_json()
{


    bourne::json input =
    {
        "license_type", "hello"
    };

    LicenseServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getLicenseType().c_str());






}


void test_LicenseServiceInfo_license_currency_is_assigned_from_json()
{


    bourne::json input =
    {
        "license_currency", "hello"
    };

    LicenseServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getLicenseCurrency().c_str());






}


void test_LicenseServiceInfo_license_order_date_is_assigned_from_json()
{








}


void test_LicenseServiceInfo_license_custid_is_assigned_from_json()
{


    bourne::json input =
    {
        "license_custid", "hello"
    };

    LicenseServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getLicenseCustid().c_str());






}


void test_LicenseServiceInfo_license_ip_is_assigned_from_json()
{


    bourne::json input =
    {
        "license_ip", "hello"
    };

    LicenseServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getLicenseIp().c_str());






}


void test_LicenseServiceInfo_license_status_is_assigned_from_json()
{


    bourne::json input =
    {
        "license_status", "hello"
    };

    LicenseServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getLicenseStatus().c_str());






}


void test_LicenseServiceInfo_license_invoice_is_assigned_from_json()
{


    bourne::json input =
    {
        "license_invoice", "hello"
    };

    LicenseServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getLicenseInvoice().c_str());






}


void test_LicenseServiceInfo_license_coupon_is_assigned_from_json()
{


    bourne::json input =
    {
        "license_coupon", "hello"
    };

    LicenseServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getLicenseCoupon().c_str());






}


void test_LicenseServiceInfo_license_hostname_is_assigned_from_json()
{


    bourne::json input =
    {
        "license_hostname", "hello"
    };

    LicenseServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getLicenseHostname().c_str());






}


void test_LicenseServiceInfo_license_key_is_assigned_from_json()
{


    bourne::json input =
    {
        "license_key", "hello"
    };

    LicenseServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getLicenseKey().c_str());






}


void test_LicenseServiceInfo_license_extra_is_assigned_from_json()
{


    bourne::json input =
    {
        "license_extra", "hello"
    };

    LicenseServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getLicenseExtra().c_str());






}



void test_LicenseServiceInfo_license_id_is_converted_to_json()
{

    bourne::json input =
    {
        "license_id", "hello"
    };

    LicenseServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["license_id"] == output["license_id"]);



}


void test_LicenseServiceInfo_license_type_is_converted_to_json()
{

    bourne::json input =
    {
        "license_type", "hello"
    };

    LicenseServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["license_type"] == output["license_type"]);



}


void test_LicenseServiceInfo_license_currency_is_converted_to_json()
{

    bourne::json input =
    {
        "license_currency", "hello"
    };

    LicenseServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["license_currency"] == output["license_currency"]);



}


void test_LicenseServiceInfo_license_order_date_is_converted_to_json()
{




}


void test_LicenseServiceInfo_license_custid_is_converted_to_json()
{

    bourne::json input =
    {
        "license_custid", "hello"
    };

    LicenseServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["license_custid"] == output["license_custid"]);



}


void test_LicenseServiceInfo_license_ip_is_converted_to_json()
{

    bourne::json input =
    {
        "license_ip", "hello"
    };

    LicenseServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["license_ip"] == output["license_ip"]);



}


void test_LicenseServiceInfo_license_status_is_converted_to_json()
{

    bourne::json input =
    {
        "license_status", "hello"
    };

    LicenseServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["license_status"] == output["license_status"]);



}


void test_LicenseServiceInfo_license_invoice_is_converted_to_json()
{

    bourne::json input =
    {
        "license_invoice", "hello"
    };

    LicenseServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["license_invoice"] == output["license_invoice"]);



}


void test_LicenseServiceInfo_license_coupon_is_converted_to_json()
{

    bourne::json input =
    {
        "license_coupon", "hello"
    };

    LicenseServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["license_coupon"] == output["license_coupon"]);



}


void test_LicenseServiceInfo_license_hostname_is_converted_to_json()
{

    bourne::json input =
    {
        "license_hostname", "hello"
    };

    LicenseServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["license_hostname"] == output["license_hostname"]);



}


void test_LicenseServiceInfo_license_key_is_converted_to_json()
{

    bourne::json input =
    {
        "license_key", "hello"
    };

    LicenseServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["license_key"] == output["license_key"]);



}


void test_LicenseServiceInfo_license_extra_is_converted_to_json()
{

    bourne::json input =
    {
        "license_extra", "hello"
    };

    LicenseServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["license_extra"] == output["license_extra"]);



}


