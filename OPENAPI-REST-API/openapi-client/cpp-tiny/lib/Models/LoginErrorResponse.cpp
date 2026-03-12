

#include "LoginErrorResponse.h"

using namespace Tiny;

LoginErrorResponse::LoginErrorResponse()
{
	message = std::string();
	field = std::string();
}

LoginErrorResponse::LoginErrorResponse(std::string jsonString)
{
	this->fromJson(jsonString);
}

LoginErrorResponse::~LoginErrorResponse()
{

}

void
LoginErrorResponse::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *messageKey = "message";

    if(object.has_key(messageKey))
    {
        bourne::json value = object[messageKey];



        jsonToValue(&message, value, "std::string");


    }

    const char *fieldKey = "field";

    if(object.has_key(fieldKey))
    {
        bourne::json value = object[fieldKey];



        jsonToValue(&field, value, "std::string");


    }


}

bourne::json
LoginErrorResponse::toJson()
{
    bourne::json object = bourne::json::object();





    object["message"] = getMessage();






    object["field"] = getField();



    return object;

}

std::string
LoginErrorResponse::getMessage()
{
	return message;
}

void
LoginErrorResponse::setMessage(std::string message)
{
	this->message = message;
}

std::string
LoginErrorResponse::getField()
{
	return field;
}

void
LoginErrorResponse::setField(std::string field)
{
	this->field = field;
}



