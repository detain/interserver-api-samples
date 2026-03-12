
#include "MailLogEntry.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_MailLogEntry__id_is_assigned_from_json()
{
    bourne::json input =
    {
        "_id", 1
    };

    MailLogEntry obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getId());








}


void test_MailLogEntry_id_is_assigned_from_json()
{


    bourne::json input =
    {
        "id", "hello"
    };

    MailLogEntry obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getId().c_str());






}


void test_MailLogEntry_from_is_assigned_from_json()
{


    bourne::json input =
    {
        "from", "hello"
    };

    MailLogEntry obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getFrom().c_str());






}


void test_MailLogEntry_to_is_assigned_from_json()
{


    bourne::json input =
    {
        "to", "hello"
    };

    MailLogEntry obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getTo().c_str());






}


void test_MailLogEntry_subject_is_assigned_from_json()
{


    bourne::json input =
    {
        "subject", "hello"
    };

    MailLogEntry obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getSubject().c_str());






}


void test_MailLogEntry_created_is_assigned_from_json()
{


    bourne::json input =
    {
        "created", "hello"
    };

    MailLogEntry obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCreated().c_str());






}


void test_MailLogEntry_time_is_assigned_from_json()
{
    bourne::json input =
    {
        "time", 1
    };

    MailLogEntry obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getTime());








}


void test_MailLogEntry_user_is_assigned_from_json()
{


    bourne::json input =
    {
        "user", "hello"
    };

    MailLogEntry obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getUser().c_str());






}


void test_MailLogEntry_transtype_is_assigned_from_json()
{


    bourne::json input =
    {
        "transtype", "hello"
    };

    MailLogEntry obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getTranstype().c_str());






}


void test_MailLogEntry_origin_is_assigned_from_json()
{


    bourne::json input =
    {
        "origin", "hello"
    };

    MailLogEntry obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getOrigin().c_str());






}


void test_MailLogEntry_interface_is_assigned_from_json()
{


    bourne::json input =
    {
        "interface", "hello"
    };

    MailLogEntry obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getInterface().c_str());






}


void test_MailLogEntry_sendingZone_is_assigned_from_json()
{


    bourne::json input =
    {
        "sendingZone", "hello"
    };

    MailLogEntry obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getSendingZone().c_str());






}


void test_MailLogEntry_bodySize_is_assigned_from_json()
{
    bourne::json input =
    {
        "bodySize", 1
    };

    MailLogEntry obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getBodySize());








}


void test_MailLogEntry_seq_is_assigned_from_json()
{
    bourne::json input =
    {
        "seq", 1
    };

    MailLogEntry obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getSeq());








}


void test_MailLogEntry_recipient_is_assigned_from_json()
{


    bourne::json input =
    {
        "recipient", "hello"
    };

    MailLogEntry obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getRecipient().c_str());






}


void test_MailLogEntry_domain_is_assigned_from_json()
{


    bourne::json input =
    {
        "domain", "hello"
    };

    MailLogEntry obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getDomain().c_str());






}


void test_MailLogEntry_locked_is_assigned_from_json()
{
    bourne::json input =
    {
        "locked", 1
    };

    MailLogEntry obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getLocked());








}


void test_MailLogEntry_lockTime_is_assigned_from_json()
{
    bourne::json input =
    {
        "lockTime", 1
    };

    MailLogEntry obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getLockTime());








}


void test_MailLogEntry_assigned_is_assigned_from_json()
{


    bourne::json input =
    {
        "assigned", "hello"
    };

    MailLogEntry obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getAssigned().c_str());






}


void test_MailLogEntry_queued_is_assigned_from_json()
{


    bourne::json input =
    {
        "queued", "hello"
    };

    MailLogEntry obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getQueued().c_str());






}


void test_MailLogEntry_mxHostname_is_assigned_from_json()
{


    bourne::json input =
    {
        "mxHostname", "hello"
    };

    MailLogEntry obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getMxHostname().c_str());






}


void test_MailLogEntry_response_is_assigned_from_json()
{


    bourne::json input =
    {
        "response", "hello"
    };

    MailLogEntry obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getResponse().c_str());






}


void test_MailLogEntry_messageId_is_assigned_from_json()
{


    bourne::json input =
    {
        "messageId", "hello"
    };

    MailLogEntry obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getMessageId().c_str());






}



