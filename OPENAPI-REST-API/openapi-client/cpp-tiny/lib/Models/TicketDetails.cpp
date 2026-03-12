

#include "TicketDetails.h"

using namespace Tiny;

TicketDetails::TicketDetails()
{
	ticketid = int(0);
	ticketmaskid = std::string();
	department = std::string();
	status = std::string();
	priority = std::string();
	subject = std::string();
	created_on = std::string();
	updated_on = std::string();
}

TicketDetails::TicketDetails(std::string jsonString)
{
	this->fromJson(jsonString);
}

TicketDetails::~TicketDetails()
{

}

void
TicketDetails::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *ticketidKey = "ticketid";

    if(object.has_key(ticketidKey))
    {
        bourne::json value = object[ticketidKey];



        jsonToValue(&ticketid, value, "int");


    }

    const char *ticketmaskidKey = "ticketmaskid";

    if(object.has_key(ticketmaskidKey))
    {
        bourne::json value = object[ticketmaskidKey];



        jsonToValue(&ticketmaskid, value, "std::string");


    }

    const char *departmentKey = "department";

    if(object.has_key(departmentKey))
    {
        bourne::json value = object[departmentKey];



        jsonToValue(&department, value, "std::string");


    }

    const char *statusKey = "status";

    if(object.has_key(statusKey))
    {
        bourne::json value = object[statusKey];



        jsonToValue(&status, value, "std::string");


    }

    const char *priorityKey = "priority";

    if(object.has_key(priorityKey))
    {
        bourne::json value = object[priorityKey];



        jsonToValue(&priority, value, "std::string");


    }

    const char *subjectKey = "subject";

    if(object.has_key(subjectKey))
    {
        bourne::json value = object[subjectKey];



        jsonToValue(&subject, value, "std::string");


    }

    const char *created_onKey = "created_on";

    if(object.has_key(created_onKey))
    {
        bourne::json value = object[created_onKey];



        jsonToValue(&created_on, value, "std::string");


    }

    const char *updated_onKey = "updated_on";

    if(object.has_key(updated_onKey))
    {
        bourne::json value = object[updated_onKey];



        jsonToValue(&updated_on, value, "std::string");


    }


}

bourne::json
TicketDetails::toJson()
{
    bourne::json object = bourne::json::object();





    object["ticketid"] = getTicketid();






    object["ticketmaskid"] = getTicketmaskid();






    object["department"] = getDepartment();






    object["status"] = getStatus();






    object["priority"] = getPriority();






    object["subject"] = getSubject();






    object["created_on"] = getCreatedOn();






    object["updated_on"] = getUpdatedOn();



    return object;

}

int
TicketDetails::getTicketid()
{
	return ticketid;
}

void
TicketDetails::setTicketid(int ticketid)
{
	this->ticketid = ticketid;
}

std::string
TicketDetails::getTicketmaskid()
{
	return ticketmaskid;
}

void
TicketDetails::setTicketmaskid(std::string ticketmaskid)
{
	this->ticketmaskid = ticketmaskid;
}

std::string
TicketDetails::getDepartment()
{
	return department;
}

void
TicketDetails::setDepartment(std::string department)
{
	this->department = department;
}

std::string
TicketDetails::getStatus()
{
	return status;
}

void
TicketDetails::setStatus(std::string status)
{
	this->status = status;
}

std::string
TicketDetails::getPriority()
{
	return priority;
}

void
TicketDetails::setPriority(std::string priority)
{
	this->priority = priority;
}

std::string
TicketDetails::getSubject()
{
	return subject;
}

void
TicketDetails::setSubject(std::string subject)
{
	this->subject = subject;
}

std::string
TicketDetails::getCreatedOn()
{
	return created_on;
}

void
TicketDetails::setCreatedOn(std::string created_on)
{
	this->created_on = created_on;
}

std::string
TicketDetails::getUpdatedOn()
{
	return updated_on;
}

void
TicketDetails::setUpdatedOn(std::string updated_on)
{
	this->updated_on = updated_on;
}



