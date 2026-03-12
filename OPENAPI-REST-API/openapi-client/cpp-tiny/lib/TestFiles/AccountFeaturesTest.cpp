
#include "AccountFeatures.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_AccountFeatures_disable_reset_is_assigned_from_json()
{
    bourne::json input =
    {
        "disable_reset", 1
    };

    AccountFeatures obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getDisableReset());








}


void test_AccountFeatures_disable_reinstall_is_assigned_from_json()
{
    bourne::json input =
    {
        "disable_reinstall", 1
    };

    AccountFeatures obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getDisableReinstall());








}



void test_AccountFeatures_disable_reset_is_converted_to_json()
{
    bourne::json input =
    {
        "disable_reset", 1
    };

    AccountFeatures obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["disable_reset"] == output["disable_reset"]);




}


void test_AccountFeatures_disable_reinstall_is_converted_to_json()
{
    bourne::json input =
    {
        "disable_reinstall", 1
    };

    AccountFeatures obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["disable_reinstall"] == output["disable_reinstall"]);




}


