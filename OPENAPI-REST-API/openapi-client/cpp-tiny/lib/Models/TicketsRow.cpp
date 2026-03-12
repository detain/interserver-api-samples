

#include "TicketsRow.h"

using namespace Tiny;

TicketsRow::TicketsRow()
{
	title = std::string();
	ticketmaskid = std::string();
	lastreplier = std::string();
	status = std::string();
	priority = std::string();
	total_replies = int(0);
	lastactivity = std::string();
	departmenttitle = std::string();
	ticketid = int(0);
	can_close = std::string();
	attachments = null;
	status_text = std::string();
	checked = bool(false);
}

TicketsRow::TicketsRow(std::string jsonString)
{
	this->fromJson(jsonString);
}

TicketsRow::~TicketsRow()
{

}

void
TicketsRow::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *titleKey = "title";

    if(object.has_key(titleKey))
    {
        bourne::json value = object[titleKey];



        jsonToValue(&title, value, "std::string");


    }

    const char *ticketmaskidKey = "ticketmaskid";

    if(object.has_key(ticketmaskidKey))
    {
        bourne::json value = object[ticketmaskidKey];



        jsonToValue(&ticketmaskid, value, "std::string");


    }

    const char *lastreplierKey = "lastreplier";

    if(object.has_key(lastreplierKey))
    {
        bourne::json value = object[lastreplierKey];



        jsonToValue(&lastreplier, value, "std::string");


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

    const char *total_repliesKey = "total_replies";

    if(object.has_key(total_repliesKey))
    {
        bourne::json value = object[total_repliesKey];



        jsonToValue(&total_replies, value, "int");


    }

    const char *lastactivityKey = "lastactivity";

    if(object.has_key(lastactivityKey))
    {
        bourne::json value = object[lastactivityKey];



        jsonToValue(&lastactivity, value, "std::string");


    }

    const char *departmenttitleKey = "departmenttitle";

    if(object.has_key(departmenttitleKey))
    {
        bourne::json value = object[departmenttitleKey];



        jsonToValue(&departmenttitle, value, "std::string");


    }

    const char *ticketidKey = "ticketid";

    if(object.has_key(ticketidKey))
    {
        bourne::json value = object[ticketidKey];



        jsonToValue(&ticketid, value, "int");


    }

    const char *can_closeKey = "can_close";

    if(object.has_key(can_closeKey))
    {
        bourne::json value = object[can_closeKey];



        jsonToValue(&can_close, value, "std::string");


    }

    const char *attachmentsKey = "attachments";

    if(object.has_key(attachmentsKey))
    {
        bourne::json value = object[attachmentsKey];




        AnyType* obj = &attachments;
		obj->fromJson(value.dump());

    }

    const char *status_textKey = "status_text";

    if(object.has_key(status_textKey))
    {
        bourne::json value = object[status_textKey];



        jsonToValue(&status_text, value, "std::string");


    }

    const char *checkedKey = "checked";

    if(object.has_key(checkedKey))
    {
        bourne::json value = object[checkedKey];



        jsonToValue(&checked, value, "bool");


    }


}

bourne::json
TicketsRow::toJson()
{
    bourne::json object = bourne::json::object();





    object["title"] = getTitle();






    object["ticketmaskid"] = getTicketmaskid();






    object["lastreplier"] = getLastreplier();






    object["status"] = getStatus();






    object["priority"] = getPriority();






    object["total_replies"] = getTotalReplies();






    object["lastactivity"] = getLastactivity();






    object["departmenttitle"] = getDepartmenttitle();






    object["ticketid"] = getTicketid();






    object["can_close"] = getCanClose();







	object["attachments"] = getAttachments().toJson();





    object["status_text"] = getStatusText();






    object["checked"] = isChecked();



    return object;

}

std::string
TicketsRow::getTitle()
{
	return title;
}

void
TicketsRow::setTitle(std::string title)
{
	this->title = title;
}

std::string
TicketsRow::getTicketmaskid()
{
	return ticketmaskid;
}

void
TicketsRow::setTicketmaskid(std::string ticketmaskid)
{
	this->ticketmaskid = ticketmaskid;
}

std::string
TicketsRow::getLastreplier()
{
	return lastreplier;
}

void
TicketsRow::setLastreplier(std::string lastreplier)
{
	this->lastreplier = lastreplier;
}

std::string
TicketsRow::getStatus()
{
	return status;
}

void
TicketsRow::setStatus(std::string status)
{
	this->status = status;
}

std::string
TicketsRow::getPriority()
{
	return priority;
}

void
TicketsRow::setPriority(std::string priority)
{
	this->priority = priority;
}

int
TicketsRow::getTotalReplies()
{
	return total_replies;
}

void
TicketsRow::setTotalReplies(int total_replies)
{
	this->total_replies = total_replies;
}

std::string
TicketsRow::getLastactivity()
{
	return lastactivity;
}

void
TicketsRow::setLastactivity(std::string lastactivity)
{
	this->lastactivity = lastactivity;
}

std::string
TicketsRow::getDepartmenttitle()
{
	return departmenttitle;
}

void
TicketsRow::setDepartmenttitle(std::string departmenttitle)
{
	this->departmenttitle = departmenttitle;
}

int
TicketsRow::getTicketid()
{
	return ticketid;
}

void
TicketsRow::setTicketid(int ticketid)
{
	this->ticketid = ticketid;
}

std::string
TicketsRow::getCanClose()
{
	return can_close;
}

void
TicketsRow::setCanClose(std::string can_close)
{
	this->can_close = can_close;
}

AnyType
TicketsRow::getAttachments()
{
	return attachments;
}

void
TicketsRow::setAttachments(AnyType attachments)
{
	this->attachments = attachments;
}

std::string
TicketsRow::getStatusText()
{
	return status_text;
}

void
TicketsRow::setStatusText(std::string status_text)
{
	this->status_text = status_text;
}

bool
TicketsRow::isChecked()
{
	return checked;
}

void
TicketsRow::setChecked(bool checked)
{
	this->checked = checked;
}



