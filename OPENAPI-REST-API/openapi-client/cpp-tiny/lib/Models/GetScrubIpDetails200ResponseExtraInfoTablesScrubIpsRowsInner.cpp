

#include "GetScrubIpDetails_200_response_extraInfoTables_scrub_ips_rows_inner.h"

using namespace Tiny;

GetScrubIpDetails_200_response_extraInfoTables_scrub_ips_rows_inner::GetScrubIpDetails_200_response_extraInfoTables_scrub_ips_rows_inner()
{
	desc = std::string();
	value = std::string();
}

GetScrubIpDetails_200_response_extraInfoTables_scrub_ips_rows_inner::GetScrubIpDetails_200_response_extraInfoTables_scrub_ips_rows_inner(std::string jsonString)
{
	this->fromJson(jsonString);
}

GetScrubIpDetails_200_response_extraInfoTables_scrub_ips_rows_inner::~GetScrubIpDetails_200_response_extraInfoTables_scrub_ips_rows_inner()
{

}

void
GetScrubIpDetails_200_response_extraInfoTables_scrub_ips_rows_inner::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *descKey = "desc";

    if(object.has_key(descKey))
    {
        bourne::json value = object[descKey];



        jsonToValue(&desc, value, "std::string");


    }

    const char *valueKey = "value";

    if(object.has_key(valueKey))
    {
        bourne::json value = object[valueKey];



        jsonToValue(&value, value, "std::string");


    }


}

bourne::json
GetScrubIpDetails_200_response_extraInfoTables_scrub_ips_rows_inner::toJson()
{
    bourne::json object = bourne::json::object();





    object["desc"] = getDesc();






    object["value"] = getValue();



    return object;

}

std::string
GetScrubIpDetails_200_response_extraInfoTables_scrub_ips_rows_inner::getDesc()
{
	return desc;
}

void
GetScrubIpDetails_200_response_extraInfoTables_scrub_ips_rows_inner::setDesc(std::string desc)
{
	this->desc = desc;
}

std::string
GetScrubIpDetails_200_response_extraInfoTables_scrub_ips_rows_inner::getValue()
{
	return value;
}

void
GetScrubIpDetails_200_response_extraInfoTables_scrub_ips_rows_inner::setValue(std::string value)
{
	this->value = value;
}



