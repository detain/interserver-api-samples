

#include "ReplyTicketResponseSchema.h"

using namespace Tiny;

ReplyTicketResponseSchema::ReplyTicketResponseSchema()
{
	success = bool(false);
	post_id = int(0);
}

ReplyTicketResponseSchema::ReplyTicketResponseSchema(std::string jsonString)
{
	this->fromJson(jsonString);
}

ReplyTicketResponseSchema::~ReplyTicketResponseSchema()
{

}

void
ReplyTicketResponseSchema::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *successKey = "success";

    if(object.has_key(successKey))
    {
        bourne::json value = object[successKey];



        jsonToValue(&success, value, "bool");


    }

    const char *post_idKey = "post_id";

    if(object.has_key(post_idKey))
    {
        bourne::json value = object[post_idKey];



        jsonToValue(&post_id, value, "int");


    }


}

bourne::json
ReplyTicketResponseSchema::toJson()
{
    bourne::json object = bourne::json::object();





    object["success"] = isSuccess();






    object["post_id"] = getPostId();



    return object;

}

bool
ReplyTicketResponseSchema::isSuccess()
{
	return success;
}

void
ReplyTicketResponseSchema::setSuccess(bool success)
{
	this->success = success;
}

int
ReplyTicketResponseSchema::getPostId()
{
	return post_id;
}

void
ReplyTicketResponseSchema::setPostId(int post_id)
{
	this->post_id = post_id;
}



