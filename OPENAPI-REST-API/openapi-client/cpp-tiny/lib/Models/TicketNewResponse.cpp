

#include "TicketNewResponse.h"

using namespace Tiny;

TicketNewResponse::TicketNewResponse()
{
	text = std::string();
	success = bool(false);
	ticket_id = int(0);
}

TicketNewResponse::TicketNewResponse(std::string jsonString)
{
	this->fromJson(jsonString);
}

TicketNewResponse::~TicketNewResponse()
{

}

void
TicketNewResponse::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *textKey = "text";

    if(object.has_key(textKey))
    {
        bourne::json value = object[textKey];



        jsonToValue(&text, value, "std::string");


    }

    const char *successKey = "success";

    if(object.has_key(successKey))
    {
        bourne::json value = object[successKey];



        jsonToValue(&success, value, "bool");


    }

    const char *ticket_idKey = "ticket_id";

    if(object.has_key(ticket_idKey))
    {
        bourne::json value = object[ticket_idKey];



        jsonToValue(&ticket_id, value, "int");


    }


}

bourne::json
TicketNewResponse::toJson()
{
    bourne::json object = bourne::json::object();





    object["text"] = getText();






    object["success"] = isSuccess();






    object["ticket_id"] = getTicketId();



    return object;

}

std::string
TicketNewResponse::getText()
{
	return text;
}

void
TicketNewResponse::setText(std::string text)
{
	this->text = text;
}

bool
TicketNewResponse::isSuccess()
{
	return success;
}

void
TicketNewResponse::setSuccess(bool success)
{
	this->success = success;
}

int
TicketNewResponse::getTicketId()
{
	return ticket_id;
}

void
TicketNewResponse::setTicketId(int ticket_id)
{
	this->ticket_id = ticket_id;
}



