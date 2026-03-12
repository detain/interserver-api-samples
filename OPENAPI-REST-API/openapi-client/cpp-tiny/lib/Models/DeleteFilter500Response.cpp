

#include "DeleteFilter_500_response.h"

using namespace Tiny;

DeleteFilter_500_response::DeleteFilter_500_response()
{
	success = bool(false);
	text = std::string();
}

DeleteFilter_500_response::DeleteFilter_500_response(std::string jsonString)
{
	this->fromJson(jsonString);
}

DeleteFilter_500_response::~DeleteFilter_500_response()
{

}

void
DeleteFilter_500_response::fromJson(std::string jsonObj)
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
DeleteFilter_500_response::toJson()
{
    bourne::json object = bourne::json::object();





    object["success"] = isSuccess();






    object["text"] = getText();



    return object;

}

bool
DeleteFilter_500_response::isSuccess()
{
	return success;
}

void
DeleteFilter_500_response::setSuccess(bool success)
{
	this->success = success;
}

std::string
DeleteFilter_500_response::getText()
{
	return text;
}

void
DeleteFilter_500_response::setText(std::string text)
{
	this->text = text;
}



