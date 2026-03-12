
#include "AccountInfoMaxMindResponse.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_AccountInfoMaxMindResponse_distance_is_assigned_from_json()
{


    bourne::json input =
    {
        "distance", "hello"
    };

    AccountInfoMaxMindResponse obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getDistance().c_str());






}


void test_AccountInfoMaxMindResponse_countryMatch_is_assigned_from_json()
{


    bourne::json input =
    {
        "countryMatch", "hello"
    };

    AccountInfoMaxMindResponse obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCountryMatch().c_str());






}


void test_AccountInfoMaxMindResponse_countryCode_is_assigned_from_json()
{


    bourne::json input =
    {
        "countryCode", "hello"
    };

    AccountInfoMaxMindResponse obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCountryCode().c_str());






}


void test_AccountInfoMaxMindResponse_freeMail_is_assigned_from_json()
{


    bourne::json input =
    {
        "freeMail", "hello"
    };

    AccountInfoMaxMindResponse obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getFreeMail().c_str());






}


void test_AccountInfoMaxMindResponse_anonymousProxy_is_assigned_from_json()
{


    bourne::json input =
    {
        "anonymousProxy", "hello"
    };

    AccountInfoMaxMindResponse obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getAnonymousProxy().c_str());






}


void test_AccountInfoMaxMindResponse_score_is_assigned_from_json()
{


    bourne::json input =
    {
        "score", "hello"
    };

    AccountInfoMaxMindResponse obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getScore().c_str());






}


void test_AccountInfoMaxMindResponse_binMatch_is_assigned_from_json()
{


    bourne::json input =
    {
        "binMatch", "hello"
    };

    AccountInfoMaxMindResponse obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getBinMatch().c_str());






}


void test_AccountInfoMaxMindResponse_binCountry_is_assigned_from_json()
{


    bourne::json input =
    {
        "binCountry", "hello"
    };

    AccountInfoMaxMindResponse obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getBinCountry().c_str());






}


void test_AccountInfoMaxMindResponse_err_is_assigned_from_json()
{


    bourne::json input =
    {
        "err", "hello"
    };

    AccountInfoMaxMindResponse obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getErr().c_str());






}


void test_AccountInfoMaxMindResponse_proxyScore_is_assigned_from_json()
{


    bourne::json input =
    {
        "proxyScore", "hello"
    };

    AccountInfoMaxMindResponse obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getProxyScore().c_str());






}


void test_AccountInfoMaxMindResponse_ip_region_is_assigned_from_json()
{


    bourne::json input =
    {
        "ip_region", "hello"
    };

    AccountInfoMaxMindResponse obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getIpRegion().c_str());






}


void test_AccountInfoMaxMindResponse_ip_city_is_assigned_from_json()
{


    bourne::json input =
    {
        "ip_city", "hello"
    };

    AccountInfoMaxMindResponse obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getIpCity().c_str());






}


void test_AccountInfoMaxMindResponse_ip_latitude_is_assigned_from_json()
{


    bourne::json input =
    {
        "ip_latitude", "hello"
    };

    AccountInfoMaxMindResponse obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getIpLatitude().c_str());






}


void test_AccountInfoMaxMindResponse_ip_longitude_is_assigned_from_json()
{


    bourne::json input =
    {
        "ip_longitude", "hello"
    };

    AccountInfoMaxMindResponse obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getIpLongitude().c_str());






}


void test_AccountInfoMaxMindResponse_binName_is_assigned_from_json()
{


    bourne::json input =
    {
        "binName", "hello"
    };

    AccountInfoMaxMindResponse obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getBinName().c_str());






}


void test_AccountInfoMaxMindResponse_ip_isp_is_assigned_from_json()
{


    bourne::json input =
    {
        "ip_isp", "hello"
    };

    AccountInfoMaxMindResponse obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getIpIsp().c_str());






}


void test_AccountInfoMaxMindResponse_ip_org_is_assigned_from_json()
{


    bourne::json input =
    {
        "ip_org", "hello"
    };

    AccountInfoMaxMindResponse obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getIpOrg().c_str());






}


void test_AccountInfoMaxMindResponse_binNameMatch_is_assigned_from_json()
{


    bourne::json input =
    {
        "binNameMatch", "hello"
    };

    AccountInfoMaxMindResponse obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getBinNameMatch().c_str());






}


