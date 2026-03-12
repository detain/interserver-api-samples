
#include "Tickets.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_Tickets_ima_is_assigned_from_json()
{


    bourne::json input =
    {
        "ima", "hello"
    };

    Tickets obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getIma().c_str());






}


void test_Tickets_custid_is_assigned_from_json()
{


    bourne::json input =
    {
        "custid", "hello"
    };

    Tickets obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCustid().c_str());






}


void test_Tickets_view_is_assigned_from_json()
{


    bourne::json input =
    {
        "view", "hello"
    };

    Tickets obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getView().c_str());






}


void test_Tickets_currentPage_is_assigned_from_json()
{
    bourne::json input =
    {
        "currentPage", 1
    };

    Tickets obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getCurrentPage());








}


void test_Tickets_limit_is_assigned_from_json()
{
    bourne::json input =
    {
        "limit", 1
    };

    Tickets obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getLimit());








}


void test_Tickets_sortcol_is_assigned_from_json()
{
    bourne::json input =
    {
        "sortcol", 1
    };

    Tickets obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getSortcol());








}


void test_Tickets_sortdir_is_assigned_from_json()
{
    bourne::json input =
    {
        "sortdir", 1
    };

    Tickets obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getSortdir());








}


void test_Tickets_rowsOffset_is_assigned_from_json()
{
    bourne::json input =
    {
        "rowsOffset", 1
    };

    Tickets obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getRowsOffset());








}



void test_Tickets_pages_is_assigned_from_json()
{
    bourne::json input =
    {
        "pages", 1
    };

    Tickets obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getPages());








}


void test_Tickets_rowsTotal_is_assigned_from_json()
{
    bourne::json input =
    {
        "rowsTotal", 1
    };

    Tickets obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getRowsTotal());








}


void test_Tickets_inboxCount_is_assigned_from_json()
{
    bourne::json input =
    {
        "inboxCount", 1
    };

    Tickets obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getInboxCount());








}



void test_Tickets_viewText_is_assigned_from_json()
{


    bourne::json input =
    {
        "viewText", "hello"
    };

    Tickets obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getViewText().c_str());






}



void test_Tickets_ima_is_converted_to_json()
{

    bourne::json input =
    {
        "ima", "hello"
    };

    Tickets obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["ima"] == output["ima"]);



}


void test_Tickets_custid_is_converted_to_json()
{

    bourne::json input =
    {
        "custid", "hello"
    };

    Tickets obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["custid"] == output["custid"]);



}


void test_Tickets_view_is_converted_to_json()
{

    bourne::json input =
    {
        "view", "hello"
    };

    Tickets obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["view"] == output["view"]);



}


void test_Tickets_currentPage_is_converted_to_json()
{
    bourne::json input =
    {
        "currentPage", 1
    };

    Tickets obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["currentPage"] == output["currentPage"]);




}


void test_Tickets_limit_is_converted_to_json()
{
    bourne::json input =
    {
        "limit", 1
    };

    Tickets obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["limit"] == output["limit"]);




}


void test_Tickets_sortcol_is_converted_to_json()
{
    bourne::json input =
    {
        "sortcol", 1
    };

    Tickets obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["sortcol"] == output["sortcol"]);




}


void test_Tickets_sortdir_is_converted_to_json()
{
    bourne::json input =
    {
        "sortdir", 1
    };

    Tickets obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["sortdir"] == output["sortdir"]);




}


void test_Tickets_rowsOffset_is_converted_to_json()
{
    bourne::json input =
    {
        "rowsOffset", 1
    };

    Tickets obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["rowsOffset"] == output["rowsOffset"]);




}



void test_Tickets_pages_is_converted_to_json()
{
    bourne::json input =
    {
        "pages", 1
    };

    Tickets obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["pages"] == output["pages"]);




}


void test_Tickets_rowsTotal_is_converted_to_json()
{
    bourne::json input =
    {
        "rowsTotal", 1
    };

    Tickets obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["rowsTotal"] == output["rowsTotal"]);




}


void test_Tickets_inboxCount_is_converted_to_json()
{
    bourne::json input =
    {
        "inboxCount", 1
    };

    Tickets obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["inboxCount"] == output["inboxCount"]);




}



void test_Tickets_viewText_is_converted_to_json()
{

    bourne::json input =
    {
        "viewText", "hello"
    };

    Tickets obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["viewText"] == output["viewText"]);



}


