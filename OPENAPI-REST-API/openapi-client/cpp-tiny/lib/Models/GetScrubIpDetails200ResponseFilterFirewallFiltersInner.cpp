

#include "GetScrubIpDetails_200_response_filter_firewall_filters_inner.h"

using namespace Tiny;

GetScrubIpDetails_200_response_filter_firewall_filters_inner::GetScrubIpDetails_200_response_filter_firewall_filters_inner()
{
	daddr = std::string();
	dest = std::string();
	filter_name = std::string();
	destination_ip = std::string();
	filter = std::string();
}

GetScrubIpDetails_200_response_filter_firewall_filters_inner::GetScrubIpDetails_200_response_filter_firewall_filters_inner(std::string jsonString)
{
	this->fromJson(jsonString);
}

GetScrubIpDetails_200_response_filter_firewall_filters_inner::~GetScrubIpDetails_200_response_filter_firewall_filters_inner()
{

}

void
GetScrubIpDetails_200_response_filter_firewall_filters_inner::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *daddrKey = "daddr";

    if(object.has_key(daddrKey))
    {
        bourne::json value = object[daddrKey];



        jsonToValue(&daddr, value, "std::string");


    }

    const char *destKey = "dest";

    if(object.has_key(destKey))
    {
        bourne::json value = object[destKey];



        jsonToValue(&dest, value, "std::string");


    }

    const char *filter_nameKey = "filter_name";

    if(object.has_key(filter_nameKey))
    {
        bourne::json value = object[filter_nameKey];



        jsonToValue(&filter_name, value, "std::string");


    }

    const char *destination_ipKey = "destination_ip";

    if(object.has_key(destination_ipKey))
    {
        bourne::json value = object[destination_ipKey];



        jsonToValue(&destination_ip, value, "std::string");


    }

    const char *filterKey = "filter";

    if(object.has_key(filterKey))
    {
        bourne::json value = object[filterKey];



        jsonToValue(&filter, value, "std::string");


    }


}

bourne::json
GetScrubIpDetails_200_response_filter_firewall_filters_inner::toJson()
{
    bourne::json object = bourne::json::object();





    object["daddr"] = getDaddr();






    object["dest"] = getDest();






    object["filter_name"] = getFilterName();






    object["destination_ip"] = getDestinationIp();






    object["filter"] = getFilter();



    return object;

}

std::string
GetScrubIpDetails_200_response_filter_firewall_filters_inner::getDaddr()
{
	return daddr;
}

void
GetScrubIpDetails_200_response_filter_firewall_filters_inner::setDaddr(std::string daddr)
{
	this->daddr = daddr;
}

std::string
GetScrubIpDetails_200_response_filter_firewall_filters_inner::getDest()
{
	return dest;
}

void
GetScrubIpDetails_200_response_filter_firewall_filters_inner::setDest(std::string dest)
{
	this->dest = dest;
}

std::string
GetScrubIpDetails_200_response_filter_firewall_filters_inner::getFilterName()
{
	return filter_name;
}

void
GetScrubIpDetails_200_response_filter_firewall_filters_inner::setFilterName(std::string filter_name)
{
	this->filter_name = filter_name;
}

std::string
GetScrubIpDetails_200_response_filter_firewall_filters_inner::getDestinationIp()
{
	return destination_ip;
}

void
GetScrubIpDetails_200_response_filter_firewall_filters_inner::setDestinationIp(std::string destination_ip)
{
	this->destination_ip = destination_ip;
}

std::string
GetScrubIpDetails_200_response_filter_firewall_filters_inner::getFilter()
{
	return filter;
}

void
GetScrubIpDetails_200_response_filter_firewall_filters_inner::setFilter(std::string filter)
{
	this->filter = filter;
}



