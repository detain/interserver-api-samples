
#include "HostnameObject.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_HostnameObject_hostname_is_assigned_from_json()
{


    bourne::json input =
    {
        "hostname", "hello"
    };

    HostnameObject obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getHostname().c_str());






}



void test_HostnameObject_hostname_is_converted_to_json()
{

    bourne::json input =
    {
        "hostname", "hello"
    };

    HostnameObject obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["hostname"] == output["hostname"]);



}


