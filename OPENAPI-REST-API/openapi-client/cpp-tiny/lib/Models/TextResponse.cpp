

#include "TextResponse.h"

using namespace Tiny;

TextResponse::TextResponse()
{
	text = std::string();
	message = std::string();
}

TextResponse::TextResponse(std::string jsonString)
{
	this->fromJson(jsonString);
}

TextResponse::~TextResponse()
{

}

void
TextResponse::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *textKey = "text";

    if(object.has_key(textKey))
    {
        bourne::json value = object[textKey];



        jsonToValue(&text, value, "std::string");


    }

    const char *messageKey = "message";

    if(object.has_key(messageKey))
    {
        bourne::json value = object[messageKey];



        jsonToValue(&message, value, "std::string");


    }


}

bourne::json
TextResponse::toJson()
{
    bourne::json object = bourne::json::object();





    object["text"] = getText();






    object["message"] = getMessage();



    return object;

}

std::string
TextResponse::getText()
{
	return text;
}

void
TextResponse::setText(std::string text)
{
	this->text = text;
}

std::string
TextResponse::getMessage()
{
	return message;
}

void
TextResponse::setMessage(std::string message)
{
	this->message = message;
}



