
#include "WebsitesOrder.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_WebsitesOrder_step_is_assigned_from_json()
{


    bourne::json input =
    {
        "step", "hello"
    };

    WebsitesOrder obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getStep().c_str());






}


void test_WebsitesOrder_website_is_assigned_from_json()
{


    bourne::json input =
    {
        "website", "hello"
    };

    WebsitesOrder obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getWebsite().c_str());






}


void test_WebsitesOrder_period_is_assigned_from_json()
{
    bourne::json input =
    {
        "period", 1
    };

    WebsitesOrder obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getPeriod());








}


void test_WebsitesOrder_serviceOfferId_is_assigned_from_json()
{
    bourne::json input =
    {
        "serviceOfferId", 1
    };

    WebsitesOrder obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getServiceOfferId());








}



void test_WebsitesOrder_enableDomainRegistering_is_assigned_from_json()
{




    bourne::json input =
    {
        "enableDomainRegistering", true
    };

    WebsitesOrder obj(input.dump());

    TEST_ASSERT(true == obj.isEnableDomainRegistering());




}








void test_WebsitesOrder_step_is_converted_to_json()
{

    bourne::json input =
    {
        "step", "hello"
    };

    WebsitesOrder obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["step"] == output["step"]);



}


void test_WebsitesOrder_website_is_converted_to_json()
{

    bourne::json input =
    {
        "website", "hello"
    };

    WebsitesOrder obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["website"] == output["website"]);



}


void test_WebsitesOrder_period_is_converted_to_json()
{
    bourne::json input =
    {
        "period", 1
    };

    WebsitesOrder obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["period"] == output["period"]);




}


void test_WebsitesOrder_serviceOfferId_is_converted_to_json()
{
    bourne::json input =
    {
        "serviceOfferId", 1
    };

    WebsitesOrder obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["serviceOfferId"] == output["serviceOfferId"]);




}



void test_WebsitesOrder_enableDomainRegistering_is_converted_to_json()
{


    bourne::json input =
    {
        "enableDomainRegistering", true
    };

    WebsitesOrder obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["enableDomainRegistering"] == output["enableDomainRegistering"]);


}







