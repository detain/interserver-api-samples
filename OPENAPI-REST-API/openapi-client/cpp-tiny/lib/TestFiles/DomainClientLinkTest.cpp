
#include "DomainClientLink.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_DomainClientLink_label_is_assigned_from_json()
{


    bourne::json input =
    {
        "label", "hello"
    };

    DomainClientLink obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getLabel().c_str());






}


void test_DomainClientLink_link_is_assigned_from_json()
{


    bourne::json input =
    {
        "link", "hello"
    };

    DomainClientLink obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getLink().c_str());






}


void test_DomainClientLink_icon_is_assigned_from_json()
{


    bourne::json input =
    {
        "icon", "hello"
    };

    DomainClientLink obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getIcon().c_str());






}


void test_DomainClientLink_icon_text_is_assigned_from_json()
{


    bourne::json input =
    {
        "icon_text", "hello"
    };

    DomainClientLink obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getIconText().c_str());






}


void test_DomainClientLink_help_text_is_assigned_from_json()
{


    bourne::json input =
    {
        "help_text", "hello"
    };

    DomainClientLink obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getHelpText().c_str());






}



void test_DomainClientLink_label_is_converted_to_json()
{

    bourne::json input =
    {
        "label", "hello"
    };

    DomainClientLink obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["label"] == output["label"]);



}


void test_DomainClientLink_link_is_converted_to_json()
{

    bourne::json input =
    {
        "link", "hello"
    };

    DomainClientLink obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["link"] == output["link"]);



}


void test_DomainClientLink_icon_is_converted_to_json()
{

    bourne::json input =
    {
        "icon", "hello"
    };

    DomainClientLink obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["icon"] == output["icon"]);



}


void test_DomainClientLink_icon_text_is_converted_to_json()
{

    bourne::json input =
    {
        "icon_text", "hello"
    };

    DomainClientLink obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["icon_text"] == output["icon_text"]);



}


void test_DomainClientLink_help_text_is_converted_to_json()
{

    bourne::json input =
    {
        "help_text", "hello"
    };

    DomainClientLink obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["help_text"] == output["help_text"]);



}


