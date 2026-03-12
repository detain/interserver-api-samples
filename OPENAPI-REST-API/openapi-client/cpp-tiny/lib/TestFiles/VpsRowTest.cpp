
#include "VpsRow.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_VpsRow_vps_id_is_assigned_from_json()
{


    bourne::json input =
    {
        "vps_id", "hello"
    };

    VpsRow obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getVpsId().c_str());






}


void test_VpsRow_vps_name_is_assigned_from_json()
{


    bourne::json input =
    {
        "vps_name", "hello"
    };

    VpsRow obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getVpsName().c_str());






}


void test_VpsRow_repeat_invoices_cost_is_assigned_from_json()
{


    bourne::json input =
    {
        "repeat_invoices_cost", "hello"
    };

    VpsRow obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getRepeatInvoicesCost().c_str());






}


void test_VpsRow_vps_hostname_is_assigned_from_json()
{


    bourne::json input =
    {
        "vps_hostname", "hello"
    };

    VpsRow obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getVpsHostname().c_str());






}


void test_VpsRow_vps_ip_is_assigned_from_json()
{


    bourne::json input =
    {
        "vps_ip", "hello"
    };

    VpsRow obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getVpsIp().c_str());






}


void test_VpsRow_vps_status_is_assigned_from_json()
{


    bourne::json input =
    {
        "vps_status", "hello"
    };

    VpsRow obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getVpsStatus().c_str());






}


void test_VpsRow_services_name_is_assigned_from_json()
{


    bourne::json input =
    {
        "services_name", "hello"
    };

    VpsRow obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getServicesName().c_str());






}


void test_VpsRow_vps_comment_is_assigned_from_json()
{


    bourne::json input =
    {
        "vps_comment", "hello"
    };

    VpsRow obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getVpsComment().c_str());






}



void test_VpsRow_vps_id_is_converted_to_json()
{

    bourne::json input =
    {
        "vps_id", "hello"
    };

    VpsRow obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["vps_id"] == output["vps_id"]);



}


void test_VpsRow_vps_name_is_converted_to_json()
{

    bourne::json input =
    {
        "vps_name", "hello"
    };

    VpsRow obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["vps_name"] == output["vps_name"]);



}


void test_VpsRow_repeat_invoices_cost_is_converted_to_json()
{

    bourne::json input =
    {
        "repeat_invoices_cost", "hello"
    };

    VpsRow obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["repeat_invoices_cost"] == output["repeat_invoices_cost"]);



}


void test_VpsRow_vps_hostname_is_converted_to_json()
{

    bourne::json input =
    {
        "vps_hostname", "hello"
    };

    VpsRow obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["vps_hostname"] == output["vps_hostname"]);



}


void test_VpsRow_vps_ip_is_converted_to_json()
{

    bourne::json input =
    {
        "vps_ip", "hello"
    };

    VpsRow obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["vps_ip"] == output["vps_ip"]);



}


void test_VpsRow_vps_status_is_converted_to_json()
{

    bourne::json input =
    {
        "vps_status", "hello"
    };

    VpsRow obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["vps_status"] == output["vps_status"]);



}


void test_VpsRow_services_name_is_converted_to_json()
{

    bourne::json input =
    {
        "services_name", "hello"
    };

    VpsRow obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["services_name"] == output["services_name"]);



}


void test_VpsRow_vps_comment_is_converted_to_json()
{

    bourne::json input =
    {
        "vps_comment", "hello"
    };

    VpsRow obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["vps_comment"] == output["vps_comment"]);



}


