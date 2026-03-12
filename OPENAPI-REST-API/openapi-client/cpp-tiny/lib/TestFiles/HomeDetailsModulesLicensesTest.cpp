
#include "HomeDetailsModulesLicenses.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_HomeDetailsModulesLicenses_icon_is_assigned_from_json()
{


    bourne::json input =
    {
        "icon", "hello"
    };

    HomeDetailsModulesLicenses obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getIcon().c_str());






}


void test_HomeDetailsModulesLicenses_view_link_is_assigned_from_json()
{


    bourne::json input =
    {
        "view_link", "hello"
    };

    HomeDetailsModulesLicenses obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getViewLink().c_str());






}


void test_HomeDetailsModulesLicenses_heading_is_assigned_from_json()
{


    bourne::json input =
    {
        "heading", "hello"
    };

    HomeDetailsModulesLicenses obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getHeading().c_str());






}


void test_HomeDetailsModulesLicenses_buy_link_is_assigned_from_json()
{


    bourne::json input =
    {
        "buy_link", "hello"
    };

    HomeDetailsModulesLicenses obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getBuyLink().c_str());






}


void test_HomeDetailsModulesLicenses_list_link_is_assigned_from_json()
{


    bourne::json input =
    {
        "list_link", "hello"
    };

    HomeDetailsModulesLicenses obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getListLink().c_str());






}



void test_HomeDetailsModulesLicenses_icon_is_converted_to_json()
{

    bourne::json input =
    {
        "icon", "hello"
    };

    HomeDetailsModulesLicenses obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["icon"] == output["icon"]);



}


void test_HomeDetailsModulesLicenses_view_link_is_converted_to_json()
{

    bourne::json input =
    {
        "view_link", "hello"
    };

    HomeDetailsModulesLicenses obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["view_link"] == output["view_link"]);



}


void test_HomeDetailsModulesLicenses_heading_is_converted_to_json()
{

    bourne::json input =
    {
        "heading", "hello"
    };

    HomeDetailsModulesLicenses obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["heading"] == output["heading"]);



}


void test_HomeDetailsModulesLicenses_buy_link_is_converted_to_json()
{

    bourne::json input =
    {
        "buy_link", "hello"
    };

    HomeDetailsModulesLicenses obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["buy_link"] == output["buy_link"]);



}


void test_HomeDetailsModulesLicenses_list_link_is_converted_to_json()
{

    bourne::json input =
    {
        "list_link", "hello"
    };

    HomeDetailsModulesLicenses obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["list_link"] == output["list_link"]);



}


