
#include "ViewTicketResponse.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_ViewTicketResponse_success_is_assigned_from_json()
{




    bourne::json input =
    {
        "success", true
    };

    ViewTicketResponse obj(input.dump());

    TEST_ASSERT(true == obj.isSuccess());




}






void test_ViewTicketResponse_success_is_converted_to_json()
{


    bourne::json input =
    {
        "success", true
    };

    ViewTicketResponse obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["success"] == output["success"]);


}





