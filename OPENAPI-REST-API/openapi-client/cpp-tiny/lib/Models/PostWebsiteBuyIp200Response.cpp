

#include "PostWebsiteBuyIp_200_response.h"

using namespace Tiny;

PostWebsiteBuyIp_200_response::PostWebsiteBuyIp_200_response()
{
	message = std::string();
	success = bool(false);
}

PostWebsiteBuyIp_200_response::PostWebsiteBuyIp_200_response(std::string jsonString)
{
	this->fromJson(jsonString);
}

PostWebsiteBuyIp_200_response::~PostWebsiteBuyIp_200_response()
{

}

void
PostWebsiteBuyIp_200_response::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *messageKey = "message";

    if(object.has_key(messageKey))
    {
        bourne::json value = object[messageKey];



        jsonToValue(&message, value, "std::string");


    }

    const char *successKey = "success";

    if(object.has_key(successKey))
    {
        bourne::json value = object[successKey];



        jsonToValue(&success, value, "bool");


    }


}

bourne::json
PostWebsiteBuyIp_200_response::toJson()
{
    bourne::json object = bourne::json::object();





    object["message"] = getMessage();






    object["success"] = isSuccess();



    return object;

}

std::string
PostWebsiteBuyIp_200_response::getMessage()
{
	return message;
}

void
PostWebsiteBuyIp_200_response::setMessage(std::string message)
{
	this->message = message;
}

bool
PostWebsiteBuyIp_200_response::isSuccess()
{
	return success;
}

void
PostWebsiteBuyIp_200_response::setSuccess(bool success)
{
	this->success = success;
}