void test_MailLogEntry__id_is_converted_to_json()
{
    bourne::json input =
    {
        "_id", 1
    };

    MailLogEntry obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["_id"] == output["_id"]);




}


void test_MailLogEntry_id_is_converted_to_json()
{

    bourne::json input =
    {
        "id", "hello"
    };

    MailLogEntry obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["id"] == output["id"]);



}


void test_MailLogEntry_from_is_converted_to_json()
{

    bourne::json input =
    {
        "from", "hello"
    };

    MailLogEntry obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["from"] == output["from"]);



}


void test_MailLogEntry_to_is_converted_to_json()
{

    bourne::json input =
    {
        "to", "hello"
    };

    MailLogEntry obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["to"] == output["to"]);



}


void test_MailLogEntry_subject_is_converted_to_json()
{

    bourne::json input =
    {
        "subject", "hello"
    };

    MailLogEntry obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["subject"] == output["subject"]);



}


void test_MailLogEntry_created_is_converted_to_json()
{

    bourne::json input =
    {
        "created", "hello"
    };

    MailLogEntry obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["created"] == output["created"]);



}


void test_MailLogEntry_time_is_converted_to_json()
{
    bourne::json input =
    {
        "time", 1
    };

    MailLogEntry obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["time"] == output["time"]);




}


void test_MailLogEntry_user_is_converted_to_json()
{

    bourne::json input =
    {
        "user", "hello"
    };

    MailLogEntry obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["user"] == output["user"]);



}


void test_MailLogEntry_transtype_is_converted_to_json()
{

    bourne::json input =
    {
        "transtype", "hello"
    };

    MailLogEntry obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["transtype"] == output["transtype"]);



}


void test_MailLogEntry_origin_is_converted_to_json()
{

    bourne::json input =
    {
        "origin", "hello"
    };

    MailLogEntry obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["origin"] == output["origin"]);



}


void test_MailLogEntry_interface_is_converted_to_json()
{

    bourne::json input =
    {
        "interface", "hello"
    };

    MailLogEntry obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["interface"] == output["interface"]);



}


void test_MailLogEntry_sendingZone_is_converted_to_json()
{

    bourne::json input =
    {
        "sendingZone", "hello"
    };

    MailLogEntry obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["sendingZone"] == output["sendingZone"]);



}


void test_MailLogEntry_bodySize_is_converted_to_json()
{
    bourne::json input =
    {
        "bodySize", 1
    };

    MailLogEntry obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["bodySize"] == output["bodySize"]);




}


void test_MailLogEntry_seq_is_converted_to_json()
{
    bourne::json input =
    {
        "seq", 1
    };

    MailLogEntry obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["seq"] == output["seq"]);




}


void test_MailLogEntry_recipient_is_converted_to_json()
{

    bourne::json input =
    {
        "recipient", "hello"
    };

    MailLogEntry obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["recipient"] == output["recipient"]);



}


void test_MailLogEntry_domain_is_converted_to_json()
{

    bourne::json input =
    {
        "domain", "hello"
    };

    MailLogEntry obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["domain"] == output["domain"]);



}


void test_MailLogEntry_locked_is_converted_to_json()
{
    bourne::json input =
    {
        "locked", 1
    };

    MailLogEntry obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["locked"] == output["locked"]);




}


void test_MailLogEntry_lockTime_is_converted_to_json()
{
    bourne::json input =
    {
        "lockTime", 1
    };

    MailLogEntry obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["lockTime"] == output["lockTime"]);




}


void test_MailLogEntry_assigned_is_converted_to_json()
{

    bourne::json input =
    {
        "assigned", "hello"
    };

    MailLogEntry obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["assigned"] == output["assigned"]);



}


void test_MailLogEntry_queued_is_converted_to_json()
{

    bourne::json input =
    {
        "queued", "hello"
    };

    MailLogEntry obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["queued"] == output["queued"]);



}


void test_MailLogEntry_mxHostname_is_converted_to_json()
{

    bourne::json input =
    {
        "mxHostname", "hello"
    };

    MailLogEntry obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["mxHostname"] == output["mxHostname"]);



}


void test_MailLogEntry_response_is_converted_to_json()
{

    bourne::json input =
    {
        "response", "hello"
    };

    MailLogEntry obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["response"] == output["response"]);



}


void test_MailLogEntry_messageId_is_converted_to_json()
{

    bourne::json input =
    {
        "messageId", "hello"
    };

    MailLogEntry obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["messageId"] == output["messageId"]);



}


