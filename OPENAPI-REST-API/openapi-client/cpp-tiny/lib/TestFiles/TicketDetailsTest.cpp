
#include "TicketDetails.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_TicketDetails_ticketid_is_assigned_from_json()
{
    bourne::json input =
    {
        "ticketid", 1
    };

    TicketDetails obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getTicketid());








}


void test_TicketDetails_ticketmaskid_is_assigned_from_json()
{


    bourne::json input =
    {
        "ticketmaskid", "hello"
    };

    TicketDetails obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getTicketmaskid().c_str());






}


void test_TicketDetails_department_is_assigned_from_json()
{


    bourne::json input =
    {
        "department", "hello"
    };

    TicketDetails obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getDepartment().c_str());






}


void test_TicketDetails_status_is_assigned_from_json()
{


    bourne::json input =
    {
        "status", "hello"
    };

    TicketDetails obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getStatus().c_str());






}


void test_TicketDetails_priority_is_assigned_from_json()
{


    bourne::json input =
    {
        "priority", "hello"
    };

    TicketDetails obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getPriority().c_str());






}


void test_TicketDetails_subject_is_assigned_from_json()
{


    bourne::json input =
    {
        "subject", "hello"
    };

    TicketDetails obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getSubject().c_str());






}


void test_TicketDetails_created_on_is_assigned_from_json()
{


    bourne::json input =
    {
        "created_on", "hello"
    };

    TicketDetails obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCreatedOn().c_str());






}


void test_TicketDetails_updated_on_is_assigned_from_json()
{


    bourne::json input =
    {
        "updated_on", "hello"
    };

    TicketDetails obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getUpdatedOn().c_str());






}



void test_TicketDetails_ticketid_is_converted_to_json()
{
    bourne::json input =
    {
        "ticketid", 1
    };

    TicketDetails obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["ticketid"] == output["ticketid"]);




}


void test_TicketDetails_ticketmaskid_is_converted_to_json()
{

    bourne::json input =
    {
        "ticketmaskid", "hello"
    };

    TicketDetails obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["ticketmaskid"] == output["ticketmaskid"]);



}


void test_TicketDetails_department_is_converted_to_json()
{

    bourne::json input =
    {
        "department", "hello"
    };

    TicketDetails obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["department"] == output["department"]);



}


void test_TicketDetails_status_is_converted_to_json()
{

    bourne::json input =
    {
        "status", "hello"
    };

    TicketDetails obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["status"] == output["status"]);



}


void test_TicketDetails_priority_is_converted_to_json()
{

    bourne::json input =
    {
        "priority", "hello"
    };

    TicketDetails obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["priority"] == output["priority"]);



}


void test_TicketDetails_subject_is_converted_to_json()
{

    bourne::json input =
    {
        "subject", "hello"
    };

    TicketDetails obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["subject"] == output["subject"]);



}


void test_TicketDetails_created_on_is_converted_to_json()
{

    bourne::json input =
    {
        "created_on", "hello"
    };

    TicketDetails obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["created_on"] == output["created_on"]);



}


void test_TicketDetails_updated_on_is_converted_to_json()
{

    bourne::json input =
    {
        "updated_on", "hello"
    };

    TicketDetails obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["updated_on"] == output["updated_on"]);



}


