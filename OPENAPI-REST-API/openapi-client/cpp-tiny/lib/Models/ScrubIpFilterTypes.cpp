

#include "ScrubIpFilterTypes.h"

using namespace Tiny;

ScrubIpFilterTypes::ScrubIpFilterTypes()
{
	success = bool(false);
	filters = null<ScrubIpFilterTypes_filters_value>();
}

ScrubIpFilterTypes::ScrubIpFilterTypes(std::string jsonString)
{
	this->fromJson(jsonString);
}

ScrubIpFilterTypes::~ScrubIpFilterTypes()
{

}

void
ScrubIpFilterTypes::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *successKey = "success";

    if(object.has_key(successKey))
    {
        bourne::json value = object[successKey];



        jsonToValue(&success, value, "bool");


    }

    const char *filtersKey = "filters";

    if(object.has_key(filtersKey))
    {
        bourne::json value = object[filtersKey];


    }


}

bourne::json
ScrubIpFilterTypes::toJson()
{
    bourne::json object = bourne::json::object();





    object["success"] = isSuccess();






    return object;

}

bool
ScrubIpFilterTypes::isSuccess()
{
	return success;
}

void
ScrubIpFilterTypes::setSuccess(bool success)
{
	this->success = success;
}

std::map<std::string, ScrubIpFilterTypes_filters_value>
ScrubIpFilterTypes::getFilters()
{
	return filters;
}

void
ScrubIpFilterTypes::setFilters(std::map<std::string, ScrubIpFilterTypes_filters_value> filters)
{
	this->filters = filters;
}



