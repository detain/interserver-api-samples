
#include "AssetServer.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_AssetServer_id_is_assigned_from_json()
{
    bourne::json input =
    {
        "id", 1
    };

    AssetServer obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getId());








}


void test_AssetServer_region_is_assigned_from_json()
{


    bourne::json input =
    {
        "region", "hello"
    };

    AssetServer obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getRegion().c_str());






}


void test_AssetServer_price_is_assigned_from_json()
{


    bourne::json input =
    {
        "price", "hello"
    };

    AssetServer obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getPrice().c_str());






}






void test_AssetServer_hD_is_assigned_from_json()
{








}



void test_AssetServer_id_is_converted_to_json()
{
    bourne::json input =
    {
        "id", 1
    };

    AssetServer obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["id"] == output["id"]);




}


void test_AssetServer_region_is_converted_to_json()
{

    bourne::json input =
    {
        "region", "hello"
    };

    AssetServer obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["region"] == output["region"]);



}


void test_AssetServer_price_is_converted_to_json()
{

    bourne::json input =
    {
        "price", "hello"
    };

    AssetServer obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["price"] == output["price"]);



}






void test_AssetServer_hD_is_converted_to_json()
{




}


