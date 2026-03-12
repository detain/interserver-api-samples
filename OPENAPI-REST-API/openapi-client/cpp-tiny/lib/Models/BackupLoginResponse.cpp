

#include "BackupLoginResponse.h"

using namespace Tiny;

BackupLoginResponse::BackupLoginResponse()
{
	success = bool(false);
	text = std::string();
}

BackupLoginResponse::BackupLoginResponse(std::string jsonString)
{
	this->fromJson(jsonString);
}

BackupLoginResponse::~BackupLoginResponse()
{

}

void
BackupLoginResponse::fromJson(std::string jsonObj)
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
BackupLoginResponse::toJson()
{
    bourne::json object = bourne::json::object();





    object["success"] = isSuccess();






    object["text"] = getText();



    return object;

}

bool
BackupLoginResponse::isSuccess()
{
	return success;
}

void
BackupLoginResponse::setSuccess(bool success)
{
	this->success = success;
}

std::string
BackupLoginResponse::getText()
{
	return text;
}

void
BackupLoginResponse::setText(std::string text)
{
	this->text = text;
}



