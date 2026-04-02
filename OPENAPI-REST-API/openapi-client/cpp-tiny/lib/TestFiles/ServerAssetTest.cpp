
#include "ServerAsset.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_ServerAsset_id_is_assigned_from_json()
{
    bourne::json input =
    {
        "id", 1
    };

    ServerAsset obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getId());








}


void test_ServerAsset_order_id_is_assigned_from_json()
{


    bourne::json input =
    {
        "order_id", "hello"
    };

    ServerAsset obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getOrderId().c_str());






}


void test_ServerAsset_hostname_is_assigned_from_json()
{


    bourne::json input =
    {
        "hostname", "hello"
    };

    ServerAsset obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getHostname().c_str());






}


void test_ServerAsset_status_is_assigned_from_json()
{


    bourne::json input =
    {
        "status", "hello"
    };

    ServerAsset obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getStatus().c_str());






}


void test_ServerAsset_primary_ipv4_is_assigned_from_json()
{


    bourne::json input =
    {
        "primary_ipv4", "hello"
    };

    ServerAsset obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getPrimaryIpv4().c_str());






}


void test_ServerAsset_primary_ipv6_is_assigned_from_json()
{


    bourne::json input =
    {
        "primary_ipv6", "hello"
    };

    ServerAsset obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getPrimaryIpv6().c_str());






}


void test_ServerAsset_datacenter_is_assigned_from_json()
{


    bourne::json input =
    {
        "datacenter", "hello"
    };

    ServerAsset obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getDatacenter().c_str());






}


void test_ServerAsset_type_id_is_assigned_from_json()
{


    bourne::json input =
    {
        "type_id", "hello"
    };

    ServerAsset obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getTypeId().c_str());






}


void test_ServerAsset_asset_tag_is_assigned_from_json()
{


    bourne::json input =
    {
        "asset_tag", "hello"
    };

    ServerAsset obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getAssetTag().c_str());






}


void test_ServerAsset_rack_is_assigned_from_json()
{


    bourne::json input =
    {
        "rack", "hello"
    };

    ServerAsset obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getRack().c_str());






}


void test_ServerAsset_row_is_assigned_from_json()
{


    bourne::json input =
    {
        "row", "hello"
    };

    ServerAsset obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getRow().c_str());






}


void test_ServerAsset_col_is_assigned_from_json()
{


    bourne::json input =
    {
        "col", "hello"
    };

    ServerAsset obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCol().c_str());






}


void test_ServerAsset_unit_start_is_assigned_from_json()
{


    bourne::json input =
    {
        "unit_start", "hello"
    };

    ServerAsset obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getUnitStart().c_str());






}


void test_ServerAsset_unit_end_is_assigned_from_json()
{


    bourne::json input =
    {
        "unit_end", "hello"
    };

    ServerAsset obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getUnitEnd().c_str());






}


void test_ServerAsset_unit_sub_is_assigned_from_json()
{


    bourne::json input =
    {
        "unit_sub", "hello"
    };

    ServerAsset obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getUnitSub().c_str());






}


void test_ServerAsset_ipmi_mac_is_assigned_from_json()
{


    bourne::json input =
    {
        "ipmi_mac", "hello"
    };

    ServerAsset obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getIpmiMac().c_str());






}


void test_ServerAsset_ipmi_ip_is_assigned_from_json()
{


    bourne::json input =
    {
        "ipmi_ip", "hello"
    };

    ServerAsset obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getIpmiIp().c_str());






}


void test_ServerAsset_ipmi_working_is_assigned_from_json()
{


    bourne::json input =
    {
        "ipmi_working", "hello"
    };

    ServerAsset obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getIpmiWorking().c_str());






}


void test_ServerAsset_company_is_assigned_from_json()
{


    bourne::json input =
    {
        "company", "hello"
    };

    ServerAsset obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCompany().c_str());






}


void test_ServerAsset_comments_is_assigned_from_json()
{


    bourne::json input =
    {
        "comments", "hello"
    };

    ServerAsset obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getComments().c_str());






}


void test_ServerAsset_make_is_assigned_from_json()
{


    bourne::json input =
    {
        "make", "hello"
    };

    ServerAsset obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getMake().c_str());






}


void test_ServerAsset_model_is_assigned_from_json()
{


    bourne::json input =
    {
        "model", "hello"
    };

    ServerAsset obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getModel().c_str());






}


void test_ServerAsset_description_is_assigned_from_json()
{


    bourne::json input =
    {
        "description", "hello"
    };

    ServerAsset obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getDescription().c_str());






}


