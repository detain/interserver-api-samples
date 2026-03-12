
#include "LicensesOrderServiceCategories509.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_LicensesOrderServiceCategories509_category_id_is_assigned_from_json()
{


    bourne::json input =
    {
        "category_id", "hello"
    };

    LicensesOrderServiceCategories509 obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCategoryId().c_str());






}


void test_LicensesOrderServiceCategories509_category_name_is_assigned_from_json()
{


    bourne::json input =
    {
        "category_name", "hello"
    };

    LicensesOrderServiceCategories509 obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCategoryName().c_str());






}


void test_LicensesOrderServiceCategories509_category_tag_is_assigned_from_json()
{


    bourne::json input =
    {
        "category_tag", "hello"
    };

    LicensesOrderServiceCategories509 obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCategoryTag().c_str());






}


void test_LicensesOrderServiceCategories509_category_module_is_assigned_from_json()
{


    bourne::json input =
    {
        "category_module", "hello"
    };

    LicensesOrderServiceCategories509 obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCategoryModule().c_str());






}



void test_LicensesOrderServiceCategories509_category_id_is_converted_to_json()
{

    bourne::json input =
    {
        "category_id", "hello"
    };

    LicensesOrderServiceCategories509 obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["category_id"] == output["category_id"]);



}


void test_LicensesOrderServiceCategories509_category_name_is_converted_to_json()
{

    bourne::json input =
    {
        "category_name", "hello"
    };

    LicensesOrderServiceCategories509 obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["category_name"] == output["category_name"]);



}


void test_LicensesOrderServiceCategories509_category_tag_is_converted_to_json()
{

    bourne::json input =
    {
        "category_tag", "hello"
    };

    LicensesOrderServiceCategories509 obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["category_tag"] == output["category_tag"]);



}


void test_LicensesOrderServiceCategories509_category_module_is_converted_to_json()
{

    bourne::json input =
    {
        "category_module", "hello"
    };

    LicensesOrderServiceCategories509 obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["category_module"] == output["category_module"]);



}


