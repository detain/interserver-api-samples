
#include "BackupOrderPostResponse_cj_params.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_BackupOrderPostResponse_cj_params_containerTagId_is_assigned_from_json()
{


    bourne::json input =
    {
        "containerTagId", "hello"
    };

    BackupOrderPostResponse_cj_params obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getContainerTagId().c_str());






}


void test_BackupOrderPostResponse_cj_params_cID_is_assigned_from_json()
{


    bourne::json input =
    {
        "cID", "hello"
    };

    BackupOrderPostResponse_cj_params obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCID().c_str());






}


void test_BackupOrderPostResponse_cj_params_oID_is_assigned_from_json()
{


    bourne::json input =
    {
        "oID", "hello"
    };

    BackupOrderPostResponse_cj_params obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getOID().c_str());






}


void test_BackupOrderPostResponse_cj_params_tYPE_is_assigned_from_json()
{


    bourne::json input =
    {
        "tYPE", "hello"
    };

    BackupOrderPostResponse_cj_params obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getTYPE().c_str());






}


void test_BackupOrderPostResponse_cj_params_iTEM1_is_assigned_from_json()
{


    bourne::json input =
    {
        "iTEM1", "hello"
    };

    BackupOrderPostResponse_cj_params obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getITEM1().c_str());






}


void test_BackupOrderPostResponse_cj_params_aMT1_is_assigned_from_json()
{


    bourne::json input =
    {
        "aMT1", "hello"
    };

    BackupOrderPostResponse_cj_params obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getAMT1().c_str());






}


void test_BackupOrderPostResponse_cj_params_qTY1_is_assigned_from_json()
{
    bourne::json input =
    {
        "qTY1", 1
    };

    BackupOrderPostResponse_cj_params obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getQTY1());








}


void test_BackupOrderPostResponse_cj_params_cURRENCY_is_assigned_from_json()
{


    bourne::json input =
    {
        "cURRENCY", "hello"
    };

    BackupOrderPostResponse_cj_params obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCURRENCY().c_str());






}



void test_BackupOrderPostResponse_cj_params_containerTagId_is_converted_to_json()
{

    bourne::json input =
    {
        "containerTagId", "hello"
    };

    BackupOrderPostResponse_cj_params obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["containerTagId"] == output["containerTagId"]);



}


void test_BackupOrderPostResponse_cj_params_cID_is_converted_to_json()
{

    bourne::json input =
    {
        "cID", "hello"
    };

    BackupOrderPostResponse_cj_params obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["cID"] == output["cID"]);



}


void test_BackupOrderPostResponse_cj_params_oID_is_converted_to_json()
{

    bourne::json input =
    {
        "oID", "hello"
    };

    BackupOrderPostResponse_cj_params obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["oID"] == output["oID"]);



}


void test_BackupOrderPostResponse_cj_params_tYPE_is_converted_to_json()
{

    bourne::json input =
    {
        "tYPE", "hello"
    };

    BackupOrderPostResponse_cj_params obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["tYPE"] == output["tYPE"]);



}


void test_BackupOrderPostResponse_cj_params_iTEM1_is_converted_to_json()
{

    bourne::json input =
    {
        "iTEM1", "hello"
    };

    BackupOrderPostResponse_cj_params obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["iTEM1"] == output["iTEM1"]);



}


void test_BackupOrderPostResponse_cj_params_aMT1_is_converted_to_json()
{

    bourne::json input =
    {
        "aMT1", "hello"
    };

    BackupOrderPostResponse_cj_params obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["aMT1"] == output["aMT1"]);



}


void test_BackupOrderPostResponse_cj_params_qTY1_is_converted_to_json()
{
    bourne::json input =
    {
        "qTY1", 1
    };

    BackupOrderPostResponse_cj_params obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["qTY1"] == output["qTY1"]);




}


void test_BackupOrderPostResponse_cj_params_cURRENCY_is_converted_to_json()
{

    bourne::json input =
    {
        "cURRENCY", "hello"
    };

    BackupOrderPostResponse_cj_params obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["cURRENCY"] == output["cURRENCY"]);



}


