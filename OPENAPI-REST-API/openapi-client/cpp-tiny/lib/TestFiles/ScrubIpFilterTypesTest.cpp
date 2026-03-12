
#include "ScrubIpFilterTypes.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_ScrubIpFilterTypes_success_is_assigned_from_json()
{




    bourne::json input =
    {
        "success", true
    };

    ScrubIpFilterTypes obj(input.dump());

    TEST_ASSERT(true == obj.isSuccess());




}




void test_ScrubIpFilterTypes_success_is_converted_to_json()
{


    bourne::json input =
    {
        "success", true
    };

    ScrubIpFilterTypes obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["success"] == output["success"]);


}



