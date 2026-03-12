
#include "TemplateRequest.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_TemplateRequest_r_template_is_assigned_from_json()
{


    bourne::json input =
    {
        "r_template", "hello"
    };

    TemplateRequest obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getRTemplate().c_str());






}


void test_TemplateRequest_localPassword_is_assigned_from_json()
{


    bourne::json input =
    {
        "localPassword", "hello"
    };

    TemplateRequest obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getLocalPassword().c_str());






}


void test_TemplateRequest_password_is_assigned_from_json()
{


    bourne::json input =
    {
        "password", "hello"
    };

    TemplateRequest obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getPassword().c_str());






}



void test_TemplateRequest_r_template_is_converted_to_json()
{

    bourne::json input =
    {
        "r_template", "hello"
    };

    TemplateRequest obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["r_template"] == output["r_template"]);



}


void test_TemplateRequest_localPassword_is_converted_to_json()
{

    bourne::json input =
    {
        "localPassword", "hello"
    };

    TemplateRequest obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["localPassword"] == output["localPassword"]);



}


void test_TemplateRequest_password_is_converted_to_json()
{

    bourne::json input =
    {
        "password", "hello"
    };

    TemplateRequest obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["password"] == output["password"]);



}