void test_AccountInfoMaxMindResponse_binPhoneMatch_is_assigned_from_json()
{


    bourne::json input =
    {
        "binPhoneMatch", "hello"
    };

    AccountInfoMaxMindResponse obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getBinPhoneMatch().c_str());






}


void test_AccountInfoMaxMindResponse_binPhone_is_assigned_from_json()
{


    bourne::json input =
    {
        "binPhone", "hello"
    };

    AccountInfoMaxMindResponse obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getBinPhone().c_str());






}


void test_AccountInfoMaxMindResponse_custPhoneInBillingLoc_is_assigned_from_json()
{


    bourne::json input =
    {
        "custPhoneInBillingLoc", "hello"
    };

    AccountInfoMaxMindResponse obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCustPhoneInBillingLoc().c_str());






}


void test_AccountInfoMaxMindResponse_highRiskCountry_is_assigned_from_json()
{


    bourne::json input =
    {
        "highRiskCountry", "hello"
    };

    AccountInfoMaxMindResponse obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getHighRiskCountry().c_str());






}


void test_AccountInfoMaxMindResponse_queriesRemaining_is_assigned_from_json()
{


    bourne::json input =
    {
        "queriesRemaining", "hello"
    };

    AccountInfoMaxMindResponse obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getQueriesRemaining().c_str());






}


void test_AccountInfoMaxMindResponse_cityPostalMatch_is_assigned_from_json()
{


    bourne::json input =
    {
        "cityPostalMatch", "hello"
    };

    AccountInfoMaxMindResponse obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCityPostalMatch().c_str());






}


void test_AccountInfoMaxMindResponse_shipCityPostalMatch_is_assigned_from_json()
{


    bourne::json input =
    {
        "shipCityPostalMatch", "hello"
    };

    AccountInfoMaxMindResponse obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getShipCityPostalMatch().c_str());






}


void test_AccountInfoMaxMindResponse_maxmindID_is_assigned_from_json()
{


    bourne::json input =
    {
        "maxmindID", "hello"
    };

    AccountInfoMaxMindResponse obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getMaxmindID().c_str());






}


void test_AccountInfoMaxMindResponse_ip_asnum_is_assigned_from_json()
{


    bourne::json input =
    {
        "ip_asnum", "hello"
    };

    AccountInfoMaxMindResponse obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getIpAsnum().c_str());






}


void test_AccountInfoMaxMindResponse_ip_userType_is_assigned_from_json()
{


    bourne::json input =
    {
        "ip_userType", "hello"
    };

    AccountInfoMaxMindResponse obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getIpUserType().c_str());






}


void test_AccountInfoMaxMindResponse_ip_countryConf_is_assigned_from_json()
{


    bourne::json input =
    {
        "ip_countryConf", "hello"
    };

    AccountInfoMaxMindResponse obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getIpCountryConf().c_str());






}


void test_AccountInfoMaxMindResponse_ip_regionConf_is_assigned_from_json()
{


    bourne::json input =
    {
        "ip_regionConf", "hello"
    };

    AccountInfoMaxMindResponse obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getIpRegionConf().c_str());






}


void test_AccountInfoMaxMindResponse_ip_cityConf_is_assigned_from_json()
{


    bourne::json input =
    {
        "ip_cityConf", "hello"
    };

    AccountInfoMaxMindResponse obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getIpCityConf().c_str());






}


void test_AccountInfoMaxMindResponse_ip_postalCode_is_assigned_from_json()
{


    bourne::json input =
    {
        "ip_postalCode", "hello"
    };

    AccountInfoMaxMindResponse obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getIpPostalCode().c_str());






}


void test_AccountInfoMaxMindResponse_ip_postalConf_is_assigned_from_json()
{


    bourne::json input =
    {
        "ip_postalConf", "hello"
    };

    AccountInfoMaxMindResponse obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getIpPostalConf().c_str());






}


void test_AccountInfoMaxMindResponse_ip_accuracyRadius_is_assigned_from_json()
{


    bourne::json input =
    {
        "ip_accuracyRadius", "hello"
    };

    AccountInfoMaxMindResponse obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getIpAccuracyRadius().c_str());






}


void test_AccountInfoMaxMindResponse_ip_netSpeedCell_is_assigned_from_json()
{


    bourne::json input =
    {
        "ip_netSpeedCell", "hello"
    };

    AccountInfoMaxMindResponse obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getIpNetSpeedCell().c_str());






}


