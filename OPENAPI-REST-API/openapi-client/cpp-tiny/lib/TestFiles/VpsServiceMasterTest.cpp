
#include "VpsServiceMaster.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_VpsServiceMaster_vps_id_is_assigned_from_json()
{


    bourne::json input =
    {
        "vps_id", "hello"
    };

    VpsServiceMaster obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getVpsId().c_str());






}


void test_VpsServiceMaster_vps_name_is_assigned_from_json()
{


    bourne::json input =
    {
        "vps_name", "hello"
    };

    VpsServiceMaster obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getVpsName().c_str());






}


void test_VpsServiceMaster_vps_ip_is_assigned_from_json()
{


    bourne::json input =
    {
        "vps_ip", "hello"
    };

    VpsServiceMaster obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getVpsIp().c_str());






}


void test_VpsServiceMaster_vps_type_is_assigned_from_json()
{


    bourne::json input =
    {
        "vps_type", "hello"
    };

    VpsServiceMaster obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getVpsType().c_str());






}


void test_VpsServiceMaster_vps_hdsize_is_assigned_from_json()
{


    bourne::json input =
    {
        "vps_hdsize", "hello"
    };

    VpsServiceMaster obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getVpsHdsize().c_str());






}


void test_VpsServiceMaster_vps_hdfree_is_assigned_from_json()
{


    bourne::json input =
    {
        "vps_hdfree", "hello"
    };

    VpsServiceMaster obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getVpsHdfree().c_str());






}


void test_VpsServiceMaster_vps_bits_is_assigned_from_json()
{


    bourne::json input =
    {
        "vps_bits", "hello"
    };

    VpsServiceMaster obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getVpsBits().c_str());






}


void test_VpsServiceMaster_vps_load_is_assigned_from_json()
{


    bourne::json input =
    {
        "vps_load", "hello"
    };

    VpsServiceMaster obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getVpsLoad().c_str());






}


void test_VpsServiceMaster_vps_ram_is_assigned_from_json()
{


    bourne::json input =
    {
        "vps_ram", "hello"
    };

    VpsServiceMaster obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getVpsRam().c_str());






}


void test_VpsServiceMaster_vps_cpu_model_is_assigned_from_json()
{


    bourne::json input =
    {
        "vps_cpu_model", "hello"
    };

    VpsServiceMaster obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getVpsCpuModel().c_str());






}


void test_VpsServiceMaster_vps_cpu_mhz_is_assigned_from_json()
{


    bourne::json input =
    {
        "vps_cpu_mhz", "hello"
    };

    VpsServiceMaster obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getVpsCpuMhz().c_str());






}


void test_VpsServiceMaster_vps_location_is_assigned_from_json()
{


    bourne::json input =
    {
        "vps_location", "hello"
    };

    VpsServiceMaster obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getVpsLocation().c_str());






}


void test_VpsServiceMaster_vps_last_update_is_assigned_from_json()
{


    bourne::json input =
    {
        "vps_last_update", "hello"
    };

    VpsServiceMaster obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getVpsLastUpdate().c_str());






}


void test_VpsServiceMaster_vps_raid_building_is_assigned_from_json()
{


    bourne::json input =
    {
        "vps_raid_building", "hello"
    };

    VpsServiceMaster obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getVpsRaidBuilding().c_str());






}


void test_VpsServiceMaster_vps_kernel_is_assigned_from_json()
{


    bourne::json input =
    {
        "vps_kernel", "hello"
    };

    VpsServiceMaster obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getVpsKernel().c_str());






}


void test_VpsServiceMaster_vps_available_is_assigned_from_json()
{


    bourne::json input =
    {
        "vps_available", "hello"
    };

    VpsServiceMaster obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getVpsAvailable().c_str());






}


void test_VpsServiceMaster_vps_cores_is_assigned_from_json()
{


    bourne::json input =
    {
        "vps_cores", "hello"
    };

    VpsServiceMaster obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getVpsCores().c_str());






}


void test_VpsServiceMaster_vps_iowait_is_assigned_from_json()
{


    bourne::json input =
    {
        "vps_iowait", "hello"
    };

    VpsServiceMaster obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getVpsIowait().c_str());






}


void test_VpsServiceMaster_vps_raid_status_is_assigned_from_json()
{


    bourne::json input =
    {
        "vps_raid_status", "hello"
    };

    VpsServiceMaster obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getVpsRaidStatus().c_str());






}


void test_VpsServiceMaster_vps_mounts_is_assigned_from_json()
{


    bourne::json input =
    {
        "vps_mounts", "hello"
    };

    VpsServiceMaster obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getVpsMounts().c_str());






}


void test_VpsServiceMaster_vps_server_max_is_assigned_from_json()
{


    bourne::json input =
    {
        "vps_server_max", "hello"
    };

    VpsServiceMaster obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getVpsServerMax().c_str());






}


void test_VpsServiceMaster_vps_server_max_slices_is_assigned_from_json()
{


    bourne::json input =
    {
        "vps_server_max_slices", "hello"
    };

    VpsServiceMaster obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getVpsServerMaxSlices().c_str());






}


void test_VpsServiceMaster_vps_drive_type_is_assigned_from_json()
{


    bourne::json input =
    {
        "vps_drive_type", "hello"
    };

    VpsServiceMaster obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getVpsDriveType().c_str());






}


void test_VpsServiceMaster_vps_order_is_assigned_from_json()
{


    bourne::json input =
    {
        "vps_order", "hello"
    };

    VpsServiceMaster obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getVpsOrder().c_str());






}



void test_VpsServiceMaster_vps_id_is_converted_to_json()
{

    bourne::json input =
    {
        "vps_id", "hello"
    };

    VpsServiceMaster obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["vps_id"] == output["vps_id"]);



}


