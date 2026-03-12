
#include "ServerServiceInfo.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_ServerServiceInfo_server_id_is_assigned_from_json()
{


    bourne::json input =
    {
        "server_id", "hello"
    };

    ServerServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getServerId().c_str());






}


void test_ServerServiceInfo_server_hostname_is_assigned_from_json()
{


    bourne::json input =
    {
        "server_hostname", "hello"
    };

    ServerServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getServerHostname().c_str());






}


void test_ServerServiceInfo_server_custid_is_assigned_from_json()
{


    bourne::json input =
    {
        "server_custid", "hello"
    };

    ServerServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getServerCustid().c_str());






}


void test_ServerServiceInfo_server_type_is_assigned_from_json()
{


    bourne::json input =
    {
        "server_type", "hello"
    };

    ServerServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getServerType().c_str());






}


void test_ServerServiceInfo_server_currency_is_assigned_from_json()
{


    bourne::json input =
    {
        "server_currency", "hello"
    };

    ServerServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getServerCurrency().c_str());






}


void test_ServerServiceInfo_server_order_date_is_assigned_from_json()
{


    bourne::json input =
    {
        "server_order_date", "hello"
    };

    ServerServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getServerOrderDate().c_str());






}


void test_ServerServiceInfo_server_invoice_is_assigned_from_json()
{


    bourne::json input =
    {
        "server_invoice", "hello"
    };

    ServerServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getServerInvoice().c_str());






}


void test_ServerServiceInfo_server_coupon_is_assigned_from_json()
{


    bourne::json input =
    {
        "server_coupon", "hello"
    };

    ServerServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getServerCoupon().c_str());






}


void test_ServerServiceInfo_server_status_is_assigned_from_json()
{


    bourne::json input =
    {
        "server_status", "hello"
    };

    ServerServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getServerStatus().c_str());






}


void test_ServerServiceInfo_server_root_is_assigned_from_json()
{


    bourne::json input =
    {
        "server_root", "hello"
    };

    ServerServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getServerRoot().c_str());






}


void test_ServerServiceInfo_server_dedicated_tag_is_assigned_from_json()
{


    bourne::json input =
    {
        "server_dedicated_tag", "hello"
    };

    ServerServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getServerDedicatedTag().c_str());






}


void test_ServerServiceInfo_server_custom_tag_is_assigned_from_json()
{


    bourne::json input =
    {
        "server_custom_tag", "hello"
    };

    ServerServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getServerCustomTag().c_str());






}


void test_ServerServiceInfo_server_comment_is_assigned_from_json()
{


    bourne::json input =
    {
        "server_comment", "hello"
    };

    ServerServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getServerComment().c_str());






}


void test_ServerServiceInfo_server_initial_bill_is_assigned_from_json()
{


    bourne::json input =
    {
        "server_initial_bill", "hello"
    };

    ServerServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getServerInitialBill().c_str());






}


void test_ServerServiceInfo_server_hardware_is_assigned_from_json()
{


    bourne::json input =
    {
        "server_hardware", "hello"
    };

    ServerServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getServerHardware().c_str());






}


void test_ServerServiceInfo_server_ips_is_assigned_from_json()
{


    bourne::json input =
    {
        "server_ips", "hello"
    };

    ServerServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getServerIps().c_str());






}


void test_ServerServiceInfo_server_monthly_bill_is_assigned_from_json()
{


    bourne::json input =
    {
        "server_monthly_bill", "hello"
    };

    ServerServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getServerMonthlyBill().c_str());






}


void test_ServerServiceInfo_server_setup_is_assigned_from_json()
{


    bourne::json input =
    {
        "server_setup", "hello"
    };

    ServerServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getServerSetup().c_str());






}



void test_ServerServiceInfo_server_rep_is_assigned_from_json()
{


    bourne::json input =
    {
        "server_rep", "hello"
    };

    ServerServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getServerRep().c_str());






}


void test_ServerServiceInfo_server_date_is_assigned_from_json()
{


    bourne::json input =
    {
        "server_date", "hello"
    };

    ServerServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getServerDate().c_str());






}


void test_ServerServiceInfo_server_total_cost_is_assigned_from_json()
{


    bourne::json input =
    {
        "server_total_cost", "hello"
    };

    ServerServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getServerTotalCost().c_str());






}



void test_ServerServiceInfo_server_hardware_ordered_is_assigned_from_json()
{


    bourne::json input =
    {
        "server_hardware_ordered", "hello"
    };

    ServerServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getServerHardwareOrdered().c_str());






}


void test_ServerServiceInfo_server_billed_is_assigned_from_json()
{


    bourne::json input =
    {
        "server_billed", "hello"
    };

    ServerServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getServerBilled().c_str());






}