void test_AccountInfoMaxMindResponse_ip_metroCode_is_assigned_from_json()
{


    bourne::json input =
    {
        "ip_metroCode", "hello"
    };

    AccountInfoMaxMindResponse obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getIpMetroCode().c_str());






}


void test_AccountInfoMaxMindResponse_ip_areaCode_is_assigned_from_json()
{


    bourne::json input =
    {
        "ip_areaCode", "hello"
    };

    AccountInfoMaxMindResponse obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getIpAreaCode().c_str());






}


void test_AccountInfoMaxMindResponse_ip_timeZone_is_assigned_from_json()
{


    bourne::json input =
    {
        "ip_timeZone", "hello"
    };

    AccountInfoMaxMindResponse obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getIpTimeZone().c_str());






}


void test_AccountInfoMaxMindResponse_ip_regionName_is_assigned_from_json()
{


    bourne::json input =
    {
        "ip_regionName", "hello"
    };

    AccountInfoMaxMindResponse obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getIpRegionName().c_str());






}


void test_AccountInfoMaxMindResponse_ip_domain_is_assigned_from_json()
{


    bourne::json input =
    {
        "ip_domain", "hello"
    };

    AccountInfoMaxMindResponse obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getIpDomain().c_str());






}


void test_AccountInfoMaxMindResponse_ip_countryName_is_assigned_from_json()
{


    bourne::json input =
    {
        "ip_countryName", "hello"
    };

    AccountInfoMaxMindResponse obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getIpCountryName().c_str());






}


void test_AccountInfoMaxMindResponse_ip_continentCode_is_assigned_from_json()
{


    bourne::json input =
    {
        "ip_continentCode", "hello"
    };

    AccountInfoMaxMindResponse obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getIpContinentCode().c_str());






}


void test_AccountInfoMaxMindResponse_ip_corporateProxy_is_assigned_from_json()
{


    bourne::json input =
    {
        "ip_corporateProxy", "hello"
    };

    AccountInfoMaxMindResponse obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getIpCorporateProxy().c_str());






}


void test_AccountInfoMaxMindResponse_carderEmail_is_assigned_from_json()
{


    bourne::json input =
    {
        "carderEmail", "hello"
    };

    AccountInfoMaxMindResponse obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCarderEmail().c_str());






}


void test_AccountInfoMaxMindResponse_highRiskUsername_is_assigned_from_json()
{


    bourne::json input =
    {
        "highRiskUsername", "hello"
    };

    AccountInfoMaxMindResponse obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getHighRiskUsername().c_str());






}


void test_AccountInfoMaxMindResponse_highRiskPassword_is_assigned_from_json()
{


    bourne::json input =
    {
        "highRiskPassword", "hello"
    };

    AccountInfoMaxMindResponse obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getHighRiskPassword().c_str());






}



void test_AccountInfoMaxMindResponse_isTransProxy_is_assigned_from_json()
{


    bourne::json input =
    {
        "isTransProxy", "hello"
    };

    AccountInfoMaxMindResponse obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getIsTransProxy().c_str());






}


void test_AccountInfoMaxMindResponse_prepaid_is_assigned_from_json()
{


    bourne::json input =
    {
        "prepaid", "hello"
    };

    AccountInfoMaxMindResponse obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getPrepaid().c_str());






}


void test_AccountInfoMaxMindResponse_minfraud_version_is_assigned_from_json()
{


    bourne::json input =
    {
        "minfraud_version", "hello"
    };

    AccountInfoMaxMindResponse obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getMinfraudVersion().c_str());






}


void test_AccountInfoMaxMindResponse_service_level_is_assigned_from_json()
{


    bourne::json input =
    {
        "service_level", "hello"
    };

    AccountInfoMaxMindResponse obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getServiceLevel().c_str());






}


void test_AccountInfoMaxMindResponse_explanation_is_assigned_from_json()
{


    bourne::json input =
    {
        "explanation", "hello"
    };

    AccountInfoMaxMindResponse obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getExplanation().c_str());






}


void test_AccountInfoMaxMindResponse_female_name_is_assigned_from_json()
{


    bourne::json input =
    {
        "female_name", "hello"
    };

    AccountInfoMaxMindResponse obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getFemaleName().c_str());






}



void test_AccountInfoMaxMindResponse_distance_is_converted_to_json()
{

    bourne::json input =
    {
        "distance", "hello"
    };

    AccountInfoMaxMindResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["distance"] == output["distance"]);



}


