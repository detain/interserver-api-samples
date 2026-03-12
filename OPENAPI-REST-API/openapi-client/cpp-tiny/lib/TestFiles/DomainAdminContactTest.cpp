
#include "DomainAdminContact.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_DomainAdminContact_status_is_assigned_from_json()
{


    bourne::json input =
    {
        "status", "hello"
    };

    DomainAdminContact obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getStatus().c_str());






}


void test_DomainAdminContact_state_is_assigned_from_json()
{


    bourne::json input =
    {
        "state", "hello"
    };

    DomainAdminContact obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getState().c_str());






}


void test_DomainAdminContact_org_name_is_assigned_from_json()
{


    bourne::json input =
    {
        "org_name", "hello"
    };

    DomainAdminContact obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getOrgName().c_str());






}


void test_DomainAdminContact_country_is_assigned_from_json()
{


    bourne::json input =
    {
        "country", "hello"
    };

    DomainAdminContact obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCountry().c_str());






}


void test_DomainAdminContact_postal_code_is_assigned_from_json()
{


    bourne::json input =
    {
        "postal_code", "hello"
    };

    DomainAdminContact obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getPostalCode().c_str());






}


void test_DomainAdminContact_email_is_assigned_from_json()
{


    bourne::json input =
    {
        "email", "hello"
    };

    DomainAdminContact obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getEmail().c_str());






}


void test_DomainAdminContact_fax_is_assigned_from_json()
{


    bourne::json input =
    {
        "fax", "hello"
    };

    DomainAdminContact obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getFax().c_str());






}


void test_DomainAdminContact_address2_is_assigned_from_json()
{


    bourne::json input =
    {
        "address2", "hello"
    };

    DomainAdminContact obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getAddress2().c_str());






}


void test_DomainAdminContact_address3_is_assigned_from_json()
{


    bourne::json input =
    {
        "address3", "hello"
    };

    DomainAdminContact obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getAddress3().c_str());






}


void test_DomainAdminContact_address1_is_assigned_from_json()
{


    bourne::json input =
    {
        "address1", "hello"
    };

    DomainAdminContact obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getAddress1().c_str());






}


void test_DomainAdminContact_city_is_assigned_from_json()
{


    bourne::json input =
    {
        "city", "hello"
    };

    DomainAdminContact obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCity().c_str());






}


void test_DomainAdminContact_phone_is_assigned_from_json()
{


    bourne::json input =
    {
        "phone", "hello"
    };

    DomainAdminContact obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getPhone().c_str());






}


void test_DomainAdminContact_first_name_is_assigned_from_json()
{


    bourne::json input =
    {
        "first_name", "hello"
    };

    DomainAdminContact obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getFirstName().c_str());






}


void test_DomainAdminContact_last_name_is_assigned_from_json()
{


    bourne::json input =
    {
        "last_name", "hello"
    };

    DomainAdminContact obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getLastName().c_str());






}



void test_DomainAdminContact_status_is_converted_to_json()
{

    bourne::json input =
    {
        "status", "hello"
    };

    DomainAdminContact obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["status"] == output["status"]);



}


void test_DomainAdminContact_state_is_converted_to_json()
{

    bourne::json input =
    {
        "state", "hello"
    };

    DomainAdminContact obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["state"] == output["state"]);



}


void test_DomainAdminContact_org_name_is_converted_to_json()
{

    bourne::json input =
    {
        "org_name", "hello"
    };

    DomainAdminContact obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["org_name"] == output["org_name"]);



}


void test_DomainAdminContact_country_is_converted_to_json()
{

    bourne::json input =
    {
        "country", "hello"
    };

    DomainAdminContact obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["country"] == output["country"]);



}


void test_DomainAdminContact_postal_code_is_converted_to_json()
{

    bourne::json input =
    {
        "postal_code", "hello"
    };

    DomainAdminContact obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["postal_code"] == output["postal_code"]);



}


void test_DomainAdminContact_email_is_converted_to_json()
{

    bourne::json input =
    {
        "email", "hello"
    };

    DomainAdminContact obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["email"] == output["email"]);



}


void test_DomainAdminContact_fax_is_converted_to_json()
{

    bourne::json input =
    {
        "fax", "hello"
    };

    DomainAdminContact obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["fax"] == output["fax"]);



}


void test_DomainAdminContact_address2_is_converted_to_json()
{

    bourne::json input =
    {
        "address2", "hello"
    };

    DomainAdminContact obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["address2"] == output["address2"]);



}


void test_DomainAdminContact_address3_is_converted_to_json()
{

    bourne::json input =
    {
        "address3", "hello"
    };

    DomainAdminContact obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["address3"] == output["address3"]);



}


void test_DomainAdminContact_address1_is_converted_to_json()
{

    bourne::json input =
    {
        "address1", "hello"
    };

    DomainAdminContact obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["address1"] == output["address1"]);



}


void test_DomainAdminContact_city_is_converted_to_json()
{

    bourne::json input =
    {
        "city", "hello"
    };

    DomainAdminContact obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["city"] == output["city"]);



}


void test_DomainAdminContact_phone_is_converted_to_json()
{

    bourne::json input =
    {
        "phone", "hello"
    };

    DomainAdminContact obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["phone"] == output["phone"]);



}


void test_DomainAdminContact_first_name_is_converted_to_json()
{

    bourne::json input =
    {
        "first_name", "hello"
    };

    DomainAdminContact obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["first_name"] == output["first_name"]);



}


void test_DomainAdminContact_last_name_is_converted_to_json()
{

    bourne::json input =
    {
        "last_name", "hello"
    };

    DomainAdminContact obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["last_name"] == output["last_name"]);



}


