
#include "DownloadQsBackup_request.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_DownloadQsBackup_request_file_is_assigned_from_json()
{


    bourne::json input =
    {
        "file", "hello"
    };

    DownloadQsBackup_request obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getFile().c_str());






}



void test_DownloadQsBackup_request_file_is_converted_to_json()
{

    bourne::json input =
    {
        "file", "hello"
    };

    DownloadQsBackup_request obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["file"] == output["file"]);



}


