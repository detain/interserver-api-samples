

#include "UpdateTicketResponseSchema.h"

using namespace Tiny;

UpdateTicketResponseSchema::UpdateTicketResponseSchema()
{
	success = bool(false);
	message = std::string();
}

UpdateTicketResponseSchema::UpdateTicketResponseSchema(std::string jsonString)
{
	this->fromJson(jsonString);
}

UpdateTicketResponseSchema::~UpdateTicketResponseSchema()
{

}

void
UpdateTicketResponseSchema::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *successKey = "success";

    if(object.has_key(successKey))
    {
        bourne::json value = object[successKey];



        jsonToValue(&success, value, "bool");


    }

    const char *messageKey = "message";

    if(object.has_key(messageKey))
    {
        bourne::json value = object[messageKey];



        jsonToValue(&message, value, "std::string");


    }


}

bourne::json
UpdateTicketResponseSchema::toJson()
{
    bourne::json object = bourne::json::object();





    object["success"] = isSuccess();






    object["message"] = getMessage();



    return object;

}

bool
UpdateTicketResponseSchema::isSuccess()
{
	return success;
}

void
UpdateTicketResponseSchema::setSuccess(bool success)
{
	this->success = success;
}

std::string
UpdateTicketResponseSchema::getMessage()
{
	return message;
}

void
UpdateTicketResponseSchema::setMessage(std::string message)
{
	this->message = message;
}



