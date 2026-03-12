
#include "LicenseRow.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_LicenseRow_license_id_is_assigned_from_json()
{


    bourne::json input =
    {
        "license_id", "hello"
    };

    LicenseRow obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getLicenseId().c_str());






}


void test_LicenseRow_license_hostname_is_assigned_from_json()
{


    bourne::json input =
    {
        "license_hostname", "hello"
    };

    LicenseRow obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getLicenseHostname().c_str());






}


void test_LicenseRow_license_ip_is_assigned_from_json()
{


    bourne::json input =
    {
        "license_ip", "hello"
    };

    LicenseRow obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getLicenseIp().c_str());






}


void test_LicenseRow_services_name_is_assigned_from_json()
{


    bourne::json input =
    {
        "services_name", "hello"
    };

    LicenseRow obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getServicesName().c_str());






}


void test_LicenseRow_cost_is_assigned_from_json()
{


    bourne::json input =
    {
        "cost", "hello"
    };

    LicenseRow obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCost().c_str());






}


void test_LicenseRow_license_status_is_assigned_from_json()
{


    bourne::json input =
    {
        "license_status", "hello"
    };

    LicenseRow obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getLicenseStatus().c_str());






}


void test_LicenseRow_invoices_paid_is_assigned_from_json()
{


    bourne::json input =
    {
        "invoices_paid", "hello"
    };

    LicenseRow obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getInvoicesPaid().c_str());






}


void test_LicenseRow_invoices_date_is_assigned_from_json()
{








}



void test_LicenseRow_license_id_is_converted_to_json()
{

    bourne::json input =
    {
        "license_id", "hello"
    };

    LicenseRow obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["license_id"] == output["license_id"]);



}


void test_LicenseRow_license_hostname_is_converted_to_json()
{

    bourne::json input =
    {
        "license_hostname", "hello"
    };

    LicenseRow obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["license_hostname"] == output["license_hostname"]);



}


void test_LicenseRow_license_ip_is_converted_to_json()
{

    bourne::json input =
    {
        "license_ip", "hello"
    };

    LicenseRow obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["license_ip"] == output["license_ip"]);



}


void test_LicenseRow_services_name_is_converted_to_json()
{

    bourne::json input =
    {
        "services_name", "hello"
    };

    LicenseRow obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["services_name"] == output["services_name"]);



}


void test_LicenseRow_cost_is_converted_to_json()
{

    bourne::json input =
    {
        "cost", "hello"
    };

    LicenseRow obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["cost"] == output["cost"]);



}


void test_LicenseRow_license_status_is_converted_to_json()
{

    bourne::json input =
    {
        "license_status", "hello"
    };

    LicenseRow obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["license_status"] == output["license_status"]);



}


void test_LicenseRow_invoices_paid_is_converted_to_json()
{

    bourne::json input =
    {
        "invoices_paid", "hello"
    };

    LicenseRow obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["invoices_paid"] == output["invoices_paid"]);



}


void test_LicenseRow_invoices_date_is_converted_to_json()
{




}


