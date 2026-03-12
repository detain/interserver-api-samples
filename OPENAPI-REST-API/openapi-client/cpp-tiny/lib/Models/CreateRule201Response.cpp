

#include "CreateRule_201_response.h"

using namespace Tiny;

CreateRule_201_response::CreateRule_201_response()
{
	success = bool(false);
	text = std::string();
}

CreateRule_201_response::CreateRule_201_response(std::string jsonString)
{
	this->fromJson(jsonString);
}

CreateRule_201_response::~CreateRule_201_response()
{

}

void
CreateRule_201_response::fromJson(std::string jsonObj)
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
CreateRule_201_response::toJson()
{
    bourne::json object = bourne::json::object();





    object["success"] = isSuccess();






    object["text"] = getText();



    return object;

}

bool
CreateRule_201_response::isSuccess()
{
	return success;
}

void
CreateRule_201_response::setSuccess(bool success)
{
	this->success = success;
}

std::string
CreateRule_201_response::getText()
{
	return text;
}

void
CreateRule_201_response::setText(std::string text)
{
	this->text = text;
}



