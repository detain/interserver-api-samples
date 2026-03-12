
#include "MailTutorialsTableRow.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_MailTutorialsTableRow_desc_is_assigned_from_json()
{


    bourne::json input =
    {
        "desc", "hello"
    };

    MailTutorialsTableRow obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getDesc().c_str());






}


void test_MailTutorialsTableRow_value_is_assigned_from_json()
{


    bourne::json input =
    {
        "value", "hello"
    };

    MailTutorialsTableRow obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getValue().c_str());






}



void test_MailTutorialsTableRow_desc_is_converted_to_json()
{

    bourne::json input =
    {
        "desc", "hello"
    };

    MailTutorialsTableRow obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["desc"] == output["desc"]);



}


void test_MailTutorialsTableRow_value_is_converted_to_json()
{

    bourne::json input =
    {
        "value", "hello"
    };

    MailTutorialsTableRow obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["value"] == output["value"]);



}