void test_ServerAsset_customer_id_is_assigned_from_json()
{


    bourne::json input =
    {
        "customer_id", "hello"
    };

    ServerAsset obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCustomerId().c_str());






}


void test_ServerAsset_external_id_is_assigned_from_json()
{


    bourne::json input =
    {
        "external_id", "hello"
    };

    ServerAsset obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getExternalId().c_str());






}


void test_ServerAsset_billing_status_is_assigned_from_json()
{


    bourne::json input =
    {
        "billing_status", "hello"
    };

    ServerAsset obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getBillingStatus().c_str());






}


void test_ServerAsset_overdue_is_assigned_from_json()
{


    bourne::json input =
    {
        "overdue", "hello"
    };

    ServerAsset obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getOverdue().c_str());






}


void test_ServerAsset_asset_id_is_assigned_from_json()
{


    bourne::json input =
    {
        "asset_id", "hello"
    };

    ServerAsset obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getAssetId().c_str());






}


void test_ServerAsset_asset_name_is_assigned_from_json()
{


    bourne::json input =
    {
        "asset_name", "hello"
    };

    ServerAsset obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getAssetName().c_str());






}


void test_ServerAsset_rack_id_is_assigned_from_json()
{


    bourne::json input =
    {
        "rack_id", "hello"
    };

    ServerAsset obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getRackId().c_str());






}


void test_ServerAsset_rack_name_is_assigned_from_json()
{


    bourne::json input =
    {
        "rack_name", "hello"
    };

    ServerAsset obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getRackName().c_str());






}


void test_ServerAsset_rack_location_is_assigned_from_json()
{


    bourne::json input =
    {
        "rack_location", "hello"
    };

    ServerAsset obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getRackLocation().c_str());






}


void test_ServerAsset_rack_size_is_assigned_from_json()
{


    bourne::json input =
    {
        "rack_size", "hello"
    };

    ServerAsset obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getRackSize().c_str());






}


void test_ServerAsset_rack_x_is_assigned_from_json()
{


    bourne::json input =
    {
        "rack_x", "hello"
    };

    ServerAsset obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getRackX().c_str());






}


void test_ServerAsset_rack_y_is_assigned_from_json()
{


    bourne::json input =
    {
        "rack_y", "hello"
    };

    ServerAsset obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getRackY().c_str());






}






void test_ServerAsset_mac_is_assigned_from_json()
{


    bourne::json input =
    {
        "mac", "hello"
    };

    ServerAsset obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getMac().c_str());






}


void test_ServerAsset_ipmi_admin_username_is_assigned_from_json()
{


    bourne::json input =
    {
        "ipmi_admin_username", "hello"
    };

    ServerAsset obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getIpmiAdminUsername().c_str());






}


void test_ServerAsset_ipmi_admin_password_is_assigned_from_json()
{


    bourne::json input =
    {
        "ipmi_admin_password", "hello"
    };

    ServerAsset obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getIpmiAdminPassword().c_str());






}


void test_ServerAsset_ipmi_client_username_is_assigned_from_json()
{


    bourne::json input =
    {
        "ipmi_client_username", "hello"
    };

    ServerAsset obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getIpmiClientUsername().c_str());






}


void test_ServerAsset_ipmi_client_password_is_assigned_from_json()
{


    bourne::json input =
    {
        "ipmi_client_password", "hello"
    };

    ServerAsset obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getIpmiClientPassword().c_str());






}


void test_ServerAsset_ipmi_updated_is_assigned_from_json()
{


    bourne::json input =
    {
        "ipmi_updated", "hello"
    };

    ServerAsset obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getIpmiUpdated().c_str());






}


void test_ServerAsset_create_timestamp_is_assigned_from_json()
{


    bourne::json input =
    {
        "create_timestamp", "hello"
    };

    ServerAsset obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCreateTimestamp().c_str());






}


void test_ServerAsset_update_timestamp_is_assigned_from_json()
{


    bourne::json input =
    {
        "update_timestamp", "hello"
    };

    ServerAsset obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getUpdateTimestamp().c_str());






}


void test_ServerAsset_comment_is_assigned_from_json()
{


    bourne::json input =
    {
        "comment", "hello"
    };

    ServerAsset obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getComment().c_str());






}



void test_ServerAsset_id_is_converted_to_json()
{
    bourne::json input =
    {
        "id", 1
    };

    ServerAsset obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["id"] == output["id"]);




}


