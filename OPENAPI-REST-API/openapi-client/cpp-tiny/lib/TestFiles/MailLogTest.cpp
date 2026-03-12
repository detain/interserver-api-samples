
#include "MailLog.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_MailLog_total_is_assigned_from_json()
{
    bourne::json input =
    {
        "total", 1
    };

    MailLog obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getTotal());








}


void test_MailLog_skip_is_assigned_from_json()
{
    bourne::json input =
    {
        "skip", 1
    };

    MailLog obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getSkip());








}


void test_MailLog_limit_is_assigned_from_json()
{
    bourne::json input =
    {
        "limit", 1
    };

    MailLog obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getLimit());








}




void test_MailLog_total_is_converted_to_json()
{
    bourne::json input =
    {
        "total", 1
    };

    MailLog obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["total"] == output["total"]);




}


void test_MailLog_skip_is_converted_to_json()
{
    bourne::json input =
    {
        "skip", 1
    };

    MailLog obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["skip"] == output["skip"]);




}


void test_MailLog_limit_is_converted_to_json()
{
    bourne::json input =
    {
        "limit", 1
    };

    MailLog obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["limit"] == output["limit"]);




}



