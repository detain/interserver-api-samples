
#include "DomainServiceInfo.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_DomainServiceInfo_domain_id_is_assigned_from_json()
{


    bourne::json input =
    {
        "domain_id", "hello"
    };

    DomainServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getDomainId().c_str());






}


void test_DomainServiceInfo_domain_hostname_is_assigned_from_json()
{


    bourne::json input =
    {
        "domain_hostname", "hello"
    };

    DomainServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getDomainHostname().c_str());






}


void test_DomainServiceInfo_domain_username_is_assigned_from_json()
{


    bourne::json input =
    {
        "domain_username", "hello"
    };

    DomainServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getDomainUsername().c_str());






}


void test_DomainServiceInfo_domain_password_is_assigned_from_json()
{


    bourne::json input =
    {
        "domain_password", "hello"
    };

    DomainServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getDomainPassword().c_str());






}


void test_DomainServiceInfo_domain_type_is_assigned_from_json()
{


    bourne::json input =
    {
        "domain_type", "hello"
    };

    DomainServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getDomainType().c_str());






}


void test_DomainServiceInfo_domain_currency_is_assigned_from_json()
{


    bourne::json input =
    {
        "domain_currency", "hello"
    };

    DomainServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getDomainCurrency().c_str());






}


void test_DomainServiceInfo_domain_expire_date_is_assigned_from_json()
{


    bourne::json input =
    {
        "domain_expire_date", "hello"
    };

    DomainServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getDomainExpireDate().c_str());






}


void test_DomainServiceInfo_domain_order_date_is_assigned_from_json()
{


    bourne::json input =
    {
        "domain_order_date", "hello"
    };

    DomainServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getDomainOrderDate().c_str());






}


void test_DomainServiceInfo_domain_custid_is_assigned_from_json()
{


    bourne::json input =
    {
        "domain_custid", "hello"
    };

    DomainServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getDomainCustid().c_str());






}


void test_DomainServiceInfo_domain_status_is_assigned_from_json()
{


    bourne::json input =
    {
        "domain_status", "hello"
    };

    DomainServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getDomainStatus().c_str());






}


void test_DomainServiceInfo_domain_invoice_is_assigned_from_json()
{


    bourne::json input =
    {
        "domain_invoice", "hello"
    };

    DomainServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getDomainInvoice().c_str());






}


void test_DomainServiceInfo_domain_coupon_is_assigned_from_json()
{


    bourne::json input =
    {
        "domain_coupon", "hello"
    };

    DomainServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getDomainCoupon().c_str());






}



void test_DomainServiceInfo_domain_id_is_converted_to_json()
{

    bourne::json input =
    {
        "domain_id", "hello"
    };

    DomainServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["domain_id"] == output["domain_id"]);



}


void test_DomainServiceInfo_domain_hostname_is_converted_to_json()
{

    bourne::json input =
    {
        "domain_hostname", "hello"
    };

    DomainServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["domain_hostname"] == output["domain_hostname"]);



}


void test_DomainServiceInfo_domain_username_is_converted_to_json()
{

    bourne::json input =
    {
        "domain_username", "hello"
    };

    DomainServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["domain_username"] == output["domain_username"]);



}


void test_DomainServiceInfo_domain_password_is_converted_to_json()
{

    bourne::json input =
    {
        "domain_password", "hello"
    };

    DomainServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["domain_password"] == output["domain_password"]);



}


void test_DomainServiceInfo_domain_type_is_converted_to_json()
{

    bourne::json input =
    {
        "domain_type", "hello"
    };

    DomainServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["domain_type"] == output["domain_type"]);



}


void test_DomainServiceInfo_domain_currency_is_converted_to_json()
{

    bourne::json input =
    {
        "domain_currency", "hello"
    };

    DomainServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["domain_currency"] == output["domain_currency"]);



}


void test_DomainServiceInfo_domain_expire_date_is_converted_to_json()
{

    bourne::json input =
    {
        "domain_expire_date", "hello"
    };

    DomainServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["domain_expire_date"] == output["domain_expire_date"]);



}


void test_DomainServiceInfo_domain_order_date_is_converted_to_json()
{

    bourne::json input =
    {
        "domain_order_date", "hello"
    };

    DomainServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["domain_order_date"] == output["domain_order_date"]);



}


void test_DomainServiceInfo_domain_custid_is_converted_to_json()
{

    bourne::json input =
    {
        "domain_custid", "hello"
    };

    DomainServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["domain_custid"] == output["domain_custid"]);



}


void test_DomainServiceInfo_domain_status_is_converted_to_json()
{

    bourne::json input =
    {
        "domain_status", "hello"
    };

    DomainServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["domain_status"] == output["domain_status"]);



}


void test_DomainServiceInfo_domain_invoice_is_converted_to_json()
{

    bourne::json input =
    {
        "domain_invoice", "hello"
    };

    DomainServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["domain_invoice"] == output["domain_invoice"]);



}


void test_DomainServiceInfo_domain_coupon_is_converted_to_json()
{

    bourne::json input =
    {
        "domain_coupon", "hello"
    };

    DomainServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["domain_coupon"] == output["domain_coupon"]);



}


