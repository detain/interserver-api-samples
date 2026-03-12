

#include "GetScrubIpDetails_200_response_extraInfoTables.h"

using namespace Tiny;

GetScrubIpDetails_200_response_extraInfoTables::GetScrubIpDetails_200_response_extraInfoTables()
{
	scrub_ips = GetScrubIpDetails_200_response_extraInfoTables_scrub_ips();
}

GetScrubIpDetails_200_response_extraInfoTables::GetScrubIpDetails_200_response_extraInfoTables(std::string jsonString)
{
	this->fromJson(jsonString);
}

GetScrubIpDetails_200_response_extraInfoTables::~GetScrubIpDetails_200_response_extraInfoTables()
{

}

void
GetScrubIpDetails_200_response_extraInfoTables::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *scrub_ipsKey = "scrub_ips";

    if(object.has_key(scrub_ipsKey))
    {
        bourne::json value = object[scrub_ipsKey];




        GetScrubIpDetails_200_response_extraInfoTables_scrub_ips* obj = &scrub_ips;
		obj->fromJson(value.dump());

    }


}

bourne::json
GetScrubIpDetails_200_response_extraInfoTables::toJson()
{
    bourne::json object = bourne::json::object();






	object["scrub_ips"] = getScrubIps().toJson();


    return object;

}

GetScrubIpDetails_200_response_extraInfoTables_scrub_ips
GetScrubIpDetails_200_response_extraInfoTables::getScrubIps()
{
	return scrub_ips;
}

void
GetScrubIpDetails_200_response_extraInfoTables::setScrubIps(GetScrubIpDetails_200_response_extraInfoTables_scrub_ips scrub_ips)
{
	this->scrub_ips = scrub_ips;
}



