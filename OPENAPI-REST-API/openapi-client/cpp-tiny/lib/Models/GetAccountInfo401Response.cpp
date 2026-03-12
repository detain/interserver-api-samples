

#include "GetAccountInfo_401_response.h"

using namespace Tiny;

GetAccountInfo_401_response::GetAccountInfo_401_response()
{
	code = int(0);
	message = std::string();
}

GetAccountInfo_401_response::GetAccountInfo_401_response(std::string jsonString)
{
	this->fromJson(jsonString);
}

GetAccountInfo_401_response::~GetAccountInfo_401_response()
{

}

void
GetAccountInfo_401_response::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *codeKey = "code";

    if(object.has_key(codeKey))
    {
        bourne::json value = object[codeKey];



        jsonToValue(&code, value, "int");


    }

    const char *messageKey = "message";

    if(object.has_key(messageKey))
    {
        bourne::json value = object[messageKey];



        jsonToValue(&message, value, "std::string");


    }


}

bourne::json
GetAccountInfo_401_response::toJson()
{
    bourne::json object = bourne::json::object();





    object["code"] = getCode();






    object["message"] = getMessage();



    return object;

}

int
GetAccountInfo_401_response::getCode()
{
	return code;
}

void
GetAccountInfo_401_response::setCode(int code)
{
	this->code = code;
}

std::string
GetAccountInfo_401_response::getMessage()
{
	return message;
}

void
GetAccountInfo_401_response::setMessage(std::string message)
{
	this->message = message;
}



