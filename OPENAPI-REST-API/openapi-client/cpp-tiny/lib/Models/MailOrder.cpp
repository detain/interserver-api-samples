

#include "MailOrder.h"

using namespace Tiny;

MailOrder::MailOrder()
{
	id = int(0);
	status = std::string();
	username = std::string();
	comment = std::string();
}

MailOrder::MailOrder(std::string jsonString)
{
	this->fromJson(jsonString);
}

MailOrder::~MailOrder()
{

}

void
MailOrder::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *idKey = "id";

    if(object.has_key(idKey))
    {
        bourne::json value = object[idKey];



        jsonToValue(&id, value, "int");


    }

    const char *statusKey = "status";

    if(object.has_key(statusKey))
    {
        bourne::json value = object[statusKey];



        jsonToValue(&status, value, "std::string");


    }

    const char *usernameKey = "username";

    if(object.has_key(usernameKey))
    {
        bourne::json value = object[usernameKey];



        jsonToValue(&username, value, "std::string");


    }

    const char *commentKey = "comment";

    if(object.has_key(commentKey))
    {
        bourne::json value = object[commentKey];



        jsonToValue(&comment, value, "std::string");


    }


}

bourne::json
MailOrder::toJson()
{
    bourne::json object = bourne::json::object();





    object["id"] = getId();






    object["status"] = getStatus();






    object["username"] = getUsername();






    object["comment"] = getComment();



    return object;

}

int
MailOrder::getId()
{
	return id;
}

void
MailOrder::setId(int id)
{
	this->id = id;
}

std::string
MailOrder::getStatus()
{
	return status;
}

void
MailOrder::setStatus(std::string status)
{
	this->status = status;
}

std::string
MailOrder::getUsername()
{
	return username;
}

void
MailOrder::setUsername(std::string username)
{
	this->username = username;
}

std::string
MailOrder::getComment()
{
	return comment;
}

void
MailOrder::setComment(std::string comment)
{
	this->comment = comment;
}



