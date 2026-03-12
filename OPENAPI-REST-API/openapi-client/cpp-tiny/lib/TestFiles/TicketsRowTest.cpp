
#include "TicketsRow.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_TicketsRow_title_is_assigned_from_json()
{


    bourne::json input =
    {
        "title", "hello"
    };

    TicketsRow obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getTitle().c_str());






}


void test_TicketsRow_ticketmaskid_is_assigned_from_json()
{


    bourne::json input =
    {
        "ticketmaskid", "hello"
    };

    TicketsRow obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getTicketmaskid().c_str());






}


void test_TicketsRow_lastreplier_is_assigned_from_json()
{


    bourne::json input =
    {
        "lastreplier", "hello"
    };

    TicketsRow obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getLastreplier().c_str());






}


void test_TicketsRow_status_is_assigned_from_json()
{


    bourne::json input =
    {
        "status", "hello"
    };

    TicketsRow obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getStatus().c_str());






}


void test_TicketsRow_priority_is_assigned_from_json()
{


    bourne::json input =
    {
        "priority", "hello"
    };

    TicketsRow obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getPriority().c_str());






}


void test_TicketsRow_total_replies_is_assigned_from_json()
{
    bourne::json input =
    {
        "total_replies", 1
    };

    TicketsRow obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getTotalReplies());








}


void test_TicketsRow_lastactivity_is_assigned_from_json()
{


    bourne::json input =
    {
        "lastactivity", "hello"
    };

    TicketsRow obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getLastactivity().c_str());






}


void test_TicketsRow_departmenttitle_is_assigned_from_json()
{


    bourne::json input =
    {
        "departmenttitle", "hello"
    };

    TicketsRow obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getDepartmenttitle().c_str());






}


void test_TicketsRow_ticketid_is_assigned_from_json()
{
    bourne::json input =
    {
        "ticketid", 1
    };

    TicketsRow obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getTicketid());








}


void test_TicketsRow_can_close_is_assigned_from_json()
{


    bourne::json input =
    {
        "can_close", "hello"
    };

    TicketsRow obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCanClose().c_str());






}



void test_TicketsRow_status_text_is_assigned_from_json()
{


    bourne::json input =
    {
        "status_text", "hello"
    };

    TicketsRow obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getStatusText().c_str());






}


void test_TicketsRow_checked_is_assigned_from_json()
{




    bourne::json input =
    {
        "checked", true
    };

    TicketsRow obj(input.dump());

    TEST_ASSERT(true == obj.isChecked());




}



void test_TicketsRow_title_is_converted_to_json()
{

    bourne::json input =
    {
        "title", "hello"
    };

    TicketsRow obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["title"] == output["title"]);



}


void test_TicketsRow_ticketmaskid_is_converted_to_json()
{

    bourne::json input =
    {
        "ticketmaskid", "hello"
    };

    TicketsRow obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["ticketmaskid"] == output["ticketmaskid"]);



}


void test_TicketsRow_lastreplier_is_converted_to_json()
{

    bourne::json input =
    {
        "lastreplier", "hello"
    };

    TicketsRow obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["lastreplier"] == output["lastreplier"]);



}


void test_TicketsRow_status_is_converted_to_json()
{

    bourne::json input =
    {
        "status", "hello"
    };

    TicketsRow obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["status"] == output["status"]);



}


void test_TicketsRow_priority_is_converted_to_json()
{

    bourne::json input =
    {
        "priority", "hello"
    };

    TicketsRow obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["priority"] == output["priority"]);



}


void test_TicketsRow_total_replies_is_converted_to_json()
{
    bourne::json input =
    {
        "total_replies", 1
    };

    TicketsRow obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["total_replies"] == output["total_replies"]);




}


void test_TicketsRow_lastactivity_is_converted_to_json()
{

    bourne::json input =
    {
        "lastactivity", "hello"
    };

    TicketsRow obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["lastactivity"] == output["lastactivity"]);



}


void test_TicketsRow_departmenttitle_is_converted_to_json()
{

    bourne::json input =
    {
        "departmenttitle", "hello"
    };

    TicketsRow obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["departmenttitle"] == output["departmenttitle"]);



}


void test_TicketsRow_ticketid_is_converted_to_json()
{
    bourne::json input =
    {
        "ticketid", 1
    };

    TicketsRow obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["ticketid"] == output["ticketid"]);




}


void test_TicketsRow_can_close_is_converted_to_json()
{

    bourne::json input =
    {
        "can_close", "hello"
    };

    TicketsRow obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["can_close"] == output["can_close"]);



}



void test_TicketsRow_status_text_is_converted_to_json()
{

    bourne::json input =
    {
        "status_text", "hello"
    };

    TicketsRow obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["status_text"] == output["status_text"]);



}


void test_TicketsRow_checked_is_converted_to_json()
{


    bourne::json input =
    {
        "checked", true
    };

    TicketsRow obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["checked"] == output["checked"]);


}


