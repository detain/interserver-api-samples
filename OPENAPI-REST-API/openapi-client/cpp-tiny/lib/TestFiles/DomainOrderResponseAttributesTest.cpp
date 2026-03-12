
#include "DomainOrderResponse_attributes.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_DomainOrderResponse_attributes_id_is_assigned_from_json()
{


    bourne::json input =
    {
        "id", "hello"
    };

    DomainOrderResponse_attributes obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getId().c_str());






}


void test_DomainOrderResponse_attributes_admin_email_is_assigned_from_json()
{


    bourne::json input =
    {
        "admin_email", "hello"
    };

    DomainOrderResponse_attributes obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getAdminEmail().c_str());






}



void test_DomainOrderResponse_attributes_id_is_converted_to_json()
{

    bourne::json input =
    {
        "id", "hello"
    };

    DomainOrderResponse_attributes obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["id"] == output["id"]);



}


void test_DomainOrderResponse_attributes_admin_email_is_converted_to_json()
{

    bourne::json input =
    {
        "admin_email", "hello"
    };

    DomainOrderResponse_attributes obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["admin_email"] == output["admin_email"]);



}


