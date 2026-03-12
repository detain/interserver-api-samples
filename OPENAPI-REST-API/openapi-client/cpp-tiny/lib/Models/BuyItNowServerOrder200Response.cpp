

#include "BuyItNowServerOrder_200_response.h"

using namespace Tiny;

BuyItNowServerOrder_200_response::BuyItNowServerOrder_200_response()
{
	bandwidth = std::list<BuyItNowServerOrder_200_response_bandwidth_inner>();
	ips = std::list<BuyItNowServerOrder_200_response_ips_inner>();
	os = std::list<BuyItNowServerOrder_200_response_os_inner>();
	cp = std::list<BuyItNowServerOrder_200_response_cp_inner>();
	raid = std::list<BuyItNowServerOrder_200_response_raid_inner>();
}

BuyItNowServerOrder_200_response::BuyItNowServerOrder_200_response(std::string jsonString)
{
	this->fromJson(jsonString);
}

BuyItNowServerOrder_200_response::~BuyItNowServerOrder_200_response()
{

}

void
BuyItNowServerOrder_200_response::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *bandwidthKey = "bandwidth";

    if(object.has_key(bandwidthKey))
    {
        bourne::json value = object[bandwidthKey];


        std::list<BuyItNowServerOrder_200_response_bandwidth_inner> bandwidth_list;
        BuyItNowServerOrder_200_response_bandwidth_inner element;
        for(auto& var : value.array_range())
        {


            element.fromJson(var.dump());

            bandwidth_list.push_back(element);
        }
        bandwidth = bandwidth_list;


    }

    const char *ipsKey = "ips";

    if(object.has_key(ipsKey))
    {
        bourne::json value = object[ipsKey];


        std::list<BuyItNowServerOrder_200_response_ips_inner> ips_list;
        BuyItNowServerOrder_200_response_ips_inner element;
        for(auto& var : value.array_range())
        {


            element.fromJson(var.dump());

            ips_list.push_back(element);
        }
        ips = ips_list;


    }

    const char *osKey = "os";

    if(object.has_key(osKey))
    {
        bourne::json value = object[osKey];


        std::list<BuyItNowServerOrder_200_response_os_inner> os_list;
        BuyItNowServerOrder_200_response_os_inner element;
        for(auto& var : value.array_range())
        {


            element.fromJson(var.dump());

            os_list.push_back(element);
        }
        os = os_list;


    }

    const char *cpKey = "cp";

    if(object.has_key(cpKey))
    {
        bourne::json value = object[cpKey];


        std::list<BuyItNowServerOrder_200_response_cp_inner> cp_list;
        BuyItNowServerOrder_200_response_cp_inner element;
        for(auto& var : value.array_range())
        {


            element.fromJson(var.dump());

            cp_list.push_back(element);
        }
        cp = cp_list;


    }

    const char *raidKey = "raid";

    if(object.has_key(raidKey))
    {
        bourne::json value = object[raidKey];


        std::list<BuyItNowServerOrder_200_response_raid_inner> raid_list;
        BuyItNowServerOrder_200_response_raid_inner element;
        for(auto& var : value.array_range())
        {


            element.fromJson(var.dump());

            raid_list.push_back(element);
        }
        raid = raid_list;


    }


}

bourne::json
BuyItNowServerOrder_200_response::toJson()
{
    bourne::json object = bourne::json::object();




    std::list<BuyItNowServerOrder_200_response_bandwidth_inner> bandwidth_list = getBandwidth();
    bourne::json bandwidth_arr = bourne::json::array();

    for(auto& var : bandwidth_list)
    {
        BuyItNowServerOrder_200_response_bandwidth_inner obj = var;
        bandwidth_arr.append(obj.toJson());
    }
    object["bandwidth"] = bandwidth_arr;






    std::list<BuyItNowServerOrder_200_response_ips_inner> ips_list = getIps();
    bourne::json ips_arr = bourne::json::array();

    for(auto& var : ips_list)
    {
        BuyItNowServerOrder_200_response_ips_inner obj = var;
        ips_arr.append(obj.toJson());
    }
    object["ips"] = ips_arr;






    std::list<BuyItNowServerOrder_200_response_os_inner> os_list = getOs();
    bourne::json os_arr = bourne::json::array();

    for(auto& var : os_list)
    {
        BuyItNowServerOrder_200_response_os_inner obj = var;
        os_arr.append(obj.toJson());
    }
    object["os"] = os_arr;






    std::list<BuyItNowServerOrder_200_response_cp_inner> cp_list = getCp();
    bourne::json cp_arr = bourne::json::array();

    for(auto& var : cp_list)
    {
        BuyItNowServerOrder_200_response_cp_inner obj = var;
        cp_arr.append(obj.toJson());
    }
    object["cp"] = cp_arr;






    std::list<BuyItNowServerOrder_200_response_raid_inner> raid_list = getRaid();
    bourne::json raid_arr = bourne::json::array();

    for(auto& var : raid_list)
    {
        BuyItNowServerOrder_200_response_raid_inner obj = var;
        raid_arr.append(obj.toJson());
    }
    object["raid"] = raid_arr;




    return object;

}

std::list<BuyItNowServerOrder_200_response_bandwidth_inner>
BuyItNowServerOrder_200_response::getBandwidth()
{
	return bandwidth;
}

void
BuyItNowServerOrder_200_response::setBandwidth(std::list<BuyItNowServerOrder_200_response_bandwidth_inner> bandwidth)
{
	this->bandwidth = bandwidth;
}

std::list<BuyItNowServerOrder_200_response_ips_inner>
BuyItNowServerOrder_200_response::getIps()
{
	return ips;
}

void
BuyItNowServerOrder_200_response::setIps(std::list<BuyItNowServerOrder_200_response_ips_inner> ips)
{
	this->ips = ips;
}

std::list<BuyItNowServerOrder_200_response_os_inner>
BuyItNowServerOrder_200_response::getOs()
{
	return os;
}

void
BuyItNowServerOrder_200_response::setOs(std::list<BuyItNowServerOrder_200_response_os_inner> os)
{
	this->os = os;
}

std::list<BuyItNowServerOrder_200_response_cp_inner>
BuyItNowServerOrder_200_response::getCp()
{
	return cp;
}

void
BuyItNowServerOrder_200_response::setCp(std::list<BuyItNowServerOrder_200_response_cp_inner> cp)
{
	this->cp = cp;
}

std::list<BuyItNowServerOrder_200_response_raid_inner>
BuyItNowServerOrder_200_response::getRaid()
{
	return raid;
}

void
BuyItNowServerOrder_200_response::setRaid(std::list<BuyItNowServerOrder_200_response_raid_inner> raid)
{
	this->raid = raid;
}



