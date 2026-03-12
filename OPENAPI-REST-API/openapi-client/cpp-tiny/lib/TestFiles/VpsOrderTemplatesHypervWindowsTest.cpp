
#include "VpsOrder_templates_hyperv_windows.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_VpsOrder_templates_hyperv_windows_windows2019Standard_is_assigned_from_json()
{


    bourne::json input =
    {
        "windows2019Standard", "hello"
    };

    VpsOrder_templates_hyperv_windows obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getWindows2019Standard().c_str());






}


void test_VpsOrder_templates_hyperv_windows_windows2022_is_assigned_from_json()
{


    bourne::json input =
    {
        "windows2022", "hello"
    };

    VpsOrder_templates_hyperv_windows obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getWindows2022().c_str());






}



void test_VpsOrder_templates_hyperv_windows_windows2019Standard_is_converted_to_json()
{

    bourne::json input =
    {
        "windows2019Standard", "hello"
    };

    VpsOrder_templates_hyperv_windows obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["windows2019Standard"] == output["windows2019Standard"]);



}


void test_VpsOrder_templates_hyperv_windows_windows2022_is_converted_to_json()
{

    bourne::json input =
    {
        "windows2022", "hello"
    };

    VpsOrder_templates_hyperv_windows obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["windows2022"] == output["windows2022"]);



}


