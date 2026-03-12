
#include "AccountInfoData.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_AccountInfoData_group_is_assigned_from_json()
{


    bourne::json input =
    {
        "group", "hello"
    };

    AccountInfoData obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getGroup().c_str());






}


void test_AccountInfoData_address_is_assigned_from_json()
{


    bourne::json input =
    {
        "address", "hello"
    };

    AccountInfoData obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getAddress().c_str());






}


void test_AccountInfoData_city_is_assigned_from_json()
{


    bourne::json input =
    {
        "city", "hello"
    };

    AccountInfoData obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCity().c_str());






}


void test_AccountInfoData_country_is_assigned_from_json()
{


    bourne::json input =
    {
        "country", "hello"
    };

    AccountInfoData obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCountry().c_str());






}


void test_AccountInfoData_disable_cc_is_assigned_from_json()
{


    bourne::json input =
    {
        "disable_cc", "hello"
    };

    AccountInfoData obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getDisableCc().c_str());






}


void test_AccountInfoData_fraudrecord_score_is_assigned_from_json()
{


    bourne::json input =
    {
        "fraudrecord_score", "hello"
    };

    AccountInfoData obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getFraudrecordScore().c_str());






}


void test_AccountInfoData_ima_is_assigned_from_json()
{


    bourne::json input =
    {
        "ima", "hello"
    };

    AccountInfoData obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getIma().c_str());






}


void test_AccountInfoData_name_is_assigned_from_json()
{


    bourne::json input =
    {
        "name", "hello"
    };

    AccountInfoData obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getName().c_str());






}


void test_AccountInfoData_payment_method_is_assigned_from_json()
{


    bourne::json input =
    {
        "payment_method", "hello"
    };

    AccountInfoData obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getPaymentMethod().c_str());






}


void test_AccountInfoData_phone_is_assigned_from_json()
{


    bourne::json input =
    {
        "phone", "hello"
    };

    AccountInfoData obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getPhone().c_str());






}


void test_AccountInfoData_pin_is_assigned_from_json()
{


    bourne::json input =
    {
        "pin", "hello"
    };

    AccountInfoData obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getPin().c_str());






}


void test_AccountInfoData_state_is_assigned_from_json()
{


    bourne::json input =
    {
        "state", "hello"
    };

    AccountInfoData obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getState().c_str());






}


void test_AccountInfoData_status_is_assigned_from_json()
{


    bourne::json input =
    {
        "status", "hello"
    };

    AccountInfoData obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getStatus().c_str());






}


void test_AccountInfoData_zip_is_assigned_from_json()
{


    bourne::json input =
    {
        "zip", "hello"
    };

    AccountInfoData obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getZip().c_str());






}


void test_AccountInfoData_account_id_is_assigned_from_json()
{


    bourne::json input =
    {
        "account_id", "hello"
    };

    AccountInfoData obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getAccountId().c_str());






}


void test_AccountInfoData_account_lid_is_assigned_from_json()
{


    bourne::json input =
    {
        "account_lid", "hello"
    };

    AccountInfoData obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getAccountLid().c_str());






}


void test_AccountInfoData_address2_is_assigned_from_json()
{


    bourne::json input =
    {
        "address2", "hello"
    };

    AccountInfoData obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getAddress2().c_str());






}


void test_AccountInfoData_affiliate_dock_description_is_assigned_from_json()
{


    bourne::json input =
    {
        "affiliate_dock_description", "hello"
    };

    AccountInfoData obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getAffiliateDockDescription().c_str());






}


void test_AccountInfoData_affiliate_dock_title_is_assigned_from_json()
{


    bourne::json input =
    {
        "affiliate_dock_title", "hello"
    };

    AccountInfoData obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getAffiliateDockTitle().c_str());






}


void test_AccountInfoData_affiliate_payment_method_is_assigned_from_json()
{


    bourne::json input =
    {
        "affiliate_payment_method", "hello"
    };

    AccountInfoData obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getAffiliatePaymentMethod().c_str());






}


void test_AccountInfoData_affiliate_paypal_is_assigned_from_json()
{


    bourne::json input =
    {
        "affiliate_paypal", "hello"
    };

    AccountInfoData obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getAffiliatePaypal().c_str());






}


