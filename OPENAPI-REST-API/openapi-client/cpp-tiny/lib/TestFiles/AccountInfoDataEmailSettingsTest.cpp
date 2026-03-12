
#include "AccountInfoData_email_settings.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_AccountInfoData_email_settings_admincc_bad_response_is_assigned_from_json()
{


    bourne::json input =
    {
        "admincc_bad_response", "hello"
    };

    AccountInfoData_email_settings obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getAdminccBadResponse().c_str());






}


void test_AccountInfoData_email_settings_adminmass_communicationstpl_is_assigned_from_json()
{


    bourne::json input =
    {
        "adminmass_communicationstpl", "hello"
    };

    AccountInfoData_email_settings obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getAdminmassCommunicationstpl().c_str());






}



void test_AccountInfoData_email_settings_admincc_bad_response_is_converted_to_json()
{

    bourne::json input =
    {
        "admincc_bad_response", "hello"
    };

    AccountInfoData_email_settings obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["admincc_bad_response"] == output["admincc_bad_response"]);



}


void test_AccountInfoData_email_settings_adminmass_communicationstpl_is_converted_to_json()
{

    bourne::json input =
    {
        "adminmass_communicationstpl", "hello"
    };

    AccountInfoData_email_settings obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["adminmass_communicationstpl"] == output["adminmass_communicationstpl"]);



}


