
#include "VpsServiceInfo.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_VpsServiceInfo_vps_id_is_assigned_from_json()
{


    bourne::json input =
    {
        "vps_id", "hello"
    };

    VpsServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getVpsId().c_str());






}


void test_VpsServiceInfo_vps_custid_is_assigned_from_json()
{


    bourne::json input =
    {
        "vps_custid", "hello"
    };

    VpsServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getVpsCustid().c_str());






}


void test_VpsServiceInfo_vps_server_is_assigned_from_json()
{


    bourne::json input =
    {
        "vps_server", "hello"
    };

    VpsServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getVpsServer().c_str());






}


void test_VpsServiceInfo_vps_ip_is_assigned_from_json()
{


    bourne::json input =
    {
        "vps_ip", "hello"
    };

    VpsServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getVpsIp().c_str());






}


void test_VpsServiceInfo_vps_ipv6_is_assigned_from_json()
{


    bourne::json input =
    {
        "vps_ipv6", "hello"
    };

    VpsServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getVpsIpv6().c_str());






}


void test_VpsServiceInfo_vps_vzid_is_assigned_from_json()
{


    bourne::json input =
    {
        "vps_vzid", "hello"
    };

    VpsServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getVpsVzid().c_str());






}


void test_VpsServiceInfo_vps_currency_is_assigned_from_json()
{


    bourne::json input =
    {
        "vps_currency", "hello"
    };

    VpsServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getVpsCurrency().c_str());






}


void test_VpsServiceInfo_vps_type_is_assigned_from_json()
{


    bourne::json input =
    {
        "vps_type", "hello"
    };

    VpsServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getVpsType().c_str());






}


void test_VpsServiceInfo_vps_order_date_is_assigned_from_json()
{


    bourne::json input =
    {
        "vps_order_date", "hello"
    };

    VpsServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getVpsOrderDate().c_str());






}


void test_VpsServiceInfo_vps_status_is_assigned_from_json()
{


    bourne::json input =
    {
        "vps_status", "hello"
    };

    VpsServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getVpsStatus().c_str());






}


void test_VpsServiceInfo_vps_invoice_is_assigned_from_json()
{


    bourne::json input =
    {
        "vps_invoice", "hello"
    };

    VpsServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getVpsInvoice().c_str());






}


void test_VpsServiceInfo_vps_coupon_is_assigned_from_json()
{


    bourne::json input =
    {
        "vps_coupon", "hello"
    };

    VpsServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getVpsCoupon().c_str());






}


void test_VpsServiceInfo_vps_extra_is_assigned_from_json()
{


    bourne::json input =
    {
        "vps_extra", "hello"
    };

    VpsServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getVpsExtra().c_str());






}


void test_VpsServiceInfo_vps_hostname_is_assigned_from_json()
{


    bourne::json input =
    {
        "vps_hostname", "hello"
    };

    VpsServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getVpsHostname().c_str());






}


void test_VpsServiceInfo_vps_server_status_is_assigned_from_json()
{


    bourne::json input =
    {
        "vps_server_status", "hello"
    };

    VpsServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getVpsServerStatus().c_str());






}


void test_VpsServiceInfo_vps_comment_is_assigned_from_json()
{


    bourne::json input =
    {
        "vps_comment", "hello"
    };

    VpsServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getVpsComment().c_str());






}


void test_VpsServiceInfo_vps_slices_is_assigned_from_json()
{


    bourne::json input =
    {
        "vps_slices", "hello"
    };

    VpsServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getVpsSlices().c_str());






}


void test_VpsServiceInfo_vps_vnc_is_assigned_from_json()
{


    bourne::json input =
    {
        "vps_vnc", "hello"
    };

    VpsServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getVpsVnc().c_str());






}


void test_VpsServiceInfo_vps_vnc_port_is_assigned_from_json()
{


    bourne::json input =
    {
        "vps_vnc_port", "hello"
    };

    VpsServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getVpsVncPort().c_str());






}


