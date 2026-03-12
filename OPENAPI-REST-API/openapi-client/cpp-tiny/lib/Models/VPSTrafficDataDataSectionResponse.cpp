

#include "VPSTrafficDataDataSectionResponse.h"

using namespace Tiny;

VPSTrafficDataDataSectionResponse::VPSTrafficDataDataSectionResponse()
{
}

VPSTrafficDataDataSectionResponse::VPSTrafficDataDataSectionResponse(std::string jsonString)
{
	this->fromJson(jsonString);
}

VPSTrafficDataDataSectionResponse::~VPSTrafficDataDataSectionResponse()
{

}

void
VPSTrafficDataDataSectionResponse::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);


}

bourne::json
VPSTrafficDataDataSectionResponse::toJson()
{
    bourne::json object = bourne::json::object();


    return object;

}



