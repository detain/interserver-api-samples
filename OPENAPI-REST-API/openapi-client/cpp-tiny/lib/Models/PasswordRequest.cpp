

#include "PasswordRequest.h"

using namespace Tiny;

PasswordRequest::PasswordRequest()
{
	password = std::string();
}

PasswordRequest::PasswordRequest(std::string jsonString)
{
	this->fromJson(jsonString);
}

PasswordRequest::~PasswordRequest()
{

}

void
PasswordRequest::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *passwordKey = "password";

    if(object.has_key(passwordKey))
    {
        bourne::json value = object[passwordKey];



        jsonToValue(&password, value, "std::string");


    }


}

bourne::json
PasswordRequest::toJson()
{
    bourne::json object = bourne::json::object();





    object["password"] = getPassword();



    return object;

}

std::string
PasswordRequest::getPassword()
{
	return password;
}

void
PasswordRequest::setPassword(std::string password)
{
	this->password = password;
}



