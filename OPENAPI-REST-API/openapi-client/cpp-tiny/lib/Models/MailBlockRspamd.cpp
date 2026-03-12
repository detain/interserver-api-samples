

#include "MailBlockRspamd.h"

using namespace Tiny;

MailBlockRspamd::MailBlockRspamd()
{
	from = std::string();
	subject = std::string();
}

MailBlockRspamd::MailBlockRspamd(std::string jsonString)
{
	this->fromJson(jsonString);
}

MailBlockRspamd::~MailBlockRspamd()
{

}

void
MailBlockRspamd::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *fromKey = "from";

    if(object.has_key(fromKey))
    {
        bourne::json value = object[fromKey];



        jsonToValue(&from, value, "std::string");


    }

    const char *subjectKey = "subject";

    if(object.has_key(subjectKey))
    {
        bourne::json value = object[subjectKey];



        jsonToValue(&subject, value, "std::string");


    }


}

bourne::json
MailBlockRspamd::toJson()
{
    bourne::json object = bourne::json::object();





    object["from"] = getFrom();






    object["subject"] = getSubject();



    return object;

}

std::string
MailBlockRspamd::getFrom()
{
	return from;
}

void
MailBlockRspamd::setFrom(std::string from)
{
	this->from = from;
}

std::string
MailBlockRspamd::getSubject()
{
	return subject;
}

void
MailBlockRspamd::setSubject(std::string subject)
{
	this->subject = subject;
}



