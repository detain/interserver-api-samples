
#include "VpsTemplateRow.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_VpsTemplateRow_template_id_is_assigned_from_json()
{


    bourne::json input =
    {
        "template_id", "hello"
    };

    VpsTemplateRow obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getTemplateId().c_str());






}


void test_VpsTemplateRow_template_type_is_assigned_from_json()
{


    bourne::json input =
    {
        "template_type", "hello"
    };

    VpsTemplateRow obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getTemplateType().c_str());






}


void test_VpsTemplateRow_template_os_is_assigned_from_json()
{


    bourne::json input =
    {
        "template_os", "hello"
    };

    VpsTemplateRow obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getTemplateOs().c_str());






}


void test_VpsTemplateRow_template_version_is_assigned_from_json()
{


    bourne::json input =
    {
        "template_version", "hello"
    };

    VpsTemplateRow obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getTemplateVersion().c_str());






}


void test_VpsTemplateRow_template_bits_is_assigned_from_json()
{


    bourne::json input =
    {
        "template_bits", "hello"
    };

    VpsTemplateRow obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getTemplateBits().c_str());






}


void test_VpsTemplateRow_template_file_is_assigned_from_json()
{


    bourne::json input =
    {
        "template_file", "hello"
    };

    VpsTemplateRow obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getTemplateFile().c_str());






}


void test_VpsTemplateRow_template_available_is_assigned_from_json()
{


    bourne::json input =
    {
        "template_available", "hello"
    };

    VpsTemplateRow obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getTemplateAvailable().c_str());






}


void test_VpsTemplateRow_template_name_is_assigned_from_json()
{


    bourne::json input =
    {
        "template_name", "hello"
    };

    VpsTemplateRow obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getTemplateName().c_str());






}


void test_VpsTemplateRow_template_dir_is_assigned_from_json()
{


    bourne::json input =
    {
        "template_dir", "hello"
    };

    VpsTemplateRow obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getTemplateDir().c_str());






}



void test_VpsTemplateRow_template_id_is_converted_to_json()
{

    bourne::json input =
    {
        "template_id", "hello"
    };

    VpsTemplateRow obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["template_id"] == output["template_id"]);



}


void test_VpsTemplateRow_template_type_is_converted_to_json()
{

    bourne::json input =
    {
        "template_type", "hello"
    };

    VpsTemplateRow obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["template_type"] == output["template_type"]);



}


void test_VpsTemplateRow_template_os_is_converted_to_json()
{

    bourne::json input =
    {
        "template_os", "hello"
    };

    VpsTemplateRow obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["template_os"] == output["template_os"]);



}


void test_VpsTemplateRow_template_version_is_converted_to_json()
{

    bourne::json input =
    {
        "template_version", "hello"
    };

    VpsTemplateRow obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["template_version"] == output["template_version"]);



}


void test_VpsTemplateRow_template_bits_is_converted_to_json()
{

    bourne::json input =
    {
        "template_bits", "hello"
    };

    VpsTemplateRow obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["template_bits"] == output["template_bits"]);



}


void test_VpsTemplateRow_template_file_is_converted_to_json()
{

    bourne::json input =
    {
        "template_file", "hello"
    };

    VpsTemplateRow obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["template_file"] == output["template_file"]);



}


void test_VpsTemplateRow_template_available_is_converted_to_json()
{

    bourne::json input =
    {
        "template_available", "hello"
    };

    VpsTemplateRow obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["template_available"] == output["template_available"]);



}


void test_VpsTemplateRow_template_name_is_converted_to_json()
{

    bourne::json input =
    {
        "template_name", "hello"
    };

    VpsTemplateRow obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["template_name"] == output["template_name"]);



}


void test_VpsTemplateRow_template_dir_is_converted_to_json()
{

    bourne::json input =
    {
        "template_dir", "hello"
    };

    VpsTemplateRow obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["template_dir"] == output["template_dir"]);



}


