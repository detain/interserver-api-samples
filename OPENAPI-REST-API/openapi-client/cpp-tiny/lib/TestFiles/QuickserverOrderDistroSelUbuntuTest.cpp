
#include "QuickserverOrderDistroSelUbuntu.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_QuickserverOrderDistroSelUbuntu_ubuntu_is_assigned_from_json()
{


    bourne::json input =
    {
        "ubuntu", "hello"
    };

    QuickserverOrderDistroSelUbuntu obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getUbuntu().c_str());






}



void test_QuickserverOrderDistroSelUbuntu_ubuntu_is_converted_to_json()
{

    bourne::json input =
    {
        "ubuntu", "hello"
    };

    QuickserverOrderDistroSelUbuntu obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["ubuntu"] == output["ubuntu"]);



}


