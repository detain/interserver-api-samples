

#include "SuccessTextResponse.h"

using namespace Tiny;

SuccessTextResponse::SuccessTextResponse()
{
	success = bool(false);
	text = std::string();
	action = std::string();
}

SuccessTextResponse::SuccessTextResponse(std::string jsonString)
{
	this->fromJson(jsonString);
}

SuccessTextResponse::~SuccessTextResponse()
{

}

void
SuccessTextResponse::fromJson(std::string jsonObj)
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

    const char *actionKey = "action";

    if(object.has_key(actionKey))
    {
        bourne::json value = object[actionKey];



        jsonToValue(&action, value, "std::string");


    }


}

bourne::json
SuccessTextResponse::toJson()
{
    bourne::json object = bourne::json::object();





    object["success"] = isSuccess();






    object["text"] = getText();






    object["action"] = getAction();



    return object;

}

bool
SuccessTextResponse::isSuccess()
{
	return success;
}

void
SuccessTextResponse::setSuccess(bool success)
{
	this->success = success;
}

std::string
SuccessTextResponse::getText()
{
	return text;
}

void
SuccessTextResponse::setText(std::string text)
{
	this->text = text;
}

std::string
SuccessTextResponse::getAction()
{
	return action;
}

void
SuccessTextResponse::setAction(std::string action)
{
	this->action = action;
}