void test_AccountInfoData_cc_is_assigned_from_json()
{


    bourne::json input =
    {
        "cc", "hello"
    };

    AccountInfoData obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCc().c_str());






}


void test_AccountInfoData_cc_auto_is_assigned_from_json()
{


    bourne::json input =
    {
        "cc_auto", "hello"
    };

    AccountInfoData obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCcAuto().c_str());






}


void test_AccountInfoData_cc_exp_is_assigned_from_json()
{


    bourne::json input =
    {
        "cc_exp", "hello"
    };

    AccountInfoData obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCcExp().c_str());






}


void test_AccountInfoData_cc_type_is_assigned_from_json()
{


    bourne::json input =
    {
        "cc_type", "hello"
    };

    AccountInfoData obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCcType().c_str());






}


void test_AccountInfoData_cc_whitelist_is_assigned_from_json()
{


    bourne::json input =
    {
        "cc_whitelist", "hello"
    };

    AccountInfoData obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCcWhitelist().c_str());






}



void test_AccountInfoData_ccs_added_is_assigned_from_json()
{


    bourne::json input =
    {
        "ccs_added", "hello"
    };

    AccountInfoData obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCcsAdded().c_str());






}


void test_AccountInfoData_company_is_assigned_from_json()
{


    bourne::json input =
    {
        "company", "hello"
    };

    AccountInfoData obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCompany().c_str());






}


void test_AccountInfoData_currency_is_assigned_from_json()
{


    bourne::json input =
    {
        "currency", "hello"
    };

    AccountInfoData obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCurrency().c_str());






}


void test_AccountInfoData_disable_reinstall_is_assigned_from_json()
{


    bourne::json input =
    {
        "disable_reinstall", "hello"
    };

    AccountInfoData obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getDisableReinstall().c_str());






}


void test_AccountInfoData_disable_reset_is_assigned_from_json()
{


    bourne::json input =
    {
        "disable_reset", "hello"
    };

    AccountInfoData obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getDisableReset().c_str());






}


void test_AccountInfoData_email_is_assigned_from_json()
{


    bourne::json input =
    {
        "email", "hello"
    };

    AccountInfoData obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getEmail().c_str());






}


void test_AccountInfoData_email_abuse_is_assigned_from_json()
{


    bourne::json input =
    {
        "email_abuse", "hello"
    };

    AccountInfoData obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getEmailAbuse().c_str());






}




void test_AccountInfoData_facebook_id_is_assigned_from_json()
{


    bourne::json input =
    {
        "facebook_id", "hello"
    };

    AccountInfoData obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getFacebookId().c_str());






}


void test_AccountInfoData_facebook_url_is_assigned_from_json()
{


    bourne::json input =
    {
        "facebook_url", "hello"
    };

    AccountInfoData obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getFacebookUrl().c_str());






}


void test_AccountInfoData_firstname_is_assigned_from_json()
{


    bourne::json input =
    {
        "firstname", "hello"
    };

    AccountInfoData obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getFirstname().c_str());






}



void test_AccountInfoData_github_id_is_assigned_from_json()
{


    bourne::json input =
    {
        "github_id", "hello"
    };

    AccountInfoData obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getGithubId().c_str());






}


void test_AccountInfoData_github_url_is_assigned_from_json()
{


    bourne::json input =
    {
        "github_url", "hello"
    };

    AccountInfoData obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getGithubUrl().c_str());






}


void test_AccountInfoData_google_id_is_assigned_from_json()
{


    bourne::json input =
    {
        "google_id", "hello"
    };

    AccountInfoData obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getGoogleId().c_str());






}


void test_AccountInfoData_google_url_is_assigned_from_json()
{


    bourne::json input =
    {
        "google_url", "hello"
    };

    AccountInfoData obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getGoogleUrl().c_str());






}


void test_AccountInfoData_innertell_id_is_assigned_from_json()
{


    bourne::json input =
    {
        "innertell_id", "hello"
    };

    AccountInfoData obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getInnertellId().c_str());






}


