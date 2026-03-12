
#include "DownloadQsBackup_200_response.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_DownloadQsBackup_200_response_text_is_assigned_from_json()
{


    bourne::json input =
    {
        "text", "hello"
    };

    DownloadQsBackup_200_response obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getText().c_str());






}


void test_DownloadQsBackup_200_response_url_is_assigned_from_json()
{


    bourne::json input =
    {
        "url", "hello"
    };

    DownloadQsBackup_200_response obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getUrl().c_str());






}



void test_DownloadQsBackup_200_response_text_is_converted_to_json()
{

    bourne::json input =
    {
        "text", "hello"
    };

    DownloadQsBackup_200_response obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["text"] == output["text"]);



}


void test_DownloadQsBackup_200_response_url_is_converted_to_json()
{

    bourne::json input =
    {
        "url", "hello"
    };

    DownloadQsBackup_200_response obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["url"] == output["url"]);



}


