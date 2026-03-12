

#include "DomainDnssecRecords.h"

using namespace Tiny;

DomainDnssecRecords::DomainDnssecRecords()
{
}

DomainDnssecRecords::DomainDnssecRecords(std::string jsonString)
{
	this->fromJson(jsonString);
}

DomainDnssecRecords::~DomainDnssecRecords()
{

}

void
DomainDnssecRecords::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);


}

bourne::json
DomainDnssecRecords::toJson()
{
    bourne::json object = bourne::json::object();


    return object;

}



