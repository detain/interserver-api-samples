

#include "DomainOrder_services.h"

using namespace Tiny;

DomainOrder_services::DomainOrder_services()
{
	domainOrderServices10001 = DomainOrderServices10001();
}

DomainOrder_services::DomainOrder_services(std::string jsonString)
{
	this->fromJson(jsonString);
}

DomainOrder_services::~DomainOrder_services()
{

}

void
DomainOrder_services::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *domainOrderServices10001Key = "DomainOrderServices10001";

    if(object.has_key(domainOrderServices10001Key))
    {
        bourne::json value = object[domainOrderServices10001Key];




        DomainOrderServices10001* obj = &domainOrderServices10001;
		obj->fromJson(value.dump());

    }


}

bourne::json
DomainOrder_services::toJson()
{
    bourne::json object = bourne::json::object();






	object["domainOrderServices10001"] = getDomainOrderServices10001().toJson();


    return object;

}

DomainOrderServices10001
DomainOrder_services::getDomainOrderServices10001()
{
	return domainOrderServices10001;
}

void
DomainOrder_services::setDomainOrderServices10001(DomainOrderServices10001 domainOrderServices10001)
{
	this->domainOrderServices10001 = domainOrderServices10001;
}



