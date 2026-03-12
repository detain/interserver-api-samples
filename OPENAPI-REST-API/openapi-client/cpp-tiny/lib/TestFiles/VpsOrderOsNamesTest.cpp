
#include "VpsOrder_osNames.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_VpsOrder_osNames_opensuse_is_assigned_from_json()
{


    bourne::json input =
    {
        "opensuse", "hello"
    };

    VpsOrder_osNames obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getOpensuse().c_str());






}


void test_VpsOrder_osNames_ubuntu_is_assigned_from_json()
{


    bourne::json input =
    {
        "ubuntu", "hello"
    };

    VpsOrder_osNames obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getUbuntu().c_str());






}



void test_VpsOrder_osNames_opensuse_is_converted_to_json()
{

    bourne::json input =
    {
        "opensuse", "hello"
    };

    VpsOrder_osNames obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["opensuse"] == output["opensuse"]);



}


void test_VpsOrder_osNames_ubuntu_is_converted_to_json()
{

    bourne::json input =
    {
        "ubuntu", "hello"
    };

    VpsOrder_osNames obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["ubuntu"] == output["ubuntu"]);



}