void test_AccountInfoData_lastname_is_assigned_from_json()
{


    bourne::json input =
    {
        "lastname", "hello"
    };

    AccountInfoData obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getLastname().c_str());






}


void test_AccountInfoData_locale_is_assigned_from_json()
{


    bourne::json input =
    {
        "locale", "hello"
    };

    AccountInfoData obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getLocale().c_str());






}



void test_AccountInfoData_maxmind_score_is_assigned_from_json()
{


    bourne::json input =
    {
        "maxmind_score", "hello"
    };

    AccountInfoData obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getMaxmindScore().c_str());






}


void test_AccountInfoData_mb_id_is_assigned_from_json()
{


    bourne::json input =
    {
        "mb_id", "hello"
    };

    AccountInfoData obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getMbId().c_str());






}


void test_AccountInfoData_modernbill_id_is_assigned_from_json()
{


    bourne::json input =
    {
        "modernbill_id", "hello"
    };

    AccountInfoData obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getModernbillId().c_str());






}


void test_AccountInfoData_picture_is_assigned_from_json()
{


    bourne::json input =
    {
        "picture", "hello"
    };

    AccountInfoData obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getPicture().c_str());






}


void test_AccountInfoData_referrer_coupon_is_assigned_from_json()
{


    bourne::json input =
    {
        "referrer_coupon", "hello"
    };

    AccountInfoData obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getReferrerCoupon().c_str());






}


void test_AccountInfoData_reseller_markup_is_assigned_from_json()
{


    bourne::json input =
    {
        "reseller_markup", "hello"
    };

    AccountInfoData obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getResellerMarkup().c_str());






}


void test_AccountInfoData_username_is_assigned_from_json()
{


    bourne::json input =
    {
        "username", "hello"
    };

    AccountInfoData obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getUsername().c_str());






}


void test_AccountInfoData_ssh_key_is_assigned_from_json()
{


    bourne::json input =
    {
        "ssh_key", "hello"
    };

    AccountInfoData obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getSshKey().c_str());






}


void test_AccountInfoData_ssh_key_wrapped_is_assigned_from_json()
{


    bourne::json input =
    {
        "ssh_key_wrapped", "hello"
    };

    AccountInfoData obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getSshKeyWrapped().c_str());






}


void test_AccountInfoData_api_key_is_assigned_from_json()
{


    bourne::json input =
    {
        "api_key", "hello"
    };

    AccountInfoData obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getApiKey().c_str());






}


void test_AccountInfoData_api_key_wrapped_is_assigned_from_json()
{


    bourne::json input =
    {
        "api_key_wrapped", "hello"
    };

    AccountInfoData obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getApiKeyWrapped().c_str());






}


void test_AccountInfoData_2fa_google_key_is_assigned_from_json()
{


    bourne::json input =
    {
        "2fa_google_key", "hello"
    };

    AccountInfoData obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.get2faGoogleKey().c_str());






}


void test_AccountInfoData_2fa_google_enabled_is_assigned_from_json()
{




    bourne::json input =
    {
        "2fa_google_enabled", true
    };

    AccountInfoData obj(input.dump());

    TEST_ASSERT(true == obj.is2faGoogleEnabled());




}


void test_AccountInfoData_2fa_google_is_assigned_from_json()
{
    bourne::json input =
    {
        "2fa_google", 1
    };

    AccountInfoData obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.get2faGoogle());








}


void test_AccountInfoData_2fa_google_split_is_assigned_from_json()
{


    bourne::json input =
    {
        "2fa_google_split", "hello"
    };

    AccountInfoData obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.get2faGoogleSplit().c_str());






}


void test_AccountInfoData_2fa_google_qr_is_assigned_from_json()
{


    bourne::json input =
    {
        "2fa_google_qr", "hello"
    };

    AccountInfoData obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.get2faGoogleQr().c_str());






}



void test_AccountInfoData_group_is_converted_to_json()
{

    bourne::json input =
    {
        "group", "hello"
    };

    AccountInfoData obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["group"] == output["group"]);



}


void test_AccountInfoData_address_is_converted_to_json()
{

    bourne::json input =
    {
        "address", "hello"
    };

    AccountInfoData obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["address"] == output["address"]);



}


