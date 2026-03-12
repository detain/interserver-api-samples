
#include "QuickserverServiceMaster.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_QuickserverServiceMaster_qs_id_is_assigned_from_json()
{


    bourne::json input =
    {
        "qs_id", "hello"
    };

    QuickserverServiceMaster obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getQsId().c_str());






}


void test_QuickserverServiceMaster_qs_name_is_assigned_from_json()
{


    bourne::json input =
    {
        "qs_name", "hello"
    };

    QuickserverServiceMaster obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getQsName().c_str());






}


void test_QuickserverServiceMaster_qs_ip_is_assigned_from_json()
{


    bourne::json input =
    {
        "qs_ip", "hello"
    };

    QuickserverServiceMaster obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getQsIp().c_str());






}


void test_QuickserverServiceMaster_qs_type_is_assigned_from_json()
{


    bourne::json input =
    {
        "qs_type", "hello"
    };

    QuickserverServiceMaster obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getQsType().c_str());






}


void test_QuickserverServiceMaster_qs_hdsize_is_assigned_from_json()
{


    bourne::json input =
    {
        "qs_hdsize", "hello"
    };

    QuickserverServiceMaster obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getQsHdsize().c_str());






}


void test_QuickserverServiceMaster_qs_hdfree_is_assigned_from_json()
{


    bourne::json input =
    {
        "qs_hdfree", "hello"
    };

    QuickserverServiceMaster obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getQsHdfree().c_str());






}


void test_QuickserverServiceMaster_qs_bits_is_assigned_from_json()
{


    bourne::json input =
    {
        "qs_bits", "hello"
    };

    QuickserverServiceMaster obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getQsBits().c_str());






}


void test_QuickserverServiceMaster_qs_load_is_assigned_from_json()
{


    bourne::json input =
    {
        "qs_load", "hello"
    };

    QuickserverServiceMaster obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getQsLoad().c_str());






}


void test_QuickserverServiceMaster_qs_ram_is_assigned_from_json()
{


    bourne::json input =
    {
        "qs_ram", "hello"
    };

    QuickserverServiceMaster obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getQsRam().c_str());






}


void test_QuickserverServiceMaster_qs_cpu_model_is_assigned_from_json()
{


    bourne::json input =
    {
        "qs_cpu_model", "hello"
    };

    QuickserverServiceMaster obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getQsCpuModel().c_str());






}


void test_QuickserverServiceMaster_qs_cpu_mhz_is_assigned_from_json()
{


    bourne::json input =
    {
        "qs_cpu_mhz", "hello"
    };

    QuickserverServiceMaster obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getQsCpuMhz().c_str());






}


void test_QuickserverServiceMaster_qs_location_is_assigned_from_json()
{


    bourne::json input =
    {
        "qs_location", "hello"
    };

    QuickserverServiceMaster obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getQsLocation().c_str());






}


void test_QuickserverServiceMaster_qs_available_is_assigned_from_json()
{


    bourne::json input =
    {
        "qs_available", "hello"
    };

    QuickserverServiceMaster obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getQsAvailable().c_str());






}


void test_QuickserverServiceMaster_qs_cost_is_assigned_from_json()
{


    bourne::json input =
    {
        "qs_cost", "hello"
    };

    QuickserverServiceMaster obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getQsCost().c_str());






}


void test_QuickserverServiceMaster_qs_last_update_is_assigned_from_json()
{


    bourne::json input =
    {
        "qs_last_update", "hello"
    };

    QuickserverServiceMaster obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getQsLastUpdate().c_str());






}


void test_QuickserverServiceMaster_qs_cores_is_assigned_from_json()
{


    bourne::json input =
    {
        "qs_cores", "hello"
    };

    QuickserverServiceMaster obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getQsCores().c_str());






}


void test_QuickserverServiceMaster_qs_iowait_is_assigned_from_json()
{


    bourne::json input =
    {
        "qs_iowait", "hello"
    };

    QuickserverServiceMaster obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getQsIowait().c_str());






}


void test_QuickserverServiceMaster_qs_raid_status_is_assigned_from_json()
{


    bourne::json input =
    {
        "qs_raid_status", "hello"
    };

    QuickserverServiceMaster obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getQsRaidStatus().c_str());






}


void test_QuickserverServiceMaster_qs_drive_type_is_assigned_from_json()
{


    bourne::json input =
    {
        "qs_drive_type", "hello"
    };

    QuickserverServiceMaster obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getQsDriveType().c_str());






}


void test_QuickserverServiceMaster_qs_order_is_assigned_from_json()
{


    bourne::json input =
    {
        "qs_order", "hello"
    };

    QuickserverServiceMaster obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getQsOrder().c_str());






}


void test_QuickserverServiceMaster_qs_raid_building_is_assigned_from_json()
{


    bourne::json input =
    {
        "qs_raid_building", "hello"
    };

    QuickserverServiceMaster obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getQsRaidBuilding().c_str());






}


void test_QuickserverServiceMaster_qs_kernel_is_assigned_from_json()
{


    bourne::json input =
    {
        "qs_kernel", "hello"
    };

    QuickserverServiceMaster obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getQsKernel().c_str());






}


