

#include "VpsTrafficHistorySectionDataResponse.h"

using namespace Tiny;

VpsTrafficHistorySectionDataResponse::VpsTrafficHistorySectionDataResponse()
{
}

VpsTrafficHistorySectionDataResponse::VpsTrafficHistorySectionDataResponse(std::string jsonString)
{
	this->fromJson(jsonString);
}

VpsTrafficHistorySectionDataResponse::~VpsTrafficHistorySectionDataResponse()
{

}

void
VpsTrafficHistorySectionDataResponse::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);


}

bourne::json
VpsTrafficHistorySectionDataResponse::toJson()
{
    bourne::json object = bourne::json::object();


    return object;

}



