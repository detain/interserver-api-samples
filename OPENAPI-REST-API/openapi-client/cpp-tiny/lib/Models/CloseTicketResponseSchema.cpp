

#include "CloseTicketResponseSchema.h"

using namespace Tiny;

CloseTicketResponseSchema::CloseTicketResponseSchema()
{
	success = bool(false);
	text = std::string();
}

CloseTicketResponseSchema::CloseTicketResponseSchema(std::string jsonString)
{
	this->fromJson(jsonString);
}

CloseTicketResponseSchema::~CloseTicketResponseSchema()
{

}

void
CloseTicketResponseSchema::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *successKey = "success";

    if(object.has_key(successKey))
    {
        bourne::json value = object[successKey];



        jsonToValue(&success, value, "bool");


    }

    const char *textKey = "text";

    if(object.has_key(textKey))
    {
        bourne::json value = object[textKey];



        jsonToValue(&text, value, "std::string");


    }


}

bourne::json
CloseTicketResponseSchema::toJson()
{
    bourne::json object = bourne::json::object();





    object["success"] = isSuccess();






    object["text"] = getText();



    return object;

}

bool
CloseTicketResponseSchema::isSuccess()
{
	return success;
}

void
CloseTicketResponseSchema::setSuccess(bool success)
{
	this->success = success;
}

std::string
CloseTicketResponseSchema::getText()
{
	return text;
}

void
CloseTicketResponseSchema::setText(std::string text)
{
	this->text = text;
}



