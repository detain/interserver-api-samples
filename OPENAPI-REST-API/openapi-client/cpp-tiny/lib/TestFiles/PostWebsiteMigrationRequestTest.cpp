
#include "PostWebsiteMigration_request.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_PostWebsiteMigration_request_custPortal_is_assigned_from_json()
{


    bourne::json input =
    {
        "custPortal", "hello"
    };

    PostWebsiteMigration_request obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCustPortal().c_str());






}


void test_PostWebsiteMigration_request_regEmail_is_assigned_from_json()
{


    bourne::json input =
    {
        "regEmail", "hello"
    };

    PostWebsiteMigration_request obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getRegEmail().c_str());






}


void test_PostWebsiteMigration_request_password_is_assigned_from_json()
{


    bourne::json input =
    {
        "password", "hello"
    };

    PostWebsiteMigration_request obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getPassword().c_str());






}


void test_PostWebsiteMigration_request_ctrlPanel_is_assigned_from_json()
{


    bourne::json input =
    {
        "ctrlPanel", "hello"
    };

    PostWebsiteMigration_request obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCtrlPanel().c_str());






}


void test_PostWebsiteMigration_request_ftpUsername_is_assigned_from_json()
{


    bourne::json input =
    {
        "ftpUsername", "hello"
    };

    PostWebsiteMigration_request obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getFtpUsername().c_str());






}


void test_PostWebsiteMigration_request_ftpPassword_is_assigned_from_json()
{


    bourne::json input =
    {
        "ftpPassword", "hello"
    };

    PostWebsiteMigration_request obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getFtpPassword().c_str());






}


void test_PostWebsiteMigration_request_siteBusyMig_is_assigned_from_json()
{


    bourne::json input =
    {
        "siteBusyMig", "hello"
    };

    PostWebsiteMigration_request obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getSiteBusyMig().c_str());






}


void test_PostWebsiteMigration_request_splReqMig_is_assigned_from_json()
{


    bourne::json input =
    {
        "splReqMig", "hello"
    };

    PostWebsiteMigration_request obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getSplReqMig().c_str());






}


void test_PostWebsiteMigration_request_domainReg_is_assigned_from_json()
{


    bourne::json input =
    {
        "domainReg", "hello"
    };

    PostWebsiteMigration_request obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getDomainReg().c_str());






}


void test_PostWebsiteMigration_request_dataMig_is_assigned_from_json()
{


    bourne::json input =
    {
        "dataMig", "hello"
    };

    PostWebsiteMigration_request obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getDataMig().c_str());






}


void test_PostWebsiteMigration_request_domainRegPortal_is_assigned_from_json()
{


    bourne::json input =
    {
        "domainRegPortal", "hello"
    };

    PostWebsiteMigration_request obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getDomainRegPortal().c_str());






}


void test_PostWebsiteMigration_request_domainRegEmail_is_assigned_from_json()
{


    bourne::json input =
    {
        "domainRegEmail", "hello"
    };

    PostWebsiteMigration_request obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getDomainRegEmail().c_str());






}


void test_PostWebsiteMigration_request_domainRegPassword_is_assigned_from_json()
{


    bourne::json input =
    {
        "domainRegPassword", "hello"
    };

    PostWebsiteMigration_request obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getDomainRegPassword().c_str());






}



void test_PostWebsiteMigration_request_custPortal_is_converted_to_json()
{

    bourne::json input =
    {
        "custPortal", "hello"
    };

    PostWebsiteMigration_request obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["custPortal"] == output["custPortal"]);



}


void test_PostWebsiteMigration_request_regEmail_is_converted_to_json()
{

    bourne::json input =
    {
        "regEmail", "hello"
    };

    PostWebsiteMigration_request obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["regEmail"] == output["regEmail"]);



}


void test_PostWebsiteMigration_request_password_is_converted_to_json()
{

    bourne::json input =
    {
        "password", "hello"
    };

    PostWebsiteMigration_request obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["password"] == output["password"]);



}


void test_PostWebsiteMigration_request_ctrlPanel_is_converted_to_json()
{

    bourne::json input =
    {
        "ctrlPanel", "hello"
    };

    PostWebsiteMigration_request obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["ctrlPanel"] == output["ctrlPanel"]);



}


void test_PostWebsiteMigration_request_ftpUsername_is_converted_to_json()
{

    bourne::json input =
    {
        "ftpUsername", "hello"
    };

    PostWebsiteMigration_request obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["ftpUsername"] == output["ftpUsername"]);



}


void test_PostWebsiteMigration_request_ftpPassword_is_converted_to_json()
{

    bourne::json input =
    {
        "ftpPassword", "hello"
    };

    PostWebsiteMigration_request obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["ftpPassword"] == output["ftpPassword"]);



}


void test_PostWebsiteMigration_request_siteBusyMig_is_converted_to_json()
{

    bourne::json input =
    {
        "siteBusyMig", "hello"
    };

    PostWebsiteMigration_request obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["siteBusyMig"] == output["siteBusyMig"]);



}


void test_PostWebsiteMigration_request_splReqMig_is_converted_to_json()
{

    bourne::json input =
    {
        "splReqMig", "hello"
    };

    PostWebsiteMigration_request obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["splReqMig"] == output["splReqMig"]);



}


void test_PostWebsiteMigration_request_domainReg_is_converted_to_json()
{

    bourne::json input =
    {
        "domainReg", "hello"
    };

    PostWebsiteMigration_request obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["domainReg"] == output["domainReg"]);



}


void test_PostWebsiteMigration_request_dataMig_is_converted_to_json()
{

    bourne::json input =
    {
        "dataMig", "hello"
    };

    PostWebsiteMigration_request obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["dataMig"] == output["dataMig"]);



}


void test_PostWebsiteMigration_request_domainRegPortal_is_converted_to_json()
{

    bourne::json input =
    {
        "domainRegPortal", "hello"
    };

    PostWebsiteMigration_request obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["domainRegPortal"] == output["domainRegPortal"]);



}


void test_PostWebsiteMigration_request_domainRegEmail_is_converted_to_json()
{

    bourne::json input =
    {
        "domainRegEmail", "hello"
    };

    PostWebsiteMigration_request obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["domainRegEmail"] == output["domainRegEmail"]);



}


void test_PostWebsiteMigration_request_domainRegPassword_is_converted_to_json()
{

    bourne::json input =
    {
        "domainRegPassword", "hello"
    };

    PostWebsiteMigration_request obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["domainRegPassword"] == output["domainRegPassword"]);



}


