

#include "TicketNew.h"

using namespace Tiny;

TicketNew::TicketNew()
{
	subject = std::string();
	body = std::string();
	service_id = int(0);
	service_module = std::string();
}

TicketNew::TicketNew(std::string jsonString)
{
	this->fromJson(jsonString);
}

TicketNew::~TicketNew()
{

}

void
TicketNew::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *subjectKey = "subject";

    if(object.has_key(subjectKey))
    {
        bourne::json value = object[subjectKey];



        jsonToValue(&subject, value, "std::string");


    }

    const char *bodyKey = "body";

    if(object.has_key(bodyKey))
    {
        bourne::json value = object[bodyKey];



        jsonToValue(&body, value, "std::string");


    }

    const char *service_idKey = "service_id";

    if(object.has_key(service_idKey))
    {
        bourne::json value = object[service_idKey];



        jsonToValue(&service_id, value, "int");


    }

    const char *service_moduleKey = "service_module";

    if(object.has_key(service_moduleKey))
    {
        bourne::json value = object[service_moduleKey];



        jsonToValue(&service_module, value, "std::string");


    }


}

bourne::json
TicketNew::toJson()
{
    bourne::json object = bourne::json::object();





    object["subject"] = getSubject();






    object["body"] = getBody();






    object["service_id"] = getServiceId();






    object["service_module"] = getServiceModule();



    return object;

}

std::string
TicketNew::getSubject()
{
	return subject;
}

void
TicketNew::setSubject(std::string subject)
{
	this->subject = subject;
}

std::string
TicketNew::getBody()
{
	return body;
}

void
TicketNew::setBody(std::string body)
{
	this->body = body;
}

int
TicketNew::getServiceId()
{
	return service_id;
}

void
TicketNew::setServiceId(int service_id)
{
	this->service_id = service_id;
}

std::string
TicketNew::getServiceModule()
{
	return service_module;
}

void
TicketNew::setServiceModule(std::string service_module)
{
	this->service_module = service_module;
}



