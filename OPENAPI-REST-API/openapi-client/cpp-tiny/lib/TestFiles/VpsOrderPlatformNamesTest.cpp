
#include "VpsOrder_platformNames.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_VpsOrder_platformNames_kvm_is_assigned_from_json()
{


    bourne::json input =
    {
        "kvm", "hello"
    };

    VpsOrder_platformNames obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getKvm().c_str());






}


void test_VpsOrder_platformNames_kvmstorage_is_assigned_from_json()
{


    bourne::json input =
    {
        "kvmstorage", "hello"
    };

    VpsOrder_platformNames obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getKvmstorage().c_str());






}


void test_VpsOrder_platformNames_hyperv_is_assigned_from_json()
{


    bourne::json input =
    {
        "hyperv", "hello"
    };

    VpsOrder_platformNames obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getHyperv().c_str());






}



void test_VpsOrder_platformNames_kvm_is_converted_to_json()
{

    bourne::json input =
    {
        "kvm", "hello"
    };

    VpsOrder_platformNames obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["kvm"] == output["kvm"]);



}


void test_VpsOrder_platformNames_kvmstorage_is_converted_to_json()
{

    bourne::json input =
    {
        "kvmstorage", "hello"
    };

    VpsOrder_platformNames obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["kvmstorage"] == output["kvmstorage"]);



}


void test_VpsOrder_platformNames_hyperv_is_converted_to_json()
{

    bourne::json input =
    {
        "hyperv", "hello"
    };

    VpsOrder_platformNames obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["hyperv"] == output["hyperv"]);



}


