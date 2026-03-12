
#include "GetScrubIpDetails_200_response_extraInfoTables_scrub_ips.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_GetScrubIpDetails_200_response_extraInfoTables_scrub_ips_title_is_assigned_from_json()
{


    bourne::json input =
    {
        "title", "hello"
    };

    GetScrubIpDetails_200_response_extraInfoTables_scrub_ips obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getTitle().c_str());






}




void test_GetScrubIpDetails_200_response_extraInfoTables_scrub_ips_title_is_converted_to_json()
{

    bourne::json input =
    {
        "title", "hello"
    };

    GetScrubIpDetails_200_response_extraInfoTables_scrub_ips obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["title"] == output["title"]);



}