void test_QuickserverServiceMaster_qs_ioping_is_assigned_from_json()
{


    bourne::json input =
    {
        "qs_ioping", "hello"
    };

    QuickserverServiceMaster obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getQsIoping().c_str());






}


void test_QuickserverServiceMaster_qs_speed_is_assigned_from_json()
{


    bourne::json input =
    {
        "qs_speed", "hello"
    };

    QuickserverServiceMaster obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getQsSpeed().c_str());






}


void test_QuickserverServiceMaster_qs_distro_is_assigned_from_json()
{


    bourne::json input =
    {
        "qs_distro", "hello"
    };

    QuickserverServiceMaster obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getQsDistro().c_str());






}


void test_QuickserverServiceMaster_qs_distro_version_is_assigned_from_json()
{


    bourne::json input =
    {
        "qs_distro_version", "hello"
    };

    QuickserverServiceMaster obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getQsDistroVersion().c_str());






}


void test_QuickserverServiceMaster_qs_bytes_sec_in_is_assigned_from_json()
{


    bourne::json input =
    {
        "qs_bytes_sec_in", "hello"
    };

    QuickserverServiceMaster obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getQsBytesSecIn().c_str());






}


void test_QuickserverServiceMaster_qs_bytes_sec_out_is_assigned_from_json()
{


    bourne::json input =
    {
        "qs_bytes_sec_out", "hello"
    };

    QuickserverServiceMaster obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getQsBytesSecOut().c_str());






}


void test_QuickserverServiceMaster_qs_packets_sec_in_is_assigned_from_json()
{


    bourne::json input =
    {
        "qs_packets_sec_in", "hello"
    };

    QuickserverServiceMaster obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getQsPacketsSecIn().c_str());






}


void test_QuickserverServiceMaster_qs_packets_sec_out_is_assigned_from_json()
{


    bourne::json input =
    {
        "qs_packets_sec_out", "hello"
    };

    QuickserverServiceMaster obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getQsPacketsSecOut().c_str());






}




void test_QuickserverServiceMaster_qs_cpu_flags_is_assigned_from_json()
{


    bourne::json input =
    {
        "qs_cpu_flags", "hello"
    };

    QuickserverServiceMaster obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getQsCpuFlags().c_str());






}



void test_QuickserverServiceMaster_qs_id_is_converted_to_json()
{

    bourne::json input =
    {
        "qs_id", "hello"
    };

    QuickserverServiceMaster obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["qs_id"] == output["qs_id"]);



}


void test_QuickserverServiceMaster_qs_name_is_converted_to_json()
{

    bourne::json input =
    {
        "qs_name", "hello"
    };

    QuickserverServiceMaster obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["qs_name"] == output["qs_name"]);



}


void test_QuickserverServiceMaster_qs_ip_is_converted_to_json()
{

    bourne::json input =
    {
        "qs_ip", "hello"
    };

    QuickserverServiceMaster obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["qs_ip"] == output["qs_ip"]);



}


void test_QuickserverServiceMaster_qs_type_is_converted_to_json()
{

    bourne::json input =
    {
        "qs_type", "hello"
    };

    QuickserverServiceMaster obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["qs_type"] == output["qs_type"]);



}


void test_QuickserverServiceMaster_qs_hdsize_is_converted_to_json()
{

    bourne::json input =
    {
        "qs_hdsize", "hello"
    };

    QuickserverServiceMaster obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["qs_hdsize"] == output["qs_hdsize"]);



}


void test_QuickserverServiceMaster_qs_hdfree_is_converted_to_json()
{

    bourne::json input =
    {
        "qs_hdfree", "hello"
    };

    QuickserverServiceMaster obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["qs_hdfree"] == output["qs_hdfree"]);



}


void test_QuickserverServiceMaster_qs_bits_is_converted_to_json()
{

    bourne::json input =
    {
        "qs_bits", "hello"
    };

    QuickserverServiceMaster obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["qs_bits"] == output["qs_bits"]);



}


void test_QuickserverServiceMaster_qs_load_is_converted_to_json()
{

    bourne::json input =
    {
        "qs_load", "hello"
    };

    QuickserverServiceMaster obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["qs_load"] == output["qs_load"]);



}


void test_QuickserverServiceMaster_qs_ram_is_converted_to_json()
{

    bourne::json input =
    {
        "qs_ram", "hello"
    };

    QuickserverServiceMaster obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["qs_ram"] == output["qs_ram"]);



}


void test_QuickserverServiceMaster_qs_cpu_model_is_converted_to_json()
{

    bourne::json input =
    {
        "qs_cpu_model", "hello"
    };

    QuickserverServiceMaster obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["qs_cpu_model"] == output["qs_cpu_model"]);



}


void test_QuickserverServiceMaster_qs_cpu_mhz_is_converted_to_json()
{

    bourne::json input =
    {
        "qs_cpu_mhz", "hello"
    };

    QuickserverServiceMaster obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["qs_cpu_mhz"] == output["qs_cpu_mhz"]);



}


