

#include "GetScrubIpDetails_200_response_filter_firewall.h"

using namespace Tiny;

GetScrubIpDetails_200_response_filter_firewall::GetScrubIpDetails_200_response_filter_firewall()
{
	rules = std::list<GetScrubIpDetails_200_response_filter_firewall_rules_inner>();
	filters = std::list<GetScrubIpDetails_200_response_filter_firewall_filters_inner>();
	scrub_enabled = int(0);
}

GetScrubIpDetails_200_response_filter_firewall::GetScrubIpDetails_200_response_filter_firewall(std::string jsonString)
{
	this->fromJson(jsonString);
}

GetScrubIpDetails_200_response_filter_firewall::~GetScrubIpDetails_200_response_filter_firewall()
{

}

void
GetScrubIpDetails_200_response_filter_firewall::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *rulesKey = "rules";

    if(object.has_key(rulesKey))
    {
        bourne::json value = object[rulesKey];


        std::list<GetScrubIpDetails_200_response_filter_firewall_rules_inner> rules_list;
        GetScrubIpDetails_200_response_filter_firewall_rules_inner element;
        for(auto& var : value.array_range())
        {


            element.fromJson(var.dump());

            rules_list.push_back(element);
        }
        rules = rules_list;


    }

    const char *filtersKey = "filters";

    if(object.has_key(filtersKey))
    {
        bourne::json value = object[filtersKey];


        std::list<GetScrubIpDetails_200_response_filter_firewall_filters_inner> filters_list;
        GetScrubIpDetails_200_response_filter_firewall_filters_inner element;
        for(auto& var : value.array_range())
        {


            element.fromJson(var.dump());

            filters_list.push_back(element);
        }
        filters = filters_list;


    }

    const char *scrub_enabledKey = "scrub_enabled";

    if(object.has_key(scrub_enabledKey))
    {
        bourne::json value = object[scrub_enabledKey];



        jsonToValue(&scrub_enabled, value, "int");


    }


}

bourne::json
GetScrubIpDetails_200_response_filter_firewall::toJson()
{
    bourne::json object = bourne::json::object();




    std::list<GetScrubIpDetails_200_response_filter_firewall_rules_inner> rules_list = getRules();
    bourne::json rules_arr = bourne::json::array();

    for(auto& var : rules_list)
    {
        GetScrubIpDetails_200_response_filter_firewall_rules_inner obj = var;
        rules_arr.append(obj.toJson());
    }
    object["rules"] = rules_arr;






    std::list<GetScrubIpDetails_200_response_filter_firewall_filters_inner> filters_list = getFilters();
    bourne::json filters_arr = bourne::json::array();

    for(auto& var : filters_list)
    {
        GetScrubIpDetails_200_response_filter_firewall_filters_inner obj = var;
        filters_arr.append(obj.toJson());
    }
    object["filters"] = filters_arr;







    object["scrub_enabled"] = getScrubEnabled();



    return object;

}

std::list<GetScrubIpDetails_200_response_filter_firewall_rules_inner>
GetScrubIpDetails_200_response_filter_firewall::getRules()
{
	return rules;
}

void
GetScrubIpDetails_200_response_filter_firewall::setRules(std::list<GetScrubIpDetails_200_response_filter_firewall_rules_inner> rules)
{
	this->rules = rules;
}

std::list<GetScrubIpDetails_200_response_filter_firewall_filters_inner>
GetScrubIpDetails_200_response_filter_firewall::getFilters()
{
	return filters;
}

void
GetScrubIpDetails_200_response_filter_firewall::setFilters(std::list<GetScrubIpDetails_200_response_filter_firewall_filters_inner> filters)
{
	this->filters = filters;
}

int
GetScrubIpDetails_200_response_filter_firewall::getScrubEnabled()
{
	return scrub_enabled;
}

void
GetScrubIpDetails_200_response_filter_firewall::setScrubEnabled(int scrub_enabled)
{
	this->scrub_enabled = scrub_enabled;
}