void test_ServerAsset_order_id_is_converted_to_json()
{

    bourne::json input =
    {
        "order_id", "hello"
    };

    ServerAsset obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["order_id"] == output["order_id"]);



}


void test_ServerAsset_hostname_is_converted_to_json()
{

    bourne::json input =
    {
        "hostname", "hello"
    };

    ServerAsset obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["hostname"] == output["hostname"]);



}


void test_ServerAsset_status_is_converted_to_json()
{

    bourne::json input =
    {
        "status", "hello"
    };

    ServerAsset obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["status"] == output["status"]);



}


void test_ServerAsset_primary_ipv4_is_converted_to_json()
{

    bourne::json input =
    {
        "primary_ipv4", "hello"
    };

    ServerAsset obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["primary_ipv4"] == output["primary_ipv4"]);



}


void test_ServerAsset_primary_ipv6_is_converted_to_json()
{

    bourne::json input =
    {
        "primary_ipv6", "hello"
    };

    ServerAsset obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["primary_ipv6"] == output["primary_ipv6"]);



}


void test_ServerAsset_datacenter_is_converted_to_json()
{

    bourne::json input =
    {
        "datacenter", "hello"
    };

    ServerAsset obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["datacenter"] == output["datacenter"]);



}


void test_ServerAsset_type_id_is_converted_to_json()
{

    bourne::json input =
    {
        "type_id", "hello"
    };

    ServerAsset obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["type_id"] == output["type_id"]);



}


void test_ServerAsset_asset_tag_is_converted_to_json()
{

    bourne::json input =
    {
        "asset_tag", "hello"
    };

    ServerAsset obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["asset_tag"] == output["asset_tag"]);



}


void test_ServerAsset_rack_is_converted_to_json()
{

    bourne::json input =
    {
        "rack", "hello"
    };

    ServerAsset obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["rack"] == output["rack"]);



}


void test_ServerAsset_row_is_converted_to_json()
{

    bourne::json input =
    {
        "row", "hello"
    };

    ServerAsset obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["row"] == output["row"]);



}


void test_ServerAsset_col_is_converted_to_json()
{

    bourne::json input =
    {
        "col", "hello"
    };

    ServerAsset obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["col"] == output["col"]);



}


void test_ServerAsset_unit_start_is_converted_to_json()
{

    bourne::json input =
    {
        "unit_start", "hello"
    };

    ServerAsset obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["unit_start"] == output["unit_start"]);



}


void test_ServerAsset_unit_end_is_converted_to_json()
{

    bourne::json input =
    {
        "unit_end", "hello"
    };

    ServerAsset obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["unit_end"] == output["unit_end"]);



}


void test_ServerAsset_unit_sub_is_converted_to_json()
{

    bourne::json input =
    {
        "unit_sub", "hello"
    };

    ServerAsset obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["unit_sub"] == output["unit_sub"]);



}


void test_ServerAsset_ipmi_mac_is_converted_to_json()
{

    bourne::json input =
    {
        "ipmi_mac", "hello"
    };

    ServerAsset obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["ipmi_mac"] == output["ipmi_mac"]);



}


void test_ServerAsset_ipmi_ip_is_converted_to_json()
{

    bourne::json input =
    {
        "ipmi_ip", "hello"
    };

    ServerAsset obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["ipmi_ip"] == output["ipmi_ip"]);



}


void test_ServerAsset_ipmi_working_is_converted_to_json()
{

    bourne::json input =
    {
        "ipmi_working", "hello"
    };

    ServerAsset obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["ipmi_working"] == output["ipmi_working"]);



}


void test_ServerAsset_company_is_converted_to_json()
{

    bourne::json input =
    {
        "company", "hello"
    };

    ServerAsset obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["company"] == output["company"]);



}


void test_ServerAsset_comments_is_converted_to_json()
{

    bourne::json input =
    {
        "comments", "hello"
    };

    ServerAsset obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["comments"] == output["comments"]);



}


void test_ServerAsset_make_is_converted_to_json()
{

    bourne::json input =
    {
        "make", "hello"
    };

    ServerAsset obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["make"] == output["make"]);



}


void test_ServerAsset_model_is_converted_to_json()
{

    bourne::json input =
    {
        "model", "hello"
    };

    ServerAsset obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["model"] == output["model"]);



}


void test_ServerAsset_description_is_converted_to_json()
{

    bourne::json input =
    {
        "description", "hello"
    };

    ServerAsset obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["description"] == output["description"]);



}


