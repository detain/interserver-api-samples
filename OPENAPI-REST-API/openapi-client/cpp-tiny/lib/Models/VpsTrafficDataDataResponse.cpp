

#include "VpsTrafficDataDataResponse.h"

using namespace Tiny;

VpsTrafficDataDataResponse::VpsTrafficDataDataResponse()
{
}

VpsTrafficDataDataResponse::VpsTrafficDataDataResponse(std::string jsonString)
{
	this->fromJson(jsonString);
}

VpsTrafficDataDataResponse::~VpsTrafficDataDataResponse()
{

}

void
VpsTrafficDataDataResponse::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);


}

bourne::json
VpsTrafficDataDataResponse::toJson()
{
    bourne::json object = bourne::json::object();


    return object;

}



