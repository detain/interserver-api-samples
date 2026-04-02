
#include "ServiceOrderPostResponse.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_ServiceOrderPostResponse_r_continue_is_assigned_from_json()
{




    bourne::json input =
    {
        "r_continue", true
    };

    ServiceOrderPostResponse obj(input.dump());

    TEST_ASSERT(true == obj.isRContinue());




}



void test_ServiceOrderPostResponse_total_cost_is_assigned_from_json()
{


    bourne::json input =
    {
        "total_cost", "hello"
    };

    ServiceOrderPostResponse obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getTotalCost().c_str());






}


void test_ServiceOrderPostResponse_iid_is_assigned_from_json()
{


    bourne::json input =
    {
        "iid", "hello"
    };

    ServiceOrderPostResponse obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getIid().c_str());






}




void test_ServiceOrderPostResponse_serviceId_is_assigned_from_json()
{
    bourne::json input =
    {
        "serviceId", 1
    };

    ServiceOrderPostResponse obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getServiceId());








}


void test_ServiceOrderPostResponse_invoice_description_is_assigned_from_json()
{


    bourne::json input =
    {
        "invoice_description", "hello"
    };

    ServiceOrderPostResponse obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getInvoiceDescription().c_str());






}



void test_ServiceOrderPostResponse_r_continue_is_converted_to_json()
{


    bourne::json input =
    {
        "r_continue", true
    };

    ServiceOrderPostResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["r_continue"] == output["r_continue"]);


}



void test_ServiceOrderPostResponse_total_cost_is_converted_to_json()
{

    bourne::json input =
    {
        "total_cost", "hello"
    };

    ServiceOrderPostResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["total_cost"] == output["total_cost"]);



}


void test_ServiceOrderPostResponse_iid_is_converted_to_json()
{

    bourne::json input =
    {
        "iid", "hello"
    };

    ServiceOrderPostResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["iid"] == output["iid"]);



}




void test_ServiceOrderPostResponse_serviceId_is_converted_to_json()
{
    bourne::json input =
    {
        "serviceId", 1
    };

    ServiceOrderPostResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["serviceId"] == output["serviceId"]);




}


void test_ServiceOrderPostResponse_invoice_description_is_converted_to_json()
{

    bourne::json input =
    {
        "invoice_description", "hello"
    };

    ServiceOrderPostResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["invoice_description"] == output["invoice_description"]);



}