void test_AccountInfoMaxMindResponse_countryMatch_is_converted_to_json()
{

    bourne::json input =
    {
        "countryMatch", "hello"
    };

    AccountInfoMaxMindResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["countryMatch"] == output["countryMatch"]);



}


void test_AccountInfoMaxMindResponse_countryCode_is_converted_to_json()
{

    bourne::json input =
    {
        "countryCode", "hello"
    };

    AccountInfoMaxMindResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["countryCode"] == output["countryCode"]);



}


void test_AccountInfoMaxMindResponse_freeMail_is_converted_to_json()
{

    bourne::json input =
    {
        "freeMail", "hello"
    };

    AccountInfoMaxMindResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["freeMail"] == output["freeMail"]);



}


void test_AccountInfoMaxMindResponse_anonymousProxy_is_converted_to_json()
{

    bourne::json input =
    {
        "anonymousProxy", "hello"
    };

    AccountInfoMaxMindResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["anonymousProxy"] == output["anonymousProxy"]);



}


void test_AccountInfoMaxMindResponse_score_is_converted_to_json()
{

    bourne::json input =
    {
        "score", "hello"
    };

    AccountInfoMaxMindResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["score"] == output["score"]);



}


void test_AccountInfoMaxMindResponse_binMatch_is_converted_to_json()
{

    bourne::json input =
    {
        "binMatch", "hello"
    };

    AccountInfoMaxMindResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["binMatch"] == output["binMatch"]);



}


void test_AccountInfoMaxMindResponse_binCountry_is_converted_to_json()
{

    bourne::json input =
    {
        "binCountry", "hello"
    };

    AccountInfoMaxMindResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["binCountry"] == output["binCountry"]);



}


void test_AccountInfoMaxMindResponse_err_is_converted_to_json()
{

    bourne::json input =
    {
        "err", "hello"
    };

    AccountInfoMaxMindResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["err"] == output["err"]);



}


void test_AccountInfoMaxMindResponse_proxyScore_is_converted_to_json()
{

    bourne::json input =
    {
        "proxyScore", "hello"
    };

    AccountInfoMaxMindResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["proxyScore"] == output["proxyScore"]);



}


void test_AccountInfoMaxMindResponse_ip_region_is_converted_to_json()
{

    bourne::json input =
    {
        "ip_region", "hello"
    };

    AccountInfoMaxMindResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["ip_region"] == output["ip_region"]);



}


void test_AccountInfoMaxMindResponse_ip_city_is_converted_to_json()
{

    bourne::json input =
    {
        "ip_city", "hello"
    };

    AccountInfoMaxMindResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["ip_city"] == output["ip_city"]);



}


void test_AccountInfoMaxMindResponse_ip_latitude_is_converted_to_json()
{

    bourne::json input =
    {
        "ip_latitude", "hello"
    };

    AccountInfoMaxMindResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["ip_latitude"] == output["ip_latitude"]);



}


void test_AccountInfoMaxMindResponse_ip_longitude_is_converted_to_json()
{

    bourne::json input =
    {
        "ip_longitude", "hello"
    };

    AccountInfoMaxMindResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["ip_longitude"] == output["ip_longitude"]);



}


void test_AccountInfoMaxMindResponse_binName_is_converted_to_json()
{

    bourne::json input =
    {
        "binName", "hello"
    };

    AccountInfoMaxMindResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["binName"] == output["binName"]);



}


void test_AccountInfoMaxMindResponse_ip_isp_is_converted_to_json()
{

    bourne::json input =
    {
        "ip_isp", "hello"
    };

    AccountInfoMaxMindResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["ip_isp"] == output["ip_isp"]);



}


void test_AccountInfoMaxMindResponse_ip_org_is_converted_to_json()
{

    bourne::json input =
    {
        "ip_org", "hello"
    };

    AccountInfoMaxMindResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["ip_org"] == output["ip_org"]);



}


void test_AccountInfoMaxMindResponse_binNameMatch_is_converted_to_json()
{

    bourne::json input =
    {
        "binNameMatch", "hello"
    };

    AccountInfoMaxMindResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["binNameMatch"] == output["binNameMatch"]);



}


void test_AccountInfoMaxMindResponse_binPhoneMatch_is_converted_to_json()
{

    bourne::json input =
    {
        "binPhoneMatch", "hello"
    };

    AccountInfoMaxMindResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["binPhoneMatch"] == output["binPhoneMatch"]);



}


