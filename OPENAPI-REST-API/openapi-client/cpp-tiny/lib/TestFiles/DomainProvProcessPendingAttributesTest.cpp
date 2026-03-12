
#include "DomainProvProcessPending_attributes.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_DomainProvProcessPending_attributes_id_is_assigned_from_json()
{


    bourne::json input =
    {
        "id", "hello"
    };

    DomainProvProcessPending_attributes obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getId().c_str());






}


void test_DomainProvProcessPending_attributes_order_id_is_assigned_from_json()
{


    bourne::json input =
    {
        "order_id", "hello"
    };

    DomainProvProcessPending_attributes obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getOrderId().c_str());






}


void test_DomainProvProcessPending_attributes_registrationexpirationdate_is_assigned_from_json()
{


    bourne::json input =
    {
        "registrationexpirationdate", "hello"
    };

    DomainProvProcessPending_attributes obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getRegistrationexpirationdate().c_str());






}


void test_DomainProvProcessPending_attributes_f_auto_renew_is_assigned_from_json()
{


    bourne::json input =
    {
        "f_auto_renew", "hello"
    };

    DomainProvProcessPending_attributes obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getFAutoRenew().c_str());






}



void test_DomainProvProcessPending_attributes_id_is_converted_to_json()
{

    bourne::json input =
    {
        "id", "hello"
    };

    DomainProvProcessPending_attributes obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["id"] == output["id"]);



}


void test_DomainProvProcessPending_attributes_order_id_is_converted_to_json()
{

    bourne::json input =
    {
        "order_id", "hello"
    };

    DomainProvProcessPending_attributes obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["order_id"] == output["order_id"]);



}


void test_DomainProvProcessPending_attributes_registrationexpirationdate_is_converted_to_json()
{

    bourne::json input =
    {
        "registrationexpirationdate", "hello"
    };

    DomainProvProcessPending_attributes obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["registrationexpirationdate"] == output["registrationexpirationdate"]);



}


void test_DomainProvProcessPending_attributes_f_auto_renew_is_converted_to_json()
{

    bourne::json input =
    {
        "f_auto_renew", "hello"
    };

    DomainProvProcessPending_attributes obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["f_auto_renew"] == output["f_auto_renew"]);



}


