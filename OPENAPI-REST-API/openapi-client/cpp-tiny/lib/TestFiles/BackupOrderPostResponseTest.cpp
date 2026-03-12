
#include "BackupOrderPostResponse.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_BackupOrderPostResponse_r_continue_is_assigned_from_json()
{




    bourne::json input =
    {
        "r_continue", true
    };

    BackupOrderPostResponse obj(input.dump());

    TEST_ASSERT(true == obj.isRContinue());




}



void test_BackupOrderPostResponse_total_cost_is_assigned_from_json()
{


    bourne::json input =
    {
        "total_cost", "hello"
    };

    BackupOrderPostResponse obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getTotalCost().c_str());






}


void test_BackupOrderPostResponse_iid_is_assigned_from_json()
{


    bourne::json input =
    {
        "iid", "hello"
    };

    BackupOrderPostResponse obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getIid().c_str());






}




void test_BackupOrderPostResponse_serviceId_is_assigned_from_json()
{
    bourne::json input =
    {
        "serviceId", 1
    };

    BackupOrderPostResponse obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getServiceId());








}


void test_BackupOrderPostResponse_invoice_description_is_assigned_from_json()
{


    bourne::json input =
    {
        "invoice_description", "hello"
    };

    BackupOrderPostResponse obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getInvoiceDescription().c_str());






}




void test_BackupOrderPostResponse_r_continue_is_converted_to_json()
{


    bourne::json input =
    {
        "r_continue", true
    };

    BackupOrderPostResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["r_continue"] == output["r_continue"]);


}



void test_BackupOrderPostResponse_total_cost_is_converted_to_json()
{

    bourne::json input =
    {
        "total_cost", "hello"
    };

    BackupOrderPostResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["total_cost"] == output["total_cost"]);



}


void test_BackupOrderPostResponse_iid_is_converted_to_json()
{

    bourne::json input =
    {
        "iid", "hello"
    };

    BackupOrderPostResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["iid"] == output["iid"]);



}




void test_BackupOrderPostResponse_serviceId_is_converted_to_json()
{
    bourne::json input =
    {
        "serviceId", 1
    };

    BackupOrderPostResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["serviceId"] == output["serviceId"]);




}


void test_BackupOrderPostResponse_invoice_description_is_converted_to_json()
{

    bourne::json input =
    {
        "invoice_description", "hello"
    };

    BackupOrderPostResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["invoice_description"] == output["invoice_description"]);



}



