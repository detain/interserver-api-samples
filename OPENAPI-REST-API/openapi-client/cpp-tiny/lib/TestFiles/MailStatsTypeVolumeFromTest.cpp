
#include "MailStatsType_volume_from.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_MailStatsType_volume_from_billingsomedomaincom_is_assigned_from_json()
{
    bourne::json input =
    {
        "billingsomedomaincom", 1
    };

    MailStatsType_volume_from obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getBillingsomedomaincom());








}


void test_MailStatsType_volume_from_salessomedomaincom_is_assigned_from_json()
{
    bourne::json input =
    {
        "salessomedomaincom", 1
    };

    MailStatsType_volume_from obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getSalessomedomaincom());








}



void test_MailStatsType_volume_from_billingsomedomaincom_is_converted_to_json()
{
    bourne::json input =
    {
        "billingsomedomaincom", 1
    };

    MailStatsType_volume_from obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["billingsomedomaincom"] == output["billingsomedomaincom"]);




}


void test_MailStatsType_volume_from_salessomedomaincom_is_converted_to_json()
{
    bourne::json input =
    {
        "salessomedomaincom", 1
    };

    MailStatsType_volume_from obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["salessomedomaincom"] == output["salessomedomaincom"]);




}


