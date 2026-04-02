
#include "AddServer_200_response.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_AddServer_200_response_text_is_assigned_from_json()
{


    bourne::json input =
    {
        "text", "hello"
    };

    AddServer_200_response obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getText().c_str());






}


void test_AddServer_200_response_invoice_is_assigned_from_json()
{
    bourne::json input =
    {
        "invoice", 1
    };

    AddServer_200_response obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getInvoice());








}


void test_AddServer_200_response_order_is_assigned_from_json()
{
    bourne::json input =
    {
        "order", 1
    };

    AddServer_200_response obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getOrder());








}



void test_AddServer_200_response_text_is_converted_to_json()
{

    bourne::json input =
    {
        "text", "hello"
    };

    AddServer_200_response obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["text"] == output["text"]);



}


void test_AddServer_200_response_invoice_is_converted_to_json()
{
    bourne::json input =
    {
        "invoice", 1
    };

    AddServer_200_response obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["invoice"] == output["invoice"]);




}


void test_AddServer_200_response_order_is_converted_to_json()
{
    bourne::json input =
    {
        "order", 1
    };

    AddServer_200_response obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["order"] == output["order"]);




}


