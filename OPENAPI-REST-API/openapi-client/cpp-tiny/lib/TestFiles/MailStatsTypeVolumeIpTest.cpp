
#include "MailStatsType_volume_ip.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_MailStatsType_volume_ip_1111_is_assigned_from_json()
{
    bourne::json input =
    {
        "1111", 1
    };

    MailStatsType_volume_ip obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.get1111());








}


void test_MailStatsType_volume_ip_2222_is_assigned_from_json()
{
    bourne::json input =
    {
        "2222", 1
    };

    MailStatsType_volume_ip obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.get2222());








}


void test_MailStatsType_volume_ip_3333_is_assigned_from_json()
{
    bourne::json input =
    {
        "3333", 1
    };

    MailStatsType_volume_ip obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.get3333());








}


void test_MailStatsType_volume_ip_4444_is_assigned_from_json()
{
    bourne::json input =
    {
        "4444", 1
    };

    MailStatsType_volume_ip obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.get4444());








}



void test_MailStatsType_volume_ip_1111_is_converted_to_json()
{
    bourne::json input =
    {
        "1111", 1
    };

    MailStatsType_volume_ip obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["1111"] == output["1111"]);




}


void test_MailStatsType_volume_ip_2222_is_converted_to_json()
{
    bourne::json input =
    {
        "2222", 1
    };

    MailStatsType_volume_ip obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["2222"] == output["2222"]);




}


void test_MailStatsType_volume_ip_3333_is_converted_to_json()
{
    bourne::json input =
    {
        "3333", 1
    };

    MailStatsType_volume_ip obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["3333"] == output["3333"]);




}


void test_MailStatsType_volume_ip_4444_is_converted_to_json()
{
    bourne::json input =
    {
        "4444", 1
    };

    MailStatsType_volume_ip obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["4444"] == output["4444"]);




}


