
#include "UpdateTicket.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_UpdateTicket_ip_is_assigned_from_json()
{


    bourne::json input =
    {
        "ip", "hello"
    };

    UpdateTicket obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getIp().c_str());






}


void test_UpdateTicket_ip_address_is_assigned_from_json()
{


    bourne::json input =
    {
        "ip_address", "hello"
    };

    UpdateTicket obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getIpAddress().c_str());






}


void test_UpdateTicket_customer_server_access_is_assigned_from_json()
{


    bourne::json input =
    {
        "customer_server_access", "hello"
    };

    UpdateTicket obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCustomerServerAccess().c_str());






}


void test_UpdateTicket_root_password_is_assigned_from_json()
{


    bourne::json input =
    {
        "root_password", "hello"
    };

    UpdateTicket obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getRootPassword().c_str());






}


void test_UpdateTicket_sudo_username_is_assigned_from_json()
{


    bourne::json input =
    {
        "sudo_username", "hello"
    };

    UpdateTicket obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getSudoUsername().c_str());






}


void test_UpdateTicket_sudo_password_is_assigned_from_json()
{


    bourne::json input =
    {
        "sudo_password", "hello"
    };

    UpdateTicket obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getSudoPassword().c_str());






}


void test_UpdateTicket_port_is_assigned_from_json()
{
    bourne::json input =
    {
        "port", 1
    };

    UpdateTicket obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getPort());








}



void test_UpdateTicket_ip_is_converted_to_json()
{

    bourne::json input =
    {
        "ip", "hello"
    };

    UpdateTicket obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["ip"] == output["ip"]);



}


void test_UpdateTicket_ip_address_is_converted_to_json()
{

    bourne::json input =
    {
        "ip_address", "hello"
    };

    UpdateTicket obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["ip_address"] == output["ip_address"]);



}


void test_UpdateTicket_customer_server_access_is_converted_to_json()
{

    bourne::json input =
    {
        "customer_server_access", "hello"
    };

    UpdateTicket obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["customer_server_access"] == output["customer_server_access"]);



}


void test_UpdateTicket_root_password_is_converted_to_json()
{

    bourne::json input =
    {
        "root_password", "hello"
    };

    UpdateTicket obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["root_password"] == output["root_password"]);



}


void test_UpdateTicket_sudo_username_is_converted_to_json()
{

    bourne::json input =
    {
        "sudo_username", "hello"
    };

    UpdateTicket obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["sudo_username"] == output["sudo_username"]);



}


void test_UpdateTicket_sudo_password_is_converted_to_json()
{

    bourne::json input =
    {
        "sudo_password", "hello"
    };

    UpdateTicket obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["sudo_password"] == output["sudo_password"]);



}


void test_UpdateTicket_port_is_converted_to_json()
{
    bourne::json input =
    {
        "port", 1
    };

    UpdateTicket obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["port"] == output["port"]);




}


