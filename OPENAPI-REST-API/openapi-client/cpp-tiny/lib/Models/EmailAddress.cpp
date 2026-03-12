

#include "EmailAddress.h"

using namespace Tiny;

EmailAddress::EmailAddress()
{
	email = std::string();
}

EmailAddress::EmailAddress(std::string jsonString)
{
	this->fromJson(jsonString);
}

EmailAddress::~EmailAddress()
{

}

void
EmailAddress::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *emailKey = "email";

    if(object.has_key(emailKey))
    {
        bourne::json value = object[emailKey];



        jsonToValue(&email, value, "std::string");


    }


}

bourne::json
EmailAddress::toJson()
{
    bourne::json object = bourne::json::object();





    object["email"] = getEmail();



    return object;

}

std::string
EmailAddress::getEmail()
{
	return email;
}

void
EmailAddress::setEmail(std::string email)
{
	this->email = email;
}