void test_VpsServiceInfo_vps_rootpass_is_assigned_from_json()
{


    bourne::json input =
    {
        "vps_rootpass", "hello"
    };

    VpsServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getVpsRootpass().c_str());






}


void test_VpsServiceInfo_vps_mac_is_assigned_from_json()
{


    bourne::json input =
    {
        "vps_mac", "hello"
    };

    VpsServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getVpsMac().c_str());






}


void test_VpsServiceInfo_vps_os_is_assigned_from_json()
{


    bourne::json input =
    {
        "vps_os", "hello"
    };

    VpsServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getVpsOs().c_str());






}


void test_VpsServiceInfo_vps_version_is_assigned_from_json()
{


    bourne::json input =
    {
        "vps_version", "hello"
    };

    VpsServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getVpsVersion().c_str());






}


void test_VpsServiceInfo_vps_location_is_assigned_from_json()
{


    bourne::json input =
    {
        "vps_location", "hello"
    };

    VpsServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getVpsLocation().c_str());






}


void test_VpsServiceInfo_vps_platform_is_assigned_from_json()
{


    bourne::json input =
    {
        "vps_platform", "hello"
    };

    VpsServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getVpsPlatform().c_str());






}


void test_VpsServiceInfo_vps_diskused_is_assigned_from_json()
{


    bourne::json input =
    {
        "vps_diskused", "hello"
    };

    VpsServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getVpsDiskused().c_str());






}


void test_VpsServiceInfo_vps_diskmax_is_assigned_from_json()
{


    bourne::json input =
    {
        "vps_diskmax", "hello"
    };

    VpsServiceInfo obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getVpsDiskmax().c_str());






}



void test_VpsServiceInfo_vps_id_is_converted_to_json()
{

    bourne::json input =
    {
        "vps_id", "hello"
    };

    VpsServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["vps_id"] == output["vps_id"]);



}


void test_VpsServiceInfo_vps_custid_is_converted_to_json()
{

    bourne::json input =
    {
        "vps_custid", "hello"
    };

    VpsServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["vps_custid"] == output["vps_custid"]);



}


void test_VpsServiceInfo_vps_server_is_converted_to_json()
{

    bourne::json input =
    {
        "vps_server", "hello"
    };

    VpsServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["vps_server"] == output["vps_server"]);



}


void test_VpsServiceInfo_vps_ip_is_converted_to_json()
{

    bourne::json input =
    {
        "vps_ip", "hello"
    };

    VpsServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["vps_ip"] == output["vps_ip"]);



}


void test_VpsServiceInfo_vps_ipv6_is_converted_to_json()
{

    bourne::json input =
    {
        "vps_ipv6", "hello"
    };

    VpsServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["vps_ipv6"] == output["vps_ipv6"]);



}


void test_VpsServiceInfo_vps_vzid_is_converted_to_json()
{

    bourne::json input =
    {
        "vps_vzid", "hello"
    };

    VpsServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["vps_vzid"] == output["vps_vzid"]);



}


void test_VpsServiceInfo_vps_currency_is_converted_to_json()
{

    bourne::json input =
    {
        "vps_currency", "hello"
    };

    VpsServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["vps_currency"] == output["vps_currency"]);



}


void test_VpsServiceInfo_vps_type_is_converted_to_json()
{

    bourne::json input =
    {
        "vps_type", "hello"
    };

    VpsServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["vps_type"] == output["vps_type"]);



}


void test_VpsServiceInfo_vps_order_date_is_converted_to_json()
{

    bourne::json input =
    {
        "vps_order_date", "hello"
    };

    VpsServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["vps_order_date"] == output["vps_order_date"]);



}


void test_VpsServiceInfo_vps_status_is_converted_to_json()
{

    bourne::json input =
    {
        "vps_status", "hello"
    };

    VpsServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["vps_status"] == output["vps_status"]);



}


