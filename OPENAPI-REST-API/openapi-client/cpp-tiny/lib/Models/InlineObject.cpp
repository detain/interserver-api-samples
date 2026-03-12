

#include "Inline_object.h"

using namespace Tiny;

Inline_object::Inline_object()
{
	code = std::string();
	message = std::string();
}

Inline_object::Inline_object(std::string jsonString)
{
	this->fromJson(jsonString);
}

Inline_object::~Inline_object()
{

}

void
Inline_object::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *codeKey = "code";

    if(object.has_key(codeKey))
    {
        bourne::json value = object[codeKey];



        jsonToValue(&code, value, "std::string");


    }

    const char *messageKey = "message";

    if(object.has_key(messageKey))
    {
        bourne::json value = object[messageKey];



        jsonToValue(&message, value, "std::string");


    }


}

bourne::json
Inline_object::toJson()
{
    bourne::json object = bourne::json::object();





    object["code"] = getCode();






    object["message"] = getMessage();



    return object;

}

std::string
Inline_object::getCode()
{
	return code;
}

void
Inline_object::setCode(std::string code)
{
	this->code = code;
}

std::string
Inline_object::getMessage()
{
	return message;
}

void
Inline_object::setMessage(std::string message)
{
	this->message = message;
}