void test_ServerAsset_customer_id_is_converted_to_json()
{

    bourne::json input =
    {
        "customer_id", "hello"
    };

    ServerAsset obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["customer_id"] == output["customer_id"]);



}


void test_ServerAsset_external_id_is_converted_to_json()
{

    bourne::json input =
    {
        "external_id", "hello"
    };

    ServerAsset obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["external_id"] == output["external_id"]);



}


void test_ServerAsset_billing_status_is_converted_to_json()
{

    bourne::json input =
    {
        "billing_status", "hello"
    };

    ServerAsset obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["billing_status"] == output["billing_status"]);



}


void test_ServerAsset_overdue_is_converted_to_json()
{

    bourne::json input =
    {
        "overdue", "hello"
    };

    ServerAsset obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["overdue"] == output["overdue"]);



}


void test_ServerAsset_asset_id_is_converted_to_json()
{

    bourne::json input =
    {
        "asset_id", "hello"
    };

    ServerAsset obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["asset_id"] == output["asset_id"]);



}


void test_ServerAsset_asset_name_is_converted_to_json()
{

    bourne::json input =
    {
        "asset_name", "hello"
    };

    ServerAsset obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["asset_name"] == output["asset_name"]);



}


void test_ServerAsset_rack_id_is_converted_to_json()
{

    bourne::json input =
    {
        "rack_id", "hello"
    };

    ServerAsset obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["rack_id"] == output["rack_id"]);



}


void test_ServerAsset_rack_name_is_converted_to_json()
{

    bourne::json input =
    {
        "rack_name", "hello"
    };

    ServerAsset obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["rack_name"] == output["rack_name"]);



}


void test_ServerAsset_rack_location_is_converted_to_json()
{

    bourne::json input =
    {
        "rack_location", "hello"
    };

    ServerAsset obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["rack_location"] == output["rack_location"]);



}


void test_ServerAsset_rack_size_is_converted_to_json()
{

    bourne::json input =
    {
        "rack_size", "hello"
    };

    ServerAsset obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["rack_size"] == output["rack_size"]);



}


void test_ServerAsset_rack_x_is_converted_to_json()
{

    bourne::json input =
    {
        "rack_x", "hello"
    };

    ServerAsset obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["rack_x"] == output["rack_x"]);



}


void test_ServerAsset_rack_y_is_converted_to_json()
{

    bourne::json input =
    {
        "rack_y", "hello"
    };

    ServerAsset obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["rack_y"] == output["rack_y"]);



}






void test_ServerAsset_mac_is_converted_to_json()
{

    bourne::json input =
    {
        "mac", "hello"
    };

    ServerAsset obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["mac"] == output["mac"]);



}


void test_ServerAsset_ipmi_admin_username_is_converted_to_json()
{

    bourne::json input =
    {
        "ipmi_admin_username", "hello"
    };

    ServerAsset obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["ipmi_admin_username"] == output["ipmi_admin_username"]);



}


void test_ServerAsset_ipmi_admin_password_is_converted_to_json()
{

    bourne::json input =
    {
        "ipmi_admin_password", "hello"
    };

    ServerAsset obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["ipmi_admin_password"] == output["ipmi_admin_password"]);



}


void test_ServerAsset_ipmi_client_username_is_converted_to_json()
{

    bourne::json input =
    {
        "ipmi_client_username", "hello"
    };

    ServerAsset obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["ipmi_client_username"] == output["ipmi_client_username"]);



}


void test_ServerAsset_ipmi_client_password_is_converted_to_json()
{

    bourne::json input =
    {
        "ipmi_client_password", "hello"
    };

    ServerAsset obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["ipmi_client_password"] == output["ipmi_client_password"]);



}


void test_ServerAsset_ipmi_updated_is_converted_to_json()
{

    bourne::json input =
    {
        "ipmi_updated", "hello"
    };

    ServerAsset obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["ipmi_updated"] == output["ipmi_updated"]);



}


void test_ServerAsset_create_timestamp_is_converted_to_json()
{

    bourne::json input =
    {
        "create_timestamp", "hello"
    };

    ServerAsset obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["create_timestamp"] == output["create_timestamp"]);



}


void test_ServerAsset_update_timestamp_is_converted_to_json()
{

    bourne::json input =
    {
        "update_timestamp", "hello"
    };

    ServerAsset obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["update_timestamp"] == output["update_timestamp"]);



}


void test_ServerAsset_comment_is_converted_to_json()
{

    bourne::json input =
    {
        "comment", "hello"
    };

    ServerAsset obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["comment"] == output["comment"]);



}


