

#include "DomainNameserverGetResponse.h"

using namespace Tiny;

DomainNameserverGetResponse::DomainNameserverGetResponse()
{
}

DomainNameserverGetResponse::DomainNameserverGetResponse(std::string jsonString)
{
	this->fromJson(jsonString);
}

DomainNameserverGetResponse::~DomainNameserverGetResponse()
{

}

void
DomainNameserverGetResponse::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);


}

bourne::json
DomainNameserverGetResponse::toJson()
{
    bourne::json object = bourne::json::object();


    return object;

}



