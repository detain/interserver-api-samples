
#include "ModuleSettings.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_ModuleSettings_sERVICE_ID_OFFSET_is_assigned_from_json()
{
    bourne::json input =
    {
        "sERVICE_ID_OFFSET", 1
    };

    ModuleSettings obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getSERVICEIDOFFSET());








}


void test_ModuleSettings_uSE_REPEAT_INVOICE_is_assigned_from_json()
{




    bourne::json input =
    {
        "uSE_REPEAT_INVOICE", true
    };

    ModuleSettings obj(input.dump());

    TEST_ASSERT(true == obj.isUSEREPEATINVOICE());




}


void test_ModuleSettings_uSE_PACKAGES_is_assigned_from_json()
{




    bourne::json input =
    {
        "uSE_PACKAGES", true
    };

    ModuleSettings obj(input.dump());

    TEST_ASSERT(true == obj.isUSEPACKAGES());




}


void test_ModuleSettings_bILLING_DAYS_OFFSET_is_assigned_from_json()
{
    bourne::json input =
    {
        "bILLING_DAYS_OFFSET", 1
    };

    ModuleSettings obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getBILLINGDAYSOFFSET());








}


void test_ModuleSettings_iMGNAME_is_assigned_from_json()
{


    bourne::json input =
    {
        "iMGNAME", "hello"
    };

    ModuleSettings obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getIMGNAME().c_str());






}


void test_ModuleSettings_rEPEAT_BILLING_METHOD_is_assigned_from_json()
{
    bourne::json input =
    {
        "rEPEAT_BILLING_METHOD", 1
    };

    ModuleSettings obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getREPEATBILLINGMETHOD());








}


void test_ModuleSettings_dELETE_PENDING_DAYS_is_assigned_from_json()
{
    bourne::json input =
    {
        "dELETE_PENDING_DAYS", 1
    };

    ModuleSettings obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getDELETEPENDINGDAYS());








}


void test_ModuleSettings_sUSPEND_DAYS_is_assigned_from_json()
{
    bourne::json input =
    {
        "sUSPEND_DAYS", 1
    };

    ModuleSettings obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getSUSPENDDAYS());








}


void test_ModuleSettings_sUSPEND_WARNING_DAYS_is_assigned_from_json()
{
    bourne::json input =
    {
        "sUSPEND_WARNING_DAYS", 1
    };

    ModuleSettings obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getSUSPENDWARNINGDAYS());








}


void test_ModuleSettings_tITLE_is_assigned_from_json()
{


    bourne::json input =
    {
        "tITLE", "hello"
    };

    ModuleSettings obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getTITLE().c_str());






}


void test_ModuleSettings_mENUNAME_is_assigned_from_json()
{


    bourne::json input =
    {
        "mENUNAME", "hello"
    };

    ModuleSettings obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getMENUNAME().c_str());






}


void test_ModuleSettings_eMAIL_FROM_is_assigned_from_json()
{


    bourne::json input =
    {
        "eMAIL_FROM", "hello"
    };

    ModuleSettings obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getEMAILFROM().c_str());






}


void test_ModuleSettings_tBLNAME_is_assigned_from_json()
{


    bourne::json input =
    {
        "tBLNAME", "hello"
    };

    ModuleSettings obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getTBLNAME().c_str());






}


void test_ModuleSettings_tABLE_is_assigned_from_json()
{


    bourne::json input =
    {
        "tABLE", "hello"
    };

    ModuleSettings obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getTABLE().c_str());






}


void test_ModuleSettings_tITLE_FIELD_is_assigned_from_json()
{


    bourne::json input =
    {
        "tITLE_FIELD", "hello"
    };

    ModuleSettings obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getTITLEFIELD().c_str());






}


void test_ModuleSettings_pREFIX_is_assigned_from_json()
{


    bourne::json input =
    {
        "pREFIX", "hello"
    };

    ModuleSettings obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getPREFIX().c_str());






}


void test_ModuleSettings_tITLE_FIELD2_is_assigned_from_json()
{


    bourne::json input =
    {
        "tITLE_FIELD2", "hello"
    };

    ModuleSettings obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getTITLEFIELD2().c_str());






}


void test_ModuleSettings_tITLE_FIELD3_is_assigned_from_json()
{


    bourne::json input =
    {
        "tITLE_FIELD3", "hello"
    };

    ModuleSettings obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getTITLEFIELD3().c_str());






}



void test_ModuleSettings_sERVICE_ID_OFFSET_is_converted_to_json()
{
    bourne::json input =
    {
        "sERVICE_ID_OFFSET", 1
    };

    ModuleSettings obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["sERVICE_ID_OFFSET"] == output["sERVICE_ID_OFFSET"]);




}


