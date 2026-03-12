
#include "DomainWhoisPrivacyRequest.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_DomainWhoisPrivacyRequest_func_is_assigned_from_json()
{


    bourne::json input =
    {
        "func", "hello"
    };

    DomainWhoisPrivacyRequest obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getFunc().c_str());






}


void test_DomainWhoisPrivacyRequest_csrf_token_is_assigned_from_json()
{


    bourne::json input =
    {
        "csrf_token", "hello"
    };

    DomainWhoisPrivacyRequest obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCsrfToken().c_str());






}


void test_DomainWhoisPrivacyRequest_domain_firstname_is_assigned_from_json()
{


    bourne::json input =
    {
        "domain_firstname", "hello"
    };

    DomainWhoisPrivacyRequest obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getDomainFirstname().c_str());






}


void test_DomainWhoisPrivacyRequest_domain_lastname_is_assigned_from_json()
{


    bourne::json input =
    {
        "domain_lastname", "hello"
    };

    DomainWhoisPrivacyRequest obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getDomainLastname().c_str());






}


void test_DomainWhoisPrivacyRequest_domain_email_is_assigned_from_json()
{


    bourne::json input =
    {
        "domain_email", "hello"
    };

    DomainWhoisPrivacyRequest obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getDomainEmail().c_str());






}


void test_DomainWhoisPrivacyRequest_domain_address_is_assigned_from_json()
{


    bourne::json input =
    {
        "domain_address", "hello"
    };

    DomainWhoisPrivacyRequest obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getDomainAddress().c_str());






}


void test_DomainWhoisPrivacyRequest_domain_address2_is_assigned_from_json()
{


    bourne::json input =
    {
        "domain_address2", "hello"
    };

    DomainWhoisPrivacyRequest obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getDomainAddress2().c_str());






}


void test_DomainWhoisPrivacyRequest_domain_address3_is_assigned_from_json()
{


    bourne::json input =
    {
        "domain_address3", "hello"
    };

    DomainWhoisPrivacyRequest obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getDomainAddress3().c_str());






}


void test_DomainWhoisPrivacyRequest_domain_city_is_assigned_from_json()
{


    bourne::json input =
    {
        "domain_city", "hello"
    };

    DomainWhoisPrivacyRequest obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getDomainCity().c_str());






}


void test_DomainWhoisPrivacyRequest_domain_state_is_assigned_from_json()
{


    bourne::json input =
    {
        "domain_state", "hello"
    };

    DomainWhoisPrivacyRequest obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getDomainState().c_str());






}


void test_DomainWhoisPrivacyRequest_domain_zip_is_assigned_from_json()
{


    bourne::json input =
    {
        "domain_zip", "hello"
    };

    DomainWhoisPrivacyRequest obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getDomainZip().c_str());






}


void test_DomainWhoisPrivacyRequest_domain_country_is_assigned_from_json()
{


    bourne::json input =
    {
        "domain_country", "hello"
    };

    DomainWhoisPrivacyRequest obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getDomainCountry().c_str());






}


void test_DomainWhoisPrivacyRequest_domain_phone_is_assigned_from_json()
{


    bourne::json input =
    {
        "domain_phone", "hello"
    };

    DomainWhoisPrivacyRequest obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getDomainPhone().c_str());






}


void test_DomainWhoisPrivacyRequest_domain_fax_is_assigned_from_json()
{


    bourne::json input =
    {
        "domain_fax", "hello"
    };

    DomainWhoisPrivacyRequest obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getDomainFax().c_str());






}


void test_DomainWhoisPrivacyRequest_domain_company_is_assigned_from_json()
{


    bourne::json input =
    {
        "domain_company", "hello"
    };

    DomainWhoisPrivacyRequest obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getDomainCompany().c_str());






}


void test_DomainWhoisPrivacyRequest_domain_extra_is_assigned_from_json()
{


    bourne::json input =
    {
        "domain_extra", "hello"
    };

    DomainWhoisPrivacyRequest obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getDomainExtra().c_str());






}



