
#include "MailBlockRspamd.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_MailBlockRspamd_from_is_assigned_from_json()
{


    bourne::json input =
    {
        "from", "hello"
    };

    MailBlockRspamd obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getFrom().c_str());






}


void test_MailBlockRspamd_subject_is_assigned_from_json()
{


    bourne::json input =
    {
        "subject", "hello"
    };

    MailBlockRspamd obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getSubject().c_str());






}



void test_MailBlockRspamd_from_is_converted_to_json()
{

    bourne::json input =
    {
        "from", "hello"
    };

    MailBlockRspamd obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["from"] == output["from"]);



}


void test_MailBlockRspamd_subject_is_converted_to_json()
{

    bourne::json input =
    {
        "subject", "hello"
    };

    MailBlockRspamd obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["subject"] == output["subject"]);



}


