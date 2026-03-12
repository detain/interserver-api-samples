
#include "PlaceScrubOrder_201_response_order_details.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_PlaceScrubOrder_201_response_order_details_total_cost_is_assigned_from_json()
{
    bourne::json input =
    {
        "total_cost", 1
    };

    PlaceScrubOrder_201_response_order_details obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getTotalCost());








}


void test_PlaceScrubOrder_201_response_order_details_service_id_is_assigned_from_json()
{
    bourne::json input =
    {
        "service_id", 1
    };

    PlaceScrubOrder_201_response_order_details obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getServiceId());








}


void test_PlaceScrubOrder_201_response_order_details_invoice_id_is_assigned_from_json()
{
    bourne::json input =
    {
        "invoice_id", 1
    };

    PlaceScrubOrder_201_response_order_details obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getInvoiceId());








}


void test_PlaceScrubOrder_201_response_order_details_invoice_description_is_assigned_from_json()
{


    bourne::json input =
    {
        "invoice_description", "hello"
    };

    PlaceScrubOrder_201_response_order_details obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getInvoiceDescription().c_str());






}




void test_PlaceScrubOrder_201_response_order_details_total_cost_is_converted_to_json()
{
    bourne::json input =
    {
        "total_cost", 1
    };

    PlaceScrubOrder_201_response_order_details obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["total_cost"] == output["total_cost"]);




}


void test_PlaceScrubOrder_201_response_order_details_service_id_is_converted_to_json()
{
    bourne::json input =
    {
        "service_id", 1
    };

    PlaceScrubOrder_201_response_order_details obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["service_id"] == output["service_id"]);




}


void test_PlaceScrubOrder_201_response_order_details_invoice_id_is_converted_to_json()
{
    bourne::json input =
    {
        "invoice_id", 1
    };

    PlaceScrubOrder_201_response_order_details obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["invoice_id"] == output["invoice_id"]);




}


void test_PlaceScrubOrder_201_response_order_details_invoice_description_is_converted_to_json()
{

    bourne::json input =
    {
        "invoice_description", "hello"
    };

    PlaceScrubOrder_201_response_order_details obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["invoice_description"] == output["invoice_description"]);



}



