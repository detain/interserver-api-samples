
#include "AccountInfoOauthConfigProviders_value.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_AccountInfoOauthConfigProviders_value_enabled_is_assigned_from_json()
{




    bourne::json input =
    {
        "enabled", true
    };

    AccountInfoOauthConfigProviders_value obj(input.dump());

    TEST_ASSERT(true == obj.isEnabled());




}


void test_AccountInfoOauthConfigProviders_value_linked_is_assigned_from_json()
{




    bourne::json input =
    {
        "linked", true
    };

    AccountInfoOauthConfigProviders_value obj(input.dump());

    TEST_ASSERT(true == obj.isLinked());




}


void test_AccountInfoOauthConfigProviders_value_account_is_assigned_from_json()
{


    bourne::json input =
    {
        "account", "hello"
    };

    AccountInfoOauthConfigProviders_value obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getAccount().c_str());






}


void test_AccountInfoOauthConfigProviders_value_url_is_assigned_from_json()
{


    bourne::json input =
    {
        "url", "hello"
    };

    AccountInfoOauthConfigProviders_value obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getUrl().c_str());






}



void test_AccountInfoOauthConfigProviders_value_enabled_is_converted_to_json()
{


    bourne::json input =
    {
        "enabled", true
    };

    AccountInfoOauthConfigProviders_value obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["enabled"] == output["enabled"]);


}


void test_AccountInfoOauthConfigProviders_value_linked_is_converted_to_json()
{


    bourne::json input =
    {
        "linked", true
    };

    AccountInfoOauthConfigProviders_value obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["linked"] == output["linked"]);


}


void test_AccountInfoOauthConfigProviders_value_account_is_converted_to_json()
{

    bourne::json input =
    {
        "account", "hello"
    };

    AccountInfoOauthConfigProviders_value obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["account"] == output["account"]);



}


void test_AccountInfoOauthConfigProviders_value_url_is_converted_to_json()
{

    bourne::json input =
    {
        "url", "hello"
    };

    AccountInfoOauthConfigProviders_value obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["url"] == output["url"]);



}


