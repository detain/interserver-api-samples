
#include "Vps.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"






void test_Vps_custCurrency_is_assigned_from_json()
{


    bourne::json input =
    {
        "custCurrency", "hello"
    };

    Vps obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCustCurrency().c_str());






}


void test_Vps_custCurrencySymbol_is_assigned_from_json()
{


    bourne::json input =
    {
        "custCurrencySymbol", "hello"
    };

    Vps obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCustCurrencySymbol().c_str());






}



void test_Vps_package_is_assigned_from_json()
{


    bourne::json input =
    {
        "package", "hello"
    };

    Vps obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getPackage().c_str());






}




void test_Vps_module_is_assigned_from_json()
{


    bourne::json input =
    {
        "module", "hello"
    };

    Vps obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getModule().c_str());






}


void test_Vps_token_is_assigned_from_json()
{


    bourne::json input =
    {
        "token", "hello"
    };

    Vps obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getToken().c_str());






}


void test_Vps_da_link_is_assigned_from_json()
{
    bourne::json input =
    {
        "da_link", 1
    };

    Vps obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getDaLink());








}


void test_Vps_sr_link_is_assigned_from_json()
{
    bourne::json input =
    {
        "sr_link", 1
    };

    Vps obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getSrLink());








}






void test_Vps_os_template_is_assigned_from_json()
{


    bourne::json input =
    {
        "os_template", "hello"
    };

    Vps obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getOsTemplate().c_str());






}







void test_Vps_custCurrency_is_converted_to_json()
{

    bourne::json input =
    {
        "custCurrency", "hello"
    };

    Vps obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["custCurrency"] == output["custCurrency"]);



}


void test_Vps_custCurrencySymbol_is_converted_to_json()
{

    bourne::json input =
    {
        "custCurrencySymbol", "hello"
    };

    Vps obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["custCurrencySymbol"] == output["custCurrencySymbol"]);



}



void test_Vps_package_is_converted_to_json()
{

    bourne::json input =
    {
        "package", "hello"
    };

    Vps obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["package"] == output["package"]);



}




void test_Vps_module_is_converted_to_json()
{

    bourne::json input =
    {
        "module", "hello"
    };

    Vps obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["module"] == output["module"]);



}


void test_Vps_token_is_converted_to_json()
{

    bourne::json input =
    {
        "token", "hello"
    };

    Vps obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["token"] == output["token"]);



}


void test_Vps_da_link_is_converted_to_json()
{
    bourne::json input =
    {
        "da_link", 1
    };

    Vps obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["da_link"] == output["da_link"]);




}


void test_Vps_sr_link_is_converted_to_json()
{
    bourne::json input =
    {
        "sr_link", 1
    };

    Vps obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["sr_link"] == output["sr_link"]);




}






void test_Vps_os_template_is_converted_to_json()
{

    bourne::json input =
    {
        "os_template", "hello"
    };

    Vps obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["os_template"] == output["os_template"]);



}



