
#include "QuickserverServiceInfo.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_QuickserverServiceInfo_qs_id_is_assigned_from_json()
{


    bourne::json input =
    {
        "qs_id", "hello"
    };

    QuickserverServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getQsId().c_str());






}


void test_QuickserverServiceInfo_qs_custid_is_assigned_from_json()
{


    bourne::json input =
    {
        "qs_custid", "hello"
    };

    QuickserverServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getQsCustid().c_str());






}


void test_QuickserverServiceInfo_qs_server_is_assigned_from_json()
{


    bourne::json input =
    {
        "qs_server", "hello"
    };

    QuickserverServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getQsServer().c_str());






}


void test_QuickserverServiceInfo_qs_ip_is_assigned_from_json()
{


    bourne::json input =
    {
        "qs_ip", "hello"
    };

    QuickserverServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getQsIp().c_str());






}


void test_QuickserverServiceInfo_qs_ipv6_is_assigned_from_json()
{


    bourne::json input =
    {
        "qs_ipv6", "hello"
    };

    QuickserverServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getQsIpv6().c_str());






}


void test_QuickserverServiceInfo_qs_vzid_is_assigned_from_json()
{


    bourne::json input =
    {
        "qs_vzid", "hello"
    };

    QuickserverServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getQsVzid().c_str());






}


void test_QuickserverServiceInfo_qs_currency_is_assigned_from_json()
{


    bourne::json input =
    {
        "qs_currency", "hello"
    };

    QuickserverServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getQsCurrency().c_str());






}


void test_QuickserverServiceInfo_qs_type_is_assigned_from_json()
{


    bourne::json input =
    {
        "qs_type", "hello"
    };

    QuickserverServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getQsType().c_str());






}


void test_QuickserverServiceInfo_qs_order_date_is_assigned_from_json()
{


    bourne::json input =
    {
        "qs_order_date", "hello"
    };

    QuickserverServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getQsOrderDate().c_str());






}


void test_QuickserverServiceInfo_qs_status_is_assigned_from_json()
{


    bourne::json input =
    {
        "qs_status", "hello"
    };

    QuickserverServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getQsStatus().c_str());






}


void test_QuickserverServiceInfo_qs_invoice_is_assigned_from_json()
{


    bourne::json input =
    {
        "qs_invoice", "hello"
    };

    QuickserverServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getQsInvoice().c_str());






}


void test_QuickserverServiceInfo_qs_coupon_is_assigned_from_json()
{


    bourne::json input =
    {
        "qs_coupon", "hello"
    };

    QuickserverServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getQsCoupon().c_str());






}


void test_QuickserverServiceInfo_qs_extra_is_assigned_from_json()
{


    bourne::json input =
    {
        "qs_extra", "hello"
    };

    QuickserverServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getQsExtra().c_str());






}


void test_QuickserverServiceInfo_qs_hostname_is_assigned_from_json()
{


    bourne::json input =
    {
        "qs_hostname", "hello"
    };

    QuickserverServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getQsHostname().c_str());






}


void test_QuickserverServiceInfo_qs_server_status_is_assigned_from_json()
{


    bourne::json input =
    {
        "qs_server_status", "hello"
    };

    QuickserverServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getQsServerStatus().c_str());






}


void test_QuickserverServiceInfo_qs_comment_is_assigned_from_json()
{


    bourne::json input =
    {
        "qs_comment", "hello"
    };

    QuickserverServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getQsComment().c_str());






}


void test_QuickserverServiceInfo_qs_slices_is_assigned_from_json()
{


    bourne::json input =
    {
        "qs_slices", "hello"
    };

    QuickserverServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getQsSlices().c_str());






}


void test_QuickserverServiceInfo_qs_vnc_is_assigned_from_json()
{


    bourne::json input =
    {
        "qs_vnc", "hello"
    };

    QuickserverServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getQsVnc().c_str());






}


void test_QuickserverServiceInfo_qs_vnc_port_is_assigned_from_json()
{
    bourne::json input =
    {
        "qs_vnc_port", 1
    };

    QuickserverServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getQsVncPort());








}


void test_QuickserverServiceInfo_qs_rootpass_is_assigned_from_json()
{


    bourne::json input =
    {
        "qs_rootpass", "hello"
    };

    QuickserverServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getQsRootpass().c_str());






}


void test_QuickserverServiceInfo_qs_mac_is_assigned_from_json()
{


    bourne::json input =
    {
        "qs_mac", "hello"
    };

    QuickserverServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getQsMac().c_str());






}


void test_QuickserverServiceInfo_qs_os_is_assigned_from_json()
{


    bourne::json input =
    {
        "qs_os", "hello"
    };

    QuickserverServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getQsOs().c_str());






}


void test_QuickserverServiceInfo_qs_version_is_assigned_from_json()
{


    bourne::json input =
    {
        "qs_version", "hello"
    };

    QuickserverServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getQsVersion().c_str());






}


void test_QuickserverServiceInfo_qs_location_is_assigned_from_json()
{


    bourne::json input =
    {
        "qs_location", "hello"
    };

    QuickserverServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getQsLocation().c_str());






}


void test_QuickserverServiceInfo_qs_platform_is_assigned_from_json()
{


    bourne::json input =
    {
        "qs_platform", "hello"
    };

    QuickserverServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getQsPlatform().c_str());






}



void test_QuickserverServiceInfo_qs_id_is_converted_to_json()
{

    bourne::json input =
    {
        "qs_id", "hello"
    };

    QuickserverServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["qs_id"] == output["qs_id"]);



}


