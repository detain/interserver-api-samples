

#include "CreateRule_500_response.h"

using namespace Tiny;

CreateRule_500_response::CreateRule_500_response()
{
	success = bool(false);
	text = std::string();
}

CreateRule_500_response::CreateRule_500_response(std::string jsonString)
{
	this->fromJson(jsonString);
}

CreateRule_500_response::~CreateRule_500_response()
{

}

void
CreateRule_500_response::fromJson(std::string jsonObj)
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
CreateRule_500_response::toJson()
{
    bourne::json object = bourne::json::object();





    object["success"] = isSuccess();






    object["text"] = getText();



    return object;

}

bool
CreateRule_500_response::isSuccess()
{
	return success;
}

void
CreateRule_500_response::setSuccess(bool success)
{
	this->success = success;
}

std::string
CreateRule_500_response::getText()
{
	return text;
}

void
CreateRule_500_response::setText(std::string text)
{
	this->text = text;
}



