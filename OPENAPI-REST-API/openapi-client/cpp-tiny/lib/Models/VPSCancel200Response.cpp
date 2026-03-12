

#include "VPSCancel_200_response.h"

using namespace Tiny;

VPSCancel_200_response::VPSCancel_200_response()
{
	success = bool(false);
	text = std::string();
}

VPSCancel_200_response::VPSCancel_200_response(std::string jsonString)
{
	this->fromJson(jsonString);
}

VPSCancel_200_response::~VPSCancel_200_response()
{

}

void
VPSCancel_200_response::fromJson(std::string jsonObj)
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
VPSCancel_200_response::toJson()
{
    bourne::json object = bourne::json::object();





    object["success"] = isSuccess();






    object["text"] = getText();



    return object;

}

bool
VPSCancel_200_response::isSuccess()
{
	return success;
}

void
VPSCancel_200_response::setSuccess(bool success)
{
	this->success = success;
}

std::string
VPSCancel_200_response::getText()
{
	return text;
}

void
VPSCancel_200_response::setText(std::string text)
{
	this->text = text;
}



