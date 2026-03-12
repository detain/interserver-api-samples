
#include "TicketNew.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_TicketNew_subject_is_assigned_from_json()
{


    bourne::json input =
    {
        "subject", "hello"
    };

    TicketNew obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getSubject().c_str());






}


void test_TicketNew_body_is_assigned_from_json()
{


    bourne::json input =
    {
        "body", "hello"
    };

    TicketNew obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getBody().c_str());






}


void test_TicketNew_service_id_is_assigned_from_json()
{
    bourne::json input =
    {
        "service_id", 1
    };

    TicketNew obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getServiceId());








}


void test_TicketNew_service_module_is_assigned_from_json()
{


    bourne::json input =
    {
        "service_module", "hello"
    };

    TicketNew obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getServiceModule().c_str());






}



void test_TicketNew_subject_is_converted_to_json()
{

    bourne::json input =
    {
        "subject", "hello"
    };

    TicketNew obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["subject"] == output["subject"]);



}


void test_TicketNew_body_is_converted_to_json()
{

    bourne::json input =
    {
        "body", "hello"
    };

    TicketNew obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["body"] == output["body"]);



}


void test_TicketNew_service_id_is_converted_to_json()
{
    bourne::json input =
    {
        "service_id", 1
    };

    TicketNew obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["service_id"] == output["service_id"]);




}


void test_TicketNew_service_module_is_converted_to_json()
{

    bourne::json input =
    {
        "service_module", "hello"
    };

    TicketNew obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["service_module"] == output["service_module"]);



}


