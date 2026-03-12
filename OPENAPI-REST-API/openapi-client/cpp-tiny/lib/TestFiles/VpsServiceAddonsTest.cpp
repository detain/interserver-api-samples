
#include "VpsServiceAddons.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_VpsServiceAddons_has_cpanel_is_assigned_from_json()
{




    bourne::json input =
    {
        "has_cpanel", true
    };

    VpsServiceAddons obj(input.dump());

    TEST_ASSERT(true == obj.isHasCpanel());




}


void test_VpsServiceAddons_has_directadmin_is_assigned_from_json()
{




    bourne::json input =
    {
        "has_directadmin", true
    };

    VpsServiceAddons obj(input.dump());

    TEST_ASSERT(true == obj.isHasDirectadmin());




}


void test_VpsServiceAddons_has_fantastico_is_assigned_from_json()
{




    bourne::json input =
    {
        "has_fantastico", true
    };

    VpsServiceAddons obj(input.dump());

    TEST_ASSERT(true == obj.isHasFantastico());




}


void test_VpsServiceAddons_has_softaculous_is_assigned_from_json()
{




    bourne::json input =
    {
        "has_softaculous", true
    };

    VpsServiceAddons obj(input.dump());

    TEST_ASSERT(true == obj.isHasSoftaculous());




}


void test_VpsServiceAddons_has_hdspace_is_assigned_from_json()
{




    bourne::json input =
    {
        "has_hdspace", true
    };

    VpsServiceAddons obj(input.dump());

    TEST_ASSERT(true == obj.isHasHdspace());




}


void test_VpsServiceAddons_dedicated_ip_is_assigned_from_json()
{




    bourne::json input =
    {
        "dedicated_ip", true
    };

    VpsServiceAddons obj(input.dump());

    TEST_ASSERT(true == obj.isDedicatedIp());




}







void test_VpsServiceAddons_cpanel_id_is_assigned_from_json()
{
    bourne::json input =
    {
        "cpanel_id", 1
    };

    VpsServiceAddons obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getCpanelId());








}


void test_VpsServiceAddons_cost_is_assigned_from_json()
{
    bourne::json input =
    {
        "cost", 1
    };

    VpsServiceAddons obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getCost());








}





void test_VpsServiceAddons_has_cpanel_is_converted_to_json()
{


    bourne::json input =
    {
        "has_cpanel", true
    };

    VpsServiceAddons obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["has_cpanel"] == output["has_cpanel"]);


}


void test_VpsServiceAddons_has_directadmin_is_converted_to_json()
{


    bourne::json input =
    {
        "has_directadmin", true
    };

    VpsServiceAddons obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["has_directadmin"] == output["has_directadmin"]);


}


void test_VpsServiceAddons_has_fantastico_is_converted_to_json()
{


    bourne::json input =
    {
        "has_fantastico", true
    };

    VpsServiceAddons obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["has_fantastico"] == output["has_fantastico"]);


}


void test_VpsServiceAddons_has_softaculous_is_converted_to_json()
{


    bourne::json input =
    {
        "has_softaculous", true
    };

    VpsServiceAddons obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["has_softaculous"] == output["has_softaculous"]);


}


void test_VpsServiceAddons_has_hdspace_is_converted_to_json()
{


    bourne::json input =
    {
        "has_hdspace", true
    };

    VpsServiceAddons obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["has_hdspace"] == output["has_hdspace"]);


}


void test_VpsServiceAddons_dedicated_ip_is_converted_to_json()
{


    bourne::json input =
    {
        "dedicated_ip", true
    };

    VpsServiceAddons obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["dedicated_ip"] == output["dedicated_ip"]);


}







void test_VpsServiceAddons_cpanel_id_is_converted_to_json()
{
    bourne::json input =
    {
        "cpanel_id", 1
    };

    VpsServiceAddons obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["cpanel_id"] == output["cpanel_id"]);




}


void test_VpsServiceAddons_cost_is_converted_to_json()
{
    bourne::json input =
    {
        "cost", 1
    };

    VpsServiceAddons obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["cost"] == output["cost"]);




}




