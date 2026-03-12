
#include "TicketCustomFieldDetails.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_TicketCustomFieldDetails_customerServerAccess_is_assigned_from_json()
{


    bourne::json input =
    {
        "customerServerAccess", "hello"
    };

    TicketCustomFieldDetails obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCustomerServerAccess().c_str());






}


void test_TicketCustomFieldDetails_ipAddress_is_assigned_from_json()
{


    bourne::json input =
    {
        "ipAddress", "hello"
    };

    TicketCustomFieldDetails obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getIpAddress().c_str());






}


void test_TicketCustomFieldDetails_rootPassword_is_assigned_from_json()
{


    bourne::json input =
    {
        "rootPassword", "hello"
    };

    TicketCustomFieldDetails obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getRootPassword().c_str());






}


void test_TicketCustomFieldDetails_sudoUser_is_assigned_from_json()
{


    bourne::json input =
    {
        "sudoUser", "hello"
    };

    TicketCustomFieldDetails obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getSudoUser().c_str());






}


void test_TicketCustomFieldDetails_sudoPassword_is_assigned_from_json()
{
    bourne::json input =
    {
        "sudoPassword", 1
    };

    TicketCustomFieldDetails obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getSudoPassword());








}


void test_TicketCustomFieldDetails_port_is_assigned_from_json()
{
    bourne::json input =
    {
        "port", 1
    };

    TicketCustomFieldDetails obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getPort());








}



void test_TicketCustomFieldDetails_customerServerAccess_is_converted_to_json()
{

    bourne::json input =
    {
        "customerServerAccess", "hello"
    };

    TicketCustomFieldDetails obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["customerServerAccess"] == output["customerServerAccess"]);



}


void test_TicketCustomFieldDetails_ipAddress_is_converted_to_json()
{

    bourne::json input =
    {
        "ipAddress", "hello"
    };

    TicketCustomFieldDetails obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["ipAddress"] == output["ipAddress"]);



}


void test_TicketCustomFieldDetails_rootPassword_is_converted_to_json()
{

    bourne::json input =
    {
        "rootPassword", "hello"
    };

    TicketCustomFieldDetails obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["rootPassword"] == output["rootPassword"]);



}


void test_TicketCustomFieldDetails_sudoUser_is_converted_to_json()
{

    bourne::json input =
    {
        "sudoUser", "hello"
    };

    TicketCustomFieldDetails obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["sudoUser"] == output["sudoUser"]);



}


void test_TicketCustomFieldDetails_sudoPassword_is_converted_to_json()
{
    bourne::json input =
    {
        "sudoPassword", 1
    };

    TicketCustomFieldDetails obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["sudoPassword"] == output["sudoPassword"]);




}


void test_TicketCustomFieldDetails_port_is_converted_to_json()
{
    bourne::json input =
    {
        "port", 1
    };

    TicketCustomFieldDetails obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["port"] == output["port"]);




}