void test_AccountInfoData_city_is_converted_to_json()
{

    bourne::json input =
    {
        "city", "hello"
    };

    AccountInfoData obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["city"] == output["city"]);



}


void test_AccountInfoData_country_is_converted_to_json()
{

    bourne::json input =
    {
        "country", "hello"
    };

    AccountInfoData obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["country"] == output["country"]);



}


void test_AccountInfoData_disable_cc_is_converted_to_json()
{

    bourne::json input =
    {
        "disable_cc", "hello"
    };

    AccountInfoData obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["disable_cc"] == output["disable_cc"]);



}


void test_AccountInfoData_fraudrecord_score_is_converted_to_json()
{

    bourne::json input =
    {
        "fraudrecord_score", "hello"
    };

    AccountInfoData obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["fraudrecord_score"] == output["fraudrecord_score"]);



}


void test_AccountInfoData_ima_is_converted_to_json()
{

    bourne::json input =
    {
        "ima", "hello"
    };

    AccountInfoData obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["ima"] == output["ima"]);



}


void test_AccountInfoData_name_is_converted_to_json()
{

    bourne::json input =
    {
        "name", "hello"
    };

    AccountInfoData obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["name"] == output["name"]);



}


void test_AccountInfoData_payment_method_is_converted_to_json()
{

    bourne::json input =
    {
        "payment_method", "hello"
    };

    AccountInfoData obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["payment_method"] == output["payment_method"]);



}


void test_AccountInfoData_phone_is_converted_to_json()
{

    bourne::json input =
    {
        "phone", "hello"
    };

    AccountInfoData obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["phone"] == output["phone"]);



}


void test_AccountInfoData_pin_is_converted_to_json()
{

    bourne::json input =
    {
        "pin", "hello"
    };

    AccountInfoData obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["pin"] == output["pin"]);



}


void test_AccountInfoData_state_is_converted_to_json()
{

    bourne::json input =
    {
        "state", "hello"
    };

    AccountInfoData obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["state"] == output["state"]);



}


void test_AccountInfoData_status_is_converted_to_json()
{

    bourne::json input =
    {
        "status", "hello"
    };

    AccountInfoData obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["status"] == output["status"]);



}


void test_AccountInfoData_zip_is_converted_to_json()
{

    bourne::json input =
    {
        "zip", "hello"
    };

    AccountInfoData obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["zip"] == output["zip"]);



}


void test_AccountInfoData_account_id_is_converted_to_json()
{

    bourne::json input =
    {
        "account_id", "hello"
    };

    AccountInfoData obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["account_id"] == output["account_id"]);



}


void test_AccountInfoData_account_lid_is_converted_to_json()
{

    bourne::json input =
    {
        "account_lid", "hello"
    };

    AccountInfoData obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["account_lid"] == output["account_lid"]);



}


void test_AccountInfoData_address2_is_converted_to_json()
{

    bourne::json input =
    {
        "address2", "hello"
    };

    AccountInfoData obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["address2"] == output["address2"]);



}


void test_AccountInfoData_affiliate_dock_description_is_converted_to_json()
{

    bourne::json input =
    {
        "affiliate_dock_description", "hello"
    };

    AccountInfoData obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["affiliate_dock_description"] == output["affiliate_dock_description"]);



}


void test_AccountInfoData_affiliate_dock_title_is_converted_to_json()
{

    bourne::json input =
    {
        "affiliate_dock_title", "hello"
    };

    AccountInfoData obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["affiliate_dock_title"] == output["affiliate_dock_title"]);



}


void test_AccountInfoData_affiliate_payment_method_is_converted_to_json()
{

    bourne::json input =
    {
        "affiliate_payment_method", "hello"
    };

    AccountInfoData obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["affiliate_payment_method"] == output["affiliate_payment_method"]);



}


void test_AccountInfoData_affiliate_paypal_is_converted_to_json()
{

    bourne::json input =
    {
        "affiliate_paypal", "hello"
    };

    AccountInfoData obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["affiliate_paypal"] == output["affiliate_paypal"]);



}


