

#include "VPSTrafficDataDataSectionResponse_inner.h"

using namespace Tiny;

VPSTrafficDataDataSectionResponse_inner::VPSTrafficDataDataSectionResponse_inner()
{
}

VPSTrafficDataDataSectionResponse_inner::VPSTrafficDataDataSectionResponse_inner(std::string jsonString)
{
	this->fromJson(jsonString);
}

VPSTrafficDataDataSectionResponse_inner::~VPSTrafficDataDataSectionResponse_inner()
{

}

void
VPSTrafficDataDataSectionResponse_inner::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);


}

bourne::json
VPSTrafficDataDataSectionResponse_inner::toJson()
{
    bourne::json object = bourne::json::object();


    return object;

}



