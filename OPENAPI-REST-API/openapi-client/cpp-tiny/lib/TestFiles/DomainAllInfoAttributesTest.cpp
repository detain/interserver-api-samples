
#include "DomainAllInfo_attributes.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"




void test_DomainAllInfo_attributes_registry_createdate_is_assigned_from_json()
{


    bourne::json input =
    {
        "registry_createdate", "hello"
    };

    DomainAllInfo_attributes obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getRegistryCreatedate().c_str());






}


void test_DomainAllInfo_attributes_registry_expiredate_is_assigned_from_json()
{


    bourne::json input =
    {
        "registry_expiredate", "hello"
    };

    DomainAllInfo_attributes obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getRegistryExpiredate().c_str());






}


void test_DomainAllInfo_attributes_tld_data_is_assigned_from_json()
{


    bourne::json input =
    {
        "tld_data", "hello"
    };

    DomainAllInfo_attributes obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getTldData().c_str());






}


void test_DomainAllInfo_attributes_let_expire_is_assigned_from_json()
{


    bourne::json input =
    {
        "let_expire", "hello"
    };

    DomainAllInfo_attributes obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getLetExpire().c_str());






}


void test_DomainAllInfo_attributes_auto_renew_is_assigned_from_json()
{


    bourne::json input =
    {
        "auto_renew", "hello"
    };

    DomainAllInfo_attributes obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getAutoRenew().c_str());






}


void test_DomainAllInfo_attributes_sponsoring_rsp_is_assigned_from_json()
{


    bourne::json input =
    {
        "sponsoring_rsp", "hello"
    };

    DomainAllInfo_attributes obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getSponsoringRsp().c_str());






}


void test_DomainAllInfo_attributes_gdpr_consent_status_is_assigned_from_json()
{


    bourne::json input =
    {
        "gdpr_consent_status", "hello"
    };

    DomainAllInfo_attributes obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getGdprConsentStatus().c_str());






}



void test_DomainAllInfo_attributes_registry_updatedate_is_assigned_from_json()
{


    bourne::json input =
    {
        "registry_updatedate", "hello"
    };

    DomainAllInfo_attributes obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getRegistryUpdatedate().c_str());






}


void test_DomainAllInfo_attributes_affiliate_id_is_assigned_from_json()
{


    bourne::json input =
    {
        "affiliate_id", "hello"
    };

    DomainAllInfo_attributes obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getAffiliateId().c_str());






}


void test_DomainAllInfo_attributes_expiredate_is_assigned_from_json()
{


    bourne::json input =
    {
        "expiredate", "hello"
    };

    DomainAllInfo_attributes obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getExpiredate().c_str());






}




void test_DomainAllInfo_attributes_registry_createdate_is_converted_to_json()
{

    bourne::json input =
    {
        "registry_createdate", "hello"
    };

    DomainAllInfo_attributes obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["registry_createdate"] == output["registry_createdate"]);



}


void test_DomainAllInfo_attributes_registry_expiredate_is_converted_to_json()
{

    bourne::json input =
    {
        "registry_expiredate", "hello"
    };

    DomainAllInfo_attributes obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["registry_expiredate"] == output["registry_expiredate"]);



}


void test_DomainAllInfo_attributes_tld_data_is_converted_to_json()
{

    bourne::json input =
    {
        "tld_data", "hello"
    };

    DomainAllInfo_attributes obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["tld_data"] == output["tld_data"]);



}


void test_DomainAllInfo_attributes_let_expire_is_converted_to_json()
{

    bourne::json input =
    {
        "let_expire", "hello"
    };

    DomainAllInfo_attributes obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["let_expire"] == output["let_expire"]);



}


void test_DomainAllInfo_attributes_auto_renew_is_converted_to_json()
{

    bourne::json input =
    {
        "auto_renew", "hello"
    };

    DomainAllInfo_attributes obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["auto_renew"] == output["auto_renew"]);



}


void test_DomainAllInfo_attributes_sponsoring_rsp_is_converted_to_json()
{

    bourne::json input =
    {
        "sponsoring_rsp", "hello"
    };

    DomainAllInfo_attributes obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["sponsoring_rsp"] == output["sponsoring_rsp"]);



}


void test_DomainAllInfo_attributes_gdpr_consent_status_is_converted_to_json()
{

    bourne::json input =
    {
        "gdpr_consent_status", "hello"
    };

    DomainAllInfo_attributes obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["gdpr_consent_status"] == output["gdpr_consent_status"]);



}



void test_DomainAllInfo_attributes_registry_updatedate_is_converted_to_json()
{

    bourne::json input =
    {
        "registry_updatedate", "hello"
    };

    DomainAllInfo_attributes obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["registry_updatedate"] == output["registry_updatedate"]);



}


void test_DomainAllInfo_attributes_affiliate_id_is_converted_to_json()
{

    bourne::json input =
    {
        "affiliate_id", "hello"
    };

    DomainAllInfo_attributes obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["affiliate_id"] == output["affiliate_id"]);



}


void test_DomainAllInfo_attributes_expiredate_is_converted_to_json()
{

    bourne::json input =
    {
        "expiredate", "hello"
    };

    DomainAllInfo_attributes obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["expiredate"] == output["expiredate"]);



}


