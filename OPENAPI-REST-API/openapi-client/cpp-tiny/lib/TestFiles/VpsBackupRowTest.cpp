
#include "VpsBackupRow.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_VpsBackupRow_type_is_assigned_from_json()
{


    bourne::json input =
    {
        "type", "hello"
    };

    VpsBackupRow obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getType().c_str());






}


void test_VpsBackupRow_service_is_assigned_from_json()
{
    bourne::json input =
    {
        "service", 1
    };

    VpsBackupRow obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getService());








}


void test_VpsBackupRow_name_is_assigned_from_json()
{


    bourne::json input =
    {
        "name", "hello"
    };

    VpsBackupRow obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getName().c_str());






}


void test_VpsBackupRow_size_is_assigned_from_json()
{
    bourne::json input =
    {
        "size", 1
    };

    VpsBackupRow obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getSize());








}


void test_VpsBackupRow_date_is_assigned_from_json()
{
    bourne::json input =
    {
        "date", 1
    };

    VpsBackupRow obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getDate());








}



void test_VpsBackupRow_type_is_converted_to_json()
{

    bourne::json input =
    {
        "type", "hello"
    };

    VpsBackupRow obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["type"] == output["type"]);



}


void test_VpsBackupRow_service_is_converted_to_json()
{
    bourne::json input =
    {
        "service", 1
    };

    VpsBackupRow obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["service"] == output["service"]);




}


void test_VpsBackupRow_name_is_converted_to_json()
{

    bourne::json input =
    {
        "name", "hello"
    };

    VpsBackupRow obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["name"] == output["name"]);



}


void test_VpsBackupRow_size_is_converted_to_json()
{
    bourne::json input =
    {
        "size", 1
    };

    VpsBackupRow obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["size"] == output["size"]);




}


void test_VpsBackupRow_date_is_converted_to_json()
{
    bourne::json input =
    {
        "date", 1
    };

    VpsBackupRow obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["date"] == output["date"]);




}