void test_AccountInfoMaxMindResponse_binPhone_is_converted_to_json()
{

    bourne::json input =
    {
        "binPhone", "hello"
    };

    AccountInfoMaxMindResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["binPhone"] == output["binPhone"]);



}


void test_AccountInfoMaxMindResponse_custPhoneInBillingLoc_is_converted_to_json()
{

    bourne::json input =
    {
        "custPhoneInBillingLoc", "hello"
    };

    AccountInfoMaxMindResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["custPhoneInBillingLoc"] == output["custPhoneInBillingLoc"]);



}


void test_AccountInfoMaxMindResponse_highRiskCountry_is_converted_to_json()
{

    bourne::json input =
    {
        "highRiskCountry", "hello"
    };

    AccountInfoMaxMindResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["highRiskCountry"] == output["highRiskCountry"]);



}


void test_AccountInfoMaxMindResponse_queriesRemaining_is_converted_to_json()
{

    bourne::json input =
    {
        "queriesRemaining", "hello"
    };

    AccountInfoMaxMindResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["queriesRemaining"] == output["queriesRemaining"]);



}


void test_AccountInfoMaxMindResponse_cityPostalMatch_is_converted_to_json()
{

    bourne::json input =
    {
        "cityPostalMatch", "hello"
    };

    AccountInfoMaxMindResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["cityPostalMatch"] == output["cityPostalMatch"]);



}


void test_AccountInfoMaxMindResponse_shipCityPostalMatch_is_converted_to_json()
{

    bourne::json input =
    {
        "shipCityPostalMatch", "hello"
    };

    AccountInfoMaxMindResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["shipCityPostalMatch"] == output["shipCityPostalMatch"]);



}


void test_AccountInfoMaxMindResponse_maxmindID_is_converted_to_json()
{

    bourne::json input =
    {
        "maxmindID", "hello"
    };

    AccountInfoMaxMindResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["maxmindID"] == output["maxmindID"]);



}


void test_AccountInfoMaxMindResponse_ip_asnum_is_converted_to_json()
{

    bourne::json input =
    {
        "ip_asnum", "hello"
    };

    AccountInfoMaxMindResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["ip_asnum"] == output["ip_asnum"]);



}


void test_AccountInfoMaxMindResponse_ip_userType_is_converted_to_json()
{

    bourne::json input =
    {
        "ip_userType", "hello"
    };

    AccountInfoMaxMindResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["ip_userType"] == output["ip_userType"]);



}


void test_AccountInfoMaxMindResponse_ip_countryConf_is_converted_to_json()
{

    bourne::json input =
    {
        "ip_countryConf", "hello"
    };

    AccountInfoMaxMindResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["ip_countryConf"] == output["ip_countryConf"]);



}


void test_AccountInfoMaxMindResponse_ip_regionConf_is_converted_to_json()
{

    bourne::json input =
    {
        "ip_regionConf", "hello"
    };

    AccountInfoMaxMindResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["ip_regionConf"] == output["ip_regionConf"]);



}


void test_AccountInfoMaxMindResponse_ip_cityConf_is_converted_to_json()
{

    bourne::json input =
    {
        "ip_cityConf", "hello"
    };

    AccountInfoMaxMindResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["ip_cityConf"] == output["ip_cityConf"]);



}


void test_AccountInfoMaxMindResponse_ip_postalCode_is_converted_to_json()
{

    bourne::json input =
    {
        "ip_postalCode", "hello"
    };

    AccountInfoMaxMindResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["ip_postalCode"] == output["ip_postalCode"]);



}


void test_AccountInfoMaxMindResponse_ip_postalConf_is_converted_to_json()
{

    bourne::json input =
    {
        "ip_postalConf", "hello"
    };

    AccountInfoMaxMindResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["ip_postalConf"] == output["ip_postalConf"]);



}


void test_AccountInfoMaxMindResponse_ip_accuracyRadius_is_converted_to_json()
{

    bourne::json input =
    {
        "ip_accuracyRadius", "hello"
    };

    AccountInfoMaxMindResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["ip_accuracyRadius"] == output["ip_accuracyRadius"]);



}


void test_AccountInfoMaxMindResponse_ip_netSpeedCell_is_converted_to_json()
{

    bourne::json input =
    {
        "ip_netSpeedCell", "hello"
    };

    AccountInfoMaxMindResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["ip_netSpeedCell"] == output["ip_netSpeedCell"]);



}


