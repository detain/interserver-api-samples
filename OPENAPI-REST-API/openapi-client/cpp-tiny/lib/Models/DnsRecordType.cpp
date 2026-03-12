

#include "DnsRecordType.h"

using namespace Tiny;

DnsRecordType::DnsRecordType()
{
}

DnsRecordType::DnsRecordType(std::string jsonString)
{
	this->fromJson(jsonString);
}

DnsRecordType::~DnsRecordType()
{

}

void
DnsRecordType::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);


}

bourne::json
DnsRecordType::toJson()
{
    bourne::json object = bourne::json::object();


    return object;

}



