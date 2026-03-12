

#include "VpsTrafficUsageResponse.h"

using namespace Tiny;

VpsTrafficUsageResponse::VpsTrafficUsageResponse()
{
	current = VpsTrafficTotalsSectionResponse();
	peak = VpsTrafficTotalsSectionResponse();
	average = VpsTrafficUsageAverageResponse();
}

VpsTrafficUsageResponse::VpsTrafficUsageResponse(std::string jsonString)
{
	this->fromJson(jsonString);
}

VpsTrafficUsageResponse::~VpsTrafficUsageResponse()
{

}

void
VpsTrafficUsageResponse::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *currentKey = "current";

    if(object.has_key(currentKey))
    {
        bourne::json value = object[currentKey];




        VpsTrafficTotalsSectionResponse* obj = &current;
		obj->fromJson(value.dump());

    }

    const char *peakKey = "peak";

    if(object.has_key(peakKey))
    {
        bourne::json value = object[peakKey];




        VpsTrafficTotalsSectionResponse* obj = &peak;
		obj->fromJson(value.dump());

    }

    const char *averageKey = "average";

    if(object.has_key(averageKey))
    {
        bourne::json value = object[averageKey];




        VpsTrafficUsageAverageResponse* obj = &average;
		obj->fromJson(value.dump());

    }


}

bourne::json
VpsTrafficUsageResponse::toJson()
{
    bourne::json object = bourne::json::object();






	object["current"] = getCurrent().toJson();






	object["peak"] = getPeak().toJson();






	object["average"] = getAverage().toJson();


    return object;

}

VpsTrafficTotalsSectionResponse
VpsTrafficUsageResponse::getCurrent()
{
	return current;
}

void
VpsTrafficUsageResponse::setCurrent(VpsTrafficTotalsSectionResponse current)
{
	this->current = current;
}

VpsTrafficTotalsSectionResponse
VpsTrafficUsageResponse::getPeak()
{
	return peak;
}

void
VpsTrafficUsageResponse::setPeak(VpsTrafficTotalsSectionResponse peak)
{
	this->peak = peak;
}

VpsTrafficUsageAverageResponse
VpsTrafficUsageResponse::getAverage()
{
	return average;
}

void
VpsTrafficUsageResponse::setAverage(VpsTrafficUsageAverageResponse average)
{
	this->average = average;
}