void test_AccountInfoMaxMindResponse_ip_metroCode_is_converted_to_json()
{

    bourne::json input =
    {
        "ip_metroCode", "hello"
    };

    AccountInfoMaxMindResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["ip_metroCode"] == output["ip_metroCode"]);



}


void test_AccountInfoMaxMindResponse_ip_areaCode_is_converted_to_json()
{

    bourne::json input =
    {
        "ip_areaCode", "hello"
    };

    AccountInfoMaxMindResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["ip_areaCode"] == output["ip_areaCode"]);



}


void test_AccountInfoMaxMindResponse_ip_timeZone_is_converted_to_json()
{

    bourne::json input =
    {
        "ip_timeZone", "hello"
    };

    AccountInfoMaxMindResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["ip_timeZone"] == output["ip_timeZone"]);



}


void test_AccountInfoMaxMindResponse_ip_regionName_is_converted_to_json()
{

    bourne::json input =
    {
        "ip_regionName", "hello"
    };

    AccountInfoMaxMindResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["ip_regionName"] == output["ip_regionName"]);



}


void test_AccountInfoMaxMindResponse_ip_domain_is_converted_to_json()
{

    bourne::json input =
    {
        "ip_domain", "hello"
    };

    AccountInfoMaxMindResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["ip_domain"] == output["ip_domain"]);



}


void test_AccountInfoMaxMindResponse_ip_countryName_is_converted_to_json()
{

    bourne::json input =
    {
        "ip_countryName", "hello"
    };

    AccountInfoMaxMindResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["ip_countryName"] == output["ip_countryName"]);



}


void test_AccountInfoMaxMindResponse_ip_continentCode_is_converted_to_json()
{

    bourne::json input =
    {
        "ip_continentCode", "hello"
    };

    AccountInfoMaxMindResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["ip_continentCode"] == output["ip_continentCode"]);



}


void test_AccountInfoMaxMindResponse_ip_corporateProxy_is_converted_to_json()
{

    bourne::json input =
    {
        "ip_corporateProxy", "hello"
    };

    AccountInfoMaxMindResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["ip_corporateProxy"] == output["ip_corporateProxy"]);



}


void test_AccountInfoMaxMindResponse_carderEmail_is_converted_to_json()
{

    bourne::json input =
    {
        "carderEmail", "hello"
    };

    AccountInfoMaxMindResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["carderEmail"] == output["carderEmail"]);



}


void test_AccountInfoMaxMindResponse_highRiskUsername_is_converted_to_json()
{

    bourne::json input =
    {
        "highRiskUsername", "hello"
    };

    AccountInfoMaxMindResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["highRiskUsername"] == output["highRiskUsername"]);



}


void test_AccountInfoMaxMindResponse_highRiskPassword_is_converted_to_json()
{

    bourne::json input =
    {
        "highRiskPassword", "hello"
    };

    AccountInfoMaxMindResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["highRiskPassword"] == output["highRiskPassword"]);



}



void test_AccountInfoMaxMindResponse_isTransProxy_is_converted_to_json()
{

    bourne::json input =
    {
        "isTransProxy", "hello"
    };

    AccountInfoMaxMindResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["isTransProxy"] == output["isTransProxy"]);



}


void test_AccountInfoMaxMindResponse_prepaid_is_converted_to_json()
{

    bourne::json input =
    {
        "prepaid", "hello"
    };

    AccountInfoMaxMindResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["prepaid"] == output["prepaid"]);



}


void test_AccountInfoMaxMindResponse_minfraud_version_is_converted_to_json()
{

    bourne::json input =
    {
        "minfraud_version", "hello"
    };

    AccountInfoMaxMindResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["minfraud_version"] == output["minfraud_version"]);



}


void test_AccountInfoMaxMindResponse_service_level_is_converted_to_json()
{

    bourne::json input =
    {
        "service_level", "hello"
    };

    AccountInfoMaxMindResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["service_level"] == output["service_level"]);



}


void test_AccountInfoMaxMindResponse_explanation_is_converted_to_json()
{

    bourne::json input =
    {
        "explanation", "hello"
    };

    AccountInfoMaxMindResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["explanation"] == output["explanation"]);



}


void test_AccountInfoMaxMindResponse_female_name_is_converted_to_json()
{

    bourne::json input =
    {
        "female_name", "hello"
    };

    AccountInfoMaxMindResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["female_name"] == output["female_name"]);



}