void test_VpsServiceInfo_vps_invoice_is_converted_to_json()
{

    bourne::json input =
    {
        "vps_invoice", "hello"
    };

    VpsServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["vps_invoice"] == output["vps_invoice"]);



}


void test_VpsServiceInfo_vps_coupon_is_converted_to_json()
{

    bourne::json input =
    {
        "vps_coupon", "hello"
    };

    VpsServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["vps_coupon"] == output["vps_coupon"]);



}


void test_VpsServiceInfo_vps_extra_is_converted_to_json()
{

    bourne::json input =
    {
        "vps_extra", "hello"
    };

    VpsServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["vps_extra"] == output["vps_extra"]);



}


void test_VpsServiceInfo_vps_hostname_is_converted_to_json()
{

    bourne::json input =
    {
        "vps_hostname", "hello"
    };

    VpsServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["vps_hostname"] == output["vps_hostname"]);



}


void test_VpsServiceInfo_vps_server_status_is_converted_to_json()
{

    bourne::json input =
    {
        "vps_server_status", "hello"
    };

    VpsServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["vps_server_status"] == output["vps_server_status"]);



}


void test_VpsServiceInfo_vps_comment_is_converted_to_json()
{

    bourne::json input =
    {
        "vps_comment", "hello"
    };

    VpsServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["vps_comment"] == output["vps_comment"]);



}


void test_VpsServiceInfo_vps_slices_is_converted_to_json()
{

    bourne::json input =
    {
        "vps_slices", "hello"
    };

    VpsServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["vps_slices"] == output["vps_slices"]);



}


void test_VpsServiceInfo_vps_vnc_is_converted_to_json()
{

    bourne::json input =
    {
        "vps_vnc", "hello"
    };

    VpsServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["vps_vnc"] == output["vps_vnc"]);



}


void test_VpsServiceInfo_vps_vnc_port_is_converted_to_json()
{

    bourne::json input =
    {
        "vps_vnc_port", "hello"
    };

    VpsServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["vps_vnc_port"] == output["vps_vnc_port"]);



}


void test_VpsServiceInfo_vps_rootpass_is_converted_to_json()
{

    bourne::json input =
    {
        "vps_rootpass", "hello"
    };

    VpsServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["vps_rootpass"] == output["vps_rootpass"]);



}


void test_VpsServiceInfo_vps_mac_is_converted_to_json()
{

    bourne::json input =
    {
        "vps_mac", "hello"
    };

    VpsServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["vps_mac"] == output["vps_mac"]);



}


void test_VpsServiceInfo_vps_os_is_converted_to_json()
{

    bourne::json input =
    {
        "vps_os", "hello"
    };

    VpsServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["vps_os"] == output["vps_os"]);



}


void test_VpsServiceInfo_vps_version_is_converted_to_json()
{

    bourne::json input =
    {
        "vps_version", "hello"
    };

    VpsServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["vps_version"] == output["vps_version"]);



}


void test_VpsServiceInfo_vps_location_is_converted_to_json()
{

    bourne::json input =
    {
        "vps_location", "hello"
    };

    VpsServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["vps_location"] == output["vps_location"]);



}


void test_VpsServiceInfo_vps_platform_is_converted_to_json()
{

    bourne::json input =
    {
        "vps_platform", "hello"
    };

    VpsServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["vps_platform"] == output["vps_platform"]);



}


void test_VpsServiceInfo_vps_diskused_is_converted_to_json()
{

    bourne::json input =
    {
        "vps_diskused", "hello"
    };

    VpsServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["vps_diskused"] == output["vps_diskused"]);



}


void test_VpsServiceInfo_vps_diskmax_is_converted_to_json()
{

    bourne::json input =
    {
        "vps_diskmax", "hello"
    };

    VpsServiceInfo obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["vps_diskmax"] == output["vps_diskmax"]);



}


