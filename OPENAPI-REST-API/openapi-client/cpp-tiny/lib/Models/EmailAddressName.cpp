

#include "EmailAddressName.h"

using namespace Tiny;

EmailAddressName::EmailAddressName()
{
	email = std::string();
	name = std::string();
}

EmailAddressName::EmailAddressName(std::string jsonString)
{
	this->fromJson(jsonString);
}

EmailAddressName::~EmailAddressName()
{

}

void
EmailAddressName::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *emailKey = "email";

    if(object.has_key(emailKey))
    {
        bourne::json value = object[emailKey];



        jsonToValue(&email, value, "std::string");


    }

    const char *nameKey = "name";

    if(object.has_key(nameKey))
    {
        bourne::json value = object[nameKey];



        jsonToValue(&name, value, "std::string");


    }


}

bourne::json
EmailAddressName::toJson()
{
    bourne::json object = bourne::json::object();





    object["email"] = getEmail();






    object["name"] = getName();



    return object;

}

std::string
EmailAddressName::getEmail()
{
	return email;
}

void
EmailAddressName::setEmail(std::string email)
{
	this->email = email;
}

std::string
EmailAddressName::getName()
{
	return name;
}

void
EmailAddressName::setName(std::string name)
{
	this->name = name;
}



