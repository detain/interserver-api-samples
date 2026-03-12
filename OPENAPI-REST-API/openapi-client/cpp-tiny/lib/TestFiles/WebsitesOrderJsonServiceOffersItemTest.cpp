
#include "WebsitesOrderJsonServiceOffersItem.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_WebsitesOrderJsonServiceOffersItem_service_offer_id_is_assigned_from_json()
{


    bourne::json input =
    {
        "service_offer_id", "hello"
    };

    WebsitesOrderJsonServiceOffersItem obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getServiceOfferId().c_str());






}


void test_WebsitesOrderJsonServiceOffersItem_service_id_is_assigned_from_json()
{


    bourne::json input =
    {
        "service_id", "hello"
    };

    WebsitesOrderJsonServiceOffersItem obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getServiceId().c_str());






}


void test_WebsitesOrderJsonServiceOffersItem_intro_cost_is_assigned_from_json()
{
    bourne::json input =
    {
        "intro_cost", 1
    };

    WebsitesOrderJsonServiceOffersItem obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getIntroCost());








}


void test_WebsitesOrderJsonServiceOffersItem_renewal_cost_is_assigned_from_json()
{
    bourne::json input =
    {
        "renewal_cost", 1
    };

    WebsitesOrderJsonServiceOffersItem obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getRenewalCost());








}


void test_WebsitesOrderJsonServiceOffersItem_intro_frequency_is_assigned_from_json()
{


    bourne::json input =
    {
        "intro_frequency", "hello"
    };

    WebsitesOrderJsonServiceOffersItem obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getIntroFrequency().c_str());






}


void test_WebsitesOrderJsonServiceOffersItem_renewal_frequency_is_assigned_from_json()
{


    bourne::json input =
    {
        "renewal_frequency", "hello"
    };

    WebsitesOrderJsonServiceOffersItem obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getRenewalFrequency().c_str());






}


void test_WebsitesOrderJsonServiceOffersItem_allow_coupon_is_assigned_from_json()
{


    bourne::json input =
    {
        "allow_coupon", "hello"
    };

    WebsitesOrderJsonServiceOffersItem obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getAllowCoupon().c_str());






}


void test_WebsitesOrderJsonServiceOffersItem_service_module_is_assigned_from_json()
{


    bourne::json input =
    {
        "service_module", "hello"
    };

    WebsitesOrderJsonServiceOffersItem obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getServiceModule().c_str());






}


void test_WebsitesOrderJsonServiceOffersItem_created_at_is_assigned_from_json()
{


    bourne::json input =
    {
        "created_at", "hello"
    };

    WebsitesOrderJsonServiceOffersItem obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCreatedAt().c_str());






}


void test_WebsitesOrderJsonServiceOffersItem_updated_at_is_assigned_from_json()
{


    bourne::json input =
    {
        "updated_at", "hello"
    };

    WebsitesOrderJsonServiceOffersItem obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getUpdatedAt().c_str());






}


void test_WebsitesOrderJsonServiceOffersItem_deleted_at_is_assigned_from_json()
{


    bourne::json input =
    {
        "deleted_at", "hello"
    };

    WebsitesOrderJsonServiceOffersItem obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getDeletedAt().c_str());






}


void test_WebsitesOrderJsonServiceOffersItem_currencySymbol_is_assigned_from_json()
{


    bourne::json input =
    {
        "currencySymbol", "hello"
    };

    WebsitesOrderJsonServiceOffersItem obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCurrencySymbol().c_str());






}



void test_WebsitesOrderJsonServiceOffersItem_service_offer_id_is_converted_to_json()
{

    bourne::json input =
    {
        "service_offer_id", "hello"
    };

    WebsitesOrderJsonServiceOffersItem obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["service_offer_id"] == output["service_offer_id"]);



}


void test_WebsitesOrderJsonServiceOffersItem_service_id_is_converted_to_json()
{

    bourne::json input =
    {
        "service_id", "hello"
    };

    WebsitesOrderJsonServiceOffersItem obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["service_id"] == output["service_id"]);



}


void test_WebsitesOrderJsonServiceOffersItem_intro_cost_is_converted_to_json()
{
    bourne::json input =
    {
        "intro_cost", 1
    };

    WebsitesOrderJsonServiceOffersItem obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["intro_cost"] == output["intro_cost"]);




}


void test_WebsitesOrderJsonServiceOffersItem_renewal_cost_is_converted_to_json()
{
    bourne::json input =
    {
        "renewal_cost", 1
    };

    WebsitesOrderJsonServiceOffersItem obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["renewal_cost"] == output["renewal_cost"]);




}


void test_WebsitesOrderJsonServiceOffersItem_intro_frequency_is_converted_to_json()
{

    bourne::json input =
    {
        "intro_frequency", "hello"
    };

    WebsitesOrderJsonServiceOffersItem obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["intro_frequency"] == output["intro_frequency"]);



}


void test_WebsitesOrderJsonServiceOffersItem_renewal_frequency_is_converted_to_json()
{

    bourne::json input =
    {
        "renewal_frequency", "hello"
    };

    WebsitesOrderJsonServiceOffersItem obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["renewal_frequency"] == output["renewal_frequency"]);



}


void test_WebsitesOrderJsonServiceOffersItem_allow_coupon_is_converted_to_json()
{

    bourne::json input =
    {
        "allow_coupon", "hello"
    };

    WebsitesOrderJsonServiceOffersItem obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["allow_coupon"] == output["allow_coupon"]);



}


void test_WebsitesOrderJsonServiceOffersItem_service_module_is_converted_to_json()
{

    bourne::json input =
    {
        "service_module", "hello"
    };

    WebsitesOrderJsonServiceOffersItem obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["service_module"] == output["service_module"]);



}


void test_WebsitesOrderJsonServiceOffersItem_created_at_is_converted_to_json()
{

    bourne::json input =
    {
        "created_at", "hello"
    };

    WebsitesOrderJsonServiceOffersItem obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["created_at"] == output["created_at"]);



}


void test_WebsitesOrderJsonServiceOffersItem_updated_at_is_converted_to_json()
{

    bourne::json input =
    {
        "updated_at", "hello"
    };

    WebsitesOrderJsonServiceOffersItem obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["updated_at"] == output["updated_at"]);



}


void test_WebsitesOrderJsonServiceOffersItem_deleted_at_is_converted_to_json()
{

    bourne::json input =
    {
        "deleted_at", "hello"
    };

    WebsitesOrderJsonServiceOffersItem obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["deleted_at"] == output["deleted_at"]);



}


void test_WebsitesOrderJsonServiceOffersItem_currencySymbol_is_converted_to_json()
{

    bourne::json input =
    {
        "currencySymbol", "hello"
    };

    WebsitesOrderJsonServiceOffersItem obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["currencySymbol"] == output["currencySymbol"]);



}


