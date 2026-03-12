
#include "VpsOrder_locationStock_1.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_VpsOrder_locationStock_1_kvm_is_assigned_from_json()
{




    bourne::json input =
    {
        "kvm", true
    };

    VpsOrder_locationStock_1 obj(input.dump());

    TEST_ASSERT(true == obj.isKvm());




}


void test_VpsOrder_locationStock_1_kvmstorage_is_assigned_from_json()
{




    bourne::json input =
    {
        "kvmstorage", true
    };

    VpsOrder_locationStock_1 obj(input.dump());

    TEST_ASSERT(true == obj.isKvmstorage());




}


void test_VpsOrder_locationStock_1_hyperv_is_assigned_from_json()
{




    bourne::json input =
    {
        "hyperv", true
    };

    VpsOrder_locationStock_1 obj(input.dump());

    TEST_ASSERT(true == obj.isHyperv());




}



void test_VpsOrder_locationStock_1_kvm_is_converted_to_json()
{


    bourne::json input =
    {
        "kvm", true
    };

    VpsOrder_locationStock_1 obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["kvm"] == output["kvm"]);


}


void test_VpsOrder_locationStock_1_kvmstorage_is_converted_to_json()
{


    bourne::json input =
    {
        "kvmstorage", true
    };

    VpsOrder_locationStock_1 obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["kvmstorage"] == output["kvmstorage"]);


}


void test_VpsOrder_locationStock_1_hyperv_is_converted_to_json()
{


    bourne::json input =
    {
        "hyperv", true
    };

    VpsOrder_locationStock_1 obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["hyperv"] == output["hyperv"]);


}