void test_AccountInfoData_cc_is_converted_to_json()
{

    bourne::json input =
    {
        "cc", "hello"
    };

    AccountInfoData obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["cc"] == output["cc"]);



}


void test_AccountInfoData_cc_auto_is_converted_to_json()
{

    bourne::json input =
    {
        "cc_auto", "hello"
    };

    AccountInfoData obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["cc_auto"] == output["cc_auto"]);



}


void test_AccountInfoData_cc_exp_is_converted_to_json()
{

    bourne::json input =
    {
        "cc_exp", "hello"
    };

    AccountInfoData obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["cc_exp"] == output["cc_exp"]);



}


void test_AccountInfoData_cc_type_is_converted_to_json()
{

    bourne::json input =
    {
        "cc_type", "hello"
    };

    AccountInfoData obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["cc_type"] == output["cc_type"]);



}


void test_AccountInfoData_cc_whitelist_is_converted_to_json()
{

    bourne::json input =
    {
        "cc_whitelist", "hello"
    };

    AccountInfoData obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["cc_whitelist"] == output["cc_whitelist"]);



}



void test_AccountInfoData_ccs_added_is_converted_to_json()
{

    bourne::json input =
    {
        "ccs_added", "hello"
    };

    AccountInfoData obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["ccs_added"] == output["ccs_added"]);



}


void test_AccountInfoData_company_is_converted_to_json()
{

    bourne::json input =
    {
        "company", "hello"
    };

    AccountInfoData obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["company"] == output["company"]);



}


void test_AccountInfoData_currency_is_converted_to_json()
{

    bourne::json input =
    {
        "currency", "hello"
    };

    AccountInfoData obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["currency"] == output["currency"]);



}


void test_AccountInfoData_disable_reinstall_is_converted_to_json()
{

    bourne::json input =
    {
        "disable_reinstall", "hello"
    };

    AccountInfoData obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["disable_reinstall"] == output["disable_reinstall"]);



}


void test_AccountInfoData_disable_reset_is_converted_to_json()
{

    bourne::json input =
    {
        "disable_reset", "hello"
    };

    AccountInfoData obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["disable_reset"] == output["disable_reset"]);



}


void test_AccountInfoData_email_is_converted_to_json()
{

    bourne::json input =
    {
        "email", "hello"
    };

    AccountInfoData obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["email"] == output["email"]);



}


void test_AccountInfoData_email_abuse_is_converted_to_json()
{

    bourne::json input =
    {
        "email_abuse", "hello"
    };

    AccountInfoData obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["email_abuse"] == output["email_abuse"]);



}




void test_AccountInfoData_facebook_id_is_converted_to_json()
{

    bourne::json input =
    {
        "facebook_id", "hello"
    };

    AccountInfoData obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["facebook_id"] == output["facebook_id"]);



}


void test_AccountInfoData_facebook_url_is_converted_to_json()
{

    bourne::json input =
    {
        "facebook_url", "hello"
    };

    AccountInfoData obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["facebook_url"] == output["facebook_url"]);



}


void test_AccountInfoData_firstname_is_converted_to_json()
{

    bourne::json input =
    {
        "firstname", "hello"
    };

    AccountInfoData obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["firstname"] == output["firstname"]);



}



void test_AccountInfoData_github_id_is_converted_to_json()
{

    bourne::json input =
    {
        "github_id", "hello"
    };

    AccountInfoData obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["github_id"] == output["github_id"]);



}


void test_AccountInfoData_github_url_is_converted_to_json()
{

    bourne::json input =
    {
        "github_url", "hello"
    };

    AccountInfoData obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["github_url"] == output["github_url"]);



}


void test_AccountInfoData_google_id_is_converted_to_json()
{

    bourne::json input =
    {
        "google_id", "hello"
    };

    AccountInfoData obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["google_id"] == output["google_id"]);



}


void test_AccountInfoData_google_url_is_converted_to_json()
{

    bourne::json input =
    {
        "google_url", "hello"
    };

    AccountInfoData obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["google_url"] == output["google_url"]);



}


void test_AccountInfoData_innertell_id_is_converted_to_json()
{

    bourne::json input =
    {
        "innertell_id", "hello"
    };

    AccountInfoData obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["innertell_id"] == output["innertell_id"]);



}


