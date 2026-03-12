
#include "MailStatsType_volume_to.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_MailStatsType_volume_to_clientdomaincom_is_assigned_from_json()
{
    bourne::json input =
    {
        "clientdomaincom", 1
    };

    MailStatsType_volume_to obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getClientdomaincom());








}


void test_MailStatsType_volume_to_usersitenet_is_assigned_from_json()
{
    bourne::json input =
    {
        "usersitenet", 1
    };

    MailStatsType_volume_to obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getUsersitenet());








}


void test_MailStatsType_volume_to_salescompanycom_is_assigned_from_json()
{
    bourne::json input =
    {
        "salescompanycom", 1
    };

    MailStatsType_volume_to obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getSalescompanycom());








}


void test_MailStatsType_volume_to_clientanothersitecom_is_assigned_from_json()
{
    bourne::json input =
    {
        "clientanothersitecom", 1
    };

    MailStatsType_volume_to obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getClientanothersitecom());








}



void test_MailStatsType_volume_to_clientdomaincom_is_converted_to_json()
{
    bourne::json input =
    {
        "clientdomaincom", 1
    };

    MailStatsType_volume_to obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["clientdomaincom"] == output["clientdomaincom"]);




}


void test_MailStatsType_volume_to_usersitenet_is_converted_to_json()
{
    bourne::json input =
    {
        "usersitenet", 1
    };

    MailStatsType_volume_to obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["usersitenet"] == output["usersitenet"]);




}


void test_MailStatsType_volume_to_salescompanycom_is_converted_to_json()
{
    bourne::json input =
    {
        "salescompanycom", 1
    };

    MailStatsType_volume_to obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["salescompanycom"] == output["salescompanycom"]);




}


void test_MailStatsType_volume_to_clientanothersitecom_is_converted_to_json()
{
    bourne::json input =
    {
        "clientanothersitecom", 1
    };

    MailStatsType_volume_to obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["clientanothersitecom"] == output["clientanothersitecom"]);




}


