
#include "ScrubIpsRowSchema.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_ScrubIpsRowSchema_scrub_ip_id_is_assigned_from_json()
{
    bourne::json input =
    {
        "scrub_ip_id", 1
    };

    ScrubIpsRowSchema obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getScrubIpId());








}


void test_ScrubIpsRowSchema_repeat_invoices_cost_is_assigned_from_json()
{








}


void test_ScrubIpsRowSchema_scrub_ip_ip_is_assigned_from_json()
{


    bourne::json input =
    {
        "scrub_ip_ip", "hello"
    };

    ScrubIpsRowSchema obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getScrubIpIp().c_str());






}


void test_ScrubIpsRowSchema_scrub_ip_status_is_assigned_from_json()
{


    bourne::json input =
    {
        "scrub_ip_status", "hello"
    };

    ScrubIpsRowSchema obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getScrubIpStatus().c_str());






}


void test_ScrubIpsRowSchema_services_name_is_assigned_from_json()
{


    bourne::json input =
    {
        "services_name", "hello"
    };

    ScrubIpsRowSchema obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getServicesName().c_str());






}



void test_ScrubIpsRowSchema_scrub_ip_id_is_converted_to_json()
{
    bourne::json input =
    {
        "scrub_ip_id", 1
    };

    ScrubIpsRowSchema obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["scrub_ip_id"] == output["scrub_ip_id"]);




}


void test_ScrubIpsRowSchema_repeat_invoices_cost_is_converted_to_json()
{




}


void test_ScrubIpsRowSchema_scrub_ip_ip_is_converted_to_json()
{

    bourne::json input =
    {
        "scrub_ip_ip", "hello"
    };

    ScrubIpsRowSchema obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["scrub_ip_ip"] == output["scrub_ip_ip"]);



}


void test_ScrubIpsRowSchema_scrub_ip_status_is_converted_to_json()
{

    bourne::json input =
    {
        "scrub_ip_status", "hello"
    };

    ScrubIpsRowSchema obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["scrub_ip_status"] == output["scrub_ip_status"]);



}


void test_ScrubIpsRowSchema_services_name_is_converted_to_json()
{

    bourne::json input =
    {
        "services_name", "hello"
    };

    ScrubIpsRowSchema obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["services_name"] == output["services_name"]);



}


