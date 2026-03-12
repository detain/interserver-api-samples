

#include "ViewTicketResponse.h"

using namespace Tiny;

ViewTicketResponse::ViewTicketResponse()
{
	success = bool(false);
	ticket = TicketDetails();
	ticket_custom_fields = TicketCustomFieldDetails();
	ticket_posts = TicketPostDetails();
}

ViewTicketResponse::ViewTicketResponse(std::string jsonString)
{
	this->fromJson(jsonString);
}

ViewTicketResponse::~ViewTicketResponse()
{

}

void
ViewTicketResponse::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *successKey = "success";

    if(object.has_key(successKey))
    {
        bourne::json value = object[successKey];



        jsonToValue(&success, value, "bool");


    }

    const char *ticketKey = "ticket";

    if(object.has_key(ticketKey))
    {
        bourne::json value = object[ticketKey];




        TicketDetails* obj = &ticket;
		obj->fromJson(value.dump());

    }

    const char *ticket_custom_fieldsKey = "ticket_custom_fields";

    if(object.has_key(ticket_custom_fieldsKey))
    {
        bourne::json value = object[ticket_custom_fieldsKey];




        TicketCustomFieldDetails* obj = &ticket_custom_fields;
		obj->fromJson(value.dump());

    }

    const char *ticket_postsKey = "ticket_posts";

    if(object.has_key(ticket_postsKey))
    {
        bourne::json value = object[ticket_postsKey];




        TicketPostDetails* obj = &ticket_posts;
		obj->fromJson(value.dump());

    }


}

bourne::json
ViewTicketResponse::toJson()
{
    bourne::json object = bourne::json::object();





    object["success"] = isSuccess();







	object["ticket"] = getTicket().toJson();






	object["ticket_custom_fields"] = getTicketCustomFields().toJson();






	object["ticket_posts"] = getTicketPosts().toJson();


    return object;

}

bool
ViewTicketResponse::isSuccess()
{
	return success;
}

void
ViewTicketResponse::setSuccess(bool success)
{
	this->success = success;
}

TicketDetails
ViewTicketResponse::getTicket()
{
	return ticket;
}

void
ViewTicketResponse::setTicket(TicketDetails ticket)
{
	this->ticket = ticket;
}

TicketCustomFieldDetails
ViewTicketResponse::getTicketCustomFields()
{
	return ticket_custom_fields;
}

void
ViewTicketResponse::setTicketCustomFields(TicketCustomFieldDetails ticket_custom_fields)
{
	this->ticket_custom_fields = ticket_custom_fields;
}

TicketPostDetails
ViewTicketResponse::getTicketPosts()
{
	return ticket_posts;
}

void
ViewTicketResponse::setTicketPosts(TicketPostDetails ticket_posts)
{
	this->ticket_posts = ticket_posts;
}