void test_QuickserverServiceInfo_qs_custid_is_converted_to_json()
{

    bourne::json input =
    {
        "qs_custid", "hello"
    };

    QuickserverServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["qs_custid"] == output["qs_custid"]);



}


void test_QuickserverServiceInfo_qs_server_is_converted_to_json()
{

    bourne::json input =
    {
        "qs_server", "hello"
    };

    QuickserverServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["qs_server"] == output["qs_server"]);



}


void test_QuickserverServiceInfo_qs_ip_is_converted_to_json()
{

    bourne::json input =
    {
        "qs_ip", "hello"
    };

    QuickserverServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["qs_ip"] == output["qs_ip"]);



}


void test_QuickserverServiceInfo_qs_ipv6_is_converted_to_json()
{

    bourne::json input =
    {
        "qs_ipv6", "hello"
    };

    QuickserverServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["qs_ipv6"] == output["qs_ipv6"]);



}


void test_QuickserverServiceInfo_qs_vzid_is_converted_to_json()
{

    bourne::json input =
    {
        "qs_vzid", "hello"
    };

    QuickserverServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["qs_vzid"] == output["qs_vzid"]);



}


void test_QuickserverServiceInfo_qs_currency_is_converted_to_json()
{

    bourne::json input =
    {
        "qs_currency", "hello"
    };

    QuickserverServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["qs_currency"] == output["qs_currency"]);



}


void test_QuickserverServiceInfo_qs_type_is_converted_to_json()
{

    bourne::json input =
    {
        "qs_type", "hello"
    };

    QuickserverServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["qs_type"] == output["qs_type"]);



}


void test_QuickserverServiceInfo_qs_order_date_is_converted_to_json()
{

    bourne::json input =
    {
        "qs_order_date", "hello"
    };

    QuickserverServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["qs_order_date"] == output["qs_order_date"]);



}


void test_QuickserverServiceInfo_qs_status_is_converted_to_json()
{

    bourne::json input =
    {
        "qs_status", "hello"
    };

    QuickserverServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["qs_status"] == output["qs_status"]);



}


void test_QuickserverServiceInfo_qs_invoice_is_converted_to_json()
{

    bourne::json input =
    {
        "qs_invoice", "hello"
    };

    QuickserverServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["qs_invoice"] == output["qs_invoice"]);



}


void test_QuickserverServiceInfo_qs_coupon_is_converted_to_json()
{

    bourne::json input =
    {
        "qs_coupon", "hello"
    };

    QuickserverServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["qs_coupon"] == output["qs_coupon"]);



}


void test_QuickserverServiceInfo_qs_extra_is_converted_to_json()
{

    bourne::json input =
    {
        "qs_extra", "hello"
    };

    QuickserverServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["qs_extra"] == output["qs_extra"]);



}


void test_QuickserverServiceInfo_qs_hostname_is_converted_to_json()
{

    bourne::json input =
    {
        "qs_hostname", "hello"
    };

    QuickserverServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["qs_hostname"] == output["qs_hostname"]);



}


void test_QuickserverServiceInfo_qs_server_status_is_converted_to_json()
{

    bourne::json input =
    {
        "qs_server_status", "hello"
    };

    QuickserverServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["qs_server_status"] == output["qs_server_status"]);



}


void test_QuickserverServiceInfo_qs_comment_is_converted_to_json()
{

    bourne::json input =
    {
        "qs_comment", "hello"
    };

    QuickserverServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["qs_comment"] == output["qs_comment"]);



}


void test_QuickserverServiceInfo_qs_slices_is_converted_to_json()
{

    bourne::json input =
    {
        "qs_slices", "hello"
    };

    QuickserverServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["qs_slices"] == output["qs_slices"]);



}


void test_QuickserverServiceInfo_qs_vnc_is_converted_to_json()
{

    bourne::json input =
    {
        "qs_vnc", "hello"
    };

    QuickserverServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["qs_vnc"] == output["qs_vnc"]);



}


void test_QuickserverServiceInfo_qs_vnc_port_is_converted_to_json()
{
    bourne::json input =
    {
        "qs_vnc_port", 1
    };

    QuickserverServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["qs_vnc_port"] == output["qs_vnc_port"]);




}


void test_QuickserverServiceInfo_qs_rootpass_is_converted_to_json()
{

    bourne::json input =
    {
        "qs_rootpass", "hello"
    };

    QuickserverServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["qs_rootpass"] == output["qs_rootpass"]);



}


void test_QuickserverServiceInfo_qs_mac_is_converted_to_json()
{

    bourne::json input =
    {
        "qs_mac", "hello"
    };

    QuickserverServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["qs_mac"] == output["qs_mac"]);



}


void test_QuickserverServiceInfo_qs_os_is_converted_to_json()
{

    bourne::json input =
    {
        "qs_os", "hello"
    };

    QuickserverServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["qs_os"] == output["qs_os"]);



}


void test_QuickserverServiceInfo_qs_version_is_converted_to_json()
{

    bourne::json input =
    {
        "qs_version", "hello"
    };

    QuickserverServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["qs_version"] == output["qs_version"]);



}


void test_QuickserverServiceInfo_qs_location_is_converted_to_json()
{

    bourne::json input =
    {
        "qs_location", "hello"
    };

    QuickserverServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["qs_location"] == output["qs_location"]);



}


void test_QuickserverServiceInfo_qs_platform_is_converted_to_json()
{

    bourne::json input =
    {
        "qs_platform", "hello"
    };

    QuickserverServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["qs_platform"] == output["qs_platform"]);



}


