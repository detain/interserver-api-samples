

#include "MailBlockClickHouse.h"

using namespace Tiny;

MailBlockClickHouse::MailBlockClickHouse()
{
	date = std::string();
	from = std::string();
	messageId = std::string();
	subject = std::string();
	to = std::string();
}

MailBlockClickHouse::MailBlockClickHouse(std::string jsonString)
{
	this->fromJson(jsonString);
}

MailBlockClickHouse::~MailBlockClickHouse()
{

}

void
MailBlockClickHouse::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *dateKey = "date";

    if(object.has_key(dateKey))
    {
        bourne::json value = object[dateKey];




        Date* obj = &date;
		obj->fromJson(value.dump());

    }

    const char *fromKey = "from";

    if(object.has_key(fromKey))
    {
        bourne::json value = object[fromKey];



        jsonToValue(&from, value, "std::string");


    }

    const char *messageIdKey = "messageId";

    if(object.has_key(messageIdKey))
    {
        bourne::json value = object[messageIdKey];



        jsonToValue(&messageId, value, "std::string");


    }

    const char *subjectKey = "subject";

    if(object.has_key(subjectKey))
    {
        bourne::json value = object[subjectKey];



        jsonToValue(&subject, value, "std::string");


    }

    const char *toKey = "to";

    if(object.has_key(toKey))
    {
        bourne::json value = object[toKey];



        jsonToValue(&to, value, "std::string");


    }


}

bourne::json
MailBlockClickHouse::toJson()
{
    bourne::json object = bourne::json::object();






	object["date"] = getDate().toJson();





    object["from"] = getFrom();






    object["messageId"] = getMessageId();






    object["subject"] = getSubject();






    object["to"] = getTo();



    return object;

}

Date
MailBlockClickHouse::getDate()
{
	return date;
}

void
MailBlockClickHouse::setDate(Date date)
{
	this->date = date;
}

std::string
MailBlockClickHouse::getFrom()
{
	return from;
}

void
MailBlockClickHouse::setFrom(std::string from)
{
	this->from = from;
}

std::string
MailBlockClickHouse::getMessageId()
{
	return messageId;
}

void
MailBlockClickHouse::setMessageId(std::string messageId)
{
	this->messageId = messageId;
}

std::string
MailBlockClickHouse::getSubject()
{
	return subject;
}

void
MailBlockClickHouse::setSubject(std::string subject)
{
	this->subject = subject;
}

std::string
MailBlockClickHouse::getTo()
{
	return to;
}

void
MailBlockClickHouse::setTo(std::string to)
{
	this->to = to;
}



