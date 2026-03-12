
#include "VpsTrafficTotalsSectionResponse.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_VpsTrafficTotalsSectionResponse_in_is_assigned_from_json()
{






    bourne::json input =
    {
        "in", 1
    };

    VpsTrafficTotalsSectionResponse obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getIn());


}


void test_VpsTrafficTotalsSectionResponse_out_is_assigned_from_json()
{






    bourne::json input =
    {
        "out", 1
    };

    VpsTrafficTotalsSectionResponse obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getOut());


}



void test_VpsTrafficTotalsSectionResponse_in_is_converted_to_json()
{



    bourne::json input =
    {
        "in", 1
    };

    VpsTrafficTotalsSectionResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["in"] == output["in"]);

}


void test_VpsTrafficTotalsSectionResponse_out_is_converted_to_json()
{



    bourne::json input =
    {
        "out", 1
    };

    VpsTrafficTotalsSectionResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["out"] == output["out"]);

}


