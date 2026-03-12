

#include "VpsTrafficUsageAverageResponse.h"

using namespace Tiny;

VpsTrafficUsageAverageResponse::VpsTrafficUsageAverageResponse()
{
	in = VpsTrafficUsageAverageSectionResponse();
	out = VpsTrafficUsageAverageSectionResponse();
}

VpsTrafficUsageAverageResponse::VpsTrafficUsageAverageResponse(std::string jsonString)
{
	this->fromJson(jsonString);
}

VpsTrafficUsageAverageResponse::~VpsTrafficUsageAverageResponse()
{

}

void
VpsTrafficUsageAverageResponse::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *inKey = "in";

    if(object.has_key(inKey))
    {
        bourne::json value = object[inKey];




        VpsTrafficUsageAverageSectionResponse* obj = &in;
		obj->fromJson(value.dump());

    }

    const char *outKey = "out";

    if(object.has_key(outKey))
    {
        bourne::json value = object[outKey];




        VpsTrafficUsageAverageSectionResponse* obj = &out;
		obj->fromJson(value.dump());

    }


}

bourne::json
VpsTrafficUsageAverageResponse::toJson()
{
    bourne::json object = bourne::json::object();






	object["in"] = getIn().toJson();






	object["out"] = getOut().toJson();


    return object;

}

VpsTrafficUsageAverageSectionResponse
VpsTrafficUsageAverageResponse::getIn()
{
	return in;
}

void
VpsTrafficUsageAverageResponse::setIn(VpsTrafficUsageAverageSectionResponse in)
{
	this->in = in;
}

VpsTrafficUsageAverageSectionResponse
VpsTrafficUsageAverageResponse::getOut()
{
	return out;
}

void
VpsTrafficUsageAverageResponse::setOut(VpsTrafficUsageAverageSectionResponse out)
{
	this->out = out;
}



