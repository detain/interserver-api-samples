

#include "DnsNewDomain.h"

using namespace Tiny;

DnsNewDomain::DnsNewDomain()
{
	domain = std::string();
	ip = std::string();
}

DnsNewDomain::DnsNewDomain(std::string jsonString)
{
	this->fromJson(jsonString);
}

DnsNewDomain::~DnsNewDomain()
{

}

void
DnsNewDomain::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *domainKey = "domain";

    if(object.has_key(domainKey))
    {
        bourne::json value = object[domainKey];



        jsonToValue(&domain, value, "std::string");


    }

    const char *ipKey = "ip";

    if(object.has_key(ipKey))
    {
        bourne::json value = object[ipKey];



        jsonToValue(&ip, value, "std::string");


    }


}

bourne::json
DnsNewDomain::toJson()
{
    bourne::json object = bourne::json::object();





    object["domain"] = getDomain();






    object["ip"] = getIp();



    return object;

}

std::string
DnsNewDomain::getDomain()
{
	return domain;
}

void
DnsNewDomain::setDomain(std::string domain)
{
	this->domain = domain;
}

std::string
DnsNewDomain::getIp()
{
	return ip;
}

void
DnsNewDomain::setIp(std::string ip)
{
	this->ip = ip;
}