void test_AccountInfoData_lastname_is_converted_to_json()
{

    bourne::json input =
    {
        "lastname", "hello"
    };

    AccountInfoData obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["lastname"] == output["lastname"]);



}


void test_AccountInfoData_locale_is_converted_to_json()
{

    bourne::json input =
    {
        "locale", "hello"
    };

    AccountInfoData obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["locale"] == output["locale"]);



}



void test_AccountInfoData_maxmind_score_is_converted_to_json()
{

    bourne::json input =
    {
        "maxmind_score", "hello"
    };

    AccountInfoData obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["maxmind_score"] == output["maxmind_score"]);



}


void test_AccountInfoData_mb_id_is_converted_to_json()
{

    bourne::json input =
    {
        "mb_id", "hello"
    };

    AccountInfoData obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["mb_id"] == output["mb_id"]);



}


void test_AccountInfoData_modernbill_id_is_converted_to_json()
{

    bourne::json input =
    {
        "modernbill_id", "hello"
    };

    AccountInfoData obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["modernbill_id"] == output["modernbill_id"]);



}


void test_AccountInfoData_picture_is_converted_to_json()
{

    bourne::json input =
    {
        "picture", "hello"
    };

    AccountInfoData obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["picture"] == output["picture"]);



}


void test_AccountInfoData_referrer_coupon_is_converted_to_json()
{

    bourne::json input =
    {
        "referrer_coupon", "hello"
    };

    AccountInfoData obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["referrer_coupon"] == output["referrer_coupon"]);



}


void test_AccountInfoData_reseller_markup_is_converted_to_json()
{

    bourne::json input =
    {
        "reseller_markup", "hello"
    };

    AccountInfoData obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["reseller_markup"] == output["reseller_markup"]);



}


void test_AccountInfoData_username_is_converted_to_json()
{

    bourne::json input =
    {
        "username", "hello"
    };

    AccountInfoData obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["username"] == output["username"]);



}


void test_AccountInfoData_ssh_key_is_converted_to_json()
{

    bourne::json input =
    {
        "ssh_key", "hello"
    };

    AccountInfoData obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["ssh_key"] == output["ssh_key"]);



}


void test_AccountInfoData_ssh_key_wrapped_is_converted_to_json()
{

    bourne::json input =
    {
        "ssh_key_wrapped", "hello"
    };

    AccountInfoData obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["ssh_key_wrapped"] == output["ssh_key_wrapped"]);



}


void test_AccountInfoData_api_key_is_converted_to_json()
{

    bourne::json input =
    {
        "api_key", "hello"
    };

    AccountInfoData obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["api_key"] == output["api_key"]);



}


void test_AccountInfoData_api_key_wrapped_is_converted_to_json()
{

    bourne::json input =
    {
        "api_key_wrapped", "hello"
    };

    AccountInfoData obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["api_key_wrapped"] == output["api_key_wrapped"]);



}


void test_AccountInfoData_2fa_google_key_is_converted_to_json()
{

    bourne::json input =
    {
        "2fa_google_key", "hello"
    };

    AccountInfoData obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["2fa_google_key"] == output["2fa_google_key"]);



}


void test_AccountInfoData_2fa_google_enabled_is_converted_to_json()
{


    bourne::json input =
    {
        "2fa_google_enabled", true
    };

    AccountInfoData obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["2fa_google_enabled"] == output["2fa_google_enabled"]);


}


void test_AccountInfoData_2fa_google_is_converted_to_json()
{
    bourne::json input =
    {
        "2fa_google", 1
    };

    AccountInfoData obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["2fa_google"] == output["2fa_google"]);




}


void test_AccountInfoData_2fa_google_split_is_converted_to_json()
{

    bourne::json input =
    {
        "2fa_google_split", "hello"
    };

    AccountInfoData obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["2fa_google_split"] == output["2fa_google_split"]);



}


void test_AccountInfoData_2fa_google_qr_is_converted_to_json()
{

    bourne::json input =
    {
        "2fa_google_qr", "hello"
    };

    AccountInfoData obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["2fa_google_qr"] == output["2fa_google_qr"]);



}


