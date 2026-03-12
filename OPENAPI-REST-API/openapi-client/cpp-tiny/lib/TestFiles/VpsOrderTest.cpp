
#include "VpsOrder.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_VpsOrder_vpsSliceSsdOvzCost_is_assigned_from_json()
{








}


void test_VpsOrder_vpsSliceOvzCost_is_assigned_from_json()
{








}


void test_VpsOrder_vpsSliceSsdVirtuozzoCost_is_assigned_from_json()
{








}


void test_VpsOrder_vpsSliceVirtuozzoCost_is_assigned_from_json()
{








}


void test_VpsOrder_vpsSliceHypervCost_is_assigned_from_json()
{








}


void test_VpsOrder_vpsSliceVmwareCost_is_assigned_from_json()
{








}


void test_VpsOrder_vpsSliceLxcCost_is_assigned_from_json()
{








}


void test_VpsOrder_vpsSliceXenCost_is_assigned_from_json()
{








}


void test_VpsOrder_vpsSliceKvmLCost_is_assigned_from_json()
{








}


void test_VpsOrder_vpsSliceKvmStorageCost_is_assigned_from_json()
{








}


void test_VpsOrder_vpsNyCost_is_assigned_from_json()
{








}


void test_VpsOrder_vpsSliceKvmWCost_is_assigned_from_json()
{








}


void test_VpsOrder_cpanelCost_is_assigned_from_json()
{








}


void test_VpsOrder_daCost_is_assigned_from_json()
{








}


void test_VpsOrder_ramSlice_is_assigned_from_json()
{


    bourne::json input =
    {
        "ramSlice", "hello"
    };

    VpsOrder obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getRamSlice().c_str());






}


void test_VpsOrder_hdSlice_is_assigned_from_json()
{


    bourne::json input =
    {
        "hdSlice", "hello"
    };

    VpsOrder obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getHdSlice().c_str());






}


void test_VpsOrder_hdStorageSlice_is_assigned_from_json()
{


    bourne::json input =
    {
        "hdStorageSlice", "hello"
    };

    VpsOrder obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getHdStorageSlice().c_str());






}


void test_VpsOrder_bwSlice_is_assigned_from_json()
{


    bourne::json input =
    {
        "bwSlice", "hello"
    };

    VpsOrder obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getBwSlice().c_str());






}


void test_VpsOrder_bwType_is_assigned_from_json()
{


    bourne::json input =
    {
        "bwType", "hello"
    };

    VpsOrder obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getBwType().c_str());






}


void test_VpsOrder_bwTotal_is_assigned_from_json()
{








}


void test_VpsOrder_maxSlices_is_assigned_from_json()
{


    bourne::json input =
    {
        "maxSlices", "hello"
    };

    VpsOrder obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getMaxSlices().c_str());






}










void test_VpsOrder_currency_is_assigned_from_json()
{


    bourne::json input =
    {
        "currency", "hello"
    };

    VpsOrder obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCurrency().c_str());






}


void test_VpsOrder_currencySymbol_is_assigned_from_json()
{


    bourne::json input =
    {
        "currencySymbol", "hello"
    };

    VpsOrder obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCurrencySymbol().c_str());






}



void test_VpsOrder_vpsSliceSsdOvzCost_is_converted_to_json()
{




}


void test_VpsOrder_vpsSliceOvzCost_is_converted_to_json()
{




}


void test_VpsOrder_vpsSliceSsdVirtuozzoCost_is_converted_to_json()
{




}


void test_VpsOrder_vpsSliceVirtuozzoCost_is_converted_to_json()
{




}


void test_VpsOrder_vpsSliceHypervCost_is_converted_to_json()
{




}


void test_VpsOrder_vpsSliceVmwareCost_is_converted_to_json()
{




}


void test_VpsOrder_vpsSliceLxcCost_is_converted_to_json()
{




}


void test_VpsOrder_vpsSliceXenCost_is_converted_to_json()
{




}


void test_VpsOrder_vpsSliceKvmLCost_is_converted_to_json()
{




}


void test_VpsOrder_vpsSliceKvmStorageCost_is_converted_to_json()
{




}


void test_VpsOrder_vpsNyCost_is_converted_to_json()
{




}


void test_VpsOrder_vpsSliceKvmWCost_is_converted_to_json()
{




}


void test_VpsOrder_cpanelCost_is_converted_to_json()
{




}


void test_VpsOrder_daCost_is_converted_to_json()
{




}


void test_VpsOrder_ramSlice_is_converted_to_json()
{

    bourne::json input =
    {
        "ramSlice", "hello"
    };

    VpsOrder obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["ramSlice"] == output["ramSlice"]);



}


void test_VpsOrder_hdSlice_is_converted_to_json()
{

    bourne::json input =
    {
        "hdSlice", "hello"
    };

    VpsOrder obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["hdSlice"] == output["hdSlice"]);



}


void test_VpsOrder_hdStorageSlice_is_converted_to_json()
{

    bourne::json input =
    {
        "hdStorageSlice", "hello"
    };

    VpsOrder obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["hdStorageSlice"] == output["hdStorageSlice"]);



}


void test_VpsOrder_bwSlice_is_converted_to_json()
{

    bourne::json input =
    {
        "bwSlice", "hello"
    };

    VpsOrder obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["bwSlice"] == output["bwSlice"]);



}


void test_VpsOrder_bwType_is_converted_to_json()
{

    bourne::json input =
    {
        "bwType", "hello"
    };

    VpsOrder obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["bwType"] == output["bwType"]);



}


void test_VpsOrder_bwTotal_is_converted_to_json()
{




}


void test_VpsOrder_maxSlices_is_converted_to_json()
{

    bourne::json input =
    {
        "maxSlices", "hello"
    };

    VpsOrder obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["maxSlices"] == output["maxSlices"]);



}










void test_VpsOrder_currency_is_converted_to_json()
{

    bourne::json input =
    {
        "currency", "hello"
    };

    VpsOrder obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["currency"] == output["currency"]);



}


void test_VpsOrder_currencySymbol_is_converted_to_json()
{

    bourne::json input =
    {
        "currencySymbol", "hello"
    };

    VpsOrder obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["currencySymbol"] == output["currencySymbol"]);



}


