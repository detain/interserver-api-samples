
#include "BackupRow.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_BackupRow_backup_id_is_assigned_from_json()
{


    bourne::json input =
    {
        "backup_id", "hello"
    };

    BackupRow obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getBackupId().c_str());






}


void test_BackupRow_backup_name_is_assigned_from_json()
{


    bourne::json input =
    {
        "backup_name", "hello"
    };

    BackupRow obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getBackupName().c_str());






}


void test_BackupRow_backup_cost_is_assigned_from_json()
{


    bourne::json input =
    {
        "backup_cost", "hello"
    };

    BackupRow obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getBackupCost().c_str());






}


void test_BackupRow_backup_username_is_assigned_from_json()
{


    bourne::json input =
    {
        "backup_username", "hello"
    };

    BackupRow obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getBackupUsername().c_str());






}


void test_BackupRow_backup_status_is_assigned_from_json()
{


    bourne::json input =
    {
        "backup_status", "hello"
    };

    BackupRow obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getBackupStatus().c_str());






}


void test_BackupRow_services_name_is_assigned_from_json()
{


    bourne::json input =
    {
        "services_name", "hello"
    };

    BackupRow obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getServicesName().c_str());






}



void test_BackupRow_backup_id_is_converted_to_json()
{

    bourne::json input =
    {
        "backup_id", "hello"
    };

    BackupRow obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["backup_id"] == output["backup_id"]);



}


void test_BackupRow_backup_name_is_converted_to_json()
{

    bourne::json input =
    {
        "backup_name", "hello"
    };

    BackupRow obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["backup_name"] == output["backup_name"]);



}


void test_BackupRow_backup_cost_is_converted_to_json()
{

    bourne::json input =
    {
        "backup_cost", "hello"
    };

    BackupRow obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["backup_cost"] == output["backup_cost"]);



}


void test_BackupRow_backup_username_is_converted_to_json()
{

    bourne::json input =
    {
        "backup_username", "hello"
    };

    BackupRow obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["backup_username"] == output["backup_username"]);



}


void test_BackupRow_backup_status_is_converted_to_json()
{

    bourne::json input =
    {
        "backup_status", "hello"
    };

    BackupRow obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["backup_status"] == output["backup_status"]);



}


void test_BackupRow_services_name_is_converted_to_json()
{

    bourne::json input =
    {
        "services_name", "hello"
    };

    BackupRow obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["services_name"] == output["services_name"]);



}


