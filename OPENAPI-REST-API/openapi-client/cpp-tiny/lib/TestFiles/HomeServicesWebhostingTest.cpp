
#include "Home_services_webhosting.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"




void test_Home_services_webhosting_count_is_assigned_from_json()
{
    bourne::json input =
    {
        "count", 1
    };

    Home_services_webhosting obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getCount());








}




void test_Home_services_webhosting_count_is_converted_to_json()
{
    bourne::json input =
    {
        "count", 1
    };

    Home_services_webhosting obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["count"] == output["count"]);




}


