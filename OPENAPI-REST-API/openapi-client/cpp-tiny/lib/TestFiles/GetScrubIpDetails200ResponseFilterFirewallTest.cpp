
#include "GetScrubIpDetails_200_response_filter_firewall.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"





void test_GetScrubIpDetails_200_response_filter_firewall_scrub_enabled_is_assigned_from_json()
{
    bourne::json input =
    {
        "scrub_enabled", 1
    };

    GetScrubIpDetails_200_response_filter_firewall obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getScrubEnabled());








}





void test_GetScrubIpDetails_200_response_filter_firewall_scrub_enabled_is_converted_to_json()
{
    bourne::json input =
    {
        "scrub_enabled", 1
    };

    GetScrubIpDetails_200_response_filter_firewall obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["scrub_enabled"] == output["scrub_enabled"]);




}


