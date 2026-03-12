
#include "DomainBillingExtra.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"




void test_DomainBillingExtra_order_id_is_assigned_from_json()
{


    bourne::json input =
    {
        "order_id", "hello"
    };

    DomainBillingExtra obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getOrderId().c_str());






}


void test_DomainBillingExtra_domain_id_is_assigned_from_json()
{


    bourne::json input =
    {
        "domain_id", "hello"
    };

    DomainBillingExtra obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getDomainId().c_str());






}



void test_DomainBillingExtra_email_is_assigned_from_json()
{


    bourne::json input =
    {
        "email", "hello"
    };

    DomainBillingExtra obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getEmail().c_str());






}


void test_DomainBillingExtra_firstname_is_assigned_from_json()
{


    bourne::json input =
    {
        "firstname", "hello"
    };

    DomainBillingExtra obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getFirstname().c_str());






}


void test_DomainBillingExtra_lastname_is_assigned_from_json()
{


    bourne::json input =
    {
        "lastname", "hello"
    };

    DomainBillingExtra obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getLastname().c_str());






}


void test_DomainBillingExtra_company_is_assigned_from_json()
{


    bourne::json input =
    {
        "company", "hello"
    };

    DomainBillingExtra obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCompany().c_str());






}


void test_DomainBillingExtra_address_is_assigned_from_json()
{


    bourne::json input =
    {
        "address", "hello"
    };

    DomainBillingExtra obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getAddress().c_str());






}


void test_DomainBillingExtra_address2_is_assigned_from_json()
{


    bourne::json input =
    {
        "address2", "hello"
    };

    DomainBillingExtra obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getAddress2().c_str());






}


void test_DomainBillingExtra_address3_is_assigned_from_json()
{


    bourne::json input =
    {
        "address3", "hello"
    };

    DomainBillingExtra obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getAddress3().c_str());






}


void test_DomainBillingExtra_city_is_assigned_from_json()
{


    bourne::json input =
    {
        "city", "hello"
    };

    DomainBillingExtra obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCity().c_str());






}


void test_DomainBillingExtra_state_is_assigned_from_json()
{


    bourne::json input =
    {
        "state", "hello"
    };

    DomainBillingExtra obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getState().c_str());






}


void test_DomainBillingExtra_zip_is_assigned_from_json()
{


    bourne::json input =
    {
        "zip", "hello"
    };

    DomainBillingExtra obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getZip().c_str());






}


void test_DomainBillingExtra_country_is_assigned_from_json()
{


    bourne::json input =
    {
        "country", "hello"
    };

    DomainBillingExtra obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCountry().c_str());






}


void test_DomainBillingExtra_phone_is_assigned_from_json()
{


    bourne::json input =
    {
        "phone", "hello"
    };

    DomainBillingExtra obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getPhone().c_str());






}


void test_DomainBillingExtra_fax_is_assigned_from_json()
{


    bourne::json input =
    {
        "fax", "hello"
    };

    DomainBillingExtra obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getFax().c_str());






}




void test_DomainBillingExtra_order_id_is_converted_to_json()
{

    bourne::json input =
    {
        "order_id", "hello"
    };

    DomainBillingExtra obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["order_id"] == output["order_id"]);



}


void test_DomainBillingExtra_domain_id_is_converted_to_json()
{

    bourne::json input =
    {
        "domain_id", "hello"
    };

    DomainBillingExtra obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["domain_id"] == output["domain_id"]);



}



void test_DomainBillingExtra_email_is_converted_to_json()
{

    bourne::json input =
    {
        "email", "hello"
    };

    DomainBillingExtra obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["email"] == output["email"]);



}


void test_DomainBillingExtra_firstname_is_converted_to_json()
{

    bourne::json input =
    {
        "firstname", "hello"
    };

    DomainBillingExtra obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["firstname"] == output["firstname"]);



}


void test_DomainBillingExtra_lastname_is_converted_to_json()
{

    bourne::json input =
    {
        "lastname", "hello"
    };

    DomainBillingExtra obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["lastname"] == output["lastname"]);



}


void test_DomainBillingExtra_company_is_converted_to_json()
{

    bourne::json input =
    {
        "company", "hello"
    };

    DomainBillingExtra obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["company"] == output["company"]);



}


void test_DomainBillingExtra_address_is_converted_to_json()
{

    bourne::json input =
    {
        "address", "hello"
    };

    DomainBillingExtra obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["address"] == output["address"]);



}


void test_DomainBillingExtra_address2_is_converted_to_json()
{

    bourne::json input =
    {
        "address2", "hello"
    };

    DomainBillingExtra obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["address2"] == output["address2"]);



}


void test_DomainBillingExtra_address3_is_converted_to_json()
{

    bourne::json input =
    {
        "address3", "hello"
    };

    DomainBillingExtra obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["address3"] == output["address3"]);



}


void test_DomainBillingExtra_city_is_converted_to_json()
{

    bourne::json input =
    {
        "city", "hello"
    };

    DomainBillingExtra obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["city"] == output["city"]);



}


void test_DomainBillingExtra_state_is_converted_to_json()
{

    bourne::json input =
    {
        "state", "hello"
    };

    DomainBillingExtra obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["state"] == output["state"]);



}


void test_DomainBillingExtra_zip_is_converted_to_json()
{

    bourne::json input =
    {
        "zip", "hello"
    };

    DomainBillingExtra obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["zip"] == output["zip"]);



}


void test_DomainBillingExtra_country_is_converted_to_json()
{

    bourne::json input =
    {
        "country", "hello"
    };

    DomainBillingExtra obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["country"] == output["country"]);



}


void test_DomainBillingExtra_phone_is_converted_to_json()
{

    bourne::json input =
    {
        "phone", "hello"
    };

    DomainBillingExtra obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["phone"] == output["phone"]);



}


void test_DomainBillingExtra_fax_is_converted_to_json()
{

    bourne::json input =
    {
        "fax", "hello"
    };

    DomainBillingExtra obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["fax"] == output["fax"]);



}