void test_DomainWhoisPrivacyRequest_func_is_converted_to_json()
{

    bourne::json input =
    {
        "func", "hello"
    };

    DomainWhoisPrivacyRequest obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["func"] == output["func"]);



}


void test_DomainWhoisPrivacyRequest_csrf_token_is_converted_to_json()
{

    bourne::json input =
    {
        "csrf_token", "hello"
    };

    DomainWhoisPrivacyRequest obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["csrf_token"] == output["csrf_token"]);



}


void test_DomainWhoisPrivacyRequest_domain_firstname_is_converted_to_json()
{

    bourne::json input =
    {
        "domain_firstname", "hello"
    };

    DomainWhoisPrivacyRequest obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["domain_firstname"] == output["domain_firstname"]);



}


void test_DomainWhoisPrivacyRequest_domain_lastname_is_converted_to_json()
{

    bourne::json input =
    {
        "domain_lastname", "hello"
    };

    DomainWhoisPrivacyRequest obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["domain_lastname"] == output["domain_lastname"]);



}


void test_DomainWhoisPrivacyRequest_domain_email_is_converted_to_json()
{

    bourne::json input =
    {
        "domain_email", "hello"
    };

    DomainWhoisPrivacyRequest obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["domain_email"] == output["domain_email"]);



}


void test_DomainWhoisPrivacyRequest_domain_address_is_converted_to_json()
{

    bourne::json input =
    {
        "domain_address", "hello"
    };

    DomainWhoisPrivacyRequest obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["domain_address"] == output["domain_address"]);



}


void test_DomainWhoisPrivacyRequest_domain_address2_is_converted_to_json()
{

    bourne::json input =
    {
        "domain_address2", "hello"
    };

    DomainWhoisPrivacyRequest obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["domain_address2"] == output["domain_address2"]);



}


void test_DomainWhoisPrivacyRequest_domain_address3_is_converted_to_json()
{

    bourne::json input =
    {
        "domain_address3", "hello"
    };

    DomainWhoisPrivacyRequest obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["domain_address3"] == output["domain_address3"]);



}


void test_DomainWhoisPrivacyRequest_domain_city_is_converted_to_json()
{

    bourne::json input =
    {
        "domain_city", "hello"
    };

    DomainWhoisPrivacyRequest obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["domain_city"] == output["domain_city"]);



}


void test_DomainWhoisPrivacyRequest_domain_state_is_converted_to_json()
{

    bourne::json input =
    {
        "domain_state", "hello"
    };

    DomainWhoisPrivacyRequest obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["domain_state"] == output["domain_state"]);



}


void test_DomainWhoisPrivacyRequest_domain_zip_is_converted_to_json()
{

    bourne::json input =
    {
        "domain_zip", "hello"
    };

    DomainWhoisPrivacyRequest obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["domain_zip"] == output["domain_zip"]);



}


void test_DomainWhoisPrivacyRequest_domain_country_is_converted_to_json()
{

    bourne::json input =
    {
        "domain_country", "hello"
    };

    DomainWhoisPrivacyRequest obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["domain_country"] == output["domain_country"]);



}


void test_DomainWhoisPrivacyRequest_domain_phone_is_converted_to_json()
{

    bourne::json input =
    {
        "domain_phone", "hello"
    };

    DomainWhoisPrivacyRequest obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["domain_phone"] == output["domain_phone"]);



}


void test_DomainWhoisPrivacyRequest_domain_fax_is_converted_to_json()
{

    bourne::json input =
    {
        "domain_fax", "hello"
    };

    DomainWhoisPrivacyRequest obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["domain_fax"] == output["domain_fax"]);



}


void test_DomainWhoisPrivacyRequest_domain_company_is_converted_to_json()
{

    bourne::json input =
    {
        "domain_company", "hello"
    };

    DomainWhoisPrivacyRequest obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["domain_company"] == output["domain_company"]);



}


void test_DomainWhoisPrivacyRequest_domain_extra_is_converted_to_json()
{

    bourne::json input =
    {
        "domain_extra", "hello"
    };

    DomainWhoisPrivacyRequest obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["domain_extra"] == output["domain_extra"]);



}