void test_ServerServiceInfo_server_welcome_email_is_assigned_from_json()
{


    bourne::json input =
    {
        "server_welcome_email", "hello"
    };

    ServerServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getServerWelcomeEmail().c_str());






}


void test_ServerServiceInfo_server_dedicated_cpu_is_assigned_from_json()
{


    bourne::json input =
    {
        "server_dedicated_cpu", "hello"
    };

    ServerServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getServerDedicatedCpu().c_str());






}


void test_ServerServiceInfo_server_dedicated_memory_is_assigned_from_json()
{


    bourne::json input =
    {
        "server_dedicated_memory", "hello"
    };

    ServerServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getServerDedicatedMemory().c_str());






}


void test_ServerServiceInfo_server_dedicated_hd1_is_assigned_from_json()
{


    bourne::json input =
    {
        "server_dedicated_hd1", "hello"
    };

    ServerServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getServerDedicatedHd1().c_str());






}



void test_ServerServiceInfo_server_dedicated_bandwidth_is_assigned_from_json()
{


    bourne::json input =
    {
        "server_dedicated_bandwidth", "hello"
    };

    ServerServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getServerDedicatedBandwidth().c_str());






}


void test_ServerServiceInfo_server_dedicated_ips_is_assigned_from_json()
{


    bourne::json input =
    {
        "server_dedicated_ips", "hello"
    };

    ServerServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getServerDedicatedIps().c_str());






}


void test_ServerServiceInfo_server_dedicated_os_is_assigned_from_json()
{


    bourne::json input =
    {
        "server_dedicated_os", "hello"
    };

    ServerServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getServerDedicatedOs().c_str());






}



void test_ServerServiceInfo_server_dedicated_raid_is_assigned_from_json()
{


    bourne::json input =
    {
        "server_dedicated_raid", "hello"
    };

    ServerServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getServerDedicatedRaid().c_str());






}


void test_ServerServiceInfo_server_extra_is_assigned_from_json()
{


    bourne::json input =
    {
        "server_extra", "hello"
    };

    ServerServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getServerExtra().c_str());






}



void test_ServerServiceInfo_server_id_is_converted_to_json()
{

    bourne::json input =
    {
        "server_id", "hello"
    };

    ServerServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["server_id"] == output["server_id"]);



}


void test_ServerServiceInfo_server_hostname_is_converted_to_json()
{

    bourne::json input =
    {
        "server_hostname", "hello"
    };

    ServerServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["server_hostname"] == output["server_hostname"]);



}


void test_ServerServiceInfo_server_custid_is_converted_to_json()
{

    bourne::json input =
    {
        "server_custid", "hello"
    };

    ServerServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["server_custid"] == output["server_custid"]);



}


void test_ServerServiceInfo_server_type_is_converted_to_json()
{

    bourne::json input =
    {
        "server_type", "hello"
    };

    ServerServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["server_type"] == output["server_type"]);



}


void test_ServerServiceInfo_server_currency_is_converted_to_json()
{

    bourne::json input =
    {
        "server_currency", "hello"
    };

    ServerServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["server_currency"] == output["server_currency"]);



}


void test_ServerServiceInfo_server_order_date_is_converted_to_json()
{

    bourne::json input =
    {
        "server_order_date", "hello"
    };

    ServerServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["server_order_date"] == output["server_order_date"]);



}


void test_ServerServiceInfo_server_invoice_is_converted_to_json()
{

    bourne::json input =
    {
        "server_invoice", "hello"
    };

    ServerServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["server_invoice"] == output["server_invoice"]);



}


void test_ServerServiceInfo_server_coupon_is_converted_to_json()
{

    bourne::json input =
    {
        "server_coupon", "hello"
    };

    ServerServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["server_coupon"] == output["server_coupon"]);



}


void test_ServerServiceInfo_server_status_is_converted_to_json()
{

    bourne::json input =
    {
        "server_status", "hello"
    };

    ServerServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["server_status"] == output["server_status"]);



}


void test_ServerServiceInfo_server_root_is_converted_to_json()
{

    bourne::json input =
    {
        "server_root", "hello"
    };

    ServerServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["server_root"] == output["server_root"]);



}


void test_ServerServiceInfo_server_dedicated_tag_is_converted_to_json()
{

    bourne::json input =
    {
        "server_dedicated_tag", "hello"
    };

    ServerServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["server_dedicated_tag"] == output["server_dedicated_tag"]);



}


void test_ServerServiceInfo_server_custom_tag_is_converted_to_json()
{

    bourne::json input =
    {
        "server_custom_tag", "hello"
    };

    ServerServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["server_custom_tag"] == output["server_custom_tag"]);



}


