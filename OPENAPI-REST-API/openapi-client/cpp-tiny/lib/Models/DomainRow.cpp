

#include "DomainRow.h"

using namespace Tiny;

DomainRow::DomainRow()
{
	domain_id = std::string();
	domain_hostname = std::string();
	domain_expire_date = std::string();
	cost = std::string();
	domain_status = std::string();
}

DomainRow::DomainRow(std::string jsonString)
{
	this->fromJson(jsonString);
}

DomainRow::~DomainRow()
{

}

void
DomainRow::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *domain_idKey = "domain_id";

    if(object.has_key(domain_idKey))
    {
        bourne::json value = object[domain_idKey];



        jsonToValue(&domain_id, value, "std::string");


    }

    const char *domain_hostnameKey = "domain_hostname";

    if(object.has_key(domain_hostnameKey))
    {
        bourne::json value = object[domain_hostnameKey];



        jsonToValue(&domain_hostname, value, "std::string");


    }

    const char *domain_expire_dateKey = "domain_expire_date";

    if(object.has_key(domain_expire_dateKey))
    {
        bourne::json value = object[domain_expire_dateKey];



        jsonToValue(&domain_expire_date, value, "std::string");


    }

    const char *costKey = "cost";

    if(object.has_key(costKey))
    {
        bourne::json value = object[costKey];



        jsonToValue(&cost, value, "std::string");


    }

    const char *domain_statusKey = "domain_status";

    if(object.has_key(domain_statusKey))
    {
        bourne::json value = object[domain_statusKey];



        jsonToValue(&domain_status, value, "std::string");


    }


}

bourne::json
DomainRow::toJson()
{
    bourne::json object = bourne::json::object();





    object["domain_id"] = getDomainId();






    object["domain_hostname"] = getDomainHostname();






    object["domain_expire_date"] = getDomainExpireDate();






    object["cost"] = getCost();






    object["domain_status"] = getDomainStatus();



    return object;

}

std::string
DomainRow::getDomainId()
{
	return domain_id;
}

void
DomainRow::setDomainId(std::string domain_id)
{
	this->domain_id = domain_id;
}

std::string
DomainRow::getDomainHostname()
{
	return domain_hostname;
}

void
DomainRow::setDomainHostname(std::string domain_hostname)
{
	this->domain_hostname = domain_hostname;
}

std::string
DomainRow::getDomainExpireDate()
{
	return domain_expire_date;
}

void
DomainRow::setDomainExpireDate(std::string domain_expire_date)
{
	this->domain_expire_date = domain_expire_date;
}

std::string
DomainRow::getCost()
{
	return cost;
}

void
DomainRow::setCost(std::string cost)
{
	this->cost = cost;
}

std::string
DomainRow::getDomainStatus()
{
	return domain_status;
}

void
DomainRow::setDomainStatus(std::string domain_status)
{
	this->domain_status = domain_status;
}