void test_QuickserverServiceMaster_qs_location_is_converted_to_json()
{

    bourne::json input =
    {
        "qs_location", "hello"
    };

    QuickserverServiceMaster obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["qs_location"] == output["qs_location"]);



}


void test_QuickserverServiceMaster_qs_available_is_converted_to_json()
{

    bourne::json input =
    {
        "qs_available", "hello"
    };

    QuickserverServiceMaster obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["qs_available"] == output["qs_available"]);



}


void test_QuickserverServiceMaster_qs_cost_is_converted_to_json()
{

    bourne::json input =
    {
        "qs_cost", "hello"
    };

    QuickserverServiceMaster obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["qs_cost"] == output["qs_cost"]);



}


void test_QuickserverServiceMaster_qs_last_update_is_converted_to_json()
{

    bourne::json input =
    {
        "qs_last_update", "hello"
    };

    QuickserverServiceMaster obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["qs_last_update"] == output["qs_last_update"]);



}


void test_QuickserverServiceMaster_qs_cores_is_converted_to_json()
{

    bourne::json input =
    {
        "qs_cores", "hello"
    };

    QuickserverServiceMaster obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["qs_cores"] == output["qs_cores"]);



}


void test_QuickserverServiceMaster_qs_iowait_is_converted_to_json()
{

    bourne::json input =
    {
        "qs_iowait", "hello"
    };

    QuickserverServiceMaster obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["qs_iowait"] == output["qs_iowait"]);



}


void test_QuickserverServiceMaster_qs_raid_status_is_converted_to_json()
{

    bourne::json input =
    {
        "qs_raid_status", "hello"
    };

    QuickserverServiceMaster obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["qs_raid_status"] == output["qs_raid_status"]);



}


void test_QuickserverServiceMaster_qs_drive_type_is_converted_to_json()
{

    bourne::json input =
    {
        "qs_drive_type", "hello"
    };

    QuickserverServiceMaster obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["qs_drive_type"] == output["qs_drive_type"]);



}


void test_QuickserverServiceMaster_qs_order_is_converted_to_json()
{

    bourne::json input =
    {
        "qs_order", "hello"
    };

    QuickserverServiceMaster obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["qs_order"] == output["qs_order"]);



}


void test_QuickserverServiceMaster_qs_raid_building_is_converted_to_json()
{

    bourne::json input =
    {
        "qs_raid_building", "hello"
    };

    QuickserverServiceMaster obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["qs_raid_building"] == output["qs_raid_building"]);



}


void test_QuickserverServiceMaster_qs_kernel_is_converted_to_json()
{

    bourne::json input =
    {
        "qs_kernel", "hello"
    };

    QuickserverServiceMaster obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["qs_kernel"] == output["qs_kernel"]);



}


void test_QuickserverServiceMaster_qs_ioping_is_converted_to_json()
{

    bourne::json input =
    {
        "qs_ioping", "hello"
    };

    QuickserverServiceMaster obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["qs_ioping"] == output["qs_ioping"]);



}


void test_QuickserverServiceMaster_qs_speed_is_converted_to_json()
{

    bourne::json input =
    {
        "qs_speed", "hello"
    };

    QuickserverServiceMaster obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["qs_speed"] == output["qs_speed"]);



}


void test_QuickserverServiceMaster_qs_distro_is_converted_to_json()
{

    bourne::json input =
    {
        "qs_distro", "hello"
    };

    QuickserverServiceMaster obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["qs_distro"] == output["qs_distro"]);



}


void test_QuickserverServiceMaster_qs_distro_version_is_converted_to_json()
{

    bourne::json input =
    {
        "qs_distro_version", "hello"
    };

    QuickserverServiceMaster obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["qs_distro_version"] == output["qs_distro_version"]);



}


void test_QuickserverServiceMaster_qs_bytes_sec_in_is_converted_to_json()
{

    bourne::json input =
    {
        "qs_bytes_sec_in", "hello"
    };

    QuickserverServiceMaster obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["qs_bytes_sec_in"] == output["qs_bytes_sec_in"]);



}


void test_QuickserverServiceMaster_qs_bytes_sec_out_is_converted_to_json()
{

    bourne::json input =
    {
        "qs_bytes_sec_out", "hello"
    };

    QuickserverServiceMaster obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["qs_bytes_sec_out"] == output["qs_bytes_sec_out"]);



}


void test_QuickserverServiceMaster_qs_packets_sec_in_is_converted_to_json()
{

    bourne::json input =
    {
        "qs_packets_sec_in", "hello"
    };

    QuickserverServiceMaster obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["qs_packets_sec_in"] == output["qs_packets_sec_in"]);



}


void test_QuickserverServiceMaster_qs_packets_sec_out_is_converted_to_json()
{

    bourne::json input =
    {
        "qs_packets_sec_out", "hello"
    };

    QuickserverServiceMaster obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["qs_packets_sec_out"] == output["qs_packets_sec_out"]);



}




void test_QuickserverServiceMaster_qs_cpu_flags_is_converted_to_json()
{

    bourne::json input =
    {
        "qs_cpu_flags", "hello"
    };

    QuickserverServiceMaster obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["qs_cpu_flags"] == output["qs_cpu_flags"]);



}


