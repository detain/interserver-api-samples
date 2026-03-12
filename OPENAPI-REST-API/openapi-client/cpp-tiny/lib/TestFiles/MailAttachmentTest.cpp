
#include "MailAttachment.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_MailAttachment_filename_is_assigned_from_json()
{


    bourne::json input =
    {
        "filename", "hello"
    };

    MailAttachment obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getFilename().c_str());






}


void test_MailAttachment_data_is_assigned_from_json()
{


    bourne::json input =
    {
        "data", "hello"
    };

    MailAttachment obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getData().c_str());






}



void test_MailAttachment_filename_is_converted_to_json()
{

    bourne::json input =
    {
        "filename", "hello"
    };

    MailAttachment obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["filename"] == output["filename"]);



}


void test_MailAttachment_data_is_converted_to_json()
{

    bourne::json input =
    {
        "data", "hello"
    };

    MailAttachment obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["data"] == output["data"]);



}