void test_ServerServiceInfo_server_comment_is_converted_to_json()
{

    bourne::json input =
    {
        "server_comment", "hello"
    };

    ServerServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["server_comment"] == output["server_comment"]);



}


void test_ServerServiceInfo_server_initial_bill_is_converted_to_json()
{

    bourne::json input =
    {
        "server_initial_bill", "hello"
    };

    ServerServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["server_initial_bill"] == output["server_initial_bill"]);



}


void test_ServerServiceInfo_server_hardware_is_converted_to_json()
{

    bourne::json input =
    {
        "server_hardware", "hello"
    };

    ServerServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["server_hardware"] == output["server_hardware"]);



}


void test_ServerServiceInfo_server_ips_is_converted_to_json()
{

    bourne::json input =
    {
        "server_ips", "hello"
    };

    ServerServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["server_ips"] == output["server_ips"]);



}


void test_ServerServiceInfo_server_monthly_bill_is_converted_to_json()
{

    bourne::json input =
    {
        "server_monthly_bill", "hello"
    };

    ServerServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["server_monthly_bill"] == output["server_monthly_bill"]);



}


void test_ServerServiceInfo_server_setup_is_converted_to_json()
{

    bourne::json input =
    {
        "server_setup", "hello"
    };

    ServerServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["server_setup"] == output["server_setup"]);



}



void test_ServerServiceInfo_server_rep_is_converted_to_json()
{

    bourne::json input =
    {
        "server_rep", "hello"
    };

    ServerServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["server_rep"] == output["server_rep"]);



}


void test_ServerServiceInfo_server_date_is_converted_to_json()
{

    bourne::json input =
    {
        "server_date", "hello"
    };

    ServerServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["server_date"] == output["server_date"]);



}


void test_ServerServiceInfo_server_total_cost_is_converted_to_json()
{

    bourne::json input =
    {
        "server_total_cost", "hello"
    };

    ServerServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["server_total_cost"] == output["server_total_cost"]);



}



void test_ServerServiceInfo_server_hardware_ordered_is_converted_to_json()
{

    bourne::json input =
    {
        "server_hardware_ordered", "hello"
    };

    ServerServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["server_hardware_ordered"] == output["server_hardware_ordered"]);



}


void test_ServerServiceInfo_server_billed_is_converted_to_json()
{

    bourne::json input =
    {
        "server_billed", "hello"
    };

    ServerServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["server_billed"] == output["server_billed"]);



}


void test_ServerServiceInfo_server_welcome_email_is_converted_to_json()
{

    bourne::json input =
    {
        "server_welcome_email", "hello"
    };

    ServerServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["server_welcome_email"] == output["server_welcome_email"]);



}


void test_ServerServiceInfo_server_dedicated_cpu_is_converted_to_json()
{

    bourne::json input =
    {
        "server_dedicated_cpu", "hello"
    };

    ServerServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["server_dedicated_cpu"] == output["server_dedicated_cpu"]);



}


void test_ServerServiceInfo_server_dedicated_memory_is_converted_to_json()
{

    bourne::json input =
    {
        "server_dedicated_memory", "hello"
    };

    ServerServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["server_dedicated_memory"] == output["server_dedicated_memory"]);



}


void test_ServerServiceInfo_server_dedicated_hd1_is_converted_to_json()
{

    bourne::json input =
    {
        "server_dedicated_hd1", "hello"
    };

    ServerServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["server_dedicated_hd1"] == output["server_dedicated_hd1"]);



}



void test_ServerServiceInfo_server_dedicated_bandwidth_is_converted_to_json()
{

    bourne::json input =
    {
        "server_dedicated_bandwidth", "hello"
    };

    ServerServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["server_dedicated_bandwidth"] == output["server_dedicated_bandwidth"]);



}


void test_ServerServiceInfo_server_dedicated_ips_is_converted_to_json()
{

    bourne::json input =
    {
        "server_dedicated_ips", "hello"
    };

    ServerServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["server_dedicated_ips"] == output["server_dedicated_ips"]);



}


void test_ServerServiceInfo_server_dedicated_os_is_converted_to_json()
{

    bourne::json input =
    {
        "server_dedicated_os", "hello"
    };

    ServerServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["server_dedicated_os"] == output["server_dedicated_os"]);



}



void test_ServerServiceInfo_server_dedicated_raid_is_converted_to_json()
{

    bourne::json input =
    {
        "server_dedicated_raid", "hello"
    };

    ServerServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["server_dedicated_raid"] == output["server_dedicated_raid"]);



}


void test_ServerServiceInfo_server_extra_is_converted_to_json()
{

    bourne::json input =
    {
        "server_extra", "hello"
    };

    ServerServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["server_extra"] == output["server_extra"]);



}