void test_ModuleSettings_uSE_REPEAT_INVOICE_is_converted_to_json()
{


    bourne::json input =
    {
        "uSE_REPEAT_INVOICE", true
    };

    ModuleSettings obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["uSE_REPEAT_INVOICE"] == output["uSE_REPEAT_INVOICE"]);


}


void test_ModuleSettings_uSE_PACKAGES_is_converted_to_json()
{


    bourne::json input =
    {
        "uSE_PACKAGES", true
    };

    ModuleSettings obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["uSE_PACKAGES"] == output["uSE_PACKAGES"]);


}


void test_ModuleSettings_bILLING_DAYS_OFFSET_is_converted_to_json()
{
    bourne::json input =
    {
        "bILLING_DAYS_OFFSET", 1
    };

    ModuleSettings obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["bILLING_DAYS_OFFSET"] == output["bILLING_DAYS_OFFSET"]);




}


void test_ModuleSettings_iMGNAME_is_converted_to_json()
{

    bourne::json input =
    {
        "iMGNAME", "hello"
    };

    ModuleSettings obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["iMGNAME"] == output["iMGNAME"]);



}


void test_ModuleSettings_rEPEAT_BILLING_METHOD_is_converted_to_json()
{
    bourne::json input =
    {
        "rEPEAT_BILLING_METHOD", 1
    };

    ModuleSettings obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["rEPEAT_BILLING_METHOD"] == output["rEPEAT_BILLING_METHOD"]);




}


void test_ModuleSettings_dELETE_PENDING_DAYS_is_converted_to_json()
{
    bourne::json input =
    {
        "dELETE_PENDING_DAYS", 1
    };

    ModuleSettings obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["dELETE_PENDING_DAYS"] == output["dELETE_PENDING_DAYS"]);




}


void test_ModuleSettings_sUSPEND_DAYS_is_converted_to_json()
{
    bourne::json input =
    {
        "sUSPEND_DAYS", 1
    };

    ModuleSettings obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["sUSPEND_DAYS"] == output["sUSPEND_DAYS"]);




}


void test_ModuleSettings_sUSPEND_WARNING_DAYS_is_converted_to_json()
{
    bourne::json input =
    {
        "sUSPEND_WARNING_DAYS", 1
    };

    ModuleSettings obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["sUSPEND_WARNING_DAYS"] == output["sUSPEND_WARNING_DAYS"]);




}


void test_ModuleSettings_tITLE_is_converted_to_json()
{

    bourne::json input =
    {
        "tITLE", "hello"
    };

    ModuleSettings obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["tITLE"] == output["tITLE"]);



}


void test_ModuleSettings_mENUNAME_is_converted_to_json()
{

    bourne::json input =
    {
        "mENUNAME", "hello"
    };

    ModuleSettings obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["mENUNAME"] == output["mENUNAME"]);



}


void test_ModuleSettings_eMAIL_FROM_is_converted_to_json()
{

    bourne::json input =
    {
        "eMAIL_FROM", "hello"
    };

    ModuleSettings obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["eMAIL_FROM"] == output["eMAIL_FROM"]);



}


void test_ModuleSettings_tBLNAME_is_converted_to_json()
{

    bourne::json input =
    {
        "tBLNAME", "hello"
    };

    ModuleSettings obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["tBLNAME"] == output["tBLNAME"]);



}


void test_ModuleSettings_tABLE_is_converted_to_json()
{

    bourne::json input =
    {
        "tABLE", "hello"
    };

    ModuleSettings obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["tABLE"] == output["tABLE"]);



}


void test_ModuleSettings_tITLE_FIELD_is_converted_to_json()
{

    bourne::json input =
    {
        "tITLE_FIELD", "hello"
    };

    ModuleSettings obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["tITLE_FIELD"] == output["tITLE_FIELD"]);



}


void test_ModuleSettings_pREFIX_is_converted_to_json()
{

    bourne::json input =
    {
        "pREFIX", "hello"
    };

    ModuleSettings obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["pREFIX"] == output["pREFIX"]);



}


void test_ModuleSettings_tITLE_FIELD2_is_converted_to_json()
{

    bourne::json input =
    {
        "tITLE_FIELD2", "hello"
    };

    ModuleSettings obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["tITLE_FIELD2"] == output["tITLE_FIELD2"]);



}


void test_ModuleSettings_tITLE_FIELD3_is_converted_to_json()
{

    bourne::json input =
    {
        "tITLE_FIELD3", "hello"
    };

    ModuleSettings obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["tITLE_FIELD3"] == output["tITLE_FIELD3"]);



}


