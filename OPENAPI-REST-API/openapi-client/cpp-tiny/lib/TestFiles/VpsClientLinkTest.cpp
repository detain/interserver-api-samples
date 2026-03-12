
#include "VpsClientLink.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_VpsClientLink_label_is_assigned_from_json()
{


    bourne::json input =
    {
        "label", "hello"
    };

    VpsClientLink obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getLabel().c_str());






}


void test_VpsClientLink_link_is_assigned_from_json()
{


    bourne::json input =
    {
        "link", "hello"
    };

    VpsClientLink obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getLink().c_str());






}


void test_VpsClientLink_icon_is_assigned_from_json()
{


    bourne::json input =
    {
        "icon", "hello"
    };

    VpsClientLink obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getIcon().c_str());






}


void test_VpsClientLink_icon_text_is_assigned_from_json()
{


    bourne::json input =
    {
        "icon_text", "hello"
    };

    VpsClientLink obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getIconText().c_str());






}


void test_VpsClientLink_help_text_is_assigned_from_json()
{


    bourne::json input =
    {
        "help_text", "hello"
    };

    VpsClientLink obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getHelpText().c_str());






}



void test_VpsClientLink_label_is_converted_to_json()
{

    bourne::json input =
    {
        "label", "hello"
    };

    VpsClientLink obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["label"] == output["label"]);



}


void test_VpsClientLink_link_is_converted_to_json()
{

    bourne::json input =
    {
        "link", "hello"
    };

    VpsClientLink obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["link"] == output["link"]);



}


void test_VpsClientLink_icon_is_converted_to_json()
{

    bourne::json input =
    {
        "icon", "hello"
    };

    VpsClientLink obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["icon"] == output["icon"]);



}


void test_VpsClientLink_icon_text_is_converted_to_json()
{

    bourne::json input =
    {
        "icon_text", "hello"
    };

    VpsClientLink obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["icon_text"] == output["icon_text"]);



}


void test_VpsClientLink_help_text_is_converted_to_json()
{

    bourne::json input =
    {
        "help_text", "hello"
    };

    VpsClientLink obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["help_text"] == output["help_text"]);



}


