

#include "WebhostingCancel_200_response.h"

using namespace Tiny;

WebhostingCancel_200_response::WebhostingCancel_200_response()
{
	success = bool(false);
	text = std::string();
}

WebhostingCancel_200_response::WebhostingCancel_200_response(std::string jsonString)
{
	this->fromJson(jsonString);
}

WebhostingCancel_200_response::~WebhostingCancel_200_response()
{

}

void
WebhostingCancel_200_response::fromJson(std::string jsonObj)
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
WebhostingCancel_200_response::toJson()
{
    bourne::json object = bourne::json::object();





    object["success"] = isSuccess();






    object["text"] = getText();



    return object;

}

bool
WebhostingCancel_200_response::isSuccess()
{
	return success;
}

void
WebhostingCancel_200_response::setSuccess(bool success)
{
	this->success = success;
}

std::string
WebhostingCancel_200_response::getText()
{
	return text;
}

void
WebhostingCancel_200_response::setText(std::string text)
{
	this->text = text;
}



