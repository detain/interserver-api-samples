
#include "LoginSubmissionExample_g_recaptcha_response_dep.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_LoginSubmissionExample_g_recaptcha_response_dep_w_is_assigned_from_json()
{
    bourne::json input =
    {
        "w", 1
    };

    LoginSubmissionExample_g_recaptcha_response_dep obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getW());








}


void test_LoginSubmissionExample_g_recaptcha_response_dep_n_is_assigned_from_json()
{
    bourne::json input =
    {
        "n", 1
    };

    LoginSubmissionExample_g_recaptcha_response_dep obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getN());








}



void test_LoginSubmissionExample_g_recaptcha_response_dep_w_is_converted_to_json()
{
    bourne::json input =
    {
        "w", 1
    };

    LoginSubmissionExample_g_recaptcha_response_dep obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["w"] == output["w"]);




}


void test_LoginSubmissionExample_g_recaptcha_response_dep_n_is_converted_to_json()
{
    bourne::json input =
    {
        "n", 1
    };

    LoginSubmissionExample_g_recaptcha_response_dep obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["n"] == output["n"]);




}