void test_VpsServiceMaster_vps_name_is_converted_to_json()
{

    bourne::json input =
    {
        "vps_name", "hello"
    };

    VpsServiceMaster obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["vps_name"] == output["vps_name"]);



}


void test_VpsServiceMaster_vps_ip_is_converted_to_json()
{

    bourne::json input =
    {
        "vps_ip", "hello"
    };

    VpsServiceMaster obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["vps_ip"] == output["vps_ip"]);



}


void test_VpsServiceMaster_vps_type_is_converted_to_json()
{

    bourne::json input =
    {
        "vps_type", "hello"
    };

    VpsServiceMaster obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["vps_type"] == output["vps_type"]);



}


void test_VpsServiceMaster_vps_hdsize_is_converted_to_json()
{

    bourne::json input =
    {
        "vps_hdsize", "hello"
    };

    VpsServiceMaster obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["vps_hdsize"] == output["vps_hdsize"]);



}


void test_VpsServiceMaster_vps_hdfree_is_converted_to_json()
{

    bourne::json input =
    {
        "vps_hdfree", "hello"
    };

    VpsServiceMaster obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["vps_hdfree"] == output["vps_hdfree"]);



}


void test_VpsServiceMaster_vps_bits_is_converted_to_json()
{

    bourne::json input =
    {
        "vps_bits", "hello"
    };

    VpsServiceMaster obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["vps_bits"] == output["vps_bits"]);



}


void test_VpsServiceMaster_vps_load_is_converted_to_json()
{

    bourne::json input =
    {
        "vps_load", "hello"
    };

    VpsServiceMaster obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["vps_load"] == output["vps_load"]);



}


void test_VpsServiceMaster_vps_ram_is_converted_to_json()
{

    bourne::json input =
    {
        "vps_ram", "hello"
    };

    VpsServiceMaster obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["vps_ram"] == output["vps_ram"]);



}


void test_VpsServiceMaster_vps_cpu_model_is_converted_to_json()
{

    bourne::json input =
    {
        "vps_cpu_model", "hello"
    };

    VpsServiceMaster obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["vps_cpu_model"] == output["vps_cpu_model"]);



}


void test_VpsServiceMaster_vps_cpu_mhz_is_converted_to_json()
{

    bourne::json input =
    {
        "vps_cpu_mhz", "hello"
    };

    VpsServiceMaster obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["vps_cpu_mhz"] == output["vps_cpu_mhz"]);



}


void test_VpsServiceMaster_vps_location_is_converted_to_json()
{

    bourne::json input =
    {
        "vps_location", "hello"
    };

    VpsServiceMaster obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["vps_location"] == output["vps_location"]);



}


void test_VpsServiceMaster_vps_last_update_is_converted_to_json()
{

    bourne::json input =
    {
        "vps_last_update", "hello"
    };

    VpsServiceMaster obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["vps_last_update"] == output["vps_last_update"]);



}


void test_VpsServiceMaster_vps_raid_building_is_converted_to_json()
{

    bourne::json input =
    {
        "vps_raid_building", "hello"
    };

    VpsServiceMaster obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["vps_raid_building"] == output["vps_raid_building"]);



}


void test_VpsServiceMaster_vps_kernel_is_converted_to_json()
{

    bourne::json input =
    {
        "vps_kernel", "hello"
    };

    VpsServiceMaster obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["vps_kernel"] == output["vps_kernel"]);



}


void test_VpsServiceMaster_vps_available_is_converted_to_json()
{

    bourne::json input =
    {
        "vps_available", "hello"
    };

    VpsServiceMaster obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["vps_available"] == output["vps_available"]);



}


void test_VpsServiceMaster_vps_cores_is_converted_to_json()
{

    bourne::json input =
    {
        "vps_cores", "hello"
    };

    VpsServiceMaster obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["vps_cores"] == output["vps_cores"]);



}


void test_VpsServiceMaster_vps_iowait_is_converted_to_json()
{

    bourne::json input =
    {
        "vps_iowait", "hello"
    };

    VpsServiceMaster obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["vps_iowait"] == output["vps_iowait"]);



}


void test_VpsServiceMaster_vps_raid_status_is_converted_to_json()
{

    bourne::json input =
    {
        "vps_raid_status", "hello"
    };

    VpsServiceMaster obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["vps_raid_status"] == output["vps_raid_status"]);



}


void test_VpsServiceMaster_vps_mounts_is_converted_to_json()
{

    bourne::json input =
    {
        "vps_mounts", "hello"
    };

    VpsServiceMaster obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["vps_mounts"] == output["vps_mounts"]);



}


void test_VpsServiceMaster_vps_server_max_is_converted_to_json()
{

    bourne::json input =
    {
        "vps_server_max", "hello"
    };

    VpsServiceMaster obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["vps_server_max"] == output["vps_server_max"]);



}


void test_VpsServiceMaster_vps_server_max_slices_is_converted_to_json()
{

    bourne::json input =
    {
        "vps_server_max_slices", "hello"
    };

    VpsServiceMaster obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["vps_server_max_slices"] == output["vps_server_max_slices"]);



}


void test_VpsServiceMaster_vps_drive_type_is_converted_to_json()
{

    bourne::json input =
    {
        "vps_drive_type", "hello"
    };

    VpsServiceMaster obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["vps_drive_type"] == output["vps_drive_type"]);



}


void test_VpsServiceMaster_vps_order_is_converted_to_json()
{

    bourne::json input =
    {
        "vps_order", "hello"
    };

    VpsServiceMaster obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["vps_order"] == output["vps_order"]);



}


