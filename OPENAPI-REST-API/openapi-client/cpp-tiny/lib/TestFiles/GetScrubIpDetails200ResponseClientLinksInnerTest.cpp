
#include "GetScrubIpDetails_200_response_client_links_inner.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_GetScrubIpDetails_200_response_client_links_inner_label_is_assigned_from_json()
{


    bourne::json input =
    {
        "label", "hello"
    };

    GetScrubIpDetails_200_response_client_links_inner obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getLabel().c_str());






}


void test_GetScrubIpDetails_200_response_client_links_inner_link_is_assigned_from_json()
{


    bourne::json input =
    {
        "link", "hello"
    };

    GetScrubIpDetails_200_response_client_links_inner obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getLink().c_str());






}


void test_GetScrubIpDetails_200_response_client_links_inner_icon_is_assigned_from_json()
{


    bourne::json input =
    {
        "icon", "hello"
    };

    GetScrubIpDetails_200_response_client_links_inner obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getIcon().c_str());






}


void test_GetScrubIpDetails_200_response_client_links_inner_icon_text_is_assigned_from_json()
{


    bourne::json input =
    {
        "icon_text", "hello"
    };

    GetScrubIpDetails_200_response_client_links_inner obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getIconText().c_str());






}


void test_GetScrubIpDetails_200_response_client_links_inner_help_text_is_assigned_from_json()
{


    bourne::json input =
    {
        "help_text", "hello"
    };

    GetScrubIpDetails_200_response_client_links_inner obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getHelpText().c_str());






}


void test_GetScrubIpDetails_200_response_client_links_inner_other_attr_is_assigned_from_json()
{


    bourne::json input =
    {
        "other_attr", "hello"
    };

    GetScrubIpDetails_200_response_client_links_inner obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getOtherAttr().c_str());






}



void test_GetScrubIpDetails_200_response_client_links_inner_label_is_converted_to_json()
{

    bourne::json input =
    {
        "label", "hello"
    };

    GetScrubIpDetails_200_response_client_links_inner obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["label"] == output["label"]);



}


void test_GetScrubIpDetails_200_response_client_links_inner_link_is_converted_to_json()
{

    bourne::json input =
    {
        "link", "hello"
    };

    GetScrubIpDetails_200_response_client_links_inner obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["link"] == output["link"]);



}


void test_GetScrubIpDetails_200_response_client_links_inner_icon_is_converted_to_json()
{

    bourne::json input =
    {
        "icon", "hello"
    };

    GetScrubIpDetails_200_response_client_links_inner obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["icon"] == output["icon"]);



}


void test_GetScrubIpDetails_200_response_client_links_inner_icon_text_is_converted_to_json()
{

    bourne::json input =
    {
        "icon_text", "hello"
    };

    GetScrubIpDetails_200_response_client_links_inner obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["icon_text"] == output["icon_text"]);



}


void test_GetScrubIpDetails_200_response_client_links_inner_help_text_is_converted_to_json()
{

    bourne::json input =
    {
        "help_text", "hello"
    };

    GetScrubIpDetails_200_response_client_links_inner obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["help_text"] == output["help_text"]);



}


void test_GetScrubIpDetails_200_response_client_links_inner_other_attr_is_converted_to_json()
{

    bourne::json input =
    {
        "other_attr", "hello"
    };

    GetScrubIpDetails_200_response_client_links_inner obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["other_attr"] == output["other_attr"]);



}


