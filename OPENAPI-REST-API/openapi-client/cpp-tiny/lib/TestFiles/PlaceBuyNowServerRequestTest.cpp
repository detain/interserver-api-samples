
#include "PlaceBuyNowServer_request.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_PlaceBuyNowServer_request_server_id_is_assigned_from_json()
{








}


void test_PlaceBuyNowServer_request_server_hostname_is_assigned_from_json()
{


    bourne::json input =
    {
        "server_hostname", "hello"
    };

    PlaceBuyNowServer_request obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getServerHostname().c_str());






}


void test_PlaceBuyNowServer_request_server_root_password_is_assigned_from_json()
{


    bourne::json input =
    {
        "server_root_password", "hello"
    };

    PlaceBuyNowServer_request obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getServerRootPassword().c_str());






}



void test_PlaceBuyNowServer_request_server_id_is_converted_to_json()
{




}


void test_PlaceBuyNowServer_request_server_hostname_is_converted_to_json()
{

    bourne::json input =
    {
        "server_hostname", "hello"
    };

    PlaceBuyNowServer_request obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["server_hostname"] == output["server_hostname"]);



}


void test_PlaceBuyNowServer_request_server_root_password_is_converted_to_json()
{

    bourne::json input =
    {
        "server_root_password", "hello"
    };

    PlaceBuyNowServer_request obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["server_root_password"] == output["server_root_password"]);



}


