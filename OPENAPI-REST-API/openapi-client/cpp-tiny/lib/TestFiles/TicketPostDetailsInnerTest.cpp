
#include "TicketPostDetails_inner.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_TicketPostDetails_inner_post_id_is_assigned_from_json()
{
    bourne::json input =
    {
        "post_id", 1
    };

    TicketPostDetails_inner obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getPostId());








}


void test_TicketPostDetails_inner_date_is_assigned_from_json()
{


    bourne::json input =
    {
        "date", "hello"
    };

    TicketPostDetails_inner obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getDate().c_str());






}


void test_TicketPostDetails_inner_contents_is_assigned_from_json()
{


    bourne::json input =
    {
        "contents", "hello"
    };

    TicketPostDetails_inner obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getContents().c_str());






}


void test_TicketPostDetails_inner_creator_is_assigned_from_json()
{


    bourne::json input =
    {
        "creator", "hello"
    };

    TicketPostDetails_inner obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCreator().c_str());






}


void test_TicketPostDetails_inner_creator_email_is_assigned_from_json()
{


    bourne::json input =
    {
        "creator_email", "hello"
    };

    TicketPostDetails_inner obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCreatorEmail().c_str());






}


void test_TicketPostDetails_inner_creator_name_is_assigned_from_json()
{


    bourne::json input =
    {
        "creator_name", "hello"
    };

    TicketPostDetails_inner obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCreatorName().c_str());






}


void test_TicketPostDetails_inner_hasattachments_is_assigned_from_json()
{
    bourne::json input =
    {
        "hasattachments", 1
    };

    TicketPostDetails_inner obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getHasattachments());








}


void test_TicketPostDetails_inner_attachment_download_is_assigned_from_json()
{


    bourne::json input =
    {
        "attachment_download", "hello"
    };

    TicketPostDetails_inner obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getAttachmentDownload().c_str());






}



void test_TicketPostDetails_inner_post_id_is_converted_to_json()
{
    bourne::json input =
    {
        "post_id", 1
    };

    TicketPostDetails_inner obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["post_id"] == output["post_id"]);




}


void test_TicketPostDetails_inner_date_is_converted_to_json()
{

    bourne::json input =
    {
        "date", "hello"
    };

    TicketPostDetails_inner obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["date"] == output["date"]);



}


void test_TicketPostDetails_inner_contents_is_converted_to_json()
{

    bourne::json input =
    {
        "contents", "hello"
    };

    TicketPostDetails_inner obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["contents"] == output["contents"]);



}


void test_TicketPostDetails_inner_creator_is_converted_to_json()
{

    bourne::json input =
    {
        "creator", "hello"
    };

    TicketPostDetails_inner obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["creator"] == output["creator"]);



}


void test_TicketPostDetails_inner_creator_email_is_converted_to_json()
{

    bourne::json input =
    {
        "creator_email", "hello"
    };

    TicketPostDetails_inner obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["creator_email"] == output["creator_email"]);



}


void test_TicketPostDetails_inner_creator_name_is_converted_to_json()
{

    bourne::json input =
    {
        "creator_name", "hello"
    };

    TicketPostDetails_inner obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["creator_name"] == output["creator_name"]);



}


void test_TicketPostDetails_inner_hasattachments_is_converted_to_json()
{
    bourne::json input =
    {
        "hasattachments", 1
    };

    TicketPostDetails_inner obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["hasattachments"] == output["hasattachments"]);




}


void test_TicketPostDetails_inner_attachment_download_is_converted_to_json()
{

    bourne::json input =
    {
        "attachment_download", "hello"
    };

    TicketPostDetails_inner obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["attachment_download"] == output["attachment_download"]);



}


