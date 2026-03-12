
#include "ServerOrder.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"





void test_ServerOrder_cpu_is_assigned_from_json()
{
    bourne::json input =
    {
        "cpu", 1
    };

    ServerOrder obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getCpu());








}













void test_ServerOrder_cpu_is_converted_to_json()
{
    bourne::json input =
    {
        "cpu", 1
    };

    ServerOrder obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["cpu"] == output["cpu"]);




}










