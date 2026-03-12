

#include "GenericResponse.h"

using namespace Tiny;

GenericResponse::GenericResponse()
{
	status = std::string();
	text = std::string();
}

GenericResponse::GenericResponse(std::string jsonString)
{
	this->fromJson(jsonString);
}

GenericResponse::~GenericResponse()
{

}

void
GenericResponse::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *statusKey = "status";

    if(object.has_key(statusKey))
    {
        bourne::json value = object[statusKey];



        jsonToValue(&status, value, "std::string");


    }

    const char *textKey = "text";

    if(object.has_key(textKey))
    {
        bourne::json value = object[textKey];



        jsonToValue(&text, value, "std::string");


    }


}

bourne::json
GenericResponse::toJson()
{
    bourne::json object = bourne::json::object();





    object["status"] = getStatus();






    object["text"] = getText();



    return object;

}

std::string
GenericResponse::getStatus()
{
	return status;
}

void
GenericResponse::setStatus(std::string status)
{
	this->status = status;
}

std::string
GenericResponse::getText()
{
	return text;
}

void
GenericResponse::setText(std::string text)
{
	this->text = text;
}



