
#include "BackupServiceMaster.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_BackupServiceMaster_backup_id_is_assigned_from_json()
{
    bourne::json input =
    {
        "backup_id", 1
    };

    BackupServiceMaster obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getBackupId());








}


void test_BackupServiceMaster_backup_name_is_assigned_from_json()
{


    bourne::json input =
    {
        "backup_name", "hello"
    };

    BackupServiceMaster obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getBackupName().c_str());






}


void test_BackupServiceMaster_backup_ip_is_assigned_from_json()
{


    bourne::json input =
    {
        "backup_ip", "hello"
    };

    BackupServiceMaster obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getBackupIp().c_str());






}


void test_BackupServiceMaster_backup_type_is_assigned_from_json()
{
    bourne::json input =
    {
        "backup_type", 1
    };

    BackupServiceMaster obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getBackupType());








}


void test_BackupServiceMaster_backup_hdsize_is_assigned_from_json()
{
    bourne::json input =
    {
        "backup_hdsize", 1
    };

    BackupServiceMaster obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getBackupHdsize());








}


void test_BackupServiceMaster_backup_hdfree_is_assigned_from_json()
{
    bourne::json input =
    {
        "backup_hdfree", 1
    };

    BackupServiceMaster obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getBackupHdfree());








}


void test_BackupServiceMaster_backup_last_update_is_assigned_from_json()
{


    bourne::json input =
    {
        "backup_last_update", "hello"
    };

    BackupServiceMaster obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getBackupLastUpdate().c_str());






}


void test_BackupServiceMaster_backup_available_is_assigned_from_json()
{
    bourne::json input =
    {
        "backup_available", 1
    };

    BackupServiceMaster obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getBackupAvailable());








}


void test_BackupServiceMaster_backup_iowait_is_assigned_from_json()
{
    bourne::json input =
    {
        "backup_iowait", 1
    };

    BackupServiceMaster obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getBackupIowait());








}


void test_BackupServiceMaster_backup_order_is_assigned_from_json()
{
    bourne::json input =
    {
        "backup_order", 1
    };

    BackupServiceMaster obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getBackupOrder());








}



void test_BackupServiceMaster_backup_id_is_converted_to_json()
{
    bourne::json input =
    {
        "backup_id", 1
    };

    BackupServiceMaster obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["backup_id"] == output["backup_id"]);




}


void test_BackupServiceMaster_backup_name_is_converted_to_json()
{

    bourne::json input =
    {
        "backup_name", "hello"
    };

    BackupServiceMaster obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["backup_name"] == output["backup_name"]);



}


void test_BackupServiceMaster_backup_ip_is_converted_to_json()
{

    bourne::json input =
    {
        "backup_ip", "hello"
    };

    BackupServiceMaster obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["backup_ip"] == output["backup_ip"]);



}


void test_BackupServiceMaster_backup_type_is_converted_to_json()
{
    bourne::json input =
    {
        "backup_type", 1
    };

    BackupServiceMaster obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["backup_type"] == output["backup_type"]);




}


void test_BackupServiceMaster_backup_hdsize_is_converted_to_json()
{
    bourne::json input =
    {
        "backup_hdsize", 1
    };

    BackupServiceMaster obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["backup_hdsize"] == output["backup_hdsize"]);




}


void test_BackupServiceMaster_backup_hdfree_is_converted_to_json()
{
    bourne::json input =
    {
        "backup_hdfree", 1
    };

    BackupServiceMaster obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["backup_hdfree"] == output["backup_hdfree"]);




}


void test_BackupServiceMaster_backup_last_update_is_converted_to_json()
{

    bourne::json input =
    {
        "backup_last_update", "hello"
    };

    BackupServiceMaster obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["backup_last_update"] == output["backup_last_update"]);



}


void test_BackupServiceMaster_backup_available_is_converted_to_json()
{
    bourne::json input =
    {
        "backup_available", 1
    };

    BackupServiceMaster obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["backup_available"] == output["backup_available"]);




}


void test_BackupServiceMaster_backup_iowait_is_converted_to_json()
{
    bourne::json input =
    {
        "backup_iowait", 1
    };

    BackupServiceMaster obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["backup_iowait"] == output["backup_iowait"]);




}


void test_BackupServiceMaster_backup_order_is_converted_to_json()
{
    bourne::json input =
    {
        "backup_order", 1
    };

    BackupServiceMaster obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["backup_order"] == output["backup_order"]);




}


