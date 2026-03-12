
#include "SendMailAdv.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_SendMailAdv_subject_is_assigned_from_json()
{


    bourne::json input =
    {
        "subject", "hello"
    };

    SendMailAdv obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getSubject().c_str());






}


void test_SendMailAdv_body_is_assigned_from_json()
{


    bourne::json input =
    {
        "body", "hello"
    };

    SendMailAdv obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getBody().c_str());






}








void test_SendMailAdv_id_is_assigned_from_json()
{






    bourne::json input =
    {
        "id", 1
    };

    SendMailAdv obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getId());


}



void test_SendMailAdv_subject_is_converted_to_json()
{

    bourne::json input =
    {
        "subject", "hello"
    };

    SendMailAdv obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["subject"] == output["subject"]);



}


void test_SendMailAdv_body_is_converted_to_json()
{

    bourne::json input =
    {
        "body", "hello"
    };

    SendMailAdv obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["body"] == output["body"]);



}








void test_SendMailAdv_id_is_converted_to_json()
{



    bourne::json input =
    {
        "id", 1
    };

    SendMailAdv obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["id"] == output["id"]);

}


