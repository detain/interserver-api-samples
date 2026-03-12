
#include "ServerOrderGetResponse.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"





void test_ServerOrderGetResponse_cpu_is_assigned_from_json()
{
    bourne::json input =
    {
        "cpu", 1
    };

    ServerOrderGetResponse obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getCpu());








}




void test_ServerOrderGetResponse_frequency_is_assigned_from_json()
{
    bourne::json input =
    {
        "frequency", 1
    };

    ServerOrderGetResponse obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getFrequency());








}


void test_ServerOrderGetResponse_currency_is_assigned_from_json()
{


    bourne::json input =
    {
        "currency", "hello"
    };

    ServerOrderGetResponse obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCurrency().c_str());






}


void test_ServerOrderGetResponse_country_is_assigned_from_json()
{


    bourne::json input =
    {
        "country", "hello"
    };

    ServerOrderGetResponse obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCountry().c_str());






}


void test_ServerOrderGetResponse_step_is_assigned_from_json()
{


    bourne::json input =
    {
        "step", "hello"
    };

    ServerOrderGetResponse obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getStep().c_str());






}




void test_ServerOrderGetResponse_currencySymbol_is_assigned_from_json()
{


    bourne::json input =
    {
        "currencySymbol", "hello"
    };

    ServerOrderGetResponse obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCurrencySymbol().c_str());






}


void test_ServerOrderGetResponse_custid_is_assigned_from_json()
{
    bourne::json input =
    {
        "custid", 1
    };

    ServerOrderGetResponse obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getCustid());








}


void test_ServerOrderGetResponse_ima_is_assigned_from_json()
{


    bourne::json input =
    {
        "ima", "hello"
    };

    ServerOrderGetResponse obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getIma().c_str());






}





void test_ServerOrderGetResponse_display_showmore_is_assigned_from_json()
{


    bourne::json input =
    {
        "display_showmore", "hello"
    };

    ServerOrderGetResponse obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getDisplayShowmore().c_str());






}


void test_ServerOrderGetResponse_cust_discount_is_assigned_from_json()
{








}





void test_ServerOrderGetResponse_cpu_is_converted_to_json()
{
    bourne::json input =
    {
        "cpu", 1
    };

    ServerOrderGetResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["cpu"] == output["cpu"]);




}




void test_ServerOrderGetResponse_frequency_is_converted_to_json()
{
    bourne::json input =
    {
        "frequency", 1
    };

    ServerOrderGetResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["frequency"] == output["frequency"]);




}


void test_ServerOrderGetResponse_currency_is_converted_to_json()
{

    bourne::json input =
    {
        "currency", "hello"
    };

    ServerOrderGetResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["currency"] == output["currency"]);



}


void test_ServerOrderGetResponse_country_is_converted_to_json()
{

    bourne::json input =
    {
        "country", "hello"
    };

    ServerOrderGetResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["country"] == output["country"]);



}


void test_ServerOrderGetResponse_step_is_converted_to_json()
{

    bourne::json input =
    {
        "step", "hello"
    };

    ServerOrderGetResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["step"] == output["step"]);



}




void test_ServerOrderGetResponse_currencySymbol_is_converted_to_json()
{

    bourne::json input =
    {
        "currencySymbol", "hello"
    };

    ServerOrderGetResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["currencySymbol"] == output["currencySymbol"]);



}


void test_ServerOrderGetResponse_custid_is_converted_to_json()
{
    bourne::json input =
    {
        "custid", 1
    };

    ServerOrderGetResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["custid"] == output["custid"]);




}


void test_ServerOrderGetResponse_ima_is_converted_to_json()
{

    bourne::json input =
    {
        "ima", "hello"
    };

    ServerOrderGetResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["ima"] == output["ima"]);



}





void test_ServerOrderGetResponse_display_showmore_is_converted_to_json()
{

    bourne::json input =
    {
        "display_showmore", "hello"
    };

    ServerOrderGetResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["display_showmore"] == output["display_showmore"]);



}


void test_ServerOrderGetResponse_cust_discount_is_converted_to_json()
{




}


