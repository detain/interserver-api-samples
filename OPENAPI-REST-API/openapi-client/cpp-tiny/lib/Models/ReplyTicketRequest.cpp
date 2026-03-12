

#include "ReplyTicketRequest.h"

using namespace Tiny;

ReplyTicketRequest::ReplyTicketRequest()
{
	content = std::string();
}

ReplyTicketRequest::ReplyTicketRequest(std::string jsonString)
{
	this->fromJson(jsonString);
}

ReplyTicketRequest::~ReplyTicketRequest()
{

}

void
ReplyTicketRequest::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *contentKey = "content";

    if(object.has_key(contentKey))
    {
        bourne::json value = object[contentKey];



        jsonToValue(&content, value, "std::string");


    }


}

bourne::json
ReplyTicketRequest::toJson()
{
    bourne::json object = bourne::json::object();





    object["content"] = getContent();



    return object;

}

std::string
ReplyTicketRequest::getContent()
{
	return content;
}

void
ReplyTicketRequest::setContent(std::string content)
{
	this->content = content;
}



