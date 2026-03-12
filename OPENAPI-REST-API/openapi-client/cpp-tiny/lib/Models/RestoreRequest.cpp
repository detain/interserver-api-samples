

#include "RestoreRequest.h"

using namespace Tiny;

RestoreRequest::RestoreRequest()
{
	backup = std::string();
	password = std::string();
}

RestoreRequest::RestoreRequest(std::string jsonString)
{
	this->fromJson(jsonString);
}

RestoreRequest::~RestoreRequest()
{

}

void
RestoreRequest::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *backupKey = "backup";

    if(object.has_key(backupKey))
    {
        bourne::json value = object[backupKey];



        jsonToValue(&backup, value, "std::string");


    }

    const char *passwordKey = "password";

    if(object.has_key(passwordKey))
    {
        bourne::json value = object[passwordKey];



        jsonToValue(&password, value, "std::string");


    }


}

bourne::json
RestoreRequest::toJson()
{
    bourne::json object = bourne::json::object();





    object["backup"] = getBackup();






    object["password"] = getPassword();



    return object;

}

std::string
RestoreRequest::getBackup()
{
	return backup;
}

void
RestoreRequest::setBackup(std::string backup)
{
	this->backup = backup;
}

std::string
RestoreRequest::getPassword()
{
	return password;
}

void
RestoreRequest::setPassword(std::string password)
{
	this->password = password;
}



